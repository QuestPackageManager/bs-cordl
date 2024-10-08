#pragma once
// IWYU pragma private; include "System/TermInfoStrings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TermInfoStrings)
// Forward declare root types
namespace System {
struct TermInfoStrings;
}
// Write type traits
MARK_VAL_T(::System::TermInfoStrings);
// Type: System::TermInfoStrings
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::TermInfoStrings
struct CORDL_TYPE TermInfoStrings {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TermInfoStrings_Unwrapped
  enum struct __TermInfoStrings_Unwrapped : int32_t {
    __E_BackTab = static_cast<int32_t>(0x0),
    __E_Bell = static_cast<int32_t>(0x1),
    __E_CarriageReturn = static_cast<int32_t>(0x2),
    __E_ChangeScrollRegion = static_cast<int32_t>(0x3),
    __E_ClearAllTabs = static_cast<int32_t>(0x4),
    __E_ClearScreen = static_cast<int32_t>(0x5),
    __E_ClrEol = static_cast<int32_t>(0x6),
    __E_ClrEos = static_cast<int32_t>(0x7),
    __E_ColumnAddress = static_cast<int32_t>(0x8),
    __E_CommandCharacter = static_cast<int32_t>(0x9),
    __E_CursorAddress = static_cast<int32_t>(0xa),
    __E_CursorDown = static_cast<int32_t>(0xb),
    __E_CursorHome = static_cast<int32_t>(0xc),
    __E_CursorInvisible = static_cast<int32_t>(0xd),
    __E_CursorLeft = static_cast<int32_t>(0xe),
    __E_CursorMemAddress = static_cast<int32_t>(0xf),
    __E_CursorNormal = static_cast<int32_t>(0x10),
    __E_CursorRight = static_cast<int32_t>(0x11),
    __E_CursorToLl = static_cast<int32_t>(0x12),
    __E_CursorUp = static_cast<int32_t>(0x13),
    __E_CursorVisible = static_cast<int32_t>(0x14),
    __E_DeleteCharacter = static_cast<int32_t>(0x15),
    __E_DeleteLine = static_cast<int32_t>(0x16),
    __E_DisStatusLine = static_cast<int32_t>(0x17),
    __E_DownHalfLine = static_cast<int32_t>(0x18),
    __E_EnterAltCharsetMode = static_cast<int32_t>(0x19),
    __E_EnterBlinkMode = static_cast<int32_t>(0x1a),
    __E_EnterBoldMode = static_cast<int32_t>(0x1b),
    __E_EnterCaMode = static_cast<int32_t>(0x1c),
    __E_EnterDeleteMode = static_cast<int32_t>(0x1d),
    __E_EnterDimMode = static_cast<int32_t>(0x1e),
    __E_EnterInsertMode = static_cast<int32_t>(0x1f),
    __E_EnterSecureMode = static_cast<int32_t>(0x20),
    __E_EnterProtectedMode = static_cast<int32_t>(0x21),
    __E_EnterReverseMode = static_cast<int32_t>(0x22),
    __E_EnterStandoutMode = static_cast<int32_t>(0x23),
    __E_EnterUnderlineMode = static_cast<int32_t>(0x24),
    __E_EraseChars = static_cast<int32_t>(0x25),
    __E_ExitAltCharsetMode = static_cast<int32_t>(0x26),
    __E_ExitAttributeMode = static_cast<int32_t>(0x27),
    __E_ExitCaMode = static_cast<int32_t>(0x28),
    __E_ExitDeleteMode = static_cast<int32_t>(0x29),
    __E_ExitInsertMode = static_cast<int32_t>(0x2a),
    __E_ExitStandoutMode = static_cast<int32_t>(0x2b),
    __E_ExitUnderlineMode = static_cast<int32_t>(0x2c),
    __E_FlashScreen = static_cast<int32_t>(0x2d),
    __E_FormFeed = static_cast<int32_t>(0x2e),
    __E_FromStatusLine = static_cast<int32_t>(0x2f),
    __E_Init1string = static_cast<int32_t>(0x30),
    __E_Init2string = static_cast<int32_t>(0x31),
    __E_Init3string = static_cast<int32_t>(0x32),
    __E_InitFile = static_cast<int32_t>(0x33),
    __E_InsertCharacter = static_cast<int32_t>(0x34),
    __E_InsertLine = static_cast<int32_t>(0x35),
    __E_InsertPadding = static_cast<int32_t>(0x36),
    __E_KeyBackspace = static_cast<int32_t>(0x37),
    __E_KeyCatab = static_cast<int32_t>(0x38),
    __E_KeyClear = static_cast<int32_t>(0x39),
    __E_KeyCtab = static_cast<int32_t>(0x3a),
    __E_KeyDc = static_cast<int32_t>(0x3b),
    __E_KeyDl = static_cast<int32_t>(0x3c),
    __E_KeyDown = static_cast<int32_t>(0x3d),
    __E_KeyEic = static_cast<int32_t>(0x3e),
    __E_KeyEol = static_cast<int32_t>(0x3f),
    __E_KeyEos = static_cast<int32_t>(0x40),
    __E_KeyF0 = static_cast<int32_t>(0x41),
    __E_KeyF1 = static_cast<int32_t>(0x42),
    __E_KeyF10 = static_cast<int32_t>(0x43),
    __E_KeyF2 = static_cast<int32_t>(0x44),
    __E_KeyF3 = static_cast<int32_t>(0x45),
    __E_KeyF4 = static_cast<int32_t>(0x46),
    __E_KeyF5 = static_cast<int32_t>(0x47),
    __E_KeyF6 = static_cast<int32_t>(0x48),
    __E_KeyF7 = static_cast<int32_t>(0x49),
    __E_KeyF8 = static_cast<int32_t>(0x4a),
    __E_KeyF9 = static_cast<int32_t>(0x4b),
    __E_KeyHome = static_cast<int32_t>(0x4c),
    __E_KeyIc = static_cast<int32_t>(0x4d),
    __E_KeyIl = static_cast<int32_t>(0x4e),
    __E_KeyLeft = static_cast<int32_t>(0x4f),
    __E_KeyLl = static_cast<int32_t>(0x50),
    __E_KeyNpage = static_cast<int32_t>(0x51),
    __E_KeyPpage = static_cast<int32_t>(0x52),
    __E_KeyRight = static_cast<int32_t>(0x53),
    __E_KeySf = static_cast<int32_t>(0x54),
    __E_KeySr = static_cast<int32_t>(0x55),
    __E_KeyStab = static_cast<int32_t>(0x56),
    __E_KeyUp = static_cast<int32_t>(0x57),
    __E_KeypadLocal = static_cast<int32_t>(0x58),
    __E_KeypadXmit = static_cast<int32_t>(0x59),
    __E_LabF0 = static_cast<int32_t>(0x5a),
    __E_LabF1 = static_cast<int32_t>(0x5b),
    __E_LabF10 = static_cast<int32_t>(0x5c),
    __E_LabF2 = static_cast<int32_t>(0x5d),
    __E_LabF3 = static_cast<int32_t>(0x5e),
    __E_LabF4 = static_cast<int32_t>(0x5f),
    __E_LabF5 = static_cast<int32_t>(0x60),
    __E_LabF6 = static_cast<int32_t>(0x61),
    __E_LabF7 = static_cast<int32_t>(0x62),
    __E_LabF8 = static_cast<int32_t>(0x63),
    __E_LabF9 = static_cast<int32_t>(0x64),
    __E_MetaOff = static_cast<int32_t>(0x65),
    __E_MetaOn = static_cast<int32_t>(0x66),
    __E_Newline = static_cast<int32_t>(0x67),
    __E_PadChar = static_cast<int32_t>(0x68),
    __E_ParmDch = static_cast<int32_t>(0x69),
    __E_ParmDeleteLine = static_cast<int32_t>(0x6a),
    __E_ParmDownCursor = static_cast<int32_t>(0x6b),
    __E_ParmIch = static_cast<int32_t>(0x6c),
    __E_ParmIndex = static_cast<int32_t>(0x6d),
    __E_ParmInsertLine = static_cast<int32_t>(0x6e),
    __E_ParmLeftCursor = static_cast<int32_t>(0x6f),
    __E_ParmRightCursor = static_cast<int32_t>(0x70),
    __E_ParmRindex = static_cast<int32_t>(0x71),
    __E_ParmUpCursor = static_cast<int32_t>(0x72),
    __E_PkeyKey = static_cast<int32_t>(0x73),
    __E_PkeyLocal = static_cast<int32_t>(0x74),
    __E_PkeyXmit = static_cast<int32_t>(0x75),
    __E_PrintScreen = static_cast<int32_t>(0x76),
    __E_PrtrOff = static_cast<int32_t>(0x77),
    __E_PrtrOn = static_cast<int32_t>(0x78),
    __E_RepeatChar = static_cast<int32_t>(0x79),
    __E_Reset1string = static_cast<int32_t>(0x7a),
    __E_Reset2string = static_cast<int32_t>(0x7b),
    __E_Reset3string = static_cast<int32_t>(0x7c),
    __E_ResetFile = static_cast<int32_t>(0x7d),
    __E_RestoreCursor = static_cast<int32_t>(0x7e),
    __E_RowAddress = static_cast<int32_t>(0x7f),
    __E_SaveCursor = static_cast<int32_t>(0x80),
    __E_ScrollForward = static_cast<int32_t>(0x81),
    __E_ScrollReverse = static_cast<int32_t>(0x82),
    __E_SetAttributes = static_cast<int32_t>(0x83),
    __E_SetTab = static_cast<int32_t>(0x84),
    __E_SetWindow = static_cast<int32_t>(0x85),
    __E_Tab = static_cast<int32_t>(0x86),
    __E_ToStatusLine = static_cast<int32_t>(0x87),
    __E_UnderlineChar = static_cast<int32_t>(0x88),
    __E_UpHalfLine = static_cast<int32_t>(0x89),
    __E_InitProg = static_cast<int32_t>(0x8a),
    __E_KeyA1 = static_cast<int32_t>(0x8b),
    __E_KeyA3 = static_cast<int32_t>(0x8c),
    __E_KeyB2 = static_cast<int32_t>(0x8d),
    __E_KeyC1 = static_cast<int32_t>(0x8e),
    __E_KeyC3 = static_cast<int32_t>(0x8f),
    __E_PrtrNon = static_cast<int32_t>(0x90),
    __E_CharPadding = static_cast<int32_t>(0x91),
    __E_AcsChars = static_cast<int32_t>(0x92),
    __E_PlabNorm = static_cast<int32_t>(0x93),
    __E_KeyBtab = static_cast<int32_t>(0x94),
    __E_EnterXonMode = static_cast<int32_t>(0x95),
    __E_ExitXonMode = static_cast<int32_t>(0x96),
    __E_EnterAmMode = static_cast<int32_t>(0x97),
    __E_ExitAmMode = static_cast<int32_t>(0x98),
    __E_XonCharacter = static_cast<int32_t>(0x99),
    __E_XoffCharacter = static_cast<int32_t>(0x9a),
    __E_EnaAcs = static_cast<int32_t>(0x9b),
    __E_LabelOn = static_cast<int32_t>(0x9c),
    __E_LabelOff = static_cast<int32_t>(0x9d),
    __E_KeyBeg = static_cast<int32_t>(0x9e),
    __E_KeyCancel = static_cast<int32_t>(0x9f),
    __E_KeyClose = static_cast<int32_t>(0xa0),
    __E_KeyCommand = static_cast<int32_t>(0xa1),
    __E_KeyCopy = static_cast<int32_t>(0xa2),
    __E_KeyCreate = static_cast<int32_t>(0xa3),
    __E_KeyEnd = static_cast<int32_t>(0xa4),
    __E_KeyEnter = static_cast<int32_t>(0xa5),
    __E_KeyExit = static_cast<int32_t>(0xa6),
    __E_KeyFind = static_cast<int32_t>(0xa7),
    __E_KeyHelp = static_cast<int32_t>(0xa8),
    __E_KeyMark = static_cast<int32_t>(0xa9),
    __E_KeyMessage = static_cast<int32_t>(0xaa),
    __E_KeyMove = static_cast<int32_t>(0xab),
    __E_KeyNext = static_cast<int32_t>(0xac),
    __E_KeyOpen = static_cast<int32_t>(0xad),
    __E_KeyOptions = static_cast<int32_t>(0xae),
    __E_KeyPrevious = static_cast<int32_t>(0xaf),
    __E_KeyPrint = static_cast<int32_t>(0xb0),
    __E_KeyRedo = static_cast<int32_t>(0xb1),
    __E_KeyReference = static_cast<int32_t>(0xb2),
    __E_KeyRefresh = static_cast<int32_t>(0xb3),
    __E_KeyReplace = static_cast<int32_t>(0xb4),
    __E_KeyRestart = static_cast<int32_t>(0xb5),
    __E_KeyResume = static_cast<int32_t>(0xb6),
    __E_KeySave = static_cast<int32_t>(0xb7),
    __E_KeySuspend = static_cast<int32_t>(0xb8),
    __E_KeyUndo = static_cast<int32_t>(0xb9),
    __E_KeySbeg = static_cast<int32_t>(0xba),
    __E_KeyScancel = static_cast<int32_t>(0xbb),
    __E_KeyScommand = static_cast<int32_t>(0xbc),
    __E_KeyScopy = static_cast<int32_t>(0xbd),
    __E_KeyScreate = static_cast<int32_t>(0xbe),
    __E_KeySdc = static_cast<int32_t>(0xbf),
    __E_KeySdl = static_cast<int32_t>(0xc0),
    __E_KeySelect = static_cast<int32_t>(0xc1),
    __E_KeySend = static_cast<int32_t>(0xc2),
    __E_KeySeol = static_cast<int32_t>(0xc3),
    __E_KeySexit = static_cast<int32_t>(0xc4),
    __E_KeySfind = static_cast<int32_t>(0xc5),
    __E_KeyShelp = static_cast<int32_t>(0xc6),
    __E_KeyShome = static_cast<int32_t>(0xc7),
    __E_KeySic = static_cast<int32_t>(0xc8),
    __E_KeySleft = static_cast<int32_t>(0xc9),
    __E_KeySmessage = static_cast<int32_t>(0xca),
    __E_KeySmove = static_cast<int32_t>(0xcb),
    __E_KeySnext = static_cast<int32_t>(0xcc),
    __E_KeySoptions = static_cast<int32_t>(0xcd),
    __E_KeySprevious = static_cast<int32_t>(0xce),
    __E_KeySprint = static_cast<int32_t>(0xcf),
    __E_KeySredo = static_cast<int32_t>(0xd0),
    __E_KeySreplace = static_cast<int32_t>(0xd1),
    __E_KeySright = static_cast<int32_t>(0xd2),
    __E_KeySrsume = static_cast<int32_t>(0xd3),
    __E_KeySsave = static_cast<int32_t>(0xd4),
    __E_KeySsuspend = static_cast<int32_t>(0xd5),
    __E_KeySundo = static_cast<int32_t>(0xd6),
    __E_ReqForInput = static_cast<int32_t>(0xd7),
    __E_KeyF11 = static_cast<int32_t>(0xd8),
    __E_KeyF12 = static_cast<int32_t>(0xd9),
    __E_KeyF13 = static_cast<int32_t>(0xda),
    __E_KeyF14 = static_cast<int32_t>(0xdb),
    __E_KeyF15 = static_cast<int32_t>(0xdc),
    __E_KeyF16 = static_cast<int32_t>(0xdd),
    __E_KeyF17 = static_cast<int32_t>(0xde),
    __E_KeyF18 = static_cast<int32_t>(0xdf),
    __E_KeyF19 = static_cast<int32_t>(0xe0),
    __E_KeyF20 = static_cast<int32_t>(0xe1),
    __E_KeyF21 = static_cast<int32_t>(0xe2),
    __E_KeyF22 = static_cast<int32_t>(0xe3),
    __E_KeyF23 = static_cast<int32_t>(0xe4),
    __E_KeyF24 = static_cast<int32_t>(0xe5),
    __E_KeyF25 = static_cast<int32_t>(0xe6),
    __E_KeyF26 = static_cast<int32_t>(0xe7),
    __E_KeyF27 = static_cast<int32_t>(0xe8),
    __E_KeyF28 = static_cast<int32_t>(0xe9),
    __E_KeyF29 = static_cast<int32_t>(0xea),
    __E_KeyF30 = static_cast<int32_t>(0xeb),
    __E_KeyF31 = static_cast<int32_t>(0xec),
    __E_KeyF32 = static_cast<int32_t>(0xed),
    __E_KeyF33 = static_cast<int32_t>(0xee),
    __E_KeyF34 = static_cast<int32_t>(0xef),
    __E_KeyF35 = static_cast<int32_t>(0xf0),
    __E_KeyF36 = static_cast<int32_t>(0xf1),
    __E_KeyF37 = static_cast<int32_t>(0xf2),
    __E_KeyF38 = static_cast<int32_t>(0xf3),
    __E_KeyF39 = static_cast<int32_t>(0xf4),
    __E_KeyF40 = static_cast<int32_t>(0xf5),
    __E_KeyF41 = static_cast<int32_t>(0xf6),
    __E_KeyF42 = static_cast<int32_t>(0xf7),
    __E_KeyF43 = static_cast<int32_t>(0xf8),
    __E_KeyF44 = static_cast<int32_t>(0xf9),
    __E_KeyF45 = static_cast<int32_t>(0xfa),
    __E_KeyF46 = static_cast<int32_t>(0xfb),
    __E_KeyF47 = static_cast<int32_t>(0xfc),
    __E_KeyF48 = static_cast<int32_t>(0xfd),
    __E_KeyF49 = static_cast<int32_t>(0xfe),
    __E_KeyF50 = static_cast<int32_t>(0xff),
    __E_KeyF51 = static_cast<int32_t>(0x100),
    __E_KeyF52 = static_cast<int32_t>(0x101),
    __E_KeyF53 = static_cast<int32_t>(0x102),
    __E_KeyF54 = static_cast<int32_t>(0x103),
    __E_KeyF55 = static_cast<int32_t>(0x104),
    __E_KeyF56 = static_cast<int32_t>(0x105),
    __E_KeyF57 = static_cast<int32_t>(0x106),
    __E_KeyF58 = static_cast<int32_t>(0x107),
    __E_KeyF59 = static_cast<int32_t>(0x108),
    __E_KeyF60 = static_cast<int32_t>(0x109),
    __E_KeyF61 = static_cast<int32_t>(0x10a),
    __E_KeyF62 = static_cast<int32_t>(0x10b),
    __E_KeyF63 = static_cast<int32_t>(0x10c),
    __E_ClrBol = static_cast<int32_t>(0x10d),
    __E_ClearMargins = static_cast<int32_t>(0x10e),
    __E_SetLeftMargin = static_cast<int32_t>(0x10f),
    __E_SetRightMargin = static_cast<int32_t>(0x110),
    __E_LabelFormat = static_cast<int32_t>(0x111),
    __E_SetClock = static_cast<int32_t>(0x112),
    __E_DisplayClock = static_cast<int32_t>(0x113),
    __E_RemoveClock = static_cast<int32_t>(0x114),
    __E_CreateWindow = static_cast<int32_t>(0x115),
    __E_GotoWindow = static_cast<int32_t>(0x116),
    __E_Hangup = static_cast<int32_t>(0x117),
    __E_DialPhone = static_cast<int32_t>(0x118),
    __E_QuickDial = static_cast<int32_t>(0x119),
    __E_Tone = static_cast<int32_t>(0x11a),
    __E_Pulse = static_cast<int32_t>(0x11b),
    __E_FlashHook = static_cast<int32_t>(0x11c),
    __E_FixedPause = static_cast<int32_t>(0x11d),
    __E_WaitTone = static_cast<int32_t>(0x11e),
    __E_User0 = static_cast<int32_t>(0x11f),
    __E_User1 = static_cast<int32_t>(0x120),
    __E_User2 = static_cast<int32_t>(0x121),
    __E_User3 = static_cast<int32_t>(0x122),
    __E_User4 = static_cast<int32_t>(0x123),
    __E_User5 = static_cast<int32_t>(0x124),
    __E_User6 = static_cast<int32_t>(0x125),
    __E_User7 = static_cast<int32_t>(0x126),
    __E_User8 = static_cast<int32_t>(0x127),
    __E_User9 = static_cast<int32_t>(0x128),
    __E_OrigPair = static_cast<int32_t>(0x129),
    __E_OrigColors = static_cast<int32_t>(0x12a),
    __E_InitializeColor = static_cast<int32_t>(0x12b),
    __E_InitializePair = static_cast<int32_t>(0x12c),
    __E_SetColorPair = static_cast<int32_t>(0x12d),
    __E_SetForeground = static_cast<int32_t>(0x12e),
    __E_SetBackground = static_cast<int32_t>(0x12f),
    __E_ChangeCharPitch = static_cast<int32_t>(0x130),
    __E_ChangeLinePitch = static_cast<int32_t>(0x131),
    __E_ChangeResHorz = static_cast<int32_t>(0x132),
    __E_ChangeResVert = static_cast<int32_t>(0x133),
    __E_DefineChar = static_cast<int32_t>(0x134),
    __E_EnterDoublewideMode = static_cast<int32_t>(0x135),
    __E_EnterDraftQuality = static_cast<int32_t>(0x136),
    __E_EnterItalicsMode = static_cast<int32_t>(0x137),
    __E_EnterLeftwardMode = static_cast<int32_t>(0x138),
    __E_EnterMicroMode = static_cast<int32_t>(0x139),
    __E_EnterNearLetterQuality = static_cast<int32_t>(0x13a),
    __E_EnterNormalQuality = static_cast<int32_t>(0x13b),
    __E_EnterShadowMode = static_cast<int32_t>(0x13c),
    __E_EnterSubscriptMode = static_cast<int32_t>(0x13d),
    __E_EnterSuperscriptMode = static_cast<int32_t>(0x13e),
    __E_EnterUpwardMode = static_cast<int32_t>(0x13f),
    __E_ExitDoublewideMode = static_cast<int32_t>(0x140),
    __E_ExitItalicsMode = static_cast<int32_t>(0x141),
    __E_ExitLeftwardMode = static_cast<int32_t>(0x142),
    __E_ExitMicroMode = static_cast<int32_t>(0x143),
    __E_ExitShadowMode = static_cast<int32_t>(0x144),
    __E_ExitSubscriptMode = static_cast<int32_t>(0x145),
    __E_ExitSuperscriptMode = static_cast<int32_t>(0x146),
    __E_ExitUpwardMode = static_cast<int32_t>(0x147),
    __E_MicroColumnAddress = static_cast<int32_t>(0x148),
    __E_MicroDown = static_cast<int32_t>(0x149),
    __E_MicroLeft = static_cast<int32_t>(0x14a),
    __E_MicroRight = static_cast<int32_t>(0x14b),
    __E_MicroRowAddress = static_cast<int32_t>(0x14c),
    __E_MicroUp = static_cast<int32_t>(0x14d),
    __E_OrderOfPins = static_cast<int32_t>(0x14e),
    __E_ParmDownMicro = static_cast<int32_t>(0x14f),
    __E_ParmLeftMicro = static_cast<int32_t>(0x150),
    __E_ParmRightMicro = static_cast<int32_t>(0x151),
    __E_ParmUpMicro = static_cast<int32_t>(0x152),
    __E_SelectCharSet = static_cast<int32_t>(0x153),
    __E_SetBottomMargin = static_cast<int32_t>(0x154),
    __E_SetBottomMarginParm = static_cast<int32_t>(0x155),
    __E_SetLeftMarginParm = static_cast<int32_t>(0x156),
    __E_SetRightMarginParm = static_cast<int32_t>(0x157),
    __E_SetTopMargin = static_cast<int32_t>(0x158),
    __E_SetTopMarginParm = static_cast<int32_t>(0x159),
    __E_StartBitImage = static_cast<int32_t>(0x15a),
    __E_StartCharSetDef = static_cast<int32_t>(0x15b),
    __E_StopBitImage = static_cast<int32_t>(0x15c),
    __E_StopCharSetDef = static_cast<int32_t>(0x15d),
    __E_SubscriptCharacters = static_cast<int32_t>(0x15e),
    __E_SuperscriptCharacters = static_cast<int32_t>(0x15f),
    __E_TheseCauseCr = static_cast<int32_t>(0x160),
    __E_ZeroMotion = static_cast<int32_t>(0x161),
    __E_CharSetNames = static_cast<int32_t>(0x162),
    __E_KeyMouse = static_cast<int32_t>(0x163),
    __E_MouseInfo = static_cast<int32_t>(0x164),
    __E_ReqMousePos = static_cast<int32_t>(0x165),
    __E_GetMouse = static_cast<int32_t>(0x166),
    __E_SetAForeground = static_cast<int32_t>(0x167),
    __E_SetABackground = static_cast<int32_t>(0x168),
    __E_PkeyPlab = static_cast<int32_t>(0x169),
    __E_DeviceType = static_cast<int32_t>(0x16a),
    __E_CodeSetInit = static_cast<int32_t>(0x16b),
    __E_Set0DesSeq = static_cast<int32_t>(0x16c),
    __E_Set1DesSeq = static_cast<int32_t>(0x16d),
    __E_Set2DesSeq = static_cast<int32_t>(0x16e),
    __E_Set3DesSeq = static_cast<int32_t>(0x16f),
    __E_SetLrMargin = static_cast<int32_t>(0x170),
    __E_SetTbMargin = static_cast<int32_t>(0x171),
    __E_BitImageRepeat = static_cast<int32_t>(0x172),
    __E_BitImageNewline = static_cast<int32_t>(0x173),
    __E_BitImageCarriageReturn = static_cast<int32_t>(0x174),
    __E_ColorNames = static_cast<int32_t>(0x175),
    __E_DefineBitImageRegion = static_cast<int32_t>(0x176),
    __E_EndBitImageRegion = static_cast<int32_t>(0x177),
    __E_SetColorBand = static_cast<int32_t>(0x178),
    __E_SetPageLength = static_cast<int32_t>(0x179),
    __E_DisplayPcChar = static_cast<int32_t>(0x17a),
    __E_EnterPcCharsetMode = static_cast<int32_t>(0x17b),
    __E_ExitPcCharsetMode = static_cast<int32_t>(0x17c),
    __E_EnterScancodeMode = static_cast<int32_t>(0x17d),
    __E_ExitScancodeMode = static_cast<int32_t>(0x17e),
    __E_PcTermOptions = static_cast<int32_t>(0x17f),
    __E_ScancodeEscape = static_cast<int32_t>(0x180),
    __E_AltScancodeEsc = static_cast<int32_t>(0x181),
    __E_EnterHorizontalHlMode = static_cast<int32_t>(0x182),
    __E_EnterLeftHlMode = static_cast<int32_t>(0x183),
    __E_EnterLowHlMode = static_cast<int32_t>(0x184),
    __E_EnterRightHlMode = static_cast<int32_t>(0x185),
    __E_EnterTopHlMode = static_cast<int32_t>(0x186),
    __E_EnterVerticalHlMode = static_cast<int32_t>(0x187),
    __E_SetAAttributes = static_cast<int32_t>(0x188),
    __E_SetPglenInch = static_cast<int32_t>(0x189),
    __E_Last = static_cast<int32_t>(0x18a),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TermInfoStrings_Unwrapped() const noexcept {
    return static_cast<__TermInfoStrings_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TermInfoStrings();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TermInfoStrings(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AcsChars value: static_cast<int32_t>(0x92)
  static ::System::TermInfoStrings const AcsChars;

  /// @brief Field AltScancodeEsc value: static_cast<int32_t>(0x181)
  static ::System::TermInfoStrings const AltScancodeEsc;

  /// @brief Field BackTab value: static_cast<int32_t>(0x0)
  static ::System::TermInfoStrings const BackTab;

  /// @brief Field Bell value: static_cast<int32_t>(0x1)
  static ::System::TermInfoStrings const Bell;

  /// @brief Field BitImageCarriageReturn value: static_cast<int32_t>(0x174)
  static ::System::TermInfoStrings const BitImageCarriageReturn;

  /// @brief Field BitImageNewline value: static_cast<int32_t>(0x173)
  static ::System::TermInfoStrings const BitImageNewline;

  /// @brief Field BitImageRepeat value: static_cast<int32_t>(0x172)
  static ::System::TermInfoStrings const BitImageRepeat;

  /// @brief Field CarriageReturn value: static_cast<int32_t>(0x2)
  static ::System::TermInfoStrings const CarriageReturn;

  /// @brief Field ChangeCharPitch value: static_cast<int32_t>(0x130)
  static ::System::TermInfoStrings const ChangeCharPitch;

  /// @brief Field ChangeLinePitch value: static_cast<int32_t>(0x131)
  static ::System::TermInfoStrings const ChangeLinePitch;

  /// @brief Field ChangeResHorz value: static_cast<int32_t>(0x132)
  static ::System::TermInfoStrings const ChangeResHorz;

  /// @brief Field ChangeResVert value: static_cast<int32_t>(0x133)
  static ::System::TermInfoStrings const ChangeResVert;

  /// @brief Field ChangeScrollRegion value: static_cast<int32_t>(0x3)
  static ::System::TermInfoStrings const ChangeScrollRegion;

  /// @brief Field CharPadding value: static_cast<int32_t>(0x91)
  static ::System::TermInfoStrings const CharPadding;

  /// @brief Field CharSetNames value: static_cast<int32_t>(0x162)
  static ::System::TermInfoStrings const CharSetNames;

  /// @brief Field ClearAllTabs value: static_cast<int32_t>(0x4)
  static ::System::TermInfoStrings const ClearAllTabs;

  /// @brief Field ClearMargins value: static_cast<int32_t>(0x10e)
  static ::System::TermInfoStrings const ClearMargins;

  /// @brief Field ClearScreen value: static_cast<int32_t>(0x5)
  static ::System::TermInfoStrings const ClearScreen;

  /// @brief Field ClrBol value: static_cast<int32_t>(0x10d)
  static ::System::TermInfoStrings const ClrBol;

  /// @brief Field ClrEol value: static_cast<int32_t>(0x6)
  static ::System::TermInfoStrings const ClrEol;

  /// @brief Field ClrEos value: static_cast<int32_t>(0x7)
  static ::System::TermInfoStrings const ClrEos;

  /// @brief Field CodeSetInit value: static_cast<int32_t>(0x16b)
  static ::System::TermInfoStrings const CodeSetInit;

  /// @brief Field ColorNames value: static_cast<int32_t>(0x175)
  static ::System::TermInfoStrings const ColorNames;

  /// @brief Field ColumnAddress value: static_cast<int32_t>(0x8)
  static ::System::TermInfoStrings const ColumnAddress;

  /// @brief Field CommandCharacter value: static_cast<int32_t>(0x9)
  static ::System::TermInfoStrings const CommandCharacter;

  /// @brief Field CreateWindow value: static_cast<int32_t>(0x115)
  static ::System::TermInfoStrings const CreateWindow;

  /// @brief Field CursorAddress value: static_cast<int32_t>(0xa)
  static ::System::TermInfoStrings const CursorAddress;

  /// @brief Field CursorDown value: static_cast<int32_t>(0xb)
  static ::System::TermInfoStrings const CursorDown;

  /// @brief Field CursorHome value: static_cast<int32_t>(0xc)
  static ::System::TermInfoStrings const CursorHome;

  /// @brief Field CursorInvisible value: static_cast<int32_t>(0xd)
  static ::System::TermInfoStrings const CursorInvisible;

  /// @brief Field CursorLeft value: static_cast<int32_t>(0xe)
  static ::System::TermInfoStrings const CursorLeft;

  /// @brief Field CursorMemAddress value: static_cast<int32_t>(0xf)
  static ::System::TermInfoStrings const CursorMemAddress;

  /// @brief Field CursorNormal value: static_cast<int32_t>(0x10)
  static ::System::TermInfoStrings const CursorNormal;

  /// @brief Field CursorRight value: static_cast<int32_t>(0x11)
  static ::System::TermInfoStrings const CursorRight;

  /// @brief Field CursorToLl value: static_cast<int32_t>(0x12)
  static ::System::TermInfoStrings const CursorToLl;

  /// @brief Field CursorUp value: static_cast<int32_t>(0x13)
  static ::System::TermInfoStrings const CursorUp;

  /// @brief Field CursorVisible value: static_cast<int32_t>(0x14)
  static ::System::TermInfoStrings const CursorVisible;

  /// @brief Field DefineBitImageRegion value: static_cast<int32_t>(0x176)
  static ::System::TermInfoStrings const DefineBitImageRegion;

  /// @brief Field DefineChar value: static_cast<int32_t>(0x134)
  static ::System::TermInfoStrings const DefineChar;

  /// @brief Field DeleteCharacter value: static_cast<int32_t>(0x15)
  static ::System::TermInfoStrings const DeleteCharacter;

  /// @brief Field DeleteLine value: static_cast<int32_t>(0x16)
  static ::System::TermInfoStrings const DeleteLine;

  /// @brief Field DeviceType value: static_cast<int32_t>(0x16a)
  static ::System::TermInfoStrings const DeviceType;

  /// @brief Field DialPhone value: static_cast<int32_t>(0x118)
  static ::System::TermInfoStrings const DialPhone;

  /// @brief Field DisStatusLine value: static_cast<int32_t>(0x17)
  static ::System::TermInfoStrings const DisStatusLine;

  /// @brief Field DisplayClock value: static_cast<int32_t>(0x113)
  static ::System::TermInfoStrings const DisplayClock;

  /// @brief Field DisplayPcChar value: static_cast<int32_t>(0x17a)
  static ::System::TermInfoStrings const DisplayPcChar;

  /// @brief Field DownHalfLine value: static_cast<int32_t>(0x18)
  static ::System::TermInfoStrings const DownHalfLine;

  /// @brief Field EnaAcs value: static_cast<int32_t>(0x9b)
  static ::System::TermInfoStrings const EnaAcs;

  /// @brief Field EndBitImageRegion value: static_cast<int32_t>(0x177)
  static ::System::TermInfoStrings const EndBitImageRegion;

  /// @brief Field EnterAltCharsetMode value: static_cast<int32_t>(0x19)
  static ::System::TermInfoStrings const EnterAltCharsetMode;

  /// @brief Field EnterAmMode value: static_cast<int32_t>(0x97)
  static ::System::TermInfoStrings const EnterAmMode;

  /// @brief Field EnterBlinkMode value: static_cast<int32_t>(0x1a)
  static ::System::TermInfoStrings const EnterBlinkMode;

  /// @brief Field EnterBoldMode value: static_cast<int32_t>(0x1b)
  static ::System::TermInfoStrings const EnterBoldMode;

  /// @brief Field EnterCaMode value: static_cast<int32_t>(0x1c)
  static ::System::TermInfoStrings const EnterCaMode;

  /// @brief Field EnterDeleteMode value: static_cast<int32_t>(0x1d)
  static ::System::TermInfoStrings const EnterDeleteMode;

  /// @brief Field EnterDimMode value: static_cast<int32_t>(0x1e)
  static ::System::TermInfoStrings const EnterDimMode;

  /// @brief Field EnterDoublewideMode value: static_cast<int32_t>(0x135)
  static ::System::TermInfoStrings const EnterDoublewideMode;

  /// @brief Field EnterDraftQuality value: static_cast<int32_t>(0x136)
  static ::System::TermInfoStrings const EnterDraftQuality;

  /// @brief Field EnterHorizontalHlMode value: static_cast<int32_t>(0x182)
  static ::System::TermInfoStrings const EnterHorizontalHlMode;

  /// @brief Field EnterInsertMode value: static_cast<int32_t>(0x1f)
  static ::System::TermInfoStrings const EnterInsertMode;

  /// @brief Field EnterItalicsMode value: static_cast<int32_t>(0x137)
  static ::System::TermInfoStrings const EnterItalicsMode;

  /// @brief Field EnterLeftHlMode value: static_cast<int32_t>(0x183)
  static ::System::TermInfoStrings const EnterLeftHlMode;

  /// @brief Field EnterLeftwardMode value: static_cast<int32_t>(0x138)
  static ::System::TermInfoStrings const EnterLeftwardMode;

  /// @brief Field EnterLowHlMode value: static_cast<int32_t>(0x184)
  static ::System::TermInfoStrings const EnterLowHlMode;

  /// @brief Field EnterMicroMode value: static_cast<int32_t>(0x139)
  static ::System::TermInfoStrings const EnterMicroMode;

  /// @brief Field EnterNearLetterQuality value: static_cast<int32_t>(0x13a)
  static ::System::TermInfoStrings const EnterNearLetterQuality;

  /// @brief Field EnterNormalQuality value: static_cast<int32_t>(0x13b)
  static ::System::TermInfoStrings const EnterNormalQuality;

  /// @brief Field EnterPcCharsetMode value: static_cast<int32_t>(0x17b)
  static ::System::TermInfoStrings const EnterPcCharsetMode;

  /// @brief Field EnterProtectedMode value: static_cast<int32_t>(0x21)
  static ::System::TermInfoStrings const EnterProtectedMode;

  /// @brief Field EnterReverseMode value: static_cast<int32_t>(0x22)
  static ::System::TermInfoStrings const EnterReverseMode;

  /// @brief Field EnterRightHlMode value: static_cast<int32_t>(0x185)
  static ::System::TermInfoStrings const EnterRightHlMode;

  /// @brief Field EnterScancodeMode value: static_cast<int32_t>(0x17d)
  static ::System::TermInfoStrings const EnterScancodeMode;

  /// @brief Field EnterSecureMode value: static_cast<int32_t>(0x20)
  static ::System::TermInfoStrings const EnterSecureMode;

  /// @brief Field EnterShadowMode value: static_cast<int32_t>(0x13c)
  static ::System::TermInfoStrings const EnterShadowMode;

  /// @brief Field EnterStandoutMode value: static_cast<int32_t>(0x23)
  static ::System::TermInfoStrings const EnterStandoutMode;

  /// @brief Field EnterSubscriptMode value: static_cast<int32_t>(0x13d)
  static ::System::TermInfoStrings const EnterSubscriptMode;

  /// @brief Field EnterSuperscriptMode value: static_cast<int32_t>(0x13e)
  static ::System::TermInfoStrings const EnterSuperscriptMode;

  /// @brief Field EnterTopHlMode value: static_cast<int32_t>(0x186)
  static ::System::TermInfoStrings const EnterTopHlMode;

  /// @brief Field EnterUnderlineMode value: static_cast<int32_t>(0x24)
  static ::System::TermInfoStrings const EnterUnderlineMode;

  /// @brief Field EnterUpwardMode value: static_cast<int32_t>(0x13f)
  static ::System::TermInfoStrings const EnterUpwardMode;

  /// @brief Field EnterVerticalHlMode value: static_cast<int32_t>(0x187)
  static ::System::TermInfoStrings const EnterVerticalHlMode;

  /// @brief Field EnterXonMode value: static_cast<int32_t>(0x95)
  static ::System::TermInfoStrings const EnterXonMode;

  /// @brief Field EraseChars value: static_cast<int32_t>(0x25)
  static ::System::TermInfoStrings const EraseChars;

  /// @brief Field ExitAltCharsetMode value: static_cast<int32_t>(0x26)
  static ::System::TermInfoStrings const ExitAltCharsetMode;

  /// @brief Field ExitAmMode value: static_cast<int32_t>(0x98)
  static ::System::TermInfoStrings const ExitAmMode;

  /// @brief Field ExitAttributeMode value: static_cast<int32_t>(0x27)
  static ::System::TermInfoStrings const ExitAttributeMode;

  /// @brief Field ExitCaMode value: static_cast<int32_t>(0x28)
  static ::System::TermInfoStrings const ExitCaMode;

  /// @brief Field ExitDeleteMode value: static_cast<int32_t>(0x29)
  static ::System::TermInfoStrings const ExitDeleteMode;

  /// @brief Field ExitDoublewideMode value: static_cast<int32_t>(0x140)
  static ::System::TermInfoStrings const ExitDoublewideMode;

  /// @brief Field ExitInsertMode value: static_cast<int32_t>(0x2a)
  static ::System::TermInfoStrings const ExitInsertMode;

  /// @brief Field ExitItalicsMode value: static_cast<int32_t>(0x141)
  static ::System::TermInfoStrings const ExitItalicsMode;

  /// @brief Field ExitLeftwardMode value: static_cast<int32_t>(0x142)
  static ::System::TermInfoStrings const ExitLeftwardMode;

  /// @brief Field ExitMicroMode value: static_cast<int32_t>(0x143)
  static ::System::TermInfoStrings const ExitMicroMode;

  /// @brief Field ExitPcCharsetMode value: static_cast<int32_t>(0x17c)
  static ::System::TermInfoStrings const ExitPcCharsetMode;

  /// @brief Field ExitScancodeMode value: static_cast<int32_t>(0x17e)
  static ::System::TermInfoStrings const ExitScancodeMode;

  /// @brief Field ExitShadowMode value: static_cast<int32_t>(0x144)
  static ::System::TermInfoStrings const ExitShadowMode;

  /// @brief Field ExitStandoutMode value: static_cast<int32_t>(0x2b)
  static ::System::TermInfoStrings const ExitStandoutMode;

  /// @brief Field ExitSubscriptMode value: static_cast<int32_t>(0x145)
  static ::System::TermInfoStrings const ExitSubscriptMode;

  /// @brief Field ExitSuperscriptMode value: static_cast<int32_t>(0x146)
  static ::System::TermInfoStrings const ExitSuperscriptMode;

  /// @brief Field ExitUnderlineMode value: static_cast<int32_t>(0x2c)
  static ::System::TermInfoStrings const ExitUnderlineMode;

  /// @brief Field ExitUpwardMode value: static_cast<int32_t>(0x147)
  static ::System::TermInfoStrings const ExitUpwardMode;

  /// @brief Field ExitXonMode value: static_cast<int32_t>(0x96)
  static ::System::TermInfoStrings const ExitXonMode;

  /// @brief Field FixedPause value: static_cast<int32_t>(0x11d)
  static ::System::TermInfoStrings const FixedPause;

  /// @brief Field FlashHook value: static_cast<int32_t>(0x11c)
  static ::System::TermInfoStrings const FlashHook;

  /// @brief Field FlashScreen value: static_cast<int32_t>(0x2d)
  static ::System::TermInfoStrings const FlashScreen;

  /// @brief Field FormFeed value: static_cast<int32_t>(0x2e)
  static ::System::TermInfoStrings const FormFeed;

  /// @brief Field FromStatusLine value: static_cast<int32_t>(0x2f)
  static ::System::TermInfoStrings const FromStatusLine;

  /// @brief Field GetMouse value: static_cast<int32_t>(0x166)
  static ::System::TermInfoStrings const GetMouse;

  /// @brief Field GotoWindow value: static_cast<int32_t>(0x116)
  static ::System::TermInfoStrings const GotoWindow;

  /// @brief Field Hangup value: static_cast<int32_t>(0x117)
  static ::System::TermInfoStrings const Hangup;

  /// @brief Field Init1string value: static_cast<int32_t>(0x30)
  static ::System::TermInfoStrings const Init1string;

  /// @brief Field Init2string value: static_cast<int32_t>(0x31)
  static ::System::TermInfoStrings const Init2string;

  /// @brief Field Init3string value: static_cast<int32_t>(0x32)
  static ::System::TermInfoStrings const Init3string;

  /// @brief Field InitFile value: static_cast<int32_t>(0x33)
  static ::System::TermInfoStrings const InitFile;

  /// @brief Field InitProg value: static_cast<int32_t>(0x8a)
  static ::System::TermInfoStrings const InitProg;

  /// @brief Field InitializeColor value: static_cast<int32_t>(0x12b)
  static ::System::TermInfoStrings const InitializeColor;

  /// @brief Field InitializePair value: static_cast<int32_t>(0x12c)
  static ::System::TermInfoStrings const InitializePair;

  /// @brief Field InsertCharacter value: static_cast<int32_t>(0x34)
  static ::System::TermInfoStrings const InsertCharacter;

  /// @brief Field InsertLine value: static_cast<int32_t>(0x35)
  static ::System::TermInfoStrings const InsertLine;

  /// @brief Field InsertPadding value: static_cast<int32_t>(0x36)
  static ::System::TermInfoStrings const InsertPadding;

  /// @brief Field KeyA1 value: static_cast<int32_t>(0x8b)
  static ::System::TermInfoStrings const KeyA1;

  /// @brief Field KeyA3 value: static_cast<int32_t>(0x8c)
  static ::System::TermInfoStrings const KeyA3;

  /// @brief Field KeyB2 value: static_cast<int32_t>(0x8d)
  static ::System::TermInfoStrings const KeyB2;

  /// @brief Field KeyBackspace value: static_cast<int32_t>(0x37)
  static ::System::TermInfoStrings const KeyBackspace;

  /// @brief Field KeyBeg value: static_cast<int32_t>(0x9e)
  static ::System::TermInfoStrings const KeyBeg;

  /// @brief Field KeyBtab value: static_cast<int32_t>(0x94)
  static ::System::TermInfoStrings const KeyBtab;

  /// @brief Field KeyC1 value: static_cast<int32_t>(0x8e)
  static ::System::TermInfoStrings const KeyC1;

  /// @brief Field KeyC3 value: static_cast<int32_t>(0x8f)
  static ::System::TermInfoStrings const KeyC3;

  /// @brief Field KeyCancel value: static_cast<int32_t>(0x9f)
  static ::System::TermInfoStrings const KeyCancel;

  /// @brief Field KeyCatab value: static_cast<int32_t>(0x38)
  static ::System::TermInfoStrings const KeyCatab;

  /// @brief Field KeyClear value: static_cast<int32_t>(0x39)
  static ::System::TermInfoStrings const KeyClear;

  /// @brief Field KeyClose value: static_cast<int32_t>(0xa0)
  static ::System::TermInfoStrings const KeyClose;

  /// @brief Field KeyCommand value: static_cast<int32_t>(0xa1)
  static ::System::TermInfoStrings const KeyCommand;

  /// @brief Field KeyCopy value: static_cast<int32_t>(0xa2)
  static ::System::TermInfoStrings const KeyCopy;

  /// @brief Field KeyCreate value: static_cast<int32_t>(0xa3)
  static ::System::TermInfoStrings const KeyCreate;

  /// @brief Field KeyCtab value: static_cast<int32_t>(0x3a)
  static ::System::TermInfoStrings const KeyCtab;

  /// @brief Field KeyDc value: static_cast<int32_t>(0x3b)
  static ::System::TermInfoStrings const KeyDc;

  /// @brief Field KeyDl value: static_cast<int32_t>(0x3c)
  static ::System::TermInfoStrings const KeyDl;

  /// @brief Field KeyDown value: static_cast<int32_t>(0x3d)
  static ::System::TermInfoStrings const KeyDown;

  /// @brief Field KeyEic value: static_cast<int32_t>(0x3e)
  static ::System::TermInfoStrings const KeyEic;

  /// @brief Field KeyEnd value: static_cast<int32_t>(0xa4)
  static ::System::TermInfoStrings const KeyEnd;

  /// @brief Field KeyEnter value: static_cast<int32_t>(0xa5)
  static ::System::TermInfoStrings const KeyEnter;

  /// @brief Field KeyEol value: static_cast<int32_t>(0x3f)
  static ::System::TermInfoStrings const KeyEol;

  /// @brief Field KeyEos value: static_cast<int32_t>(0x40)
  static ::System::TermInfoStrings const KeyEos;

  /// @brief Field KeyExit value: static_cast<int32_t>(0xa6)
  static ::System::TermInfoStrings const KeyExit;

  /// @brief Field KeyF0 value: static_cast<int32_t>(0x41)
  static ::System::TermInfoStrings const KeyF0;

  /// @brief Field KeyF1 value: static_cast<int32_t>(0x42)
  static ::System::TermInfoStrings const KeyF1;

  /// @brief Field KeyF10 value: static_cast<int32_t>(0x43)
  static ::System::TermInfoStrings const KeyF10;

  /// @brief Field KeyF11 value: static_cast<int32_t>(0xd8)
  static ::System::TermInfoStrings const KeyF11;

  /// @brief Field KeyF12 value: static_cast<int32_t>(0xd9)
  static ::System::TermInfoStrings const KeyF12;

  /// @brief Field KeyF13 value: static_cast<int32_t>(0xda)
  static ::System::TermInfoStrings const KeyF13;

  /// @brief Field KeyF14 value: static_cast<int32_t>(0xdb)
  static ::System::TermInfoStrings const KeyF14;

  /// @brief Field KeyF15 value: static_cast<int32_t>(0xdc)
  static ::System::TermInfoStrings const KeyF15;

  /// @brief Field KeyF16 value: static_cast<int32_t>(0xdd)
  static ::System::TermInfoStrings const KeyF16;

  /// @brief Field KeyF17 value: static_cast<int32_t>(0xde)
  static ::System::TermInfoStrings const KeyF17;

  /// @brief Field KeyF18 value: static_cast<int32_t>(0xdf)
  static ::System::TermInfoStrings const KeyF18;

  /// @brief Field KeyF19 value: static_cast<int32_t>(0xe0)
  static ::System::TermInfoStrings const KeyF19;

  /// @brief Field KeyF2 value: static_cast<int32_t>(0x44)
  static ::System::TermInfoStrings const KeyF2;

  /// @brief Field KeyF20 value: static_cast<int32_t>(0xe1)
  static ::System::TermInfoStrings const KeyF20;

  /// @brief Field KeyF21 value: static_cast<int32_t>(0xe2)
  static ::System::TermInfoStrings const KeyF21;

  /// @brief Field KeyF22 value: static_cast<int32_t>(0xe3)
  static ::System::TermInfoStrings const KeyF22;

  /// @brief Field KeyF23 value: static_cast<int32_t>(0xe4)
  static ::System::TermInfoStrings const KeyF23;

  /// @brief Field KeyF24 value: static_cast<int32_t>(0xe5)
  static ::System::TermInfoStrings const KeyF24;

  /// @brief Field KeyF25 value: static_cast<int32_t>(0xe6)
  static ::System::TermInfoStrings const KeyF25;

  /// @brief Field KeyF26 value: static_cast<int32_t>(0xe7)
  static ::System::TermInfoStrings const KeyF26;

  /// @brief Field KeyF27 value: static_cast<int32_t>(0xe8)
  static ::System::TermInfoStrings const KeyF27;

  /// @brief Field KeyF28 value: static_cast<int32_t>(0xe9)
  static ::System::TermInfoStrings const KeyF28;

  /// @brief Field KeyF29 value: static_cast<int32_t>(0xea)
  static ::System::TermInfoStrings const KeyF29;

  /// @brief Field KeyF3 value: static_cast<int32_t>(0x45)
  static ::System::TermInfoStrings const KeyF3;

  /// @brief Field KeyF30 value: static_cast<int32_t>(0xeb)
  static ::System::TermInfoStrings const KeyF30;

  /// @brief Field KeyF31 value: static_cast<int32_t>(0xec)
  static ::System::TermInfoStrings const KeyF31;

  /// @brief Field KeyF32 value: static_cast<int32_t>(0xed)
  static ::System::TermInfoStrings const KeyF32;

  /// @brief Field KeyF33 value: static_cast<int32_t>(0xee)
  static ::System::TermInfoStrings const KeyF33;

  /// @brief Field KeyF34 value: static_cast<int32_t>(0xef)
  static ::System::TermInfoStrings const KeyF34;

  /// @brief Field KeyF35 value: static_cast<int32_t>(0xf0)
  static ::System::TermInfoStrings const KeyF35;

  /// @brief Field KeyF36 value: static_cast<int32_t>(0xf1)
  static ::System::TermInfoStrings const KeyF36;

  /// @brief Field KeyF37 value: static_cast<int32_t>(0xf2)
  static ::System::TermInfoStrings const KeyF37;

  /// @brief Field KeyF38 value: static_cast<int32_t>(0xf3)
  static ::System::TermInfoStrings const KeyF38;

  /// @brief Field KeyF39 value: static_cast<int32_t>(0xf4)
  static ::System::TermInfoStrings const KeyF39;

  /// @brief Field KeyF4 value: static_cast<int32_t>(0x46)
  static ::System::TermInfoStrings const KeyF4;

  /// @brief Field KeyF40 value: static_cast<int32_t>(0xf5)
  static ::System::TermInfoStrings const KeyF40;

  /// @brief Field KeyF41 value: static_cast<int32_t>(0xf6)
  static ::System::TermInfoStrings const KeyF41;

  /// @brief Field KeyF42 value: static_cast<int32_t>(0xf7)
  static ::System::TermInfoStrings const KeyF42;

  /// @brief Field KeyF43 value: static_cast<int32_t>(0xf8)
  static ::System::TermInfoStrings const KeyF43;

  /// @brief Field KeyF44 value: static_cast<int32_t>(0xf9)
  static ::System::TermInfoStrings const KeyF44;

  /// @brief Field KeyF45 value: static_cast<int32_t>(0xfa)
  static ::System::TermInfoStrings const KeyF45;

  /// @brief Field KeyF46 value: static_cast<int32_t>(0xfb)
  static ::System::TermInfoStrings const KeyF46;

  /// @brief Field KeyF47 value: static_cast<int32_t>(0xfc)
  static ::System::TermInfoStrings const KeyF47;

  /// @brief Field KeyF48 value: static_cast<int32_t>(0xfd)
  static ::System::TermInfoStrings const KeyF48;

  /// @brief Field KeyF49 value: static_cast<int32_t>(0xfe)
  static ::System::TermInfoStrings const KeyF49;

  /// @brief Field KeyF5 value: static_cast<int32_t>(0x47)
  static ::System::TermInfoStrings const KeyF5;

  /// @brief Field KeyF50 value: static_cast<int32_t>(0xff)
  static ::System::TermInfoStrings const KeyF50;

  /// @brief Field KeyF51 value: static_cast<int32_t>(0x100)
  static ::System::TermInfoStrings const KeyF51;

  /// @brief Field KeyF52 value: static_cast<int32_t>(0x101)
  static ::System::TermInfoStrings const KeyF52;

  /// @brief Field KeyF53 value: static_cast<int32_t>(0x102)
  static ::System::TermInfoStrings const KeyF53;

  /// @brief Field KeyF54 value: static_cast<int32_t>(0x103)
  static ::System::TermInfoStrings const KeyF54;

  /// @brief Field KeyF55 value: static_cast<int32_t>(0x104)
  static ::System::TermInfoStrings const KeyF55;

  /// @brief Field KeyF56 value: static_cast<int32_t>(0x105)
  static ::System::TermInfoStrings const KeyF56;

  /// @brief Field KeyF57 value: static_cast<int32_t>(0x106)
  static ::System::TermInfoStrings const KeyF57;

  /// @brief Field KeyF58 value: static_cast<int32_t>(0x107)
  static ::System::TermInfoStrings const KeyF58;

  /// @brief Field KeyF59 value: static_cast<int32_t>(0x108)
  static ::System::TermInfoStrings const KeyF59;

  /// @brief Field KeyF6 value: static_cast<int32_t>(0x48)
  static ::System::TermInfoStrings const KeyF6;

  /// @brief Field KeyF60 value: static_cast<int32_t>(0x109)
  static ::System::TermInfoStrings const KeyF60;

  /// @brief Field KeyF61 value: static_cast<int32_t>(0x10a)
  static ::System::TermInfoStrings const KeyF61;

  /// @brief Field KeyF62 value: static_cast<int32_t>(0x10b)
  static ::System::TermInfoStrings const KeyF62;

  /// @brief Field KeyF63 value: static_cast<int32_t>(0x10c)
  static ::System::TermInfoStrings const KeyF63;

  /// @brief Field KeyF7 value: static_cast<int32_t>(0x49)
  static ::System::TermInfoStrings const KeyF7;

  /// @brief Field KeyF8 value: static_cast<int32_t>(0x4a)
  static ::System::TermInfoStrings const KeyF8;

  /// @brief Field KeyF9 value: static_cast<int32_t>(0x4b)
  static ::System::TermInfoStrings const KeyF9;

  /// @brief Field KeyFind value: static_cast<int32_t>(0xa7)
  static ::System::TermInfoStrings const KeyFind;

  /// @brief Field KeyHelp value: static_cast<int32_t>(0xa8)
  static ::System::TermInfoStrings const KeyHelp;

  /// @brief Field KeyHome value: static_cast<int32_t>(0x4c)
  static ::System::TermInfoStrings const KeyHome;

  /// @brief Field KeyIc value: static_cast<int32_t>(0x4d)
  static ::System::TermInfoStrings const KeyIc;

  /// @brief Field KeyIl value: static_cast<int32_t>(0x4e)
  static ::System::TermInfoStrings const KeyIl;

  /// @brief Field KeyLeft value: static_cast<int32_t>(0x4f)
  static ::System::TermInfoStrings const KeyLeft;

  /// @brief Field KeyLl value: static_cast<int32_t>(0x50)
  static ::System::TermInfoStrings const KeyLl;

  /// @brief Field KeyMark value: static_cast<int32_t>(0xa9)
  static ::System::TermInfoStrings const KeyMark;

  /// @brief Field KeyMessage value: static_cast<int32_t>(0xaa)
  static ::System::TermInfoStrings const KeyMessage;

  /// @brief Field KeyMouse value: static_cast<int32_t>(0x163)
  static ::System::TermInfoStrings const KeyMouse;

  /// @brief Field KeyMove value: static_cast<int32_t>(0xab)
  static ::System::TermInfoStrings const KeyMove;

  /// @brief Field KeyNext value: static_cast<int32_t>(0xac)
  static ::System::TermInfoStrings const KeyNext;

  /// @brief Field KeyNpage value: static_cast<int32_t>(0x51)
  static ::System::TermInfoStrings const KeyNpage;

  /// @brief Field KeyOpen value: static_cast<int32_t>(0xad)
  static ::System::TermInfoStrings const KeyOpen;

  /// @brief Field KeyOptions value: static_cast<int32_t>(0xae)
  static ::System::TermInfoStrings const KeyOptions;

  /// @brief Field KeyPpage value: static_cast<int32_t>(0x52)
  static ::System::TermInfoStrings const KeyPpage;

  /// @brief Field KeyPrevious value: static_cast<int32_t>(0xaf)
  static ::System::TermInfoStrings const KeyPrevious;

  /// @brief Field KeyPrint value: static_cast<int32_t>(0xb0)
  static ::System::TermInfoStrings const KeyPrint;

  /// @brief Field KeyRedo value: static_cast<int32_t>(0xb1)
  static ::System::TermInfoStrings const KeyRedo;

  /// @brief Field KeyReference value: static_cast<int32_t>(0xb2)
  static ::System::TermInfoStrings const KeyReference;

  /// @brief Field KeyRefresh value: static_cast<int32_t>(0xb3)
  static ::System::TermInfoStrings const KeyRefresh;

  /// @brief Field KeyReplace value: static_cast<int32_t>(0xb4)
  static ::System::TermInfoStrings const KeyReplace;

  /// @brief Field KeyRestart value: static_cast<int32_t>(0xb5)
  static ::System::TermInfoStrings const KeyRestart;

  /// @brief Field KeyResume value: static_cast<int32_t>(0xb6)
  static ::System::TermInfoStrings const KeyResume;

  /// @brief Field KeyRight value: static_cast<int32_t>(0x53)
  static ::System::TermInfoStrings const KeyRight;

  /// @brief Field KeySave value: static_cast<int32_t>(0xb7)
  static ::System::TermInfoStrings const KeySave;

  /// @brief Field KeySbeg value: static_cast<int32_t>(0xba)
  static ::System::TermInfoStrings const KeySbeg;

  /// @brief Field KeyScancel value: static_cast<int32_t>(0xbb)
  static ::System::TermInfoStrings const KeyScancel;

  /// @brief Field KeyScommand value: static_cast<int32_t>(0xbc)
  static ::System::TermInfoStrings const KeyScommand;

  /// @brief Field KeyScopy value: static_cast<int32_t>(0xbd)
  static ::System::TermInfoStrings const KeyScopy;

  /// @brief Field KeyScreate value: static_cast<int32_t>(0xbe)
  static ::System::TermInfoStrings const KeyScreate;

  /// @brief Field KeySdc value: static_cast<int32_t>(0xbf)
  static ::System::TermInfoStrings const KeySdc;

  /// @brief Field KeySdl value: static_cast<int32_t>(0xc0)
  static ::System::TermInfoStrings const KeySdl;

  /// @brief Field KeySelect value: static_cast<int32_t>(0xc1)
  static ::System::TermInfoStrings const KeySelect;

  /// @brief Field KeySend value: static_cast<int32_t>(0xc2)
  static ::System::TermInfoStrings const KeySend;

  /// @brief Field KeySeol value: static_cast<int32_t>(0xc3)
  static ::System::TermInfoStrings const KeySeol;

  /// @brief Field KeySexit value: static_cast<int32_t>(0xc4)
  static ::System::TermInfoStrings const KeySexit;

  /// @brief Field KeySf value: static_cast<int32_t>(0x54)
  static ::System::TermInfoStrings const KeySf;

  /// @brief Field KeySfind value: static_cast<int32_t>(0xc5)
  static ::System::TermInfoStrings const KeySfind;

  /// @brief Field KeyShelp value: static_cast<int32_t>(0xc6)
  static ::System::TermInfoStrings const KeyShelp;

  /// @brief Field KeyShome value: static_cast<int32_t>(0xc7)
  static ::System::TermInfoStrings const KeyShome;

  /// @brief Field KeySic value: static_cast<int32_t>(0xc8)
  static ::System::TermInfoStrings const KeySic;

  /// @brief Field KeySleft value: static_cast<int32_t>(0xc9)
  static ::System::TermInfoStrings const KeySleft;

  /// @brief Field KeySmessage value: static_cast<int32_t>(0xca)
  static ::System::TermInfoStrings const KeySmessage;

  /// @brief Field KeySmove value: static_cast<int32_t>(0xcb)
  static ::System::TermInfoStrings const KeySmove;

  /// @brief Field KeySnext value: static_cast<int32_t>(0xcc)
  static ::System::TermInfoStrings const KeySnext;

  /// @brief Field KeySoptions value: static_cast<int32_t>(0xcd)
  static ::System::TermInfoStrings const KeySoptions;

  /// @brief Field KeySprevious value: static_cast<int32_t>(0xce)
  static ::System::TermInfoStrings const KeySprevious;

  /// @brief Field KeySprint value: static_cast<int32_t>(0xcf)
  static ::System::TermInfoStrings const KeySprint;

  /// @brief Field KeySr value: static_cast<int32_t>(0x55)
  static ::System::TermInfoStrings const KeySr;

  /// @brief Field KeySredo value: static_cast<int32_t>(0xd0)
  static ::System::TermInfoStrings const KeySredo;

  /// @brief Field KeySreplace value: static_cast<int32_t>(0xd1)
  static ::System::TermInfoStrings const KeySreplace;

  /// @brief Field KeySright value: static_cast<int32_t>(0xd2)
  static ::System::TermInfoStrings const KeySright;

  /// @brief Field KeySrsume value: static_cast<int32_t>(0xd3)
  static ::System::TermInfoStrings const KeySrsume;

  /// @brief Field KeySsave value: static_cast<int32_t>(0xd4)
  static ::System::TermInfoStrings const KeySsave;

  /// @brief Field KeySsuspend value: static_cast<int32_t>(0xd5)
  static ::System::TermInfoStrings const KeySsuspend;

  /// @brief Field KeyStab value: static_cast<int32_t>(0x56)
  static ::System::TermInfoStrings const KeyStab;

  /// @brief Field KeySundo value: static_cast<int32_t>(0xd6)
  static ::System::TermInfoStrings const KeySundo;

  /// @brief Field KeySuspend value: static_cast<int32_t>(0xb8)
  static ::System::TermInfoStrings const KeySuspend;

  /// @brief Field KeyUndo value: static_cast<int32_t>(0xb9)
  static ::System::TermInfoStrings const KeyUndo;

  /// @brief Field KeyUp value: static_cast<int32_t>(0x57)
  static ::System::TermInfoStrings const KeyUp;

  /// @brief Field KeypadLocal value: static_cast<int32_t>(0x58)
  static ::System::TermInfoStrings const KeypadLocal;

  /// @brief Field KeypadXmit value: static_cast<int32_t>(0x59)
  static ::System::TermInfoStrings const KeypadXmit;

  /// @brief Field LabF0 value: static_cast<int32_t>(0x5a)
  static ::System::TermInfoStrings const LabF0;

  /// @brief Field LabF1 value: static_cast<int32_t>(0x5b)
  static ::System::TermInfoStrings const LabF1;

  /// @brief Field LabF10 value: static_cast<int32_t>(0x5c)
  static ::System::TermInfoStrings const LabF10;

  /// @brief Field LabF2 value: static_cast<int32_t>(0x5d)
  static ::System::TermInfoStrings const LabF2;

  /// @brief Field LabF3 value: static_cast<int32_t>(0x5e)
  static ::System::TermInfoStrings const LabF3;

  /// @brief Field LabF4 value: static_cast<int32_t>(0x5f)
  static ::System::TermInfoStrings const LabF4;

  /// @brief Field LabF5 value: static_cast<int32_t>(0x60)
  static ::System::TermInfoStrings const LabF5;

  /// @brief Field LabF6 value: static_cast<int32_t>(0x61)
  static ::System::TermInfoStrings const LabF6;

  /// @brief Field LabF7 value: static_cast<int32_t>(0x62)
  static ::System::TermInfoStrings const LabF7;

  /// @brief Field LabF8 value: static_cast<int32_t>(0x63)
  static ::System::TermInfoStrings const LabF8;

  /// @brief Field LabF9 value: static_cast<int32_t>(0x64)
  static ::System::TermInfoStrings const LabF9;

  /// @brief Field LabelFormat value: static_cast<int32_t>(0x111)
  static ::System::TermInfoStrings const LabelFormat;

  /// @brief Field LabelOff value: static_cast<int32_t>(0x9d)
  static ::System::TermInfoStrings const LabelOff;

  /// @brief Field LabelOn value: static_cast<int32_t>(0x9c)
  static ::System::TermInfoStrings const LabelOn;

  /// @brief Field Last value: static_cast<int32_t>(0x18a)
  static ::System::TermInfoStrings const Last;

  /// @brief Field MetaOff value: static_cast<int32_t>(0x65)
  static ::System::TermInfoStrings const MetaOff;

  /// @brief Field MetaOn value: static_cast<int32_t>(0x66)
  static ::System::TermInfoStrings const MetaOn;

  /// @brief Field MicroColumnAddress value: static_cast<int32_t>(0x148)
  static ::System::TermInfoStrings const MicroColumnAddress;

  /// @brief Field MicroDown value: static_cast<int32_t>(0x149)
  static ::System::TermInfoStrings const MicroDown;

  /// @brief Field MicroLeft value: static_cast<int32_t>(0x14a)
  static ::System::TermInfoStrings const MicroLeft;

  /// @brief Field MicroRight value: static_cast<int32_t>(0x14b)
  static ::System::TermInfoStrings const MicroRight;

  /// @brief Field MicroRowAddress value: static_cast<int32_t>(0x14c)
  static ::System::TermInfoStrings const MicroRowAddress;

  /// @brief Field MicroUp value: static_cast<int32_t>(0x14d)
  static ::System::TermInfoStrings const MicroUp;

  /// @brief Field MouseInfo value: static_cast<int32_t>(0x164)
  static ::System::TermInfoStrings const MouseInfo;

  /// @brief Field Newline value: static_cast<int32_t>(0x67)
  static ::System::TermInfoStrings const Newline;

  /// @brief Field OrderOfPins value: static_cast<int32_t>(0x14e)
  static ::System::TermInfoStrings const OrderOfPins;

  /// @brief Field OrigColors value: static_cast<int32_t>(0x12a)
  static ::System::TermInfoStrings const OrigColors;

  /// @brief Field OrigPair value: static_cast<int32_t>(0x129)
  static ::System::TermInfoStrings const OrigPair;

  /// @brief Field PadChar value: static_cast<int32_t>(0x68)
  static ::System::TermInfoStrings const PadChar;

  /// @brief Field ParmDch value: static_cast<int32_t>(0x69)
  static ::System::TermInfoStrings const ParmDch;

  /// @brief Field ParmDeleteLine value: static_cast<int32_t>(0x6a)
  static ::System::TermInfoStrings const ParmDeleteLine;

  /// @brief Field ParmDownCursor value: static_cast<int32_t>(0x6b)
  static ::System::TermInfoStrings const ParmDownCursor;

  /// @brief Field ParmDownMicro value: static_cast<int32_t>(0x14f)
  static ::System::TermInfoStrings const ParmDownMicro;

  /// @brief Field ParmIch value: static_cast<int32_t>(0x6c)
  static ::System::TermInfoStrings const ParmIch;

  /// @brief Field ParmIndex value: static_cast<int32_t>(0x6d)
  static ::System::TermInfoStrings const ParmIndex;

  /// @brief Field ParmInsertLine value: static_cast<int32_t>(0x6e)
  static ::System::TermInfoStrings const ParmInsertLine;

  /// @brief Field ParmLeftCursor value: static_cast<int32_t>(0x6f)
  static ::System::TermInfoStrings const ParmLeftCursor;

  /// @brief Field ParmLeftMicro value: static_cast<int32_t>(0x150)
  static ::System::TermInfoStrings const ParmLeftMicro;

  /// @brief Field ParmRightCursor value: static_cast<int32_t>(0x70)
  static ::System::TermInfoStrings const ParmRightCursor;

  /// @brief Field ParmRightMicro value: static_cast<int32_t>(0x151)
  static ::System::TermInfoStrings const ParmRightMicro;

  /// @brief Field ParmRindex value: static_cast<int32_t>(0x71)
  static ::System::TermInfoStrings const ParmRindex;

  /// @brief Field ParmUpCursor value: static_cast<int32_t>(0x72)
  static ::System::TermInfoStrings const ParmUpCursor;

  /// @brief Field ParmUpMicro value: static_cast<int32_t>(0x152)
  static ::System::TermInfoStrings const ParmUpMicro;

  /// @brief Field PcTermOptions value: static_cast<int32_t>(0x17f)
  static ::System::TermInfoStrings const PcTermOptions;

  /// @brief Field PkeyKey value: static_cast<int32_t>(0x73)
  static ::System::TermInfoStrings const PkeyKey;

  /// @brief Field PkeyLocal value: static_cast<int32_t>(0x74)
  static ::System::TermInfoStrings const PkeyLocal;

  /// @brief Field PkeyPlab value: static_cast<int32_t>(0x169)
  static ::System::TermInfoStrings const PkeyPlab;

  /// @brief Field PkeyXmit value: static_cast<int32_t>(0x75)
  static ::System::TermInfoStrings const PkeyXmit;

  /// @brief Field PlabNorm value: static_cast<int32_t>(0x93)
  static ::System::TermInfoStrings const PlabNorm;

  /// @brief Field PrintScreen value: static_cast<int32_t>(0x76)
  static ::System::TermInfoStrings const PrintScreen;

  /// @brief Field PrtrNon value: static_cast<int32_t>(0x90)
  static ::System::TermInfoStrings const PrtrNon;

  /// @brief Field PrtrOff value: static_cast<int32_t>(0x77)
  static ::System::TermInfoStrings const PrtrOff;

  /// @brief Field PrtrOn value: static_cast<int32_t>(0x78)
  static ::System::TermInfoStrings const PrtrOn;

  /// @brief Field Pulse value: static_cast<int32_t>(0x11b)
  static ::System::TermInfoStrings const Pulse;

  /// @brief Field QuickDial value: static_cast<int32_t>(0x119)
  static ::System::TermInfoStrings const QuickDial;

  /// @brief Field RemoveClock value: static_cast<int32_t>(0x114)
  static ::System::TermInfoStrings const RemoveClock;

  /// @brief Field RepeatChar value: static_cast<int32_t>(0x79)
  static ::System::TermInfoStrings const RepeatChar;

  /// @brief Field ReqForInput value: static_cast<int32_t>(0xd7)
  static ::System::TermInfoStrings const ReqForInput;

  /// @brief Field ReqMousePos value: static_cast<int32_t>(0x165)
  static ::System::TermInfoStrings const ReqMousePos;

  /// @brief Field Reset1string value: static_cast<int32_t>(0x7a)
  static ::System::TermInfoStrings const Reset1string;

  /// @brief Field Reset2string value: static_cast<int32_t>(0x7b)
  static ::System::TermInfoStrings const Reset2string;

  /// @brief Field Reset3string value: static_cast<int32_t>(0x7c)
  static ::System::TermInfoStrings const Reset3string;

  /// @brief Field ResetFile value: static_cast<int32_t>(0x7d)
  static ::System::TermInfoStrings const ResetFile;

  /// @brief Field RestoreCursor value: static_cast<int32_t>(0x7e)
  static ::System::TermInfoStrings const RestoreCursor;

  /// @brief Field RowAddress value: static_cast<int32_t>(0x7f)
  static ::System::TermInfoStrings const RowAddress;

  /// @brief Field SaveCursor value: static_cast<int32_t>(0x80)
  static ::System::TermInfoStrings const SaveCursor;

  /// @brief Field ScancodeEscape value: static_cast<int32_t>(0x180)
  static ::System::TermInfoStrings const ScancodeEscape;

  /// @brief Field ScrollForward value: static_cast<int32_t>(0x81)
  static ::System::TermInfoStrings const ScrollForward;

  /// @brief Field ScrollReverse value: static_cast<int32_t>(0x82)
  static ::System::TermInfoStrings const ScrollReverse;

  /// @brief Field SelectCharSet value: static_cast<int32_t>(0x153)
  static ::System::TermInfoStrings const SelectCharSet;

  /// @brief Field Set0DesSeq value: static_cast<int32_t>(0x16c)
  static ::System::TermInfoStrings const Set0DesSeq;

  /// @brief Field Set1DesSeq value: static_cast<int32_t>(0x16d)
  static ::System::TermInfoStrings const Set1DesSeq;

  /// @brief Field Set2DesSeq value: static_cast<int32_t>(0x16e)
  static ::System::TermInfoStrings const Set2DesSeq;

  /// @brief Field Set3DesSeq value: static_cast<int32_t>(0x16f)
  static ::System::TermInfoStrings const Set3DesSeq;

  /// @brief Field SetAAttributes value: static_cast<int32_t>(0x188)
  static ::System::TermInfoStrings const SetAAttributes;

  /// @brief Field SetABackground value: static_cast<int32_t>(0x168)
  static ::System::TermInfoStrings const SetABackground;

  /// @brief Field SetAForeground value: static_cast<int32_t>(0x167)
  static ::System::TermInfoStrings const SetAForeground;

  /// @brief Field SetAttributes value: static_cast<int32_t>(0x83)
  static ::System::TermInfoStrings const SetAttributes;

  /// @brief Field SetBackground value: static_cast<int32_t>(0x12f)
  static ::System::TermInfoStrings const SetBackground;

  /// @brief Field SetBottomMargin value: static_cast<int32_t>(0x154)
  static ::System::TermInfoStrings const SetBottomMargin;

  /// @brief Field SetBottomMarginParm value: static_cast<int32_t>(0x155)
  static ::System::TermInfoStrings const SetBottomMarginParm;

  /// @brief Field SetClock value: static_cast<int32_t>(0x112)
  static ::System::TermInfoStrings const SetClock;

  /// @brief Field SetColorBand value: static_cast<int32_t>(0x178)
  static ::System::TermInfoStrings const SetColorBand;

  /// @brief Field SetColorPair value: static_cast<int32_t>(0x12d)
  static ::System::TermInfoStrings const SetColorPair;

  /// @brief Field SetForeground value: static_cast<int32_t>(0x12e)
  static ::System::TermInfoStrings const SetForeground;

  /// @brief Field SetLeftMargin value: static_cast<int32_t>(0x10f)
  static ::System::TermInfoStrings const SetLeftMargin;

  /// @brief Field SetLeftMarginParm value: static_cast<int32_t>(0x156)
  static ::System::TermInfoStrings const SetLeftMarginParm;

  /// @brief Field SetLrMargin value: static_cast<int32_t>(0x170)
  static ::System::TermInfoStrings const SetLrMargin;

  /// @brief Field SetPageLength value: static_cast<int32_t>(0x179)
  static ::System::TermInfoStrings const SetPageLength;

  /// @brief Field SetPglenInch value: static_cast<int32_t>(0x189)
  static ::System::TermInfoStrings const SetPglenInch;

  /// @brief Field SetRightMargin value: static_cast<int32_t>(0x110)
  static ::System::TermInfoStrings const SetRightMargin;

  /// @brief Field SetRightMarginParm value: static_cast<int32_t>(0x157)
  static ::System::TermInfoStrings const SetRightMarginParm;

  /// @brief Field SetTab value: static_cast<int32_t>(0x84)
  static ::System::TermInfoStrings const SetTab;

  /// @brief Field SetTbMargin value: static_cast<int32_t>(0x171)
  static ::System::TermInfoStrings const SetTbMargin;

  /// @brief Field SetTopMargin value: static_cast<int32_t>(0x158)
  static ::System::TermInfoStrings const SetTopMargin;

  /// @brief Field SetTopMarginParm value: static_cast<int32_t>(0x159)
  static ::System::TermInfoStrings const SetTopMarginParm;

  /// @brief Field SetWindow value: static_cast<int32_t>(0x85)
  static ::System::TermInfoStrings const SetWindow;

  /// @brief Field StartBitImage value: static_cast<int32_t>(0x15a)
  static ::System::TermInfoStrings const StartBitImage;

  /// @brief Field StartCharSetDef value: static_cast<int32_t>(0x15b)
  static ::System::TermInfoStrings const StartCharSetDef;

  /// @brief Field StopBitImage value: static_cast<int32_t>(0x15c)
  static ::System::TermInfoStrings const StopBitImage;

  /// @brief Field StopCharSetDef value: static_cast<int32_t>(0x15d)
  static ::System::TermInfoStrings const StopCharSetDef;

  /// @brief Field SubscriptCharacters value: static_cast<int32_t>(0x15e)
  static ::System::TermInfoStrings const SubscriptCharacters;

  /// @brief Field SuperscriptCharacters value: static_cast<int32_t>(0x15f)
  static ::System::TermInfoStrings const SuperscriptCharacters;

  /// @brief Field Tab value: static_cast<int32_t>(0x86)
  static ::System::TermInfoStrings const Tab;

  /// @brief Field TheseCauseCr value: static_cast<int32_t>(0x160)
  static ::System::TermInfoStrings const TheseCauseCr;

  /// @brief Field ToStatusLine value: static_cast<int32_t>(0x87)
  static ::System::TermInfoStrings const ToStatusLine;

  /// @brief Field Tone value: static_cast<int32_t>(0x11a)
  static ::System::TermInfoStrings const Tone;

  /// @brief Field UnderlineChar value: static_cast<int32_t>(0x88)
  static ::System::TermInfoStrings const UnderlineChar;

  /// @brief Field UpHalfLine value: static_cast<int32_t>(0x89)
  static ::System::TermInfoStrings const UpHalfLine;

  /// @brief Field User0 value: static_cast<int32_t>(0x11f)
  static ::System::TermInfoStrings const User0;

  /// @brief Field User1 value: static_cast<int32_t>(0x120)
  static ::System::TermInfoStrings const User1;

  /// @brief Field User2 value: static_cast<int32_t>(0x121)
  static ::System::TermInfoStrings const User2;

  /// @brief Field User3 value: static_cast<int32_t>(0x122)
  static ::System::TermInfoStrings const User3;

  /// @brief Field User4 value: static_cast<int32_t>(0x123)
  static ::System::TermInfoStrings const User4;

  /// @brief Field User5 value: static_cast<int32_t>(0x124)
  static ::System::TermInfoStrings const User5;

  /// @brief Field User6 value: static_cast<int32_t>(0x125)
  static ::System::TermInfoStrings const User6;

  /// @brief Field User7 value: static_cast<int32_t>(0x126)
  static ::System::TermInfoStrings const User7;

  /// @brief Field User8 value: static_cast<int32_t>(0x127)
  static ::System::TermInfoStrings const User8;

  /// @brief Field User9 value: static_cast<int32_t>(0x128)
  static ::System::TermInfoStrings const User9;

  /// @brief Field WaitTone value: static_cast<int32_t>(0x11e)
  static ::System::TermInfoStrings const WaitTone;

  /// @brief Field XoffCharacter value: static_cast<int32_t>(0x9a)
  static ::System::TermInfoStrings const XoffCharacter;

  /// @brief Field XonCharacter value: static_cast<int32_t>(0x99)
  static ::System::TermInfoStrings const XonCharacter;

  /// @brief Field ZeroMotion value: static_cast<int32_t>(0x161)
  static ::System::TermInfoStrings const ZeroMotion;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2628 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TermInfoStrings, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::TermInfoStrings, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::TermInfoStrings, "System", "TermInfoStrings");
