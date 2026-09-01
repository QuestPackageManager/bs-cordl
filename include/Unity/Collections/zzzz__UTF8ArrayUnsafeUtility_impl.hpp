#pragma once
// IWYU pragma private; include "Unity\Collections\UTF8ArrayUnsafeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__UTF8ArrayUnsafeUtility_def.hpp"
#include "Unity/Collections/zzzz__ConversionError_def.hpp"
#include "Unity/Collections/zzzz__CopyError_def.hpp"
#include "Unity/Collections/zzzz__FormatError_def.hpp"
#include "Unity/Collections/zzzz__UTF8ArrayUnsafeUtility_def.hpp"
#include "Unity/Collections/zzzz__Unicode_def.hpp"
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility_Comparison._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::UTF8ArrayUnsafeUtility_Comparison::*)(::Unity::Collections::Unicode_Rune, ::Unity::Collections::ConversionError,
                                                                                                                         ::Unity::Collections::Unicode_Rune, ::Unity::Collections::ConversionError)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility_Comparison::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x64c99cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility_Comparison>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::Unicode_Rune>(), ::i2c::type_of<::Unity::Collections::ConversionError>(),
                                                                 ::i2c::type_of<::Unity::Collections::Unicode_Rune>(), ::i2c::type_of<::Unity::Collections::ConversionError>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::UTF8ArrayUnsafeUtility_Comparison::_ctor(::Unity::Collections::Unicode_Rune runeA, ::Unity::Collections::ConversionError errorA,
                                                                         ::Unity::Collections::Unicode_Rune runeB, ::Unity::Collections::ConversionError errorB) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility_Comparison>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::Unicode_Rune>(), ::i2c::type_of<::Unity::Collections::ConversionError>(),
                                                               ::i2c::type_of<::Unity::Collections::Unicode_Rune>(), ::i2c::type_of<::Unity::Collections::ConversionError>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, runeA, errorA, runeB, errorB);
}
// Ctor Parameters [CppParam { name: "terminates", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "result", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::UTF8ArrayUnsafeUtility_Comparison::UTF8ArrayUnsafeUtility_Comparison(bool terminates, int32_t result) noexcept {
  this->terminates = terminates;
  this->result = result;
}
// Ctor Parameters []
constexpr ::Unity::Collections::UTF8ArrayUnsafeUtility_Comparison::UTF8ArrayUnsafeUtility_Comparison() {}
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::CopyError (*)(uint8_t*, ::by_ref<int32_t>, int32_t, char16_t*, int32_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::Copy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c3e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                            { "Copy", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::CopyError (*)(uint8_t*, ::by_ref<uint16_t>, uint16_t, char16_t*, int32_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::Copy)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x64c9684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                            { "Copy", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::CopyError (*)(uint8_t*, ::by_ref<int32_t>, int32_t, uint8_t*, int32_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::Copy)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64c96cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                            { "Copy", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::CopyError (*)(uint8_t*, ::by_ref<uint16_t>, uint16_t, uint8_t*, uint16_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::Copy)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64c9710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                            { "Copy", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::CopyError (*)(char16_t*, ::by_ref<int32_t>, int32_t, uint8_t*, int32_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::Copy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64c9754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                            { "Copy", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::CopyError (*)(char16_t*, ::by_ref<uint16_t>, uint16_t, uint8_t*, uint16_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::Copy)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x64c9774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                         { "Copy", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.AppendUTF8Bytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::FormatError (*)(uint8_t*, ::by_ref<int32_t>, int32_t, uint8_t*, int32_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::AppendUTF8Bytes)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x64c97b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
            { "AppendUTF8Bytes", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::CopyError (*)(uint8_t*, ::by_ref<uint16_t>, uint16_t, uint8_t*, uint16_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::Append)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64c9848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                         { "Append", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::CopyError (*)(uint8_t*, ::by_ref<uint16_t>, uint16_t, char16_t*, int32_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::Append)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64c989c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                         { "Append", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::CopyError (*)(char16_t*, ::by_ref<uint16_t>, uint16_t, uint8_t*, uint16_t)>(
    &::Unity::Collections::UTF8ArrayUnsafeUtility::Append)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64c98f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                         { "Append", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.StrCmp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, int32_t, uint8_t*, int32_t)>(&::Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x64c9944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                                                             { "StrCmp", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.StrCmp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, int32_t, ::Unity::Collections::Unicode_Rune*, int32_t)>(&::Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x64c99f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                            { "StrCmp", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Unicode_Rune*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.StrCmp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*, int32_t, char16_t*, int32_t)>(&::Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x64c9a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                                                             { "StrCmp", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.EqualsUTF8Bytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t*, int32_t, uint8_t*, int32_t)>(&::Unity::Collections::UTF8ArrayUnsafeUtility::EqualsUTF8Bytes)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x64c508c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                                                { "EqualsUTF8Bytes", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.StrCmp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, int32_t, char16_t*, int32_t)>(&::Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x64c9b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                                                             { "StrCmp", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::UTF8ArrayUnsafeUtility.StrCmp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*, int32_t, uint8_t*, int32_t)>(&::Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x64c9b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                                                             { "StrCmp", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::Unity::Collections::CopyError Unity::Collections::UTF8ArrayUnsafeUtility::Copy(uint8_t* dest, ::by_ref<int32_t> destLength, int32_t destUTF8MaxLengthInBytes, char16_t* src,
                                                                                        int32_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                          { "Copy", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError>(nullptr, ___internal_method, dest, destLength, destUTF8MaxLengthInBytes, src, srcLength);
}
inline ::Unity::Collections::CopyError Unity::Collections::UTF8ArrayUnsafeUtility::Copy(uint8_t* dest, ::by_ref<uint16_t> destLength, uint16_t destUTF8MaxLengthInBytes, char16_t* src,
                                                                                        int32_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                          { "Copy", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError>(nullptr, ___internal_method, dest, destLength, destUTF8MaxLengthInBytes, src, srcLength);
}
inline ::Unity::Collections::CopyError Unity::Collections::UTF8ArrayUnsafeUtility::Copy(uint8_t* dest, ::by_ref<int32_t> destLength, int32_t destUTF8MaxLengthInBytes, uint8_t* src,
                                                                                        int32_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                          { "Copy", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError>(nullptr, ___internal_method, dest, destLength, destUTF8MaxLengthInBytes, src, srcLength);
}
inline ::Unity::Collections::CopyError Unity::Collections::UTF8ArrayUnsafeUtility::Copy(uint8_t* dest, ::by_ref<uint16_t> destLength, uint16_t destUTF8MaxLengthInBytes, uint8_t* src,
                                                                                        uint16_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                          { "Copy", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError>(nullptr, ___internal_method, dest, destLength, destUTF8MaxLengthInBytes, src, srcLength);
}
inline ::Unity::Collections::CopyError Unity::Collections::UTF8ArrayUnsafeUtility::Copy(char16_t* dest, ::by_ref<int32_t> destLength, int32_t destUCS2MaxLengthInChars, uint8_t* src,
                                                                                        int32_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                          { "Copy", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError>(nullptr, ___internal_method, dest, destLength, destUCS2MaxLengthInChars, src, srcLength);
}
inline ::Unity::Collections::CopyError Unity::Collections::UTF8ArrayUnsafeUtility::Copy(char16_t* dest, ::by_ref<uint16_t> destLength, uint16_t destUCS2MaxLengthInChars, uint8_t* src,
                                                                                        uint16_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                          { "Copy", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError>(nullptr, ___internal_method, dest, destLength, destUCS2MaxLengthInChars, src, srcLength);
}
inline ::Unity::Collections::FormatError Unity::Collections::UTF8ArrayUnsafeUtility::AppendUTF8Bytes(uint8_t* dest, ::by_ref<int32_t> destLength, int32_t destCapacity, uint8_t* src,
                                                                                                     int32_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
          { "AppendUTF8Bytes", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FormatError>(nullptr, ___internal_method, dest, destLength, destCapacity, src, srcLength);
}
inline ::Unity::Collections::CopyError Unity::Collections::UTF8ArrayUnsafeUtility::Append(uint8_t* dest, ::by_ref<uint16_t> destLength, uint16_t destUTF8MaxLengthInBytes, uint8_t* src,
                                                                                          uint16_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                          { "Append", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError>(nullptr, ___internal_method, dest, destLength, destUTF8MaxLengthInBytes, src, srcLength);
}
inline ::Unity::Collections::CopyError Unity::Collections::UTF8ArrayUnsafeUtility::Append(uint8_t* dest, ::by_ref<uint16_t> destLength, uint16_t destUTF8MaxLengthInBytes, char16_t* src,
                                                                                          int32_t srcLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                          { "Append", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError>(nullptr, ___internal_method, dest, destLength, destUTF8MaxLengthInBytes, src, srcLength);
}
inline ::Unity::Collections::CopyError Unity::Collections::UTF8ArrayUnsafeUtility::Append(char16_t* dest, ::by_ref<uint16_t> destLength, uint16_t destUCS2MaxLengthInChars, uint8_t* src,
                                                                                          uint16_t srcLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                       { "Append", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::CopyError>(nullptr, ___internal_method, dest, destLength, destUCS2MaxLengthInChars, src, srcLength);
}
inline int32_t Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp(uint8_t* utf8BufferA, int32_t utf8LengthInBytesA, uint8_t* utf8BufferB, int32_t utf8LengthInBytesB) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                                                           { "StrCmp", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, utf8BufferA, utf8LengthInBytesA, utf8BufferB, utf8LengthInBytesB);
}
inline int32_t Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp(uint8_t* utf8BufferA, int32_t utf8LengthInBytesA, ::Unity::Collections::Unicode_Rune* runeBufferB, int32_t lengthInRunesB) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                                       { "StrCmp", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Unicode_Rune*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, utf8BufferA, utf8LengthInBytesA, runeBufferB, lengthInRunesB);
}
inline int32_t Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp(char16_t* utf16BufferA, int32_t utf16LengthInCharsA, char16_t* utf16BufferB, int32_t utf16LengthInCharsB) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                                                           { "StrCmp", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, utf16BufferA, utf16LengthInCharsA, utf16BufferB, utf16LengthInCharsB);
}
inline bool Unity::Collections::UTF8ArrayUnsafeUtility::EqualsUTF8Bytes(uint8_t* aBytes, int32_t aLength, uint8_t* bBytes, int32_t bLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                                              { "EqualsUTF8Bytes", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, aBytes, aLength, bBytes, bLength);
}
inline int32_t Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp(uint8_t* utf8Buffer, int32_t utf8LengthInBytes, char16_t* utf16Buffer, int32_t utf16LengthInChars) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                                                           { "StrCmp", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, utf8Buffer, utf8LengthInBytes, utf16Buffer, utf16LengthInChars);
}
inline int32_t Unity::Collections::UTF8ArrayUnsafeUtility::StrCmp(char16_t* utf16Buffer, int32_t utf16LengthInChars, uint8_t* utf8Buffer, int32_t utf8LengthInBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UTF8ArrayUnsafeUtility*>(),
                                                           { "StrCmp", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, utf16Buffer, utf16LengthInChars, utf8Buffer, utf8LengthInBytes);
}
// Ctor Parameters []
constexpr ::Unity::Collections::UTF8ArrayUnsafeUtility::UTF8ArrayUnsafeUtility() {}
