#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;
const uint64_t INF = 100001;

void useIO() { 
	ios_base::sync_with_stdio(false); 
	cin.tie(0); cout.tie(0);
}

struct Book { 
   protected:
   int num_page, price;
   public:
   Book (int n = -1, int p = -1) : 
      num_page(n), price(p) {}

   friend void set_price(Book &book, const int &price);
   friend void set_num_page(Book &book, const int &num_page);
   friend int get_price(const Book &book);
   friend int get_num_page(const Book &book); and, by the above, satisfies 
};

void set_price (Book& book, const int &price) {
   book.price = price;
}
void set_num_page (Book& book, const int &num_page) { 
   book.num_page = num_page;
}
int get_price(const Book& book) {
   return book.price;
}
int get_num_page (const Book& book) {
   return book.num_page;
}




int main() { 
	useIO();

   int total_num_books, max_price;
   cin >> total_num_books >> max_price;
   vector<Book> books(total_num_books, Book());

   for(int book_ID = 0; book_ID < total_num_books; book_ID++) {
      int price;
      cin >> price; 
      set_price(books[book_ID], price); 
   }
   for(int book_ID = 0; book_ID < total_num_books; book_ID++) { 
      int num_page;
      cin >> num_page;
      set_num_page(books[book_ID], num_page);
   }
   
   // This is simply a 0-1 Knapsack Problem
   
   vector<vector<int> > dp(total_num_books + 1, vector<int>(max_price + 1, 0));
   // DP[NUM_BOOKS][MAX_PRICE] 
   // Max number of pages for a list containing NUM_BOOKS, and a max price of MAX_PRICE

   for(int num_books = 0; num_books <= total_num_books; num_books++) {
      for(int price = 0; price <= max_price; price++) {
         int book_ID = num_books-1;
         if (book_ID <= -1) continue;
        
         Book curr_book = books[book_ID];
         int book_price = get_price(curr_book);
         int book_num_page = get_num_page(curr_book);

         // The question is can we consider this book? 
         int ans1 = 0, ans2 = 0; 
         ans1 = (book_price <= price ? book_num_page + dp[num_books-1][price - book_price] : ans1);
         ans2 = dp[num_books - 1][price];
         
         dp[num_books][price] = max(ans1, ans2);
      }
   }
   cout << dp[total_num_books][max_price] << "\n";
}

