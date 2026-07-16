#pragma once
// IWYU pragma private; include "System/UriHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__UriHelper_def.hpp"
#include "System/zzzz__UnescapeMode_def.hpp"
#include "System/zzzz__UriParser_def.hpp"
//  Writing Method size for method: ::System::UriHelper.TestForSubPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t*, uint16_t, char16_t*, uint16_t, bool)>(&::System::UriHelper::TestForSubPath)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x637100c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(),
                            { "TestForSubPath", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriHelper.EscapeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (*)(::StringW, int32_t, int32_t, ::ArrayW<char16_t>, ::by_ref<int32_t>, bool, char16_t, char16_t, char16_t)>(
    &::System::UriHelper::EscapeString)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x63711d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(),
                                         { "EscapeString",
                                           {},
                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                             ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriHelper.EnsureDestinationSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (*)(char16_t*, ::ArrayW<char16_t>, int32_t, int16_t, int16_t, ::by_ref<int32_t>, int32_t)>(
    &::System::UriHelper::EnsureDestinationSize)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6371758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(), { "EnsureDestinationSize",
                                                                       {},
                                                                       { ::i2c::type_of<char16_t*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>(),
                                                                         ::i2c::type_of<int16_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriHelper.UnescapeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (*)(::StringW, int32_t, int32_t, ::ArrayW<char16_t>, ::by_ref<int32_t>, char16_t, char16_t, char16_t, ::System::UnescapeMode,
                                                                              ::System::UriParser*, bool)>(&::System::UriHelper::UnescapeString)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6371aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(), { "UnescapeString",
                                                                       {},
                                                                       { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                                                         ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(),
                                                                         ::i2c::type_of<::System::UnescapeMode>(), ::i2c::type_of<::System::UriParser*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriHelper.UnescapeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (*)(char16_t*, int32_t, int32_t, ::ArrayW<char16_t>, ::by_ref<int32_t>, char16_t, char16_t, char16_t, ::System::UnescapeMode,
                                                                              ::System::UriParser*, bool)>(&::System::UriHelper::UnescapeString)> {
  constexpr static std::size_t size = 0x97c;
  constexpr static std::size_t addrs = 0x6371bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(), { "UnescapeString",
                                                                       {},
                                                                       { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                                                         ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(),
                                                                         ::i2c::type_of<::System::UnescapeMode>(), ::i2c::type_of<::System::UriParser*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriHelper.MatchUTF8Sequence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(char16_t*, ::ArrayW<char16_t>, ::by_ref<int32_t>, ::ArrayW<char16_t>, int32_t, ::ArrayW<uint8_t>, int32_t, bool, bool)>(
    &::System::UriHelper::MatchUTF8Sequence)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x63709d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(),
                                                { "MatchUTF8Sequence",
                                                  {},
                                                  { ::i2c::type_of<char16_t*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriHelper.EscapeAsciiChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(char16_t, ::ArrayW<char16_t>, ::by_ref<int32_t>)>(&::System::UriHelper::EscapeAsciiChar)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6370ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(),
                                                             { "EscapeAsciiChar", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriHelper.EscapedAscii
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(char16_t, char16_t)>(&::System::UriHelper::EscapedAscii)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x63708d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(), { "EscapedAscii", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriHelper.IsNotSafeForUnescape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::UriHelper::IsNotSafeForUnescape)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6370948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(), { "IsNotSafeForUnescape", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriHelper.IsReservedUnreservedOrHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::UriHelper::IsReservedUnreservedOrHash)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6371988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(), { "IsReservedUnreservedOrHash", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriHelper.IsUnreserved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::UriHelper::IsUnreserved)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x637188c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(), { "IsUnreserved", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriHelper.Is3986Unreserved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::UriHelper::Is3986Unreserved)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6372598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(), { "Is3986Unreserved", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
inline void System::UriHelper::setStaticF_HexUpperChars(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "HexUpperChars", ::System::UriHelper*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::UriHelper::getStaticF_HexUpperChars() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "HexUpperChars", ::System::UriHelper*>();
}
inline bool System::UriHelper::TestForSubPath(char16_t* pMe, uint16_t meLength, char16_t* pShe, uint16_t sheLength, bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(),
                          { "TestForSubPath", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pMe, meLength, pShe, sheLength, ignoreCase);
}
inline ::ArrayW<char16_t> System::UriHelper::EscapeString(::StringW input, int32_t start, int32_t end, ::ArrayW<char16_t> dest, ::by_ref<int32_t> destPos, bool isUriString, char16_t force1,
                                                          char16_t force2, char16_t rsvd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(),
                                       { "EscapeString",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                           ::i2c::type_of<bool>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(nullptr, ___internal_method, input, start, end, dest, destPos, isUriString, force1, force2, rsvd);
}
inline ::ArrayW<char16_t> System::UriHelper::EnsureDestinationSize(char16_t* pStr, ::ArrayW<char16_t> dest, int32_t currentInputPos, int16_t charsToAdd, int16_t minReallocateChars,
                                                                   ::by_ref<int32_t> destPos, int32_t prevInputPos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(), { "EnsureDestinationSize",
                                                                     {},
                                                                     { ::i2c::type_of<char16_t*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>(),
                                                                       ::i2c::type_of<int16_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(nullptr, ___internal_method, pStr, dest, currentInputPos, charsToAdd, minReallocateChars, destPos, prevInputPos);
}
inline ::ArrayW<char16_t> System::UriHelper::UnescapeString(::StringW input, int32_t start, int32_t end, ::ArrayW<char16_t> dest, ::by_ref<int32_t> destPosition, char16_t rsvd1, char16_t rsvd2,
                                                            char16_t rsvd3, ::System::UnescapeMode unescapeMode, ::System::UriParser* syntax, bool isQuery) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(), { "UnescapeString",
                                                                     {},
                                                                     { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                                                       ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(),
                                                                       ::i2c::type_of<::System::UnescapeMode>(), ::i2c::type_of<::System::UriParser*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(nullptr, ___internal_method, input, start, end, dest, destPosition, rsvd1, rsvd2, rsvd3, unescapeMode, syntax, isQuery);
}
inline ::ArrayW<char16_t> System::UriHelper::UnescapeString(char16_t* pStr, int32_t start, int32_t end, ::ArrayW<char16_t> dest, ::by_ref<int32_t> destPosition, char16_t rsvd1, char16_t rsvd2,
                                                            char16_t rsvd3, ::System::UnescapeMode unescapeMode, ::System::UriParser* syntax, bool isQuery) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(), { "UnescapeString",
                                                                     {},
                                                                     { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                                                       ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(),
                                                                       ::i2c::type_of<::System::UnescapeMode>(), ::i2c::type_of<::System::UriParser*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(nullptr, ___internal_method, pStr, start, end, dest, destPosition, rsvd1, rsvd2, rsvd3, unescapeMode, syntax, isQuery);
}
inline void System::UriHelper::MatchUTF8Sequence(char16_t* pDest, ::ArrayW<char16_t> dest, ::by_ref<int32_t> destOffset, ::ArrayW<char16_t> unescapedChars, int32_t charCount, ::ArrayW<uint8_t> bytes,
                                                 int32_t byteCount, bool isQuery, bool iriParsing) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(),
                                              { "MatchUTF8Sequence",
                                                {},
                                                { ::i2c::type_of<char16_t*>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::ArrayW<char16_t>>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pDest, dest, destOffset, unescapedChars, charCount, bytes, byteCount, isQuery, iriParsing);
}
inline void System::UriHelper::EscapeAsciiChar(char16_t ch, ::ArrayW<char16_t> to, ::by_ref<int32_t> pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(),
                                                           { "EscapeAsciiChar", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ch, to, pos);
}
inline char16_t System::UriHelper::EscapedAscii(char16_t digit, char16_t next) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(), { "EscapedAscii", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, digit, next);
}
inline bool System::UriHelper::IsNotSafeForUnescape(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(), { "IsNotSafeForUnescape", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline bool System::UriHelper::IsReservedUnreservedOrHash(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(), { "IsReservedUnreservedOrHash", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool System::UriHelper::IsUnreserved(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(), { "IsUnreserved", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline bool System::UriHelper::Is3986Unreserved(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::UriHelper*>(), { "Is3986Unreserved", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
// Ctor Parameters []
constexpr ::System::UriHelper::UriHelper() {}
