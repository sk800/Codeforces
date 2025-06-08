#include<bits/stdc++.h>
using namespace std;
void help()
{
       string s;
        string t;
        cin>>s;
        cin>>t;
        int l=s.size();
        int r=t.size();
        if(r>l)
        {
            int ans=t[0]-'0'+9*(r-1);
            cout<<ans<<endl;
        }
        else{
            for(int i=0;i<r;i++)
            {  
                if(s[i]!=t[i]){
                cout<<t[i]-s[i]+9*(r-i-1)<<endl;
                 return;
                }
            }
            cout<<0<<endl;
        }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        help();
    }
    return 0;
}

// Automated Testing Framework Development: Designed and implemented a robust test automation framework leveraging Python, FastAPI, and Airflow for efficient validation of user stories, module-specific requirements, and flowchart-based designs.

// Document Processing and Layout Identification: Developed tools for extracting structured data from PDFs, images, and flowcharts using OCR technologies (Azure Form Recognizer, Tesseract) and layout parsing models, converting them into actionable CSV formats.

// Integration with GenAI for Test Case Generation: Integrated generative AI models (Azure GPT-4) to automate the creation of detailed test cases based on user stories and supporting documents, ensuring comprehensive coverage and adherence to business requirements.

// Dynamic Workflow Orchestration: Configured Airflow DAGs to automate tasks such as validation, PDF generation, layout identification, and test case generation, enabling seamless execution and monitoring of workflows.

// Scalable API Design for Testing Automation: Developed REST APIs and WebSocket services for managing user stories, retrieving task statuses, and generating test cases, ensuring scalability and ease of integration with external systems.

Automated Test Case Generation Using AI and Document Processing
