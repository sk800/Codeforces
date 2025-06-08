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



Project: AI-Powered Test Automation Framework
Designed and implemented an AI-driven framework to automate the generation of test cases and executable test scripts by processing user stories and supporting documents (PDFs, images, and CSVs) using OpenAI GPT models and LangChain.
Developed document processing pipelines leveraging tools like Detectron2, PyMuPDF, and OpenCV to extract structured data (e.g., tables, flowcharts, and text) from unstructured documents for metadata creation and test case generation.
Automated flowchart and table analysis by extracting end-to-end flows and converting them into structured CSV files, ensuring comprehensive coverage of decision points and routes for test case creation.
Integrated AI-based test case generation using dynamic prompts and templates, ensuring alignment with user stories and extracted document data while maintaining end-to-end coverage and merging similar test cases.
Built a code generation pipeline to convert test cases into executable Selenium scripts, incorporating parameterization for reusability and AI-based error correction for issues like incorrect XPath selectors.
Streamlined the workflow by automating the entire process from document processing to test case generation, code execution, and validation, enabling seamless integration into CI/CD pipelines and improving testing efficiency.
This summary highlights the integration of AI, automation, and document processing to deliver a robust test automation framework.



Utilizes the YOLO (You Only Look Once) model to count the number of people entering the workplace at the gate.
Continuous monitoring of workers to ensure they are wearing the proper PPE (Personal Protective Equipment) kit. 
The video feed from the cameras is processed by the YOLO model to detect the presence and proper usage of PPE kits.
If a worker is not wearing the PPE kit properly, the system captures an image of the individual and saved in database.
The image is then sent to the supervisor via email or WhatsApp for immediate action.

