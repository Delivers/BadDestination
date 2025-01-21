
// Globals
extern const unsigned int NNETS;
extern const unsigned int NPLACES;
extern char* ssids[NNETS];
extern byte bssids[NNETS][6];
extern byte channels[NNETS];
extern byte rssis[NNETS];
extern unsigned int idx_offsets[NPLACES];
extern String place_names[NPLACES];
extern String place_cities[NPLACES];
extern unsigned int place_idx_cur;
extern boolean wifi_tx_status;


// --------------------------------------------------------
// Include all networks here
// all networks should be included in the "networks/" subdirectory
// --------------------------------------------------------

#include "networks/accra.h"
extern const byte NN_ACCRA;
extern char* ssids_accra[];
extern byte bssids_accra[][6];
extern byte rssis_accra[];
extern byte channels_accra[];
extern String name_accra;
extern String city_accra;


void setup_networks() {

// Names
place_names[0] = name_accra;

// Cities
place_cities[0] = city_accra;

// concatenate networks into one array for each attribute
unsigned int idx_offset = 0;
unsigned int idx = 0;
idx_offsets[0] = 0;

// ------------------------------------------------------
// ACCRA
// ------------------------------------------------------

for(unsigned int i = 0; i < NN_ACCRA; i++){
	ssids[i + idx_offset] = ssids_accra[i];
	for (byte j = 0; j < 6; j++){
		bssids[i + idx_offset][j] = bssids_accra[i][j];
	}
	channels[i + idx_offset] = channels_accra[i];
	rssis[i + idx_offset] = rssis_accra[i];
}
idx_offset += NN_ACCRA;
idx++;
idx_offsets[idx] = idx_offset;


}