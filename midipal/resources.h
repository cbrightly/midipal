// Copyright 2011 Olivier Gillet.
//
// Author: Olivier Gillet (ol.gillet@gmail.com)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// -----------------------------------------------------------------------------
//
// Resources definitions.
//
// Automatically generated with:
// make resources


#ifndef MIDIPAL_RESOURCES_H_
#define MIDIPAL_RESOURCES_H_


#include "avrlib/base.h"

#include <avr/pgmspace.h>


#include "avrlib/resources_manager.h"
namespace midipal {

typedef uint8_t ResourceId;

extern const prog_char* string_table[];

extern const prog_uint16_t* lookup_table_table[];

extern const prog_uint8_t* character_table[];

extern const prog_uint8_t* waveform_table[];

extern const prog_uint16_t lut_res_arpeggiator_patterns[] PROGMEM;
extern const prog_uint16_t lut_res_drum_patterns[] PROGMEM;
extern const prog_uint16_t lut_res_groove_swing[] PROGMEM;
extern const prog_uint16_t lut_res_groove_shuffle[] PROGMEM;
extern const prog_uint16_t lut_res_groove_push[] PROGMEM;
extern const prog_uint16_t lut_res_groove_lag[] PROGMEM;
extern const prog_uint16_t lut_res_groove_human[] PROGMEM;
extern const prog_uint16_t lut_res_groove_monkey[] PROGMEM;
extern const prog_uint16_t lut_res_euclidian_patterns[] PROGMEM;
extern const prog_uint16_t lut_res_scale_0[] PROGMEM;
extern const prog_uint16_t lut_res_scale_1[] PROGMEM;
extern const prog_uint16_t lut_res_scale_2[] PROGMEM;
extern const prog_uint16_t lut_res_scale_3[] PROGMEM;
extern const prog_uint16_t lut_res_scale_4[] PROGMEM;
extern const prog_uint16_t lut_res_scale_5[] PROGMEM;
extern const prog_uint16_t lut_res_scale_6[] PROGMEM;
extern const prog_uint16_t lut_res_scale_7[] PROGMEM;
extern const prog_uint16_t lut_res_scale_8[] PROGMEM;
extern const prog_uint16_t lut_res_scale_9[] PROGMEM;
extern const prog_uint16_t lut_res_scale_10[] PROGMEM;
extern const prog_uint16_t lut_res_scale_11[] PROGMEM;
extern const prog_uint16_t lut_res_scale_12[] PROGMEM;
extern const prog_uint16_t lut_res_scale_13[] PROGMEM;
extern const prog_uint16_t lut_res_scale_14[] PROGMEM;
extern const prog_uint16_t lut_res_scale_15[] PROGMEM;
extern const prog_uint16_t lut_res_scale_16[] PROGMEM;
extern const prog_uint16_t lut_res_scale_18[] PROGMEM;
extern const prog_uint16_t lut_res_scale_19[] PROGMEM;
extern const prog_uint16_t lut_res_scale_20[] PROGMEM;
extern const prog_uint16_t lut_res_scale_21[] PROGMEM;
extern const prog_uint16_t lut_res_scale_22[] PROGMEM;
extern const prog_uint16_t lut_res_scale_23[] PROGMEM;
extern const prog_uint16_t lut_res_scale_24[] PROGMEM;
extern const prog_uint16_t lut_res_increments[] PROGMEM;
extern const prog_uint8_t chr_res_digits_10[] PROGMEM;
extern const prog_uint8_t chr_res_sequencer_icons[] PROGMEM;
extern const prog_uint8_t wav_res_lfo_waveforms[] PROGMEM;
#define STR_RES_0XFE_FLT 0  // 0xfe flt
#define STR_RES_ARPEGGIO 1  // arpeggio
#define STR_RES_BPM_CNTR 2  // bpm cntr
#define STR_RES_CC_KNOB 3  // cc knob
#define STR_RES_CHORDMEM 4  // chordmem
#define STR_RES_CLOCK 5  // clock
#define STR_RES_DIVIDER 6  // divider
#define STR_RES_CHNFILTR 7  // chnfiltr
#define STR_RES_CHNMERGR 8  // chnmergr
#define STR_RES_DISPATCH 9  // dispatch
#define STR_RES_DRUMS 10  // drums
#define STR_RES_EAR_GAME 11  // ear game
#define STR_RES_MONITOR 12  // monitor
#define STR_RES_RANDOMIZ 13  // randomiz
#define STR_RES_CONTRLLR 14  // contrllr
#define STR_RES_SPLITTER 15  // splitter
#define STR_RES_DELAY 16  // delay
#define STR_RES_SCALE 17  // scale
#define STR_RES_SEQUENCR 18  // sequencr
#define STR_RES_CC_LFO 19  // cc lfo
#define STR_RES_NOTENUKE 20  // notenuke
#define STR_RES__RESET_ 21  // !reset!
#define STR_RES_SNDOFF 22  // sndOff
#define STR_RES_RSTCTR 23  // rstCtr
#define STR_RES_NOTOFF 24  // notOff
#define STR_RES_OMNOFF 25  // omnOff
#define STR_RES_OMNION 26  // omniOn
#define STR_RES_MONOON 27  // monoOn
#define STR_RES_POLYON 28  // polyOn
#define STR_RES_SYSX__ 29  // sysx..
#define STR_RES__SYSX_ 30  // .sysx.
#define STR_RES___SYSX 31  // ..sysx
#define STR_RES_START 32  // start
#define STR_RES_STOP 33  // stop
#define STR_RES_CONT_ 34  // cont.
#define STR_RES_RESET 35  // reset
#define STR_RES_CHN 36  // chn
#define STR_RES_ALL 37  // all
#define STR_RES_FLT 38  // flt
#define STR_RES_OFF 39  // off
#define STR_RES_ON 40  // on
#define STR_RES_NO 41  // no
#define STR_RES_YES 42  // yes
#define STR_RES_RUN 43  // run
#define STR_RES_BPM 44  // bpm
#define STR_RES_GRV 45  // grv
#define STR_RES_AMT 46  // amt
#define STR_RES_TAP 47  // tap
#define STR_RES_SWG 48  // swg
#define STR_RES_SHF 49  // shf
#define STR_RES_PSH 50  // psh
#define STR_RES_LAG 51  // lag
#define STR_RES_HUM 52  // hum
#define STR_RES_MNK 53  // mnk
#define STR_RES_VAL 54  // val
#define STR_RES_NUM 55  // num
#define STR_RES_TYP 56  // typ
#define STR_RES_CC_ 57  // cc#
#define STR_RES_NRP 58  // nrp
#define STR_RES_MIN 59  // min
#define STR_RES_MAX 60  // max
#define STR_RES_LVL 61  // lvl
#define STR_RES_RST 62  // rst
#define STR_RES_SORRY___ 63  // sorry...
#define STR_RES_PERFECT_ 64  // perfect!
#define STR_RES_NOT_BAD_ 65  // not bad!
#define STR_RES_MOD 66  // mod
#define STR_RES_PTN 67  // ptn
#define STR_RES_EUC 68  // euc
#define STR_RES_INT 69  // int
#define STR_RES_EXT 70  // ext
#define STR_RES_CLK 71  // clk
#define STR_RES_PT1 72  // pt1
#define STR_RES_PT2 73  // pt2
#define STR_RES_PT3 74  // pt3
#define STR_RES_PT4 75  // pt4
#define STR_RES_CC1 76  // cc1
#define STR_RES_CC2 77  // cc2
#define STR_RES_CC3 78  // cc3
#define STR_RES_CC4 79  // cc4
#define STR_RES_CC5 80  // cc5
#define STR_RES_CC6 81  // cc6
#define STR_RES_CC7 82  // cc7
#define STR_RES_CC8 83  // cc8
#define STR_RES_INP 84  // inp
#define STR_RES_OUT 85  // out
#define STR_RES_SPL 86  // spl
#define STR_RES_LOW 87  // low
#define STR_RES_UPP 88  // upp
#define STR_RES__AMT 89  //  amt
#define STR_RES_NOT 90  // not
#define STR_RES_VEL 91  // vel
#define STR_RES__C1 92  // #c1
#define STR_RES__C2 93  // #c2
#define STR_RES_CYC 94  // cyc
#define STR_RES_POL 95  // pol
#define STR_RES_RND 96  // rnd
#define STR_RES_STA 97  // sta
#define STR_RES_DIR 98  // dir
#define STR_RES_UP 99  // up
#define STR_RES_DWN 100  // dwn
#define STR_RES_U_D 101  // u&d
#define STR_RES__RND 102  //  rnd
#define STR_RES_OCT 103  // oct
#define STR_RES_DUR 104  // dur
#define STR_RES_DIV 105  // div
#define STR_RES_4_1 106  // 4/1
#define STR_RES_3_1 107  // 3/1
#define STR_RES_2_1 108  // 2/1
#define STR_RES_3_2 109  // 3/2
#define STR_RES_1_1 110  // 1/1
#define STR_RES_3_4 111  // 3/4
#define STR_RES_2_3 112  // 2/3
#define STR_RES_1_2 113  // 1/2
#define STR_RES_3_8 114  // 3/8
#define STR_RES_1_3 115  // 1/3
#define STR_RES_1_4 116  // 1/4
#define STR_RES_1_6 117  // 1/6
#define STR_RES_1_8 118  // 1/8
#define STR_RES__12 119  // /12
#define STR_RES__16 120  // /16
#define STR_RES__24 121  // /24
#define STR_RES__32 122  // /32
#define STR_RES__48 123  // /48
#define STR_RES__96 124  // /96
#define STR_RES_REP 125  // rep
#define STR_RES_TRS 126  // trs
#define STR_RES_DPL 127  // dpl
#define STR_RES_OFF_ 128  // off_
#define STR_RES_MIR 129  // mir
#define STR_RES_ALT 130  // alt
#define STR_RES_TRK 131  // trk
#define STR_RES___RND 132  //   rnd
#define STR_RES_ROO 133  // roo
#define STR_RES_SCL 134  // scl
#define STR_RES_VOI 135  // voi
#define STR_RES_HRM 136  // hrm
#define STR_RES_CHR 137  // chr
#define STR_RES_ION 138  // ion
#define STR_RES_DOR 139  // dor
#define STR_RES_PHR 140  // phr
#define STR_RES_LYD 141  // lyd
#define STR_RES_MIX 142  // mix
#define STR_RES_AEO 143  // aeo
#define STR_RES_LOC 144  // loc
#define STR_RES_BMJ 145  // bmj
#define STR_RES_BMN 146  // bmn
#define STR_RES_PMJ 147  // pmj
#define STR_RES_PMN 148  // pmn
#define STR_RES_BHR 149  // bhr
#define STR_RES_SHR 150  // shr
#define STR_RES_RUP 151  // rup
#define STR_RES_TOD 152  // tod
#define STR_RES_RAG 153  // rag
#define STR_RES_KAA 154  // kaa
#define STR_RES_MEG 155  // meg
#define STR_RES_MLK 156  // mlk
#define STR_RES_DPK 157  // dpk
#define STR_RES_FLK 158  // flk
#define STR_RES_JAP 159  // jap
#define STR_RES_GAM 160  // gam
#define STR_RES_WHL 161  // whl
#define STR_RES_C 162  // C
#define STR_RES_C_ 163  // C#
#define STR_RES_D 164  // D
#define STR_RES_D_ 165  // D#
#define STR_RES_E 166  // E
#define STR_RES_F 167  // F
#define STR_RES_F_ 168  // F#
#define STR_RES_G 169  // G
#define STR_RES_G_ 170  // G#
#define STR_RES_A 171  // A
#define STR_RES_A_ 172  // A#
#define STR_RES_B 173  // B
#define STR_RES__C 174  //  C
#define STR_RES_DB 175  // Db
#define STR_RES__D 176  //  D
#define STR_RES_EB 177  // Eb
#define STR_RES__E 178  //  E
#define STR_RES__F 179  //  F
#define STR_RES_GB 180  // Gb
#define STR_RES__G 181  //  G
#define STR_RES_AB 182  // Ab
#define STR_RES__A 183  //  A
#define STR_RES_BB 184  // Bb
#define STR_RES__B 185  //  B
#define STR_RES_KEY 186  // key
#define STR_RES__ 187  //  
#define STR_RES_STP 188  // stp
#define STR_RES_1 189  // 
#define STR_RES_2 190  // 
#define STR_RES_3 191  // 
#define STR_RES_4 192  // 
#define STR_RES_AM1 193  // am1
#define STR_RES_AM2 194  // am2
#define STR_RES_AM3 195  // am3
#define STR_RES_AM4 196  // am4
#define STR_RES_CE1 197  // ce1
#define STR_RES_CE2 198  // ce2
#define STR_RES_CE3 199  // ce3
#define STR_RES_CE4 200  // ce4
#define STR_RES_WF1 201  // wf1
#define STR_RES_WF2 202  // wf2
#define STR_RES_WF3 203  // wf3
#define STR_RES_WF4 204  // wf4
#define STR_RES_RT1 205  // rt1
#define STR_RES_RT2 206  // rt2
#define STR_RES_RT3 207  // rt3
#define STR_RES_RT4 208  // rt4
#define STR_RES_SY1 209  // sy1
#define STR_RES_SY2 210  // sy2
#define STR_RES_SY3 211  // sy3
#define STR_RES_SY4 212  // sy4
#define STR_RES_TRI 213  // tri
#define STR_RES_SQR 214  // sqr
#define STR_RES_RMP 215  // rmp
#define STR_RES_SIN 216  // sin
#define STR_RES_SI2 217  // si2
#define STR_RES_SI3 218  // si3
#define STR_RES_SI5 219  // si5
#define STR_RES_GG1 220  // gg1
#define STR_RES_GG2 221  // gg2
#define STR_RES_BT1 222  // bt1
#define STR_RES_BT2 223  // bt2
#define STR_RES_SP1 224  // sp1
#define STR_RES_SP2 225  // sp2
#define STR_RES_LP1 226  // lp1
#define STR_RES_LP2 227  // lp2
#define STR_RES_RS1 228  // rs1
#define STR_RES_RS2 229  // rs2
#define STR_RES_S_H 230  // s&h
#define STR_RES_RES 231  // res
#define STR_RES_FRE 232  // fre
#define STR_RES__NOT 233  //  not
#define STR_RES_CHD 234  // chd
#define LUT_RES_ARPEGGIATOR_PATTERNS 0
#define LUT_RES_ARPEGGIATOR_PATTERNS_SIZE 15
#define LUT_RES_DRUM_PATTERNS 1
#define LUT_RES_DRUM_PATTERNS_SIZE 48
#define LUT_RES_GROOVE_SWING 2
#define LUT_RES_GROOVE_SWING_SIZE 16
#define LUT_RES_GROOVE_SHUFFLE 3
#define LUT_RES_GROOVE_SHUFFLE_SIZE 16
#define LUT_RES_GROOVE_PUSH 4
#define LUT_RES_GROOVE_PUSH_SIZE 16
#define LUT_RES_GROOVE_LAG 5
#define LUT_RES_GROOVE_LAG_SIZE 16
#define LUT_RES_GROOVE_HUMAN 6
#define LUT_RES_GROOVE_HUMAN_SIZE 16
#define LUT_RES_GROOVE_MONKEY 7
#define LUT_RES_GROOVE_MONKEY_SIZE 16
#define LUT_RES_EUCLIDIAN_PATTERNS 8
#define LUT_RES_EUCLIDIAN_PATTERNS_SIZE 144
#define LUT_RES_SCALE_0 9
#define LUT_RES_SCALE_0_SIZE 12
#define LUT_RES_SCALE_1 10
#define LUT_RES_SCALE_1_SIZE 12
#define LUT_RES_SCALE_2 11
#define LUT_RES_SCALE_2_SIZE 12
#define LUT_RES_SCALE_3 12
#define LUT_RES_SCALE_3_SIZE 12
#define LUT_RES_SCALE_4 13
#define LUT_RES_SCALE_4_SIZE 12
#define LUT_RES_SCALE_5 14
#define LUT_RES_SCALE_5_SIZE 12
#define LUT_RES_SCALE_6 15
#define LUT_RES_SCALE_6_SIZE 12
#define LUT_RES_SCALE_7 16
#define LUT_RES_SCALE_7_SIZE 12
#define LUT_RES_SCALE_8 17
#define LUT_RES_SCALE_8_SIZE 12
#define LUT_RES_SCALE_9 18
#define LUT_RES_SCALE_9_SIZE 12
#define LUT_RES_SCALE_10 19
#define LUT_RES_SCALE_10_SIZE 12
#define LUT_RES_SCALE_11 20
#define LUT_RES_SCALE_11_SIZE 12
#define LUT_RES_SCALE_12 21
#define LUT_RES_SCALE_12_SIZE 12
#define LUT_RES_SCALE_13 22
#define LUT_RES_SCALE_13_SIZE 12
#define LUT_RES_SCALE_14 23
#define LUT_RES_SCALE_14_SIZE 12
#define LUT_RES_SCALE_15 24
#define LUT_RES_SCALE_15_SIZE 12
#define LUT_RES_SCALE_16 25
#define LUT_RES_SCALE_16_SIZE 12
#define LUT_RES_SCALE_17 26
#define LUT_RES_SCALE_17_SIZE 12
#define LUT_RES_SCALE_18 27
#define LUT_RES_SCALE_18_SIZE 12
#define LUT_RES_SCALE_19 28
#define LUT_RES_SCALE_19_SIZE 12
#define LUT_RES_SCALE_20 29
#define LUT_RES_SCALE_20_SIZE 12
#define LUT_RES_SCALE_21 30
#define LUT_RES_SCALE_21_SIZE 12
#define LUT_RES_SCALE_22 31
#define LUT_RES_SCALE_22_SIZE 12
#define LUT_RES_SCALE_23 32
#define LUT_RES_SCALE_23_SIZE 12
#define LUT_RES_SCALE_24 33
#define LUT_RES_SCALE_24_SIZE 12
#define LUT_RES_INCREMENTS 34
#define LUT_RES_INCREMENTS_SIZE 19
#define CHR_RES_DIGITS_10 0
#define CHR_RES_DIGITS_10_SIZE 56
#define CHR_RES_SEQUENCER_ICONS 1
#define CHR_RES_SEQUENCER_ICONS_SIZE 32
#define WAV_RES_LFO_WAVEFORMS 0
#define WAV_RES_LFO_WAVEFORMS_SIZE 2193
typedef avrlib::ResourcesManager<
    ResourceId,
    avrlib::ResourcesTables<
        string_table,
        lookup_table_table> > ResourcesManager; 

}  // namespace midipal

#endif  // MIDIPAL_RESOURCES_H_
