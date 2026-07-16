#pragma once
// IWYU pragma private; include "GlobalNamespace/IBitMaskUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__IBitMaskUtil_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBitMaskUtil.GetHexDigit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(char16_t)>(&::GlobalNamespace::IBitMaskUtil::GetHexDigit)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3778eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBitMaskUtil*>(), { "GetHexDigit", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBitMaskUtil.GetBase64Digit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(char16_t)>(&::GlobalNamespace::IBitMaskUtil::GetBase64Digit)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3778eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBitMaskUtil*>(), { "GetBase64Digit", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IBitMaskUtil.GetBase64Char
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(uint64_t)>(&::GlobalNamespace::IBitMaskUtil::GetBase64Char)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3778f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBitMaskUtil*>(), { "GetBase64Char", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
template <typename T> inline int32_t GlobalNamespace::IBitMaskUtil::NumberOfSetBits(T bitMask) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBitMaskUtil*>(), { "NumberOfSetBits", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bitMask);
}
template <typename T> inline ::StringW GlobalNamespace::IBitMaskUtil::ToShortString(T bitMask) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBitMaskUtil*>(), { "ToShortString", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bitMask);
}
template <typename T> inline ::ArrayW<uint8_t> GlobalNamespace::IBitMaskUtil::ToBytes(T bitMask) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBitMaskUtil*>(), { "ToBytes", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, bitMask);
}
template <typename T> inline bool GlobalNamespace::IBitMaskUtil::TryParse(::StringW stringSerializedMask, ::by_ref<T> bitMask) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBitMaskUtil*>(), { "TryParse", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, stringSerializedMask, bitMask);
}
template <typename T> inline bool GlobalNamespace::IBitMaskUtil::TryParse(::StringW stringSerializedMask, int32_t offset, int32_t length, ::by_ref<T> bitMask) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBitMaskUtil*>(),
                          { "TryParse", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, stringSerializedMask, offset, length, bitMask);
}
template <typename T> inline T GlobalNamespace::IBitMaskUtil::FromBytes(::ArrayW<uint8_t> bytes, int32_t offset) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBitMaskUtil*>(), { "FromBytes", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, bytes, offset);
}
inline uint32_t GlobalNamespace::IBitMaskUtil::GetHexDigit(char16_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBitMaskUtil*>(), { "GetHexDigit", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, c);
}
inline uint32_t GlobalNamespace::IBitMaskUtil::GetBase64Digit(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBitMaskUtil*>(), { "GetBase64Digit", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, c);
}
inline char16_t GlobalNamespace::IBitMaskUtil::GetBase64Char(uint64_t digit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBitMaskUtil*>(), { "GetBase64Char", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, digit);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IBitMaskUtil::IBitMaskUtil() {}
