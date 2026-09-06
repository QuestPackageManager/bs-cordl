#pragma once
// IWYU pragma private; include "Mono/Security/BitConverterLE.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/zzzz__BitConverterLE_def.hpp"
//  Writing Method size for method: ::Mono::Security::BitConverterLE.GetUIntBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(uint8_t*)>(&::Mono::Security::BitConverterLE::GetUIntBytes)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ab9cf8;

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
  constexpr static std::size_t addrs = 0x5ab9d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "GetULongBytes", {}, { ::i2c::type_of<uint8_t*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::BitConverterLE.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(float_t)>(&::Mono::Security::BitConverterLE::GetBytes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ab9e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "GetBytes", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::BitConverterLE.GetBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(double_t)>(&::Mono::Security::BitConverterLE::GetBytes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ab9e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "GetBytes", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::BitConverterLE.UIntFromBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::BitConverterLE::UIntFromBytes)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ab9ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(),
                                                             { "UIntFromBytes", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::BitConverterLE.ULongFromBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::BitConverterLE::ULongFromBytes)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ab9f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(),
                                                             { "ULongFromBytes", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::BitConverterLE.ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::BitConverterLE::ToSingle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ab9f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "ToSingle", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::BitConverterLE.ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::BitConverterLE::ToDouble)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ab9f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "ToDouble", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
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
inline ::ArrayW<uint8_t> Mono::Security::BitConverterLE::GetBytes(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "GetBytes", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Mono::Security::BitConverterLE::GetBytes(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "GetBytes", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, value);
}
inline void Mono::Security::BitConverterLE::UIntFromBytes(uint8_t* dst, ::ArrayW<uint8_t> src, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(),
                                                           { "UIntFromBytes", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dst, src, startIndex);
}
inline void Mono::Security::BitConverterLE::ULongFromBytes(uint8_t* dst, ::ArrayW<uint8_t> src, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(),
                                                           { "ULongFromBytes", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dst, src, startIndex);
}
inline float_t Mono::Security::BitConverterLE::ToSingle(::ArrayW<uint8_t> value, int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "ToSingle", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, startIndex);
}
inline double_t Mono::Security::BitConverterLE::ToDouble(::ArrayW<uint8_t> value, int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::BitConverterLE*>(), { "ToDouble", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value, startIndex);
}
// Ctor Parameters []
constexpr ::Mono::Security::BitConverterLE::BitConverterLE() {}
