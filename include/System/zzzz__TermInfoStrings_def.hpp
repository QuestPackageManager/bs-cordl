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
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.TermInfoStrings
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

  /// @brief Field AcsChars value: I32(146)
  static ::System::TermInfoStrings const AcsChars;

  /// @brief Field AltScancodeEsc value: I32(385)
  static ::System::TermInfoStrings const AltScancodeEsc;

  /// @brief Field BackTab value: I32(0)
  static ::System::TermInfoStrings const BackTab;

  /// @brief Field Bell value: I32(1)
  static ::System::TermInfoStrings const Bell;

  /// @brief Field BitImageCarriageReturn value: I32(372)
  static ::System::TermInfoStrings const BitImageCarriageReturn;

  /// @brief Field BitImageNewline value: I32(371)
  static ::System::TermInfoStrings const BitImageNewline;

  /// @brief Field BitImageRepeat value: I32(370)
  static ::System::TermInfoStrings const BitImageRepeat;

  /// @brief Field CarriageReturn value: I32(2)
  static ::System::TermInfoStrings const CarriageReturn;

  /// @brief Field ChangeCharPitch value: I32(304)
  static ::System::TermInfoStrings const ChangeCharPitch;

  /// @brief Field ChangeLinePitch value: I32(305)
  static ::System::TermInfoStrings const ChangeLinePitch;

  /// @brief Field ChangeResHorz value: I32(306)
  static ::System::TermInfoStrings const ChangeResHorz;

  /// @brief Field ChangeResVert value: I32(307)
  static ::System::TermInfoStrings const ChangeResVert;

  /// @brief Field ChangeScrollRegion value: I32(3)
  static ::System::TermInfoStrings const ChangeScrollRegion;

  /// @brief Field CharPadding value: I32(145)
  static ::System::TermInfoStrings const CharPadding;

  /// @brief Field CharSetNames value: I32(354)
  static ::System::TermInfoStrings const CharSetNames;

  /// @brief Field ClearAllTabs value: I32(4)
  static ::System::TermInfoStrings const ClearAllTabs;

  /// @brief Field ClearMargins value: I32(270)
  static ::System::TermInfoStrings const ClearMargins;

  /// @brief Field ClearScreen value: I32(5)
  static ::System::TermInfoStrings const ClearScreen;

  /// @brief Field ClrBol value: I32(269)
  static ::System::TermInfoStrings const ClrBol;

  /// @brief Field ClrEol value: I32(6)
  static ::System::TermInfoStrings const ClrEol;

  /// @brief Field ClrEos value: I32(7)
  static ::System::TermInfoStrings const ClrEos;

  /// @brief Field CodeSetInit value: I32(363)
  static ::System::TermInfoStrings const CodeSetInit;

  /// @brief Field ColorNames value: I32(373)
  static ::System::TermInfoStrings const ColorNames;

  /// @brief Field ColumnAddress value: I32(8)
  static ::System::TermInfoStrings const ColumnAddress;

  /// @brief Field CommandCharacter value: I32(9)
  static ::System::TermInfoStrings const CommandCharacter;

  /// @brief Field CreateWindow value: I32(277)
  static ::System::TermInfoStrings const CreateWindow;

  /// @brief Field CursorAddress value: I32(10)
  static ::System::TermInfoStrings const CursorAddress;

  /// @brief Field CursorDown value: I32(11)
  static ::System::TermInfoStrings const CursorDown;

  /// @brief Field CursorHome value: I32(12)
  static ::System::TermInfoStrings const CursorHome;

  /// @brief Field CursorInvisible value: I32(13)
  static ::System::TermInfoStrings const CursorInvisible;

  /// @brief Field CursorLeft value: I32(14)
  static ::System::TermInfoStrings const CursorLeft;

  /// @brief Field CursorMemAddress value: I32(15)
  static ::System::TermInfoStrings const CursorMemAddress;

  /// @brief Field CursorNormal value: I32(16)
  static ::System::TermInfoStrings const CursorNormal;

  /// @brief Field CursorRight value: I32(17)
  static ::System::TermInfoStrings const CursorRight;

  /// @brief Field CursorToLl value: I32(18)
  static ::System::TermInfoStrings const CursorToLl;

  /// @brief Field CursorUp value: I32(19)
  static ::System::TermInfoStrings const CursorUp;

  /// @brief Field CursorVisible value: I32(20)
  static ::System::TermInfoStrings const CursorVisible;

  /// @brief Field DefineBitImageRegion value: I32(374)
  static ::System::TermInfoStrings const DefineBitImageRegion;

  /// @brief Field DefineChar value: I32(308)
  static ::System::TermInfoStrings const DefineChar;

  /// @brief Field DeleteCharacter value: I32(21)
  static ::System::TermInfoStrings const DeleteCharacter;

  /// @brief Field DeleteLine value: I32(22)
  static ::System::TermInfoStrings const DeleteLine;

  /// @brief Field DeviceType value: I32(362)
  static ::System::TermInfoStrings const DeviceType;

  /// @brief Field DialPhone value: I32(280)
  static ::System::TermInfoStrings const DialPhone;

  /// @brief Field DisStatusLine value: I32(23)
  static ::System::TermInfoStrings const DisStatusLine;

  /// @brief Field DisplayClock value: I32(275)
  static ::System::TermInfoStrings const DisplayClock;

  /// @brief Field DisplayPcChar value: I32(378)
  static ::System::TermInfoStrings const DisplayPcChar;

  /// @brief Field DownHalfLine value: I32(24)
  static ::System::TermInfoStrings const DownHalfLine;

  /// @brief Field EnaAcs value: I32(155)
  static ::System::TermInfoStrings const EnaAcs;

  /// @brief Field EndBitImageRegion value: I32(375)
  static ::System::TermInfoStrings const EndBitImageRegion;

  /// @brief Field EnterAltCharsetMode value: I32(25)
  static ::System::TermInfoStrings const EnterAltCharsetMode;

  /// @brief Field EnterAmMode value: I32(151)
  static ::System::TermInfoStrings const EnterAmMode;

  /// @brief Field EnterBlinkMode value: I32(26)
  static ::System::TermInfoStrings const EnterBlinkMode;

  /// @brief Field EnterBoldMode value: I32(27)
  static ::System::TermInfoStrings const EnterBoldMode;

  /// @brief Field EnterCaMode value: I32(28)
  static ::System::TermInfoStrings const EnterCaMode;

  /// @brief Field EnterDeleteMode value: I32(29)
  static ::System::TermInfoStrings const EnterDeleteMode;

  /// @brief Field EnterDimMode value: I32(30)
  static ::System::TermInfoStrings const EnterDimMode;

  /// @brief Field EnterDoublewideMode value: I32(309)
  static ::System::TermInfoStrings const EnterDoublewideMode;

  /// @brief Field EnterDraftQuality value: I32(310)
  static ::System::TermInfoStrings const EnterDraftQuality;

  /// @brief Field EnterHorizontalHlMode value: I32(386)
  static ::System::TermInfoStrings const EnterHorizontalHlMode;

  /// @brief Field EnterInsertMode value: I32(31)
  static ::System::TermInfoStrings const EnterInsertMode;

  /// @brief Field EnterItalicsMode value: I32(311)
  static ::System::TermInfoStrings const EnterItalicsMode;

  /// @brief Field EnterLeftHlMode value: I32(387)
  static ::System::TermInfoStrings const EnterLeftHlMode;

  /// @brief Field EnterLeftwardMode value: I32(312)
  static ::System::TermInfoStrings const EnterLeftwardMode;

  /// @brief Field EnterLowHlMode value: I32(388)
  static ::System::TermInfoStrings const EnterLowHlMode;

  /// @brief Field EnterMicroMode value: I32(313)
  static ::System::TermInfoStrings const EnterMicroMode;

  /// @brief Field EnterNearLetterQuality value: I32(314)
  static ::System::TermInfoStrings const EnterNearLetterQuality;

  /// @brief Field EnterNormalQuality value: I32(315)
  static ::System::TermInfoStrings const EnterNormalQuality;

  /// @brief Field EnterPcCharsetMode value: I32(379)
  static ::System::TermInfoStrings const EnterPcCharsetMode;

  /// @brief Field EnterProtectedMode value: I32(33)
  static ::System::TermInfoStrings const EnterProtectedMode;

  /// @brief Field EnterReverseMode value: I32(34)
  static ::System::TermInfoStrings const EnterReverseMode;

  /// @brief Field EnterRightHlMode value: I32(389)
  static ::System::TermInfoStrings const EnterRightHlMode;

  /// @brief Field EnterScancodeMode value: I32(381)
  static ::System::TermInfoStrings const EnterScancodeMode;

  /// @brief Field EnterSecureMode value: I32(32)
  static ::System::TermInfoStrings const EnterSecureMode;

  /// @brief Field EnterShadowMode value: I32(316)
  static ::System::TermInfoStrings const EnterShadowMode;

  /// @brief Field EnterStandoutMode value: I32(35)
  static ::System::TermInfoStrings const EnterStandoutMode;

  /// @brief Field EnterSubscriptMode value: I32(317)
  static ::System::TermInfoStrings const EnterSubscriptMode;

  /// @brief Field EnterSuperscriptMode value: I32(318)
  static ::System::TermInfoStrings const EnterSuperscriptMode;

  /// @brief Field EnterTopHlMode value: I32(390)
  static ::System::TermInfoStrings const EnterTopHlMode;

  /// @brief Field EnterUnderlineMode value: I32(36)
  static ::System::TermInfoStrings const EnterUnderlineMode;

  /// @brief Field EnterUpwardMode value: I32(319)
  static ::System::TermInfoStrings const EnterUpwardMode;

  /// @brief Field EnterVerticalHlMode value: I32(391)
  static ::System::TermInfoStrings const EnterVerticalHlMode;

  /// @brief Field EnterXonMode value: I32(149)
  static ::System::TermInfoStrings const EnterXonMode;

  /// @brief Field EraseChars value: I32(37)
  static ::System::TermInfoStrings const EraseChars;

  /// @brief Field ExitAltCharsetMode value: I32(38)
  static ::System::TermInfoStrings const ExitAltCharsetMode;

  /// @brief Field ExitAmMode value: I32(152)
  static ::System::TermInfoStrings const ExitAmMode;

  /// @brief Field ExitAttributeMode value: I32(39)
  static ::System::TermInfoStrings const ExitAttributeMode;

  /// @brief Field ExitCaMode value: I32(40)
  static ::System::TermInfoStrings const ExitCaMode;

  /// @brief Field ExitDeleteMode value: I32(41)
  static ::System::TermInfoStrings const ExitDeleteMode;

  /// @brief Field ExitDoublewideMode value: I32(320)
  static ::System::TermInfoStrings const ExitDoublewideMode;

  /// @brief Field ExitInsertMode value: I32(42)
  static ::System::TermInfoStrings const ExitInsertMode;

  /// @brief Field ExitItalicsMode value: I32(321)
  static ::System::TermInfoStrings const ExitItalicsMode;

  /// @brief Field ExitLeftwardMode value: I32(322)
  static ::System::TermInfoStrings const ExitLeftwardMode;

  /// @brief Field ExitMicroMode value: I32(323)
  static ::System::TermInfoStrings const ExitMicroMode;

  /// @brief Field ExitPcCharsetMode value: I32(380)
  static ::System::TermInfoStrings const ExitPcCharsetMode;

  /// @brief Field ExitScancodeMode value: I32(382)
  static ::System::TermInfoStrings const ExitScancodeMode;

  /// @brief Field ExitShadowMode value: I32(324)
  static ::System::TermInfoStrings const ExitShadowMode;

  /// @brief Field ExitStandoutMode value: I32(43)
  static ::System::TermInfoStrings const ExitStandoutMode;

  /// @brief Field ExitSubscriptMode value: I32(325)
  static ::System::TermInfoStrings const ExitSubscriptMode;

  /// @brief Field ExitSuperscriptMode value: I32(326)
  static ::System::TermInfoStrings const ExitSuperscriptMode;

  /// @brief Field ExitUnderlineMode value: I32(44)
  static ::System::TermInfoStrings const ExitUnderlineMode;

  /// @brief Field ExitUpwardMode value: I32(327)
  static ::System::TermInfoStrings const ExitUpwardMode;

  /// @brief Field ExitXonMode value: I32(150)
  static ::System::TermInfoStrings const ExitXonMode;

  /// @brief Field FixedPause value: I32(285)
  static ::System::TermInfoStrings const FixedPause;

  /// @brief Field FlashHook value: I32(284)
  static ::System::TermInfoStrings const FlashHook;

  /// @brief Field FlashScreen value: I32(45)
  static ::System::TermInfoStrings const FlashScreen;

  /// @brief Field FormFeed value: I32(46)
  static ::System::TermInfoStrings const FormFeed;

  /// @brief Field FromStatusLine value: I32(47)
  static ::System::TermInfoStrings const FromStatusLine;

  /// @brief Field GetMouse value: I32(358)
  static ::System::TermInfoStrings const GetMouse;

  /// @brief Field GotoWindow value: I32(278)
  static ::System::TermInfoStrings const GotoWindow;

  /// @brief Field Hangup value: I32(279)
  static ::System::TermInfoStrings const Hangup;

  /// @brief Field Init1string value: I32(48)
  static ::System::TermInfoStrings const Init1string;

  /// @brief Field Init2string value: I32(49)
  static ::System::TermInfoStrings const Init2string;

  /// @brief Field Init3string value: I32(50)
  static ::System::TermInfoStrings const Init3string;

  /// @brief Field InitFile value: I32(51)
  static ::System::TermInfoStrings const InitFile;

  /// @brief Field InitProg value: I32(138)
  static ::System::TermInfoStrings const InitProg;

  /// @brief Field InitializeColor value: I32(299)
  static ::System::TermInfoStrings const InitializeColor;

  /// @brief Field InitializePair value: I32(300)
  static ::System::TermInfoStrings const InitializePair;

  /// @brief Field InsertCharacter value: I32(52)
  static ::System::TermInfoStrings const InsertCharacter;

  /// @brief Field InsertLine value: I32(53)
  static ::System::TermInfoStrings const InsertLine;

  /// @brief Field InsertPadding value: I32(54)
  static ::System::TermInfoStrings const InsertPadding;

  /// @brief Field KeyA1 value: I32(139)
  static ::System::TermInfoStrings const KeyA1;

  /// @brief Field KeyA3 value: I32(140)
  static ::System::TermInfoStrings const KeyA3;

  /// @brief Field KeyB2 value: I32(141)
  static ::System::TermInfoStrings const KeyB2;

  /// @brief Field KeyBackspace value: I32(55)
  static ::System::TermInfoStrings const KeyBackspace;

  /// @brief Field KeyBeg value: I32(158)
  static ::System::TermInfoStrings const KeyBeg;

  /// @brief Field KeyBtab value: I32(148)
  static ::System::TermInfoStrings const KeyBtab;

  /// @brief Field KeyC1 value: I32(142)
  static ::System::TermInfoStrings const KeyC1;

  /// @brief Field KeyC3 value: I32(143)
  static ::System::TermInfoStrings const KeyC3;

  /// @brief Field KeyCancel value: I32(159)
  static ::System::TermInfoStrings const KeyCancel;

  /// @brief Field KeyCatab value: I32(56)
  static ::System::TermInfoStrings const KeyCatab;

  /// @brief Field KeyClear value: I32(57)
  static ::System::TermInfoStrings const KeyClear;

  /// @brief Field KeyClose value: I32(160)
  static ::System::TermInfoStrings const KeyClose;

  /// @brief Field KeyCommand value: I32(161)
  static ::System::TermInfoStrings const KeyCommand;

  /// @brief Field KeyCopy value: I32(162)
  static ::System::TermInfoStrings const KeyCopy;

  /// @brief Field KeyCreate value: I32(163)
  static ::System::TermInfoStrings const KeyCreate;

  /// @brief Field KeyCtab value: I32(58)
  static ::System::TermInfoStrings const KeyCtab;

  /// @brief Field KeyDc value: I32(59)
  static ::System::TermInfoStrings const KeyDc;

  /// @brief Field KeyDl value: I32(60)
  static ::System::TermInfoStrings const KeyDl;

  /// @brief Field KeyDown value: I32(61)
  static ::System::TermInfoStrings const KeyDown;

  /// @brief Field KeyEic value: I32(62)
  static ::System::TermInfoStrings const KeyEic;

  /// @brief Field KeyEnd value: I32(164)
  static ::System::TermInfoStrings const KeyEnd;

  /// @brief Field KeyEnter value: I32(165)
  static ::System::TermInfoStrings const KeyEnter;

  /// @brief Field KeyEol value: I32(63)
  static ::System::TermInfoStrings const KeyEol;

  /// @brief Field KeyEos value: I32(64)
  static ::System::TermInfoStrings const KeyEos;

  /// @brief Field KeyExit value: I32(166)
  static ::System::TermInfoStrings const KeyExit;

  /// @brief Field KeyF0 value: I32(65)
  static ::System::TermInfoStrings const KeyF0;

  /// @brief Field KeyF1 value: I32(66)
  static ::System::TermInfoStrings const KeyF1;

  /// @brief Field KeyF10 value: I32(67)
  static ::System::TermInfoStrings const KeyF10;

  /// @brief Field KeyF11 value: I32(216)
  static ::System::TermInfoStrings const KeyF11;

  /// @brief Field KeyF12 value: I32(217)
  static ::System::TermInfoStrings const KeyF12;

  /// @brief Field KeyF13 value: I32(218)
  static ::System::TermInfoStrings const KeyF13;

  /// @brief Field KeyF14 value: I32(219)
  static ::System::TermInfoStrings const KeyF14;

  /// @brief Field KeyF15 value: I32(220)
  static ::System::TermInfoStrings const KeyF15;

  /// @brief Field KeyF16 value: I32(221)
  static ::System::TermInfoStrings const KeyF16;

  /// @brief Field KeyF17 value: I32(222)
  static ::System::TermInfoStrings const KeyF17;

  /// @brief Field KeyF18 value: I32(223)
  static ::System::TermInfoStrings const KeyF18;

  /// @brief Field KeyF19 value: I32(224)
  static ::System::TermInfoStrings const KeyF19;

  /// @brief Field KeyF2 value: I32(68)
  static ::System::TermInfoStrings const KeyF2;

  /// @brief Field KeyF20 value: I32(225)
  static ::System::TermInfoStrings const KeyF20;

  /// @brief Field KeyF21 value: I32(226)
  static ::System::TermInfoStrings const KeyF21;

  /// @brief Field KeyF22 value: I32(227)
  static ::System::TermInfoStrings const KeyF22;

  /// @brief Field KeyF23 value: I32(228)
  static ::System::TermInfoStrings const KeyF23;

  /// @brief Field KeyF24 value: I32(229)
  static ::System::TermInfoStrings const KeyF24;

  /// @brief Field KeyF25 value: I32(230)
  static ::System::TermInfoStrings const KeyF25;

  /// @brief Field KeyF26 value: I32(231)
  static ::System::TermInfoStrings const KeyF26;

  /// @brief Field KeyF27 value: I32(232)
  static ::System::TermInfoStrings const KeyF27;

  /// @brief Field KeyF28 value: I32(233)
  static ::System::TermInfoStrings const KeyF28;

  /// @brief Field KeyF29 value: I32(234)
  static ::System::TermInfoStrings const KeyF29;

  /// @brief Field KeyF3 value: I32(69)
  static ::System::TermInfoStrings const KeyF3;

  /// @brief Field KeyF30 value: I32(235)
  static ::System::TermInfoStrings const KeyF30;

  /// @brief Field KeyF31 value: I32(236)
  static ::System::TermInfoStrings const KeyF31;

  /// @brief Field KeyF32 value: I32(237)
  static ::System::TermInfoStrings const KeyF32;

  /// @brief Field KeyF33 value: I32(238)
  static ::System::TermInfoStrings const KeyF33;

  /// @brief Field KeyF34 value: I32(239)
  static ::System::TermInfoStrings const KeyF34;

  /// @brief Field KeyF35 value: I32(240)
  static ::System::TermInfoStrings const KeyF35;

  /// @brief Field KeyF36 value: I32(241)
  static ::System::TermInfoStrings const KeyF36;

  /// @brief Field KeyF37 value: I32(242)
  static ::System::TermInfoStrings const KeyF37;

  /// @brief Field KeyF38 value: I32(243)
  static ::System::TermInfoStrings const KeyF38;

  /// @brief Field KeyF39 value: I32(244)
  static ::System::TermInfoStrings const KeyF39;

  /// @brief Field KeyF4 value: I32(70)
  static ::System::TermInfoStrings const KeyF4;

  /// @brief Field KeyF40 value: I32(245)
  static ::System::TermInfoStrings const KeyF40;

  /// @brief Field KeyF41 value: I32(246)
  static ::System::TermInfoStrings const KeyF41;

  /// @brief Field KeyF42 value: I32(247)
  static ::System::TermInfoStrings const KeyF42;

  /// @brief Field KeyF43 value: I32(248)
  static ::System::TermInfoStrings const KeyF43;

  /// @brief Field KeyF44 value: I32(249)
  static ::System::TermInfoStrings const KeyF44;

  /// @brief Field KeyF45 value: I32(250)
  static ::System::TermInfoStrings const KeyF45;

  /// @brief Field KeyF46 value: I32(251)
  static ::System::TermInfoStrings const KeyF46;

  /// @brief Field KeyF47 value: I32(252)
  static ::System::TermInfoStrings const KeyF47;

  /// @brief Field KeyF48 value: I32(253)
  static ::System::TermInfoStrings const KeyF48;

  /// @brief Field KeyF49 value: I32(254)
  static ::System::TermInfoStrings const KeyF49;

  /// @brief Field KeyF5 value: I32(71)
  static ::System::TermInfoStrings const KeyF5;

  /// @brief Field KeyF50 value: I32(255)
  static ::System::TermInfoStrings const KeyF50;

  /// @brief Field KeyF51 value: I32(256)
  static ::System::TermInfoStrings const KeyF51;

  /// @brief Field KeyF52 value: I32(257)
  static ::System::TermInfoStrings const KeyF52;

  /// @brief Field KeyF53 value: I32(258)
  static ::System::TermInfoStrings const KeyF53;

  /// @brief Field KeyF54 value: I32(259)
  static ::System::TermInfoStrings const KeyF54;

  /// @brief Field KeyF55 value: I32(260)
  static ::System::TermInfoStrings const KeyF55;

  /// @brief Field KeyF56 value: I32(261)
  static ::System::TermInfoStrings const KeyF56;

  /// @brief Field KeyF57 value: I32(262)
  static ::System::TermInfoStrings const KeyF57;

  /// @brief Field KeyF58 value: I32(263)
  static ::System::TermInfoStrings const KeyF58;

  /// @brief Field KeyF59 value: I32(264)
  static ::System::TermInfoStrings const KeyF59;

  /// @brief Field KeyF6 value: I32(72)
  static ::System::TermInfoStrings const KeyF6;

  /// @brief Field KeyF60 value: I32(265)
  static ::System::TermInfoStrings const KeyF60;

  /// @brief Field KeyF61 value: I32(266)
  static ::System::TermInfoStrings const KeyF61;

  /// @brief Field KeyF62 value: I32(267)
  static ::System::TermInfoStrings const KeyF62;

  /// @brief Field KeyF63 value: I32(268)
  static ::System::TermInfoStrings const KeyF63;

  /// @brief Field KeyF7 value: I32(73)
  static ::System::TermInfoStrings const KeyF7;

  /// @brief Field KeyF8 value: I32(74)
  static ::System::TermInfoStrings const KeyF8;

  /// @brief Field KeyF9 value: I32(75)
  static ::System::TermInfoStrings const KeyF9;

  /// @brief Field KeyFind value: I32(167)
  static ::System::TermInfoStrings const KeyFind;

  /// @brief Field KeyHelp value: I32(168)
  static ::System::TermInfoStrings const KeyHelp;

  /// @brief Field KeyHome value: I32(76)
  static ::System::TermInfoStrings const KeyHome;

  /// @brief Field KeyIc value: I32(77)
  static ::System::TermInfoStrings const KeyIc;

  /// @brief Field KeyIl value: I32(78)
  static ::System::TermInfoStrings const KeyIl;

  /// @brief Field KeyLeft value: I32(79)
  static ::System::TermInfoStrings const KeyLeft;

  /// @brief Field KeyLl value: I32(80)
  static ::System::TermInfoStrings const KeyLl;

  /// @brief Field KeyMark value: I32(169)
  static ::System::TermInfoStrings const KeyMark;

  /// @brief Field KeyMessage value: I32(170)
  static ::System::TermInfoStrings const KeyMessage;

  /// @brief Field KeyMouse value: I32(355)
  static ::System::TermInfoStrings const KeyMouse;

  /// @brief Field KeyMove value: I32(171)
  static ::System::TermInfoStrings const KeyMove;

  /// @brief Field KeyNext value: I32(172)
  static ::System::TermInfoStrings const KeyNext;

  /// @brief Field KeyNpage value: I32(81)
  static ::System::TermInfoStrings const KeyNpage;

  /// @brief Field KeyOpen value: I32(173)
  static ::System::TermInfoStrings const KeyOpen;

  /// @brief Field KeyOptions value: I32(174)
  static ::System::TermInfoStrings const KeyOptions;

  /// @brief Field KeyPpage value: I32(82)
  static ::System::TermInfoStrings const KeyPpage;

  /// @brief Field KeyPrevious value: I32(175)
  static ::System::TermInfoStrings const KeyPrevious;

  /// @brief Field KeyPrint value: I32(176)
  static ::System::TermInfoStrings const KeyPrint;

  /// @brief Field KeyRedo value: I32(177)
  static ::System::TermInfoStrings const KeyRedo;

  /// @brief Field KeyReference value: I32(178)
  static ::System::TermInfoStrings const KeyReference;

  /// @brief Field KeyRefresh value: I32(179)
  static ::System::TermInfoStrings const KeyRefresh;

  /// @brief Field KeyReplace value: I32(180)
  static ::System::TermInfoStrings const KeyReplace;

  /// @brief Field KeyRestart value: I32(181)
  static ::System::TermInfoStrings const KeyRestart;

  /// @brief Field KeyResume value: I32(182)
  static ::System::TermInfoStrings const KeyResume;

  /// @brief Field KeyRight value: I32(83)
  static ::System::TermInfoStrings const KeyRight;

  /// @brief Field KeySave value: I32(183)
  static ::System::TermInfoStrings const KeySave;

  /// @brief Field KeySbeg value: I32(186)
  static ::System::TermInfoStrings const KeySbeg;

  /// @brief Field KeyScancel value: I32(187)
  static ::System::TermInfoStrings const KeyScancel;

  /// @brief Field KeyScommand value: I32(188)
  static ::System::TermInfoStrings const KeyScommand;

  /// @brief Field KeyScopy value: I32(189)
  static ::System::TermInfoStrings const KeyScopy;

  /// @brief Field KeyScreate value: I32(190)
  static ::System::TermInfoStrings const KeyScreate;

  /// @brief Field KeySdc value: I32(191)
  static ::System::TermInfoStrings const KeySdc;

  /// @brief Field KeySdl value: I32(192)
  static ::System::TermInfoStrings const KeySdl;

  /// @brief Field KeySelect value: I32(193)
  static ::System::TermInfoStrings const KeySelect;

  /// @brief Field KeySend value: I32(194)
  static ::System::TermInfoStrings const KeySend;

  /// @brief Field KeySeol value: I32(195)
  static ::System::TermInfoStrings const KeySeol;

  /// @brief Field KeySexit value: I32(196)
  static ::System::TermInfoStrings const KeySexit;

  /// @brief Field KeySf value: I32(84)
  static ::System::TermInfoStrings const KeySf;

  /// @brief Field KeySfind value: I32(197)
  static ::System::TermInfoStrings const KeySfind;

  /// @brief Field KeyShelp value: I32(198)
  static ::System::TermInfoStrings const KeyShelp;

  /// @brief Field KeyShome value: I32(199)
  static ::System::TermInfoStrings const KeyShome;

  /// @brief Field KeySic value: I32(200)
  static ::System::TermInfoStrings const KeySic;

  /// @brief Field KeySleft value: I32(201)
  static ::System::TermInfoStrings const KeySleft;

  /// @brief Field KeySmessage value: I32(202)
  static ::System::TermInfoStrings const KeySmessage;

  /// @brief Field KeySmove value: I32(203)
  static ::System::TermInfoStrings const KeySmove;

  /// @brief Field KeySnext value: I32(204)
  static ::System::TermInfoStrings const KeySnext;

  /// @brief Field KeySoptions value: I32(205)
  static ::System::TermInfoStrings const KeySoptions;

  /// @brief Field KeySprevious value: I32(206)
  static ::System::TermInfoStrings const KeySprevious;

  /// @brief Field KeySprint value: I32(207)
  static ::System::TermInfoStrings const KeySprint;

  /// @brief Field KeySr value: I32(85)
  static ::System::TermInfoStrings const KeySr;

  /// @brief Field KeySredo value: I32(208)
  static ::System::TermInfoStrings const KeySredo;

  /// @brief Field KeySreplace value: I32(209)
  static ::System::TermInfoStrings const KeySreplace;

  /// @brief Field KeySright value: I32(210)
  static ::System::TermInfoStrings const KeySright;

  /// @brief Field KeySrsume value: I32(211)
  static ::System::TermInfoStrings const KeySrsume;

  /// @brief Field KeySsave value: I32(212)
  static ::System::TermInfoStrings const KeySsave;

  /// @brief Field KeySsuspend value: I32(213)
  static ::System::TermInfoStrings const KeySsuspend;

  /// @brief Field KeyStab value: I32(86)
  static ::System::TermInfoStrings const KeyStab;

  /// @brief Field KeySundo value: I32(214)
  static ::System::TermInfoStrings const KeySundo;

  /// @brief Field KeySuspend value: I32(184)
  static ::System::TermInfoStrings const KeySuspend;

  /// @brief Field KeyUndo value: I32(185)
  static ::System::TermInfoStrings const KeyUndo;

  /// @brief Field KeyUp value: I32(87)
  static ::System::TermInfoStrings const KeyUp;

  /// @brief Field KeypadLocal value: I32(88)
  static ::System::TermInfoStrings const KeypadLocal;

  /// @brief Field KeypadXmit value: I32(89)
  static ::System::TermInfoStrings const KeypadXmit;

  /// @brief Field LabF0 value: I32(90)
  static ::System::TermInfoStrings const LabF0;

  /// @brief Field LabF1 value: I32(91)
  static ::System::TermInfoStrings const LabF1;

  /// @brief Field LabF10 value: I32(92)
  static ::System::TermInfoStrings const LabF10;

  /// @brief Field LabF2 value: I32(93)
  static ::System::TermInfoStrings const LabF2;

  /// @brief Field LabF3 value: I32(94)
  static ::System::TermInfoStrings const LabF3;

  /// @brief Field LabF4 value: I32(95)
  static ::System::TermInfoStrings const LabF4;

  /// @brief Field LabF5 value: I32(96)
  static ::System::TermInfoStrings const LabF5;

  /// @brief Field LabF6 value: I32(97)
  static ::System::TermInfoStrings const LabF6;

  /// @brief Field LabF7 value: I32(98)
  static ::System::TermInfoStrings const LabF7;

  /// @brief Field LabF8 value: I32(99)
  static ::System::TermInfoStrings const LabF8;

  /// @brief Field LabF9 value: I32(100)
  static ::System::TermInfoStrings const LabF9;

  /// @brief Field LabelFormat value: I32(273)
  static ::System::TermInfoStrings const LabelFormat;

  /// @brief Field LabelOff value: I32(157)
  static ::System::TermInfoStrings const LabelOff;

  /// @brief Field LabelOn value: I32(156)
  static ::System::TermInfoStrings const LabelOn;

  /// @brief Field Last value: I32(394)
  static ::System::TermInfoStrings const Last;

  /// @brief Field MetaOff value: I32(101)
  static ::System::TermInfoStrings const MetaOff;

  /// @brief Field MetaOn value: I32(102)
  static ::System::TermInfoStrings const MetaOn;

  /// @brief Field MicroColumnAddress value: I32(328)
  static ::System::TermInfoStrings const MicroColumnAddress;

  /// @brief Field MicroDown value: I32(329)
  static ::System::TermInfoStrings const MicroDown;

  /// @brief Field MicroLeft value: I32(330)
  static ::System::TermInfoStrings const MicroLeft;

  /// @brief Field MicroRight value: I32(331)
  static ::System::TermInfoStrings const MicroRight;

  /// @brief Field MicroRowAddress value: I32(332)
  static ::System::TermInfoStrings const MicroRowAddress;

  /// @brief Field MicroUp value: I32(333)
  static ::System::TermInfoStrings const MicroUp;

  /// @brief Field MouseInfo value: I32(356)
  static ::System::TermInfoStrings const MouseInfo;

  /// @brief Field Newline value: I32(103)
  static ::System::TermInfoStrings const Newline;

  /// @brief Field OrderOfPins value: I32(334)
  static ::System::TermInfoStrings const OrderOfPins;

  /// @brief Field OrigColors value: I32(298)
  static ::System::TermInfoStrings const OrigColors;

  /// @brief Field OrigPair value: I32(297)
  static ::System::TermInfoStrings const OrigPair;

  /// @brief Field PadChar value: I32(104)
  static ::System::TermInfoStrings const PadChar;

  /// @brief Field ParmDch value: I32(105)
  static ::System::TermInfoStrings const ParmDch;

  /// @brief Field ParmDeleteLine value: I32(106)
  static ::System::TermInfoStrings const ParmDeleteLine;

  /// @brief Field ParmDownCursor value: I32(107)
  static ::System::TermInfoStrings const ParmDownCursor;

  /// @brief Field ParmDownMicro value: I32(335)
  static ::System::TermInfoStrings const ParmDownMicro;

  /// @brief Field ParmIch value: I32(108)
  static ::System::TermInfoStrings const ParmIch;

  /// @brief Field ParmIndex value: I32(109)
  static ::System::TermInfoStrings const ParmIndex;

  /// @brief Field ParmInsertLine value: I32(110)
  static ::System::TermInfoStrings const ParmInsertLine;

  /// @brief Field ParmLeftCursor value: I32(111)
  static ::System::TermInfoStrings const ParmLeftCursor;

  /// @brief Field ParmLeftMicro value: I32(336)
  static ::System::TermInfoStrings const ParmLeftMicro;

  /// @brief Field ParmRightCursor value: I32(112)
  static ::System::TermInfoStrings const ParmRightCursor;

  /// @brief Field ParmRightMicro value: I32(337)
  static ::System::TermInfoStrings const ParmRightMicro;

  /// @brief Field ParmRindex value: I32(113)
  static ::System::TermInfoStrings const ParmRindex;

  /// @brief Field ParmUpCursor value: I32(114)
  static ::System::TermInfoStrings const ParmUpCursor;

  /// @brief Field ParmUpMicro value: I32(338)
  static ::System::TermInfoStrings const ParmUpMicro;

  /// @brief Field PcTermOptions value: I32(383)
  static ::System::TermInfoStrings const PcTermOptions;

  /// @brief Field PkeyKey value: I32(115)
  static ::System::TermInfoStrings const PkeyKey;

  /// @brief Field PkeyLocal value: I32(116)
  static ::System::TermInfoStrings const PkeyLocal;

  /// @brief Field PkeyPlab value: I32(361)
  static ::System::TermInfoStrings const PkeyPlab;

  /// @brief Field PkeyXmit value: I32(117)
  static ::System::TermInfoStrings const PkeyXmit;

  /// @brief Field PlabNorm value: I32(147)
  static ::System::TermInfoStrings const PlabNorm;

  /// @brief Field PrintScreen value: I32(118)
  static ::System::TermInfoStrings const PrintScreen;

  /// @brief Field PrtrNon value: I32(144)
  static ::System::TermInfoStrings const PrtrNon;

  /// @brief Field PrtrOff value: I32(119)
  static ::System::TermInfoStrings const PrtrOff;

  /// @brief Field PrtrOn value: I32(120)
  static ::System::TermInfoStrings const PrtrOn;

  /// @brief Field Pulse value: I32(283)
  static ::System::TermInfoStrings const Pulse;

  /// @brief Field QuickDial value: I32(281)
  static ::System::TermInfoStrings const QuickDial;

  /// @brief Field RemoveClock value: I32(276)
  static ::System::TermInfoStrings const RemoveClock;

  /// @brief Field RepeatChar value: I32(121)
  static ::System::TermInfoStrings const RepeatChar;

  /// @brief Field ReqForInput value: I32(215)
  static ::System::TermInfoStrings const ReqForInput;

  /// @brief Field ReqMousePos value: I32(357)
  static ::System::TermInfoStrings const ReqMousePos;

  /// @brief Field Reset1string value: I32(122)
  static ::System::TermInfoStrings const Reset1string;

  /// @brief Field Reset2string value: I32(123)
  static ::System::TermInfoStrings const Reset2string;

  /// @brief Field Reset3string value: I32(124)
  static ::System::TermInfoStrings const Reset3string;

  /// @brief Field ResetFile value: I32(125)
  static ::System::TermInfoStrings const ResetFile;

  /// @brief Field RestoreCursor value: I32(126)
  static ::System::TermInfoStrings const RestoreCursor;

  /// @brief Field RowAddress value: I32(127)
  static ::System::TermInfoStrings const RowAddress;

  /// @brief Field SaveCursor value: I32(128)
  static ::System::TermInfoStrings const SaveCursor;

  /// @brief Field ScancodeEscape value: I32(384)
  static ::System::TermInfoStrings const ScancodeEscape;

  /// @brief Field ScrollForward value: I32(129)
  static ::System::TermInfoStrings const ScrollForward;

  /// @brief Field ScrollReverse value: I32(130)
  static ::System::TermInfoStrings const ScrollReverse;

  /// @brief Field SelectCharSet value: I32(339)
  static ::System::TermInfoStrings const SelectCharSet;

  /// @brief Field Set0DesSeq value: I32(364)
  static ::System::TermInfoStrings const Set0DesSeq;

  /// @brief Field Set1DesSeq value: I32(365)
  static ::System::TermInfoStrings const Set1DesSeq;

  /// @brief Field Set2DesSeq value: I32(366)
  static ::System::TermInfoStrings const Set2DesSeq;

  /// @brief Field Set3DesSeq value: I32(367)
  static ::System::TermInfoStrings const Set3DesSeq;

  /// @brief Field SetAAttributes value: I32(392)
  static ::System::TermInfoStrings const SetAAttributes;

  /// @brief Field SetABackground value: I32(360)
  static ::System::TermInfoStrings const SetABackground;

  /// @brief Field SetAForeground value: I32(359)
  static ::System::TermInfoStrings const SetAForeground;

  /// @brief Field SetAttributes value: I32(131)
  static ::System::TermInfoStrings const SetAttributes;

  /// @brief Field SetBackground value: I32(303)
  static ::System::TermInfoStrings const SetBackground;

  /// @brief Field SetBottomMargin value: I32(340)
  static ::System::TermInfoStrings const SetBottomMargin;

  /// @brief Field SetBottomMarginParm value: I32(341)
  static ::System::TermInfoStrings const SetBottomMarginParm;

  /// @brief Field SetClock value: I32(274)
  static ::System::TermInfoStrings const SetClock;

  /// @brief Field SetColorBand value: I32(376)
  static ::System::TermInfoStrings const SetColorBand;

  /// @brief Field SetColorPair value: I32(301)
  static ::System::TermInfoStrings const SetColorPair;

  /// @brief Field SetForeground value: I32(302)
  static ::System::TermInfoStrings const SetForeground;

  /// @brief Field SetLeftMargin value: I32(271)
  static ::System::TermInfoStrings const SetLeftMargin;

  /// @brief Field SetLeftMarginParm value: I32(342)
  static ::System::TermInfoStrings const SetLeftMarginParm;

  /// @brief Field SetLrMargin value: I32(368)
  static ::System::TermInfoStrings const SetLrMargin;

  /// @brief Field SetPageLength value: I32(377)
  static ::System::TermInfoStrings const SetPageLength;

  /// @brief Field SetPglenInch value: I32(393)
  static ::System::TermInfoStrings const SetPglenInch;

  /// @brief Field SetRightMargin value: I32(272)
  static ::System::TermInfoStrings const SetRightMargin;

  /// @brief Field SetRightMarginParm value: I32(343)
  static ::System::TermInfoStrings const SetRightMarginParm;

  /// @brief Field SetTab value: I32(132)
  static ::System::TermInfoStrings const SetTab;

  /// @brief Field SetTbMargin value: I32(369)
  static ::System::TermInfoStrings const SetTbMargin;

  /// @brief Field SetTopMargin value: I32(344)
  static ::System::TermInfoStrings const SetTopMargin;

  /// @brief Field SetTopMarginParm value: I32(345)
  static ::System::TermInfoStrings const SetTopMarginParm;

  /// @brief Field SetWindow value: I32(133)
  static ::System::TermInfoStrings const SetWindow;

  /// @brief Field StartBitImage value: I32(346)
  static ::System::TermInfoStrings const StartBitImage;

  /// @brief Field StartCharSetDef value: I32(347)
  static ::System::TermInfoStrings const StartCharSetDef;

  /// @brief Field StopBitImage value: I32(348)
  static ::System::TermInfoStrings const StopBitImage;

  /// @brief Field StopCharSetDef value: I32(349)
  static ::System::TermInfoStrings const StopCharSetDef;

  /// @brief Field SubscriptCharacters value: I32(350)
  static ::System::TermInfoStrings const SubscriptCharacters;

  /// @brief Field SuperscriptCharacters value: I32(351)
  static ::System::TermInfoStrings const SuperscriptCharacters;

  /// @brief Field Tab value: I32(134)
  static ::System::TermInfoStrings const Tab;

  /// @brief Field TheseCauseCr value: I32(352)
  static ::System::TermInfoStrings const TheseCauseCr;

  /// @brief Field ToStatusLine value: I32(135)
  static ::System::TermInfoStrings const ToStatusLine;

  /// @brief Field Tone value: I32(282)
  static ::System::TermInfoStrings const Tone;

  /// @brief Field UnderlineChar value: I32(136)
  static ::System::TermInfoStrings const UnderlineChar;

  /// @brief Field UpHalfLine value: I32(137)
  static ::System::TermInfoStrings const UpHalfLine;

  /// @brief Field User0 value: I32(287)
  static ::System::TermInfoStrings const User0;

  /// @brief Field User1 value: I32(288)
  static ::System::TermInfoStrings const User1;

  /// @brief Field User2 value: I32(289)
  static ::System::TermInfoStrings const User2;

  /// @brief Field User3 value: I32(290)
  static ::System::TermInfoStrings const User3;

  /// @brief Field User4 value: I32(291)
  static ::System::TermInfoStrings const User4;

  /// @brief Field User5 value: I32(292)
  static ::System::TermInfoStrings const User5;

  /// @brief Field User6 value: I32(293)
  static ::System::TermInfoStrings const User6;

  /// @brief Field User7 value: I32(294)
  static ::System::TermInfoStrings const User7;

  /// @brief Field User8 value: I32(295)
  static ::System::TermInfoStrings const User8;

  /// @brief Field User9 value: I32(296)
  static ::System::TermInfoStrings const User9;

  /// @brief Field WaitTone value: I32(286)
  static ::System::TermInfoStrings const WaitTone;

  /// @brief Field XoffCharacter value: I32(154)
  static ::System::TermInfoStrings const XoffCharacter;

  /// @brief Field XonCharacter value: I32(153)
  static ::System::TermInfoStrings const XonCharacter;

  /// @brief Field ZeroMotion value: I32(353)
  static ::System::TermInfoStrings const ZeroMotion;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2628 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::TermInfoStrings, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::TermInfoStrings, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::TermInfoStrings, "System", "TermInfoStrings");
