#pragma once
// IWYU pragma private; include "System/TermInfoDriver.hpp"
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
namespace System::Collections {
class Hashtable;
}
namespace System::IO {
class CStreamWriter;
}
namespace System::IO {
class StreamReader;
}
namespace System {
class ByteMatcher;
}
namespace System {
struct ConsoleKeyInfo;
}
namespace System {
class IConsoleDriver;
}
namespace System {
class Object;
}
namespace System {
class TermInfoReader;
}
namespace System {
struct TermInfoStrings;
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
// CS Name: ::System::TermInfoDriver*
class CORDL_TYPE TermInfoDriver : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Initialized)) bool Initialized;

  __declspec(property(get = get_WindowHeight)) int32_t WindowHeight;

  __declspec(property(get = get_WindowWidth)) int32_t WindowWidth;

  /// @brief Field _consoleColorToAnsiCode, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__consoleColorToAnsiCode, put = setStaticF__consoleColorToAnsiCode))::ArrayW<int32_t, ::Array<int32_t>*> _consoleColorToAnsiCode;

  /// @brief Field bell, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_bell, put = __cordl_internal_set_bell))::StringW bell;

  /// @brief Field buffer, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer))::ArrayW<char16_t, ::Array<char16_t>*> buffer;

  /// @brief Field bufferHeight, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_bufferHeight, put = __cordl_internal_set_bufferHeight)) int32_t bufferHeight;

  /// @brief Field bufferWidth, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_bufferWidth, put = __cordl_internal_set_bufferWidth)) int32_t bufferWidth;

  /// @brief Field clear, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_clear, put = __cordl_internal_set_clear))::StringW clear;

  /// @brief Field control_characters, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_control_characters, put = __cordl_internal_set_control_characters))::ArrayW<uint8_t, ::Array<uint8_t>*> control_characters;

  /// @brief Field csrInvisible, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_csrInvisible, put = __cordl_internal_set_csrInvisible))::StringW csrInvisible;

  /// @brief Field csrVisible, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_csrVisible, put = __cordl_internal_set_csrVisible))::StringW csrVisible;

  /// @brief Field cursorAddress, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_cursorAddress, put = __cordl_internal_set_cursorAddress))::StringW cursorAddress;

  /// @brief Field cursorLeft, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_cursorLeft, put = __cordl_internal_set_cursorLeft)) int32_t cursorLeft;

  /// @brief Field cursorTop, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_cursorTop, put = __cordl_internal_set_cursorTop)) int32_t cursorTop;

  /// @brief Field cursorVisible, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_cursorVisible, put = __cordl_internal_set_cursorVisible)) bool cursorVisible;

  /// @brief Field echobuf, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_echobuf, put = __cordl_internal_set_echobuf))::ArrayW<char16_t, ::Array<char16_t>*> echobuf;

  /// @brief Field echon, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get_echon, put = __cordl_internal_set_echon)) int32_t echon;

  /// @brief Field fgcolor, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_fgcolor, put = __cordl_internal_set_fgcolor))::System::ConsoleColor fgcolor;

  /// @brief Field initKeys, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get_initKeys, put = __cordl_internal_set_initKeys)) bool initKeys;

  /// @brief Field initLock, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_initLock, put = __cordl_internal_set_initLock))::System::Object* initLock;

  /// @brief Field inited, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_inited, put = __cordl_internal_set_inited)) bool inited;

  /// @brief Field keymap, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_keymap, put = __cordl_internal_set_keymap))::System::Collections::Hashtable* keymap;

  /// @brief Field keypadLocal, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_keypadLocal, put = __cordl_internal_set_keypadLocal))::StringW keypadLocal;

  /// @brief Field keypadXmit, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_keypadXmit, put = __cordl_internal_set_keypadXmit))::StringW keypadXmit;

  /// @brief Field locations, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_locations, put = setStaticF_locations))::ArrayW<::StringW, ::Array<::StringW>*> locations;

  /// @brief Field maxColors, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_maxColors, put = __cordl_internal_set_maxColors)) int32_t maxColors;

  /// @brief Field native_terminal_size, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_native_terminal_size, put = setStaticF_native_terminal_size))::cordl_internals::Ptr<int32_t> native_terminal_size;

  /// @brief Field noGetPosition, offset 0xec, size 0x1
  __declspec(property(get = __cordl_internal_get_noGetPosition, put = __cordl_internal_set_noGetPosition)) bool noGetPosition;

  /// @brief Field origColors, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_origColors, put = __cordl_internal_set_origColors))::StringW origColors;

  /// @brief Field origPair, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_origPair, put = __cordl_internal_set_origPair))::StringW origPair;

  /// @brief Field reader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader))::System::TermInfoReader* reader;

  /// @brief Field readpos, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_readpos, put = __cordl_internal_set_readpos)) int32_t readpos;

  /// @brief Field rl_startx, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_rl_startx, put = __cordl_internal_set_rl_startx)) int32_t rl_startx;

  /// @brief Field rl_starty, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_rl_starty, put = __cordl_internal_set_rl_starty)) int32_t rl_starty;

  /// @brief Field rootmap, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_rootmap, put = __cordl_internal_set_rootmap))::System::ByteMatcher* rootmap;

  /// @brief Field setbgcolor, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_setbgcolor, put = __cordl_internal_set_setbgcolor))::StringW setbgcolor;

  /// @brief Field setfgcolor, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_setfgcolor, put = __cordl_internal_set_setfgcolor))::StringW setfgcolor;

  /// @brief Field stdin, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_stdin, put = __cordl_internal_set_stdin))::System::IO::StreamReader* stdin;

  /// @brief Field stdout, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_stdout, put = __cordl_internal_set_stdout))::System::IO::CStreamWriter* stdout;

  /// @brief Field term, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_term, put = __cordl_internal_set_term))::StringW term;

  /// @brief Field terminal_size, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_terminal_size, put = setStaticF_terminal_size)) int32_t terminal_size;

  /// @brief Field title, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_title, put = __cordl_internal_set_title))::StringW title;

  /// @brief Field titleFormat, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_titleFormat, put = __cordl_internal_set_titleFormat))::StringW titleFormat;

  /// @brief Field windowHeight, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_windowHeight, put = __cordl_internal_set_windowHeight)) int32_t windowHeight;

  /// @brief Field windowWidth, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_windowWidth, put = __cordl_internal_set_windowWidth)) int32_t windowWidth;

  /// @brief Field writepos, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_writepos, put = __cordl_internal_set_writepos)) int32_t writepos;

  /// @brief Convert operator to "::System::IConsoleDriver"
  constexpr operator ::System::IConsoleDriver*() noexcept;

  /// @brief Method AddStringMapping, addr 0x29a5494, size 0x4c, virtual false, abstract: false, final false
  inline void AddStringMapping(::System::TermInfoStrings s);

  /// @brief Method AddToBuffer, addr 0x29a2020, size 0xe4, virtual false, abstract: false, final false
  inline void AddToBuffer(int32_t b);

  /// @brief Method AdjustBuffer, addr 0x29a2224, size 0x14, virtual false, abstract: false, final false
  inline void AdjustBuffer();

  /// @brief Method CheckWindowDimensions, addr 0x29a2104, size 0x120, virtual false, abstract: false, final false
  inline void CheckWindowDimensions();

  /// @brief Method CreateKeyInfoFromInt, addr 0x29a1df0, size 0x184, virtual false, abstract: false, final false
  inline ::System::ConsoleKeyInfo CreateKeyInfoFromInt(int32_t n, bool alt);

  /// @brief Method CreateKeyMap, addr 0x29a3580, size 0x1e98, virtual false, abstract: false, final false
  inline void CreateKeyMap();

  /// @brief Method Echo, addr 0x29a2e40, size 0x54, virtual false, abstract: false, final false
  inline void Echo(::System::ConsoleKeyInfo key);

  /// @brief Method EchoFlush, addr 0x29a2e94, size 0x34, virtual false, abstract: false, final false
  inline void EchoFlush();

  /// @brief Method GetCursorPosition, addr 0x29a17b0, size 0x290, virtual false, abstract: false, final false
  inline void GetCursorPosition();

  /// @brief Method GetKeyFromBuffer, addr 0x29a2238, size 0x2cc, virtual false, abstract: false, final false
  inline ::System::Object* GetKeyFromBuffer(bool cooked);

  /// @brief Method IncrementX, addr 0x29a1a40, size 0x6c, virtual false, abstract: false, final false
  inline void IncrementX();

  /// @brief Method Init, addr 0x29a0e5c, size 0x864, virtual true, abstract: false, final true
  inline void Init();

  /// @brief Method InitKeys, addr 0x29a2bd8, size 0x16c, virtual false, abstract: false, final false
  inline void InitKeys();

  /// @brief Method InputPending, addr 0x29a2d44, size 0x34, virtual false, abstract: false, final false
  inline bool InputPending();

  /// @brief Method IsSpecialKey, addr 0x29a1ff8, size 0x28, virtual false, abstract: false, final false
  inline bool IsSpecialKey(char16_t c);

  /// @brief Method IsSpecialKey, addr 0x29a1f74, size 0x84, virtual false, abstract: false, final false
  inline bool IsSpecialKey(::System::ConsoleKeyInfo key);

  static inline ::System::TermInfoDriver* New_ctor(::StringW term);

  /// @brief Method QueueEcho, addr 0x29a2d78, size 0xc8, virtual false, abstract: false, final false
  inline void QueueEcho(char16_t c);

  /// @brief Method Read, addr 0x29a2ec8, size 0x304, virtual false, abstract: false, final false
  inline int32_t Read(ByRef<::ArrayW<char16_t, ::Array<char16_t>*>> dest, int32_t index, int32_t count);

  /// @brief Method ReadKey, addr 0x29a31cc, size 0x64, virtual true, abstract: false, final true
  inline ::System::ConsoleKeyInfo ReadKey(bool intercept);

  /// @brief Method ReadKeyInternal, addr 0x29a2a18, size 0x1c0, virtual false, abstract: false, final false
  inline ::System::ConsoleKeyInfo ReadKeyInternal(ByRef<bool> fresh);

  /// @brief Method ReadLine, addr 0x29a3230, size 0x8, virtual true, abstract: false, final true
  inline ::StringW ReadLine();

  /// @brief Method ReadToEnd, addr 0x29a3400, size 0x8, virtual false, abstract: false, final false
  inline ::StringW ReadToEnd();

  /// @brief Method ReadUntilConditionInternal, addr 0x29a3238, size 0x1c8, virtual false, abstract: false, final false
  inline ::StringW ReadUntilConditionInternal(bool haltOnNewLine);

  /// @brief Method SearchTerminfo, addr 0x29a095c, size 0x16c, virtual false, abstract: false, final false
  static inline ::StringW SearchTerminfo(::StringW term);

  /// @brief Method SetCursorPosition, addr 0x29a1c18, size 0x1b0, virtual true, abstract: false, final true
  inline void SetCursorPosition(int32_t left, int32_t top);

  /// @brief Method TryTermInfoDir, addr 0x29a0830, size 0x12c, virtual false, abstract: false, final false
  static inline ::StringW TryTermInfoDir(::StringW dir, ::StringW term);

  /// @brief Method WriteConsole, addr 0x29a0ac8, size 0x28, virtual false, abstract: false, final false
  inline void WriteConsole(::StringW str);

  /// @brief Method WriteSpecialKey, addr 0x29a1dc8, size 0x28, virtual false, abstract: false, final false
  inline void WriteSpecialKey(char16_t c);

  /// @brief Method WriteSpecialKey, addr 0x29a1b04, size 0x114, virtual false, abstract: false, final false
  inline void WriteSpecialKey(::System::ConsoleKeyInfo key);

  constexpr ::StringW const& __cordl_internal_get_bell() const;

  constexpr ::StringW& __cordl_internal_get_bell();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_buffer() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_buffer();

  constexpr int32_t const& __cordl_internal_get_bufferHeight() const;

  constexpr int32_t& __cordl_internal_get_bufferHeight();

  constexpr int32_t const& __cordl_internal_get_bufferWidth() const;

  constexpr int32_t& __cordl_internal_get_bufferWidth();

  constexpr ::StringW const& __cordl_internal_get_clear() const;

  constexpr ::StringW& __cordl_internal_get_clear();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_control_characters() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_control_characters();

  constexpr ::StringW const& __cordl_internal_get_csrInvisible() const;

  constexpr ::StringW& __cordl_internal_get_csrInvisible();

  constexpr ::StringW const& __cordl_internal_get_csrVisible() const;

  constexpr ::StringW& __cordl_internal_get_csrVisible();

  constexpr ::StringW const& __cordl_internal_get_cursorAddress() const;

  constexpr ::StringW& __cordl_internal_get_cursorAddress();

  constexpr int32_t const& __cordl_internal_get_cursorLeft() const;

  constexpr int32_t& __cordl_internal_get_cursorLeft();

  constexpr int32_t const& __cordl_internal_get_cursorTop() const;

  constexpr int32_t& __cordl_internal_get_cursorTop();

  constexpr bool const& __cordl_internal_get_cursorVisible() const;

  constexpr bool& __cordl_internal_get_cursorVisible();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_echobuf() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_echobuf();

  constexpr int32_t const& __cordl_internal_get_echon() const;

  constexpr int32_t& __cordl_internal_get_echon();

  constexpr ::System::ConsoleColor const& __cordl_internal_get_fgcolor() const;

  constexpr ::System::ConsoleColor& __cordl_internal_get_fgcolor();

  constexpr bool const& __cordl_internal_get_initKeys() const;

  constexpr bool& __cordl_internal_get_initKeys();

  constexpr ::System::Object*& __cordl_internal_get_initLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_initLock() const;

  constexpr bool const& __cordl_internal_get_inited() const;

  constexpr bool& __cordl_internal_get_inited();

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_keymap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_keymap() const;

  constexpr ::StringW const& __cordl_internal_get_keypadLocal() const;

  constexpr ::StringW& __cordl_internal_get_keypadLocal();

  constexpr ::StringW const& __cordl_internal_get_keypadXmit() const;

  constexpr ::StringW& __cordl_internal_get_keypadXmit();

  constexpr int32_t const& __cordl_internal_get_maxColors() const;

  constexpr int32_t& __cordl_internal_get_maxColors();

  constexpr bool const& __cordl_internal_get_noGetPosition() const;

  constexpr bool& __cordl_internal_get_noGetPosition();

  constexpr ::StringW const& __cordl_internal_get_origColors() const;

  constexpr ::StringW& __cordl_internal_get_origColors();

  constexpr ::StringW const& __cordl_internal_get_origPair() const;

  constexpr ::StringW& __cordl_internal_get_origPair();

  constexpr ::System::TermInfoReader*& __cordl_internal_get_reader();

  constexpr ::cordl_internals::to_const_pointer<::System::TermInfoReader*> const& __cordl_internal_get_reader() const;

  constexpr int32_t const& __cordl_internal_get_readpos() const;

  constexpr int32_t& __cordl_internal_get_readpos();

  constexpr int32_t const& __cordl_internal_get_rl_startx() const;

  constexpr int32_t& __cordl_internal_get_rl_startx();

  constexpr int32_t const& __cordl_internal_get_rl_starty() const;

  constexpr int32_t& __cordl_internal_get_rl_starty();

  constexpr ::System::ByteMatcher*& __cordl_internal_get_rootmap();

  constexpr ::cordl_internals::to_const_pointer<::System::ByteMatcher*> const& __cordl_internal_get_rootmap() const;

  constexpr ::StringW const& __cordl_internal_get_setbgcolor() const;

  constexpr ::StringW& __cordl_internal_get_setbgcolor();

  constexpr ::StringW const& __cordl_internal_get_setfgcolor() const;

  constexpr ::StringW& __cordl_internal_get_setfgcolor();

  constexpr ::System::IO::StreamReader*& __cordl_internal_get_stdin();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> const& __cordl_internal_get_stdin() const;

  constexpr ::System::IO::CStreamWriter*& __cordl_internal_get_stdout();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::CStreamWriter*> const& __cordl_internal_get_stdout() const;

  constexpr ::StringW const& __cordl_internal_get_term() const;

  constexpr ::StringW& __cordl_internal_get_term();

  constexpr ::StringW const& __cordl_internal_get_title() const;

  constexpr ::StringW& __cordl_internal_get_title();

  constexpr ::StringW const& __cordl_internal_get_titleFormat() const;

  constexpr ::StringW& __cordl_internal_get_titleFormat();

  constexpr int32_t const& __cordl_internal_get_windowHeight() const;

  constexpr int32_t& __cordl_internal_get_windowHeight();

  constexpr int32_t const& __cordl_internal_get_windowWidth() const;

  constexpr int32_t& __cordl_internal_get_windowWidth();

  constexpr int32_t const& __cordl_internal_get_writepos() const;

  constexpr int32_t& __cordl_internal_get_writepos();

  constexpr void __cordl_internal_set_bell(::StringW value);

  constexpr void __cordl_internal_set_buffer(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_bufferHeight(int32_t value);

  constexpr void __cordl_internal_set_bufferWidth(int32_t value);

  constexpr void __cordl_internal_set_clear(::StringW value);

  constexpr void __cordl_internal_set_control_characters(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_csrInvisible(::StringW value);

  constexpr void __cordl_internal_set_csrVisible(::StringW value);

  constexpr void __cordl_internal_set_cursorAddress(::StringW value);

  constexpr void __cordl_internal_set_cursorLeft(int32_t value);

  constexpr void __cordl_internal_set_cursorTop(int32_t value);

  constexpr void __cordl_internal_set_cursorVisible(bool value);

  constexpr void __cordl_internal_set_echobuf(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_echon(int32_t value);

  constexpr void __cordl_internal_set_fgcolor(::System::ConsoleColor value);

  constexpr void __cordl_internal_set_initKeys(bool value);

  constexpr void __cordl_internal_set_initLock(::System::Object* value);

  constexpr void __cordl_internal_set_inited(bool value);

  constexpr void __cordl_internal_set_keymap(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_keypadLocal(::StringW value);

  constexpr void __cordl_internal_set_keypadXmit(::StringW value);

  constexpr void __cordl_internal_set_maxColors(int32_t value);

  constexpr void __cordl_internal_set_noGetPosition(bool value);

  constexpr void __cordl_internal_set_origColors(::StringW value);

  constexpr void __cordl_internal_set_origPair(::StringW value);

  constexpr void __cordl_internal_set_reader(::System::TermInfoReader* value);

  constexpr void __cordl_internal_set_readpos(int32_t value);

  constexpr void __cordl_internal_set_rl_startx(int32_t value);

  constexpr void __cordl_internal_set_rl_starty(int32_t value);

  constexpr void __cordl_internal_set_rootmap(::System::ByteMatcher* value);

  constexpr void __cordl_internal_set_setbgcolor(::StringW value);

  constexpr void __cordl_internal_set_setfgcolor(::StringW value);

  constexpr void __cordl_internal_set_stdin(::System::IO::StreamReader* value);

  constexpr void __cordl_internal_set_stdout(::System::IO::CStreamWriter* value);

  constexpr void __cordl_internal_set_term(::StringW value);

  constexpr void __cordl_internal_set_title(::StringW value);

  constexpr void __cordl_internal_set_titleFormat(::StringW value);

  constexpr void __cordl_internal_set_windowHeight(int32_t value);

  constexpr void __cordl_internal_set_windowWidth(int32_t value);

  constexpr void __cordl_internal_set_writepos(int32_t value);

  /// @brief Method .ctor, addr 0x2997de8, size 0x348, virtual false, abstract: false, final false
  inline void _ctor(::StringW term);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF__consoleColorToAnsiCode();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_locations();

  static inline ::cordl_internals::Ptr<int32_t> getStaticF_native_terminal_size();

  static inline int32_t getStaticF_terminal_size();

  /// @brief Method get_Initialized, addr 0x29a0e54, size 0x8, virtual true, abstract: false, final true
  inline bool get_Initialized();

  /// @brief Method get_WindowHeight, addr 0x29a1ad8, size 0x2c, virtual true, abstract: false, final true
  inline int32_t get_WindowHeight();

  /// @brief Method get_WindowWidth, addr 0x29a1aac, size 0x2c, virtual true, abstract: false, final true
  inline int32_t get_WindowWidth();

  /// @brief Convert to "::System::IConsoleDriver"
  constexpr ::System::IConsoleDriver* i___System__IConsoleDriver() noexcept;

  static inline void setStaticF__consoleColorToAnsiCode(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_locations(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_native_terminal_size(::cordl_internals::Ptr<int32_t> value);

  static inline void setStaticF_terminal_size(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TermInfoDriver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TermInfoDriver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TermInfoDriver(TermInfoDriver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TermInfoDriver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TermInfoDriver(TermInfoDriver const&) = delete;

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
