#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ConsoleColor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TermInfoDriver)
namespace System {
class IConsoleDriver;
}
namespace System {
struct TermInfoStrings;
}
namespace System::Collections {
class Hashtable;
}
namespace System {
class TermInfoReader;
}
namespace System::IO {
class StreamReader;
}
namespace System {
class ByteMatcher;
}
namespace System::IO {
class CStreamWriter;
}
namespace System {
class Object;
}
namespace System {
struct ConsoleKeyInfo;
}
// Forward declare root types
namespace System {
class TermInfoDriver;
}
// Write type traits
MARK_REF_PTR_T(::System::TermInfoDriver);
// Type: System::TermInfoDriver
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 284, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2518))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2619))
// CS Name: ::System::TermInfoDriver*
class CORDL_TYPE TermInfoDriver : public ::System::Object {
public:
  // Declarations
  /// @brief Field reader, offset 0x10, size 0x8
  __declspec(property(get = __get_reader, put = __set_reader))::System::TermInfoReader* reader;

  /// @brief Field cursorLeft, offset 0x18, size 0x4
  __declspec(property(get = __get_cursorLeft, put = __set_cursorLeft)) int32_t cursorLeft;

  /// @brief Field cursorTop, offset 0x1c, size 0x4
  __declspec(property(get = __get_cursorTop, put = __set_cursorTop)) int32_t cursorTop;

  /// @brief Field title, offset 0x20, size 0x8
  __declspec(property(get = __get_title, put = __set_title))::StringW title;

  /// @brief Field titleFormat, offset 0x28, size 0x8
  __declspec(property(get = __get_titleFormat, put = __set_titleFormat))::StringW titleFormat;

  /// @brief Field cursorVisible, offset 0x30, size 0x1
  __declspec(property(get = __get_cursorVisible, put = __set_cursorVisible)) bool cursorVisible;

  /// @brief Field csrVisible, offset 0x38, size 0x8
  __declspec(property(get = __get_csrVisible, put = __set_csrVisible))::StringW csrVisible;

  /// @brief Field csrInvisible, offset 0x40, size 0x8
  __declspec(property(get = __get_csrInvisible, put = __set_csrInvisible))::StringW csrInvisible;

  /// @brief Field clear, offset 0x48, size 0x8
  __declspec(property(get = __get_clear, put = __set_clear))::StringW clear;

  /// @brief Field bell, offset 0x50, size 0x8
  __declspec(property(get = __get_bell, put = __set_bell))::StringW bell;

  /// @brief Field term, offset 0x58, size 0x8
  __declspec(property(get = __get_term, put = __set_term))::StringW term;

  /// @brief Field stdin, offset 0x60, size 0x8
  __declspec(property(get = __get_stdin, put = __set_stdin))::System::IO::StreamReader* stdin;

  /// @brief Field stdout, offset 0x68, size 0x8
  __declspec(property(get = __get_stdout, put = __set_stdout))::System::IO::CStreamWriter* stdout;

  /// @brief Field windowWidth, offset 0x70, size 0x4
  __declspec(property(get = __get_windowWidth, put = __set_windowWidth)) int32_t windowWidth;

  /// @brief Field windowHeight, offset 0x74, size 0x4
  __declspec(property(get = __get_windowHeight, put = __set_windowHeight)) int32_t windowHeight;

  /// @brief Field bufferHeight, offset 0x78, size 0x4
  __declspec(property(get = __get_bufferHeight, put = __set_bufferHeight)) int32_t bufferHeight;

  /// @brief Field bufferWidth, offset 0x7c, size 0x4
  __declspec(property(get = __get_bufferWidth, put = __set_bufferWidth)) int32_t bufferWidth;

  /// @brief Field buffer, offset 0x80, size 0x8
  __declspec(property(get = __get_buffer, put = __set_buffer))::ArrayW<char16_t, ::Array<char16_t>*> buffer;

  /// @brief Field readpos, offset 0x88, size 0x4
  __declspec(property(get = __get_readpos, put = __set_readpos)) int32_t readpos;

  /// @brief Field writepos, offset 0x8c, size 0x4
  __declspec(property(get = __get_writepos, put = __set_writepos)) int32_t writepos;

  /// @brief Field keypadXmit, offset 0x90, size 0x8
  __declspec(property(get = __get_keypadXmit, put = __set_keypadXmit))::StringW keypadXmit;

  /// @brief Field keypadLocal, offset 0x98, size 0x8
  __declspec(property(get = __get_keypadLocal, put = __set_keypadLocal))::StringW keypadLocal;

  /// @brief Field inited, offset 0xa0, size 0x1
  __declspec(property(get = __get_inited, put = __set_inited)) bool inited;

  /// @brief Field initLock, offset 0xa8, size 0x8
  __declspec(property(get = __get_initLock, put = __set_initLock))::System::Object* initLock;

  /// @brief Field initKeys, offset 0xb0, size 0x1
  __declspec(property(get = __get_initKeys, put = __set_initKeys)) bool initKeys;

  /// @brief Field origPair, offset 0xb8, size 0x8
  __declspec(property(get = __get_origPair, put = __set_origPair))::StringW origPair;

  /// @brief Field origColors, offset 0xc0, size 0x8
  __declspec(property(get = __get_origColors, put = __set_origColors))::StringW origColors;

  /// @brief Field cursorAddress, offset 0xc8, size 0x8
  __declspec(property(get = __get_cursorAddress, put = __set_cursorAddress))::StringW cursorAddress;

  /// @brief Field fgcolor, offset 0xd0, size 0x4
  __declspec(property(get = __get_fgcolor, put = __set_fgcolor))::System::ConsoleColor fgcolor;

  /// @brief Field setfgcolor, offset 0xd8, size 0x8
  __declspec(property(get = __get_setfgcolor, put = __set_setfgcolor))::StringW setfgcolor;

  /// @brief Field setbgcolor, offset 0xe0, size 0x8
  __declspec(property(get = __get_setbgcolor, put = __set_setbgcolor))::StringW setbgcolor;

  /// @brief Field maxColors, offset 0xe8, size 0x4
  __declspec(property(get = __get_maxColors, put = __set_maxColors)) int32_t maxColors;

  /// @brief Field noGetPosition, offset 0xec, size 0x1
  __declspec(property(get = __get_noGetPosition, put = __set_noGetPosition)) bool noGetPosition;

  /// @brief Field keymap, offset 0xf0, size 0x8
  __declspec(property(get = __get_keymap, put = __set_keymap))::System::Collections::Hashtable* keymap;

  /// @brief Field rootmap, offset 0xf8, size 0x8
  __declspec(property(get = __get_rootmap, put = __set_rootmap))::System::ByteMatcher* rootmap;

  /// @brief Field rl_startx, offset 0x100, size 0x4
  __declspec(property(get = __get_rl_startx, put = __set_rl_startx)) int32_t rl_startx;

  /// @brief Field rl_starty, offset 0x104, size 0x4
  __declspec(property(get = __get_rl_starty, put = __set_rl_starty)) int32_t rl_starty;

  /// @brief Field control_characters, offset 0x108, size 0x8
  __declspec(property(get = __get_control_characters, put = __set_control_characters))::ArrayW<uint8_t, ::Array<uint8_t>*> control_characters;

  /// @brief Field echobuf, offset 0x110, size 0x8
  __declspec(property(get = __get_echobuf, put = __set_echobuf))::ArrayW<char16_t, ::Array<char16_t>*> echobuf;

  /// @brief Field echon, offset 0x118, size 0x4
  __declspec(property(get = __get_echon, put = __set_echon)) int32_t echon;

  /// @brief Field native_terminal_size, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_native_terminal_size, put = setStaticF_native_terminal_size))::cordl_internals::Ptr<int32_t> native_terminal_size;

  /// @brief Field terminal_size, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_terminal_size, put = setStaticF_terminal_size)) int32_t terminal_size;

  /// @brief Field locations, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_locations, put = setStaticF_locations))::ArrayW<::StringW, ::Array<::StringW>*> locations;

  /// @brief Field _consoleColorToAnsiCode, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__consoleColorToAnsiCode, put = setStaticF__consoleColorToAnsiCode))::ArrayW<int32_t, ::Array<int32_t>*> _consoleColorToAnsiCode;

  __declspec(property(get = get_Initialized)) bool Initialized;

  __declspec(property(get = get_WindowHeight)) int32_t WindowHeight;

  __declspec(property(get = get_WindowWidth)) int32_t WindowWidth;

  /// @brief Convert operator to "::System::IConsoleDriver"
  constexpr operator ::System::IConsoleDriver*() noexcept;

  constexpr ::System::TermInfoReader*& __get_reader();

  constexpr ::cordl_internals::to_const_pointer<::System::TermInfoReader*> const& __get_reader() const;

  constexpr void __set_reader(::System::TermInfoReader* value);

  constexpr int32_t& __get_cursorLeft();

  constexpr int32_t const& __get_cursorLeft() const;

  constexpr void __set_cursorLeft(int32_t value);

  constexpr int32_t& __get_cursorTop();

  constexpr int32_t const& __get_cursorTop() const;

  constexpr void __set_cursorTop(int32_t value);

  constexpr ::StringW& __get_title();

  constexpr ::StringW const& __get_title() const;

  constexpr void __set_title(::StringW value);

  constexpr ::StringW& __get_titleFormat();

  constexpr ::StringW const& __get_titleFormat() const;

  constexpr void __set_titleFormat(::StringW value);

  constexpr bool& __get_cursorVisible();

  constexpr bool const& __get_cursorVisible() const;

  constexpr void __set_cursorVisible(bool value);

  constexpr ::StringW& __get_csrVisible();

  constexpr ::StringW const& __get_csrVisible() const;

  constexpr void __set_csrVisible(::StringW value);

  constexpr ::StringW& __get_csrInvisible();

  constexpr ::StringW const& __get_csrInvisible() const;

  constexpr void __set_csrInvisible(::StringW value);

  constexpr ::StringW& __get_clear();

  constexpr ::StringW const& __get_clear() const;

  constexpr void __set_clear(::StringW value);

  constexpr ::StringW& __get_bell();

  constexpr ::StringW const& __get_bell() const;

  constexpr void __set_bell(::StringW value);

  constexpr ::StringW& __get_term();

  constexpr ::StringW const& __get_term() const;

  constexpr void __set_term(::StringW value);

  constexpr ::System::IO::StreamReader*& __get_stdin();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> const& __get_stdin() const;

  constexpr void __set_stdin(::System::IO::StreamReader* value);

  constexpr ::System::IO::CStreamWriter*& __get_stdout();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::CStreamWriter*> const& __get_stdout() const;

  constexpr void __set_stdout(::System::IO::CStreamWriter* value);

  constexpr int32_t& __get_windowWidth();

  constexpr int32_t const& __get_windowWidth() const;

  constexpr void __set_windowWidth(int32_t value);

  constexpr int32_t& __get_windowHeight();

  constexpr int32_t const& __get_windowHeight() const;

  constexpr void __set_windowHeight(int32_t value);

  constexpr int32_t& __get_bufferHeight();

  constexpr int32_t const& __get_bufferHeight() const;

  constexpr void __set_bufferHeight(int32_t value);

  constexpr int32_t& __get_bufferWidth();

  constexpr int32_t const& __get_bufferWidth() const;

  constexpr void __set_bufferWidth(int32_t value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get_buffer();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get_buffer() const;

  constexpr void __set_buffer(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr int32_t& __get_readpos();

  constexpr int32_t const& __get_readpos() const;

  constexpr void __set_readpos(int32_t value);

  constexpr int32_t& __get_writepos();

  constexpr int32_t const& __get_writepos() const;

  constexpr void __set_writepos(int32_t value);

  constexpr ::StringW& __get_keypadXmit();

  constexpr ::StringW const& __get_keypadXmit() const;

  constexpr void __set_keypadXmit(::StringW value);

  constexpr ::StringW& __get_keypadLocal();

  constexpr ::StringW const& __get_keypadLocal() const;

  constexpr void __set_keypadLocal(::StringW value);

  constexpr bool& __get_inited();

  constexpr bool const& __get_inited() const;

  constexpr void __set_inited(bool value);

  constexpr ::System::Object*& __get_initLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_initLock() const;

  constexpr void __set_initLock(::System::Object* value);

  constexpr bool& __get_initKeys();

  constexpr bool const& __get_initKeys() const;

  constexpr void __set_initKeys(bool value);

  constexpr ::StringW& __get_origPair();

  constexpr ::StringW const& __get_origPair() const;

  constexpr void __set_origPair(::StringW value);

  constexpr ::StringW& __get_origColors();

  constexpr ::StringW const& __get_origColors() const;

  constexpr void __set_origColors(::StringW value);

  constexpr ::StringW& __get_cursorAddress();

  constexpr ::StringW const& __get_cursorAddress() const;

  constexpr void __set_cursorAddress(::StringW value);

  constexpr ::System::ConsoleColor& __get_fgcolor();

  constexpr ::System::ConsoleColor const& __get_fgcolor() const;

  constexpr void __set_fgcolor(::System::ConsoleColor value);

  constexpr ::StringW& __get_setfgcolor();

  constexpr ::StringW const& __get_setfgcolor() const;

  constexpr void __set_setfgcolor(::StringW value);

  constexpr ::StringW& __get_setbgcolor();

  constexpr ::StringW const& __get_setbgcolor() const;

  constexpr void __set_setbgcolor(::StringW value);

  constexpr int32_t& __get_maxColors();

  constexpr int32_t const& __get_maxColors() const;

  constexpr void __set_maxColors(int32_t value);

  constexpr bool& __get_noGetPosition();

  constexpr bool const& __get_noGetPosition() const;

  constexpr void __set_noGetPosition(bool value);

  constexpr ::System::Collections::Hashtable*& __get_keymap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_keymap() const;

  constexpr void __set_keymap(::System::Collections::Hashtable* value);

  constexpr ::System::ByteMatcher*& __get_rootmap();

  constexpr ::cordl_internals::to_const_pointer<::System::ByteMatcher*> const& __get_rootmap() const;

  constexpr void __set_rootmap(::System::ByteMatcher* value);

  constexpr int32_t& __get_rl_startx();

  constexpr int32_t const& __get_rl_startx() const;

  constexpr void __set_rl_startx(int32_t value);

  constexpr int32_t& __get_rl_starty();

  constexpr int32_t const& __get_rl_starty() const;

  constexpr void __set_rl_starty(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_control_characters();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_control_characters() const;

  constexpr void __set_control_characters(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get_echobuf();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get_echobuf() const;

  constexpr void __set_echobuf(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr int32_t& __get_echon();

  constexpr int32_t const& __get_echon() const;

  constexpr void __set_echon(int32_t value);

  static inline void setStaticF_native_terminal_size(::cordl_internals::Ptr<int32_t> value);

  static inline ::cordl_internals::Ptr<int32_t> getStaticF_native_terminal_size();

  static inline void setStaticF_terminal_size(int32_t value);

  static inline int32_t getStaticF_terminal_size();

  static inline void setStaticF_locations(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_locations();

  static inline void setStaticF__consoleColorToAnsiCode(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF__consoleColorToAnsiCode();

  /// @brief Method TryTermInfoDir, addr 0x26002d0, size 0x12c, virtual false, abstract: false, final false
  static inline ::StringW TryTermInfoDir(::StringW dir, ::StringW term);

  /// @brief Method SearchTerminfo, addr 0x26003fc, size 0x16c, virtual false, abstract: false, final false
  static inline ::StringW SearchTerminfo(::StringW term);

  /// @brief Method WriteConsole, addr 0x2600568, size 0x28, virtual false, abstract: false, final false
  inline void WriteConsole(::StringW str);

  static inline ::System::TermInfoDriver* New_ctor(::StringW term);

  /// @brief Method .ctor, addr 0x25f7894, size 0x348, virtual false, abstract: false, final false
  inline void _ctor(::StringW term);

  /// @brief Method get_Initialized, addr 0x26008f4, size 0x8, virtual true, abstract: false, final true
  inline bool get_Initialized();

  /// @brief Method Init, addr 0x26008fc, size 0x864, virtual true, abstract: false, final true
  inline void Init();

  /// @brief Method IncrementX, addr 0x26014e0, size 0x6c, virtual false, abstract: false, final false
  inline void IncrementX();

  /// @brief Method WriteSpecialKey, addr 0x26015a4, size 0x114, virtual false, abstract: false, final false
  inline void WriteSpecialKey(::System::ConsoleKeyInfo key);

  /// @brief Method WriteSpecialKey, addr 0x2601868, size 0x28, virtual false, abstract: false, final false
  inline void WriteSpecialKey(char16_t c);

  /// @brief Method IsSpecialKey, addr 0x2601a14, size 0x84, virtual false, abstract: false, final false
  inline bool IsSpecialKey(::System::ConsoleKeyInfo key);

  /// @brief Method IsSpecialKey, addr 0x2601a98, size 0x28, virtual false, abstract: false, final false
  inline bool IsSpecialKey(char16_t c);

  /// @brief Method GetCursorPosition, addr 0x2601250, size 0x290, virtual false, abstract: false, final false
  inline void GetCursorPosition();

  /// @brief Method CheckWindowDimensions, addr 0x2601ba4, size 0x120, virtual false, abstract: false, final false
  inline void CheckWindowDimensions();

  /// @brief Method get_WindowHeight, addr 0x2601578, size 0x2c, virtual true, abstract: false, final true
  inline int32_t get_WindowHeight();

  /// @brief Method get_WindowWidth, addr 0x260154c, size 0x2c, virtual true, abstract: false, final true
  inline int32_t get_WindowWidth();

  /// @brief Method AddToBuffer, addr 0x2601ac0, size 0xe4, virtual false, abstract: false, final false
  inline void AddToBuffer(int32_t b);

  /// @brief Method AdjustBuffer, addr 0x2601cc4, size 0x14, virtual false, abstract: false, final false
  inline void AdjustBuffer();

  /// @brief Method CreateKeyInfoFromInt, addr 0x2601890, size 0x184, virtual false, abstract: false, final false
  inline ::System::ConsoleKeyInfo CreateKeyInfoFromInt(int32_t n, bool alt);

  /// @brief Method GetKeyFromBuffer, addr 0x2601cd8, size 0x2cc, virtual false, abstract: false, final false
  inline ::System::Object* GetKeyFromBuffer(bool cooked);

  /// @brief Method ReadKeyInternal, addr 0x26024b8, size 0x1c0, virtual false, abstract: false, final false
  inline ::System::ConsoleKeyInfo ReadKeyInternal(ByRef<bool> fresh);

  /// @brief Method InputPending, addr 0x26027e4, size 0x34, virtual false, abstract: false, final false
  inline bool InputPending();

  /// @brief Method QueueEcho, addr 0x2602818, size 0xc8, virtual false, abstract: false, final false
  inline void QueueEcho(char16_t c);

  /// @brief Method Echo, addr 0x26028e0, size 0x54, virtual false, abstract: false, final false
  inline void Echo(::System::ConsoleKeyInfo key);

  /// @brief Method EchoFlush, addr 0x2602934, size 0x34, virtual false, abstract: false, final false
  inline void EchoFlush();

  /// @brief Method Read, addr 0x2602968, size 0x304, virtual false, abstract: false, final false
  inline int32_t Read(ByRef<::ArrayW<char16_t, ::Array<char16_t>*>> dest, int32_t index, int32_t count);

  /// @brief Method ReadKey, addr 0x2602c6c, size 0x64, virtual true, abstract: false, final true
  inline ::System::ConsoleKeyInfo ReadKey(bool intercept);

  /// @brief Method ReadLine, addr 0x2602cd0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW ReadLine();

  /// @brief Method ReadToEnd, addr 0x2602ea0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW ReadToEnd();

  /// @brief Method ReadUntilConditionInternal, addr 0x2602cd8, size 0x1c8, virtual false, abstract: false, final false
  inline ::StringW ReadUntilConditionInternal(bool haltOnNewLine);

  /// @brief Method SetCursorPosition, addr 0x26016b8, size 0x1b0, virtual true, abstract: false, final true
  inline void SetCursorPosition(int32_t left, int32_t top);

  /// @brief Method CreateKeyMap, addr 0x2603020, size 0x1e98, virtual false, abstract: false, final false
  inline void CreateKeyMap();

  /// @brief Method InitKeys, addr 0x2602678, size 0x16c, virtual false, abstract: false, final false
  inline void InitKeys();

  /// @brief Method AddStringMapping, addr 0x2604f34, size 0x4c, virtual false, abstract: false, final false
  inline void AddStringMapping(::System::TermInfoStrings s);

  // Ctor Parameters [CppParam { name: "", ty: "TermInfoDriver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TermInfoDriver(TermInfoDriver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TermInfoDriver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TermInfoDriver(TermInfoDriver const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TermInfoDriver();

public:
  /// @brief Field reader, offset: 0x10, size: 0x8, def value: None
  ::System::TermInfoReader* ___reader;

  /// @brief Field cursorLeft, offset: 0x18, size: 0x4, def value: None
  int32_t ___cursorLeft;

  /// @brief Field cursorTop, offset: 0x1c, size: 0x4, def value: None
  int32_t ___cursorTop;

  /// @brief Field title, offset: 0x20, size: 0x8, def value: None
  ::StringW ___title;

  /// @brief Field titleFormat, offset: 0x28, size: 0x8, def value: None
  ::StringW ___titleFormat;

  /// @brief Field cursorVisible, offset: 0x30, size: 0x1, def value: None
  bool ___cursorVisible;

  /// @brief Field csrVisible, offset: 0x38, size: 0x8, def value: None
  ::StringW ___csrVisible;

  /// @brief Field csrInvisible, offset: 0x40, size: 0x8, def value: None
  ::StringW ___csrInvisible;

  /// @brief Field clear, offset: 0x48, size: 0x8, def value: None
  ::StringW ___clear;

  /// @brief Field bell, offset: 0x50, size: 0x8, def value: None
  ::StringW ___bell;

  /// @brief Field term, offset: 0x58, size: 0x8, def value: None
  ::StringW ___term;

  /// @brief Field stdin, offset: 0x60, size: 0x8, def value: None
  ::System::IO::StreamReader* ___stdin;

  /// @brief Field stdout, offset: 0x68, size: 0x8, def value: None
  ::System::IO::CStreamWriter* ___stdout;

  /// @brief Field windowWidth, offset: 0x70, size: 0x4, def value: None
  int32_t ___windowWidth;

  /// @brief Field windowHeight, offset: 0x74, size: 0x4, def value: None
  int32_t ___windowHeight;

  /// @brief Field bufferHeight, offset: 0x78, size: 0x4, def value: None
  int32_t ___bufferHeight;

  /// @brief Field bufferWidth, offset: 0x7c, size: 0x4, def value: None
  int32_t ___bufferWidth;

  /// @brief Field buffer, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___buffer;

  /// @brief Field readpos, offset: 0x88, size: 0x4, def value: None
  int32_t ___readpos;

  /// @brief Field writepos, offset: 0x8c, size: 0x4, def value: None
  int32_t ___writepos;

  /// @brief Field keypadXmit, offset: 0x90, size: 0x8, def value: None
  ::StringW ___keypadXmit;

  /// @brief Field keypadLocal, offset: 0x98, size: 0x8, def value: None
  ::StringW ___keypadLocal;

  /// @brief Field inited, offset: 0xa0, size: 0x1, def value: None
  bool ___inited;

  /// @brief Field initLock, offset: 0xa8, size: 0x8, def value: None
  ::System::Object* ___initLock;

  /// @brief Field initKeys, offset: 0xb0, size: 0x1, def value: None
  bool ___initKeys;

  /// @brief Field origPair, offset: 0xb8, size: 0x8, def value: None
  ::StringW ___origPair;

  /// @brief Field origColors, offset: 0xc0, size: 0x8, def value: None
  ::StringW ___origColors;

  /// @brief Field cursorAddress, offset: 0xc8, size: 0x8, def value: None
  ::StringW ___cursorAddress;

  /// @brief Field fgcolor, offset: 0xd0, size: 0x4, def value: None
  ::System::ConsoleColor ___fgcolor;

  /// @brief Field setfgcolor, offset: 0xd8, size: 0x8, def value: None
  ::StringW ___setfgcolor;

  /// @brief Field setbgcolor, offset: 0xe0, size: 0x8, def value: None
  ::StringW ___setbgcolor;

  /// @brief Field maxColors, offset: 0xe8, size: 0x4, def value: None
  int32_t ___maxColors;

  /// @brief Field noGetPosition, offset: 0xec, size: 0x1, def value: None
  bool ___noGetPosition;

  /// @brief Field keymap, offset: 0xf0, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___keymap;

  /// @brief Field rootmap, offset: 0xf8, size: 0x8, def value: None
  ::System::ByteMatcher* ___rootmap;

  /// @brief Field rl_startx, offset: 0x100, size: 0x4, def value: None
  int32_t ___rl_startx;

  /// @brief Field rl_starty, offset: 0x104, size: 0x4, def value: None
  int32_t ___rl_starty;

  /// @brief Field control_characters, offset: 0x108, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___control_characters;

  /// @brief Field echobuf, offset: 0x110, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___echobuf;

  /// @brief Field echon, offset: 0x118, size: 0x4, def value: None
  int32_t ___echon;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TermInfoDriver, 0x120>, "Size mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___reader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___cursorLeft) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___cursorTop) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___title) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___titleFormat) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___cursorVisible) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___csrVisible) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___csrInvisible) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___clear) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___bell) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___term) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___stdin) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___stdout) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___windowWidth) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___windowHeight) == 0x74, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___bufferHeight) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___bufferWidth) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___buffer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___readpos) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___writepos) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___keypadXmit) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___keypadLocal) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___inited) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___initLock) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___initKeys) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___origPair) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___origColors) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___cursorAddress) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___fgcolor) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___setfgcolor) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___setbgcolor) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___maxColors) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___noGetPosition) == 0xec, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___keymap) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___rootmap) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___rl_startx) == 0x100, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___rl_starty) == 0x104, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___control_characters) == 0x108, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___echobuf) == 0x110, "Offset mismatch!");

static_assert(offsetof(::System::TermInfoDriver, ___echon) == 0x118, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::TermInfoDriver);
DEFINE_IL2CPP_ARG_TYPE(::System::TermInfoDriver*, "System", "TermInfoDriver");
