#ifndef MazeDefinitions_h
#define MazeDefinitions_h

namespace MazeDefinitions {
    const unsigned MAZE_LEN = 16;

    enum MazeEncodingName {
        MAZE_CAMM_2012 = 0,
        MAZE_CAMM_2011,
        MAZE_APEC_2013,
        MAZE_APEC_2012,
        MAZE_ALL_JAPAN_2013,
        MAZE_ALL_JAPAN_2012,
        MAZE_ALL_JAPAN_2011,
        MAZE_ALL_JAPAN_2010,
        MAZE_ALL_JAPAN_2009,
        MAZE_ALL_JAPAN_2008,

        MAZE_NAME_MAX,
    };

    /**
     * Encodings of various old mazes
     * Each entry is a cell and what walls surround it,
     * with wall/no wall stored as WSEN in the least significant bits
     * Data is stored in column major order
     */
    const unsigned char mazes[][MAZE_LEN][MAZE_LEN] {
        // CAMM 2012
        {
            {14,10,10,10,8,9,14,8,10,8,10,10,8,11,13,13},
            {14,10,8,9,5,5,13,4,11,5,14,8,2,10,0,3},
            {13,13,7,5,6,1,5,7,12,2,9,6,9,12,2,11},
            {4,2,10,0,11,5,4,10,3,12,2,8,3,5,12,11},
            {5,12,8,1,14,0,3,13,13,7,13,5,14,3,4,11},
            {7,5,5,5,14,0,11,5,6,9,5,6,10,10,0,9},
            {14,3,7,5,14,0,10,2,10,2,2,9,12,10,3,5},
            {13,12,10,1,14,0,11,12,9,13,13,6,1,14,10,1},
            {5,5,14,0,10,1,13,6,2,0,0,11,6,11,12,3},
            {4,2,10,1,14,1,4,10,11,5,6,9,14,8,2,9},
            {7,12,10,1,12,1,6,9,14,2,9,6,9,6,9,5},
            {12,0,10,0,3,7,13,4,8,11,6,9,6,10,1,5},
            {5,7,13,6,10,8,3,7,4,11,13,6,9,14,1,5},
            {6,10,2,8,9,6,10,9,4,9,4,9,6,9,5,5},
            {12,8,8,1,6,10,9,4,1,5,7,5,13,4,3,5},
            {7,7,7,7,14,10,3,7,7,6,10,2,2,2,10,3}
        },

        // CAMM 2011
        {
            {14,9,12,11,12,10,9,12,8,10,9,12,9,12,8,11},
            {12,2,2,11,5,13,6,3,7,13,5,5,6,1,6,9},
            {6,8,10,10,3,4,10,10,10,1,4,1,12,1,13,7},
            {12,0,10,10,10,2,8,9,12,1,5,5,5,5,6,9},
            {5,4,10,8,8,9,4,3,5,7,5,6,1,4,10,1},
            {5,4,9,5,5,5,6,10,2,11,5,12,0,2,10,1},
            {5,7,4,1,5,6,8,10,10,10,1,5,4,8,10,3},
            {6,8,3,5,6,10,3,12,8,9,6,3,7,4,8,9},
            {12,2,9,4,8,10,9,6,3,6,10,9,13,6,2,1},
            {5,15,5,6,1,15,5,12,10,11,12,3,4,10,10,3},
            {4,8,3,12,2,8,3,5,12,10,2,10,2,10,10,9},
            {5,5,15,5,15,4,9,5,4,11,12,10,10,10,10,1},
            {6,2,10,2,10,1,5,5,7,12,2,10,8,10,9,5},
            {12,8,10,10,8,3,7,4,8,1,12,10,0,11,5,5},
            {4,3,15,12,1,12,9,5,5,5,6,10,2,10,3,5},
            {6,10,10,2,2,3,6,2,3,6,10,10,10,10,10,3}
        },

        // APEC 2013
        {
            {14,10,8,10,10,10,10,10,10,10,10,10,10,10,10,9},
            {12,10,2,10,10,10,10,10,10,10,10,10,10,10,9,5},
            {5,12,10,9,12,10,10,10,9,12,10,10,10,9,5,5},
            {5,5,13,5,5,12,9,12,3,5,12,8,11,5,5,5},
            {5,5,5,5,5,5,6,3,13,6,3,6,9,5,5,5},
            {5,5,5,6,3,6,8,10,2,10,10,10,3,5,5,5},
            {5,6,2,10,10,9,6,10,10,10,10,9,12,1,5,5},
            {5,12,10,10,10,3,13,12,9,13,12,3,5,5,5,5},
            {5,5,13,13,12,10,1,6,1,4,3,12,3,7,5,5},
            {5,5,5,4,3,12,3,12,3,5,12,2,11,13,5,5},
            {5,5,4,3,12,3,12,1,12,3,6,10,9,4,1,5},
            {5,6,3,12,3,12,3,7,5,12,9,13,6,1,5,5},
            {5,13,12,3,12,0,10,9,5,5,5,4,9,5,5,5},
            {5,4,3,12,3,5,14,1,6,3,5,5,5,5,5,5},
            {5,6,10,2,10,2,10,2,10,11,6,3,6,3,5,5},
            {6,10,10,10,10,10,10,10,10,10,10,10,10,10,2,3}
        },

        // APEC 2012
        {
            {14,10,8,10,10,10,10,10,10,10,10,10,10,10,10,9},
            {12,10,2,10,10,10,10,10,10,10,10,10,10,10,9,5},
            {5,12,10,10,10,10,10,10,10,10,9,12,10,9,5,5},
            {5,5,12,9,12,9,14,8,10,9,6,0,11,5,5,5},
            {5,5,5,5,5,6,9,6,9,6,9,7,12,3,7,5},
            {5,5,5,6,2,11,5,12,2,11,6,10,3,12,9,5},
            {5,5,5,12,8,9,6,3,14,8,10,9,12,3,5,5},
            {5,5,6,3,7,5,13,12,9,5,12,3,6,9,5,5},
            {5,5,12,8,10,3,4,2,3,5,6,9,12,3,5,5},
            {5,5,5,6,9,12,1,12,9,5,12,3,6,9,5,5},
            {5,5,5,14,2,3,7,5,5,5,6,10,10,3,5,5},
            {5,5,6,9,12,10,10,3,5,6,10,9,12,9,5,5},
            {5,5,12,3,5,12,10,9,6,8,11,6,3,5,5,5},
            {5,5,6,10,3,5,14,1,14,0,9,12,9,5,5,5},
            {5,6,10,10,10,2,11,6,9,7,6,3,6,3,5,5},
            {6,10,10,10,10,10,10,10,2,10,10,10,10,10,2,3}
        },

        // All Japan 2013
        {
            {14,10,10,10,10,10,10,10,10,10,10,10,10,8,8,9},
            {12,10,10,8,8,9,12,9,12,8,9,13,13,7,5,7},
            {4,11,12,3,5,5,5,5,5,5,4,0,0,9,6,9},
            {4,11,6,9,5,6,3,6,3,4,3,7,5,6,9,5},
            {5,14,8,3,6,9,12,10,10,3,12,9,6,10,1,5},
            {5,12,1,12,10,3,4,9,12,10,3,6,10,9,5,5},
            {5,5,7,6,9,12,3,6,3,13,13,13,13,5,5,5},
            {5,6,9,12,1,6,9,12,8,0,0,0,0,1,5,5},
            {5,12,3,5,5,12,3,6,3,5,7,7,7,5,5,5},
            {5,5,12,2,3,6,9,12,9,6,9,12,10,3,5,5},
            {5,5,4,9,12,11,6,3,6,10,3,6,9,13,5,5},
            {5,4,3,6,2,10,9,12,11,12,10,10,3,4,3,5},
            {5,6,10,10,9,13,6,2,10,3,12,10,8,3,14,1},
            {4,10,8,11,6,2,10,10,10,10,3,13,5,12,10,3},
            {5,13,6,10,10,10,10,10,10,10,10,2,3,6,10,9},
            {6,2,10,10,10,10,10,10,10,10,10,10,10,10,10,3}
        },

        // All Japan 2012
        {
            {14,10,9,12,9,12,10,8,8,10,8,10,8,10,10,9},
            {12,10,3,5,5,5,12,1,6,9,6,9,5,12,10,3},
            {6,10,8,3,5,4,3,4,9,4,9,5,5,6,10,9},
            {12,10,3,13,5,5,12,3,5,5,6,1,6,10,9,5},
            {4,10,8,2,2,2,2,10,2,2,11,6,10,8,3,5},
            {5,13,5,12,10,8,10,10,10,10,10,10,9,4,9,5},
            {5,4,3,4,10,2,10,10,10,8,10,9,5,7,6,1},
            {5,5,12,2,8,10,8,8,8,2,8,1,5,12,9,5},
            {5,5,5,12,2,10,3,6,3,14,3,5,5,5,5,5},
            {5,5,6,2,8,9,12,10,10,10,10,3,5,5,5,5},
            {5,6,10,9,5,5,6,8,10,9,12,9,5,5,5,5},
            {5,12,10,3,6,2,9,6,9,6,3,6,2,3,6,3},
            {5,6,10,10,9,13,4,9,4,8,10,9,12,10,10,9},
            {5,12,8,9,6,1,7,4,1,4,9,5,5,12,10,3},
            {5,5,5,6,10,2,9,7,6,3,6,2,3,6,10,9},
            {6,3,6,10,10,10,2,10,10,10,10,10,10,10,10,3}
        },

        // All Japan 2011
        {
            {14,8,8,10,10,10,11,13,13,13,12,10,10,10,8,9},
            {12,1,6,8,9,13,12,0,0,0,0,8,10,10,3,5},
            {5,4,9,7,7,4,3,7,7,5,7,7,12,10,9,5},
            {5,7,6,9,12,2,10,10,9,5,12,10,1,12,1,5},
            {4,10,10,2,2,8,10,10,3,6,3,13,7,5,5,5},
            {4,10,11,12,10,3,12,10,8,9,14,2,10,3,7,5},
            {4,10,8,2,11,12,0,10,3,4,9,12,10,8,10,1},
            {4,9,6,10,11,5,6,8,9,5,5,4,8,2,8,1},
            {5,6,10,10,9,6,9,6,3,5,5,5,6,8,3,5},
            {4,10,11,12,3,14,2,9,14,2,1,6,9,6,9,5},
            {5,12,9,6,10,9,14,2,9,12,2,9,6,8,3,5},
            {4,3,6,8,10,2,9,14,2,0,10,2,8,1,14,1},
            {4,9,12,2,9,14,2,9,14,2,8,10,1,5,14,1},
            {5,4,3,14,1,13,12,3,13,13,6,9,6,0,10,1},
            {4,1,13,13,5,5,6,9,4,2,9,6,10,2,10,1},
            {7,6,2,2,2,2,10,2,3,15,6,10,10,10,10,3}
        },

        // All Japan 2010
        {
            {14,8,10,10,10,11,14,10,10,8,10,10,10,10,10,9},
            {14,0,11,14,8,10,10,10,10,2,10,11,13,14,11,5},
            {14,2,8,10,2,10,8,11,12,10,10,9,4,10,10,3},
            {13,14,0,11,15,12,3,12,1,12,9,5,6,10,10,9},
            {5,14,2,8,10,3,12,1,7,5,5,4,9,14,11,5},
            {4,10,8,0,11,12,3,7,13,5,4,1,4,10,9,5},
            {5,14,3,7,12,2,8,10,3,5,5,7,5,13,7,5},
            {5,12,9,12,3,12,3,12,9,5,5,12,2,2,10,3},
            {4,1,4,3,12,1,12,2,3,5,5,5,12,10,10,9},
            {5,4,3,12,3,5,4,9,14,1,7,5,5,13,13,5},
            {7,5,12,3,14,1,5,5,14,0,11,5,5,4,0,3},
            {13,5,5,12,10,3,5,5,14,0,11,6,3,5,4,11},
            {4,1,5,6,8,11,5,6,10,0,11,14,8,3,4,11},
            {5,5,4,10,3,14,2,10,10,2,10,10,3,14,0,11},
            {4,3,6,10,10,10,10,10,10,10,10,10,10,8,2,11},
            {6,10,10,10,10,10,10,10,10,10,10,10,10,2,10,11}
        },

        // All Japan 2009
        {
            {14,8,8,10,8,10,8,10,9,13,13,13,13,13,12,9},
            {12,3,6,8,2,8,0,10,2,0,0,0,0,0,1,5},
            {6,8,9,4,8,3,5,12,9,7,7,7,7,7,5,5},
            {12,3,5,5,6,9,6,3,5,13,12,10,10,9,5,5},
            {6,9,6,0,10,2,10,10,3,4,3,12,9,5,5,5},
            {12,2,9,6,10,10,9,12,10,3,12,3,5,5,5,5},
            {5,13,6,9,12,9,5,6,10,10,3,12,1,6,3,5},
            {5,4,9,4,3,6,3,12,9,12,10,3,7,12,9,5},
            {6,3,4,3,12,10,9,4,3,6,9,12,9,5,5,5},
            {12,8,1,13,6,11,5,4,8,11,4,3,5,5,5,5},
            {5,5,6,0,10,10,3,5,6,9,6,9,6,3,5,5},
            {5,6,9,5,12,10,9,4,10,2,9,6,10,9,5,5},
            {5,12,3,6,3,12,3,6,10,8,2,9,12,1,5,5},
            {5,4,9,12,9,5,13,12,9,6,10,2,1,5,5,5},
            {5,5,5,5,6,3,4,1,4,9,12,9,7,5,5,5},
            {6,3,6,2,10,10,3,6,3,6,3,6,10,3,6,3}
        },

        // All Japan 2008
        {
            {14,8,9,13,13,13,12,10,10,10,9,12,10,8,10,9},
            {12,3,4,0,0,0,1,14,8,10,3,5,12,2,9,5},
            {6,9,5,7,7,7,6,9,6,8,10,3,5,12,3,5},
            {12,3,6,10,10,10,9,6,9,7,12,9,5,6,9,5},
            {6,9,12,10,10,10,2,11,6,10,3,6,3,12,3,5},
            {12,2,1,14,8,10,10,10,10,10,10,10,10,2,9,5},
            {5,13,4,9,5,12,8,8,11,14,8,10,8,11,5,5},
            {5,4,3,5,5,5,5,4,9,12,3,12,2,9,5,5},
            {5,5,12,3,5,5,5,6,3,6,9,6,8,3,5,5},
            {5,5,6,9,5,5,5,14,8,9,5,12,2,9,5,5},
            {5,5,12,2,1,5,4,9,5,4,3,6,8,3,5,5},
            {4,0,2,8,3,4,3,6,1,5,12,9,6,9,5,5},
            {5,5,12,3,14,2,10,10,2,1,5,6,9,6,1,5},
            {6,2,3,12,9,12,10,10,10,3,6,9,6,9,5,5},
            {12,10,10,3,6,2,10,10,10,10,10,2,11,6,1,5},
            {6,10,10,10,10,10,10,10,10,10,10,10,10,10,2,3}
        },
    };
}

#endif
