ll getmini(vector<int> v, int k)
{
   set<int> st;

    for (int i = 0; i < v.size(); i++)
    {
        st.insert(v[i]);

    }

    int n = st.size();

    int left = k - n;
   
    

    long long ans  = 0;
     for(int i=1;i<=1000001;i++)
     {
         if(st.find(i)==st.end() && left > 0)
         {
            st.insert(i);
             ans+=i;
                left--;
            
         }
     }

    

    return ans;

}