#include <iostream>
#include <cstring>
#include <ctime>
#include <fstream>

using namespace std;

void printParagraph();

int main()
{
    printParagraph();
}

void printParagraph()  {
    srand(time(NULL));
    int r = 0;
  
    r = rand() % 10; //generate random value from 1 and 10

    string paragraphs[10] = {
        "Quantum entanglement, a phenomenon that perplexed even Einstein, describes particles instantaneously influencing each other regardless of the distance separating them. This mysterious connection challenges our classical understanding of space and time.", 
        "Within the intricate structure of a DNA molecule, the genetic code orchestrates the complexity of life. Adenine, thymine, guanine, and cytosine dance in a choreography that determines the traits of every living organism.",
        "The uncanny ability of chameleons to change color is not mere camouflage but a result of nanocrystals in their skin reflecting and refracting light. This natural adaptation provides insights for the development of advanced optical technologies.", 
        "Dark matter, an enigmatic substance composing about 27% of the universe, remains invisible and undetectable through electromagnetic radiation. Its elusive nature challenges physicists to uncover the secrets of the cosmic unknown.", 
        "Neuroplasticity, the brain's remarkable ability to reorganize itself, allows for learning, memory, and recovery from injuries. The dynamic connections between neurons form the basis for our cognitive abilities.", 
        "In the vastness of the cosmos, pulsars emit beams of radiation with extraordinary precision, resembling cosmic lighthouses. These rapidly spinning neutron stars offer a glimpse into the extreme conditions of the universe.",
        "The principles of chaos theory illuminate the unpredictability present in seemingly random systems. The famous butterfly effect suggests that small initial changes can lead to significant consequences in complex dynamical systems.",
        "CRISPR-Cas9, a revolutionary gene-editing tool, enables precise modification of DNA sequences. This breakthrough technology holds promise for treating genetic disorders and advancing our understanding of the human genome.",
        "The greenhouse effect, essential for maintaining Earth's temperature, has been amplified by human activities, leading to climate change. Understanding the delicate balance of atmospheric gases is crucial for mitigating the impact on our planet.",
        "The Heisenberg Uncertainty Principle, a fundamental concept in quantum mechanics, posits that the more accurately we measure a particle's position, the less accurately we can determine its momentum. This inherent uncertainty challenges classical notions of determinism in the microscopic realm."
    };

    ifstream infile;
    infile.open("received.txt");

    string request = " ";

    infile >> request;
        if (request == "run") {
            ofstream outfile("sent.txt");
            outfile << paragraphs[r];
            outfile.close();
            ofstream outfile2("received.txt");
            outfile << "";
            outfile.close();
        }
}
