#pragma once
// IWYU pragma private; include "Mono\Security\BitConverterLE.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/zzzz__BitConverterLE_def.hpp"
//  Writing Method size for method: ::Mono::Security::BitConverterLE.GetUIntBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(uint8_t*)>(&::Mono::Security::BitConverterLE::GetUIntBytes)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a8aa84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "GetUIntBytes", {}, { ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::BitConverterLE.GetULongBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(uint8_t*)>(&::Mono::Security::BitConverterLE::GetULongBytes)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a8ab20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "GetULongBytes", {}, { ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::BitConverterLE.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int32_t)>(&::Mono::Security::BitConverterLE::GetBytes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a89f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "GetBytes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::BitConverterLE.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int64_t)>(&::Mono::Security::BitConverterLE::GetBytes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a8abfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "GetBytes", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::BitConverterLE.UShortFromBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::BitConverterLE::UShortFromBytes)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a8ac10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(),
                                                             { "UShortFromBytes", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::BitConverterLE.UIntFromBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::BitConverterLE::UIntFromBytes)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a8ac5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(),
                                                             { "UIntFromBytes", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::BitConverterLE.ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::BitConverterLE::ToInt32)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a8ace0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "ToInt32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::BitConverterLE.ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::BitConverterLE::ToUInt16)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a8ad04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "ToUInt16", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::BitConverterLE.ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::BitConverterLE::ToUInt32)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a8ad28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "ToUInt32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> Mono::Security::BitConverterLE::GetUIntBytes(uint8_t* bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "GetUIntBytes", {}, { ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, bytes);
}
inline ::ArrayW<uint8_t> Mono::Security::BitConverterLE::GetULongBytes(uint8_t* bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "GetULongBytes", {}, { ::i2c::type_of<uint8_t*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, bytes);
}
inline ::ArrayW<uint8_t> Mono::Security::BitConverterLE::GetBytes(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "GetBytes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Mono::Security::BitConverterLE::GetBytes(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "GetBytes", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline void Mono::Security::BitConverterLE::UShortFromBytes(uint8_t* dst, ::ArrayW<uint8_t> src, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(),
                                                           { "UShortFromBytes", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dst, src, startIndex);
}
inline void Mono::Security::BitConverterLE::UIntFromBytes(uint8_t* dst, ::ArrayW<uint8_t> src, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(),
                                                           { "UIntFromBytes", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dst, src, startIndex);
}
inline int32_t Mono::Security::BitConverterLE::ToInt32(::ArrayW<uint8_t> value, int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "ToInt32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, startIndex);
}
inline uint16_t Mono::Security::BitConverterLE::ToUInt16(::ArrayW<uint8_t> value, int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "ToUInt16", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value, startIndex);
}
inline uint32_t Mono::Security::BitConverterLE::ToUInt32(::ArrayW<uint8_t> value, int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "ToUInt32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value, startIndex);
}
// Ctor Parameters []
constexpr ::Mono::Security::BitConverterLE::BitConverterLE() {}
