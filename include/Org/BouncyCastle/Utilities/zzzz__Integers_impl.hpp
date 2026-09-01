#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\Integers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__Integers_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Integers.NumberOfLeadingZeros
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Org::BouncyCastle::Utilities::Integers::NumberOfLeadingZeros)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x363dd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Integers*>(), { "NumberOfLeadingZeros", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Integers.NumberOfTrailingZeros
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Org::BouncyCastle::Utilities::Integers::NumberOfTrailingZeros)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x363dd7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Integers*>(), { "NumberOfTrailingZeros", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Integers.RotateLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Org::BouncyCastle::Utilities::Integers::RotateLeft)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x363ddb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Integers*>(), { "RotateLeft", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Integers.RotateLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, int32_t)>(&::Org::BouncyCastle::Utilities::Integers::RotateLeft)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x363ddc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Integers*>(), { "RotateLeft", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Integers.RotateRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Org::BouncyCastle::Utilities::Integers::RotateRight)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x363ddd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Integers*>(), { "RotateRight", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Integers.RotateRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, int32_t)>(&::Org::BouncyCastle::Utilities::Integers::RotateRight)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x363ddec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Integers*>(), { "RotateRight", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Integers._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Integers::*)()>(&::Org::BouncyCastle::Utilities::Integers::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363de00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Integers*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t Org::BouncyCastle::Utilities::Integers::NumberOfLeadingZeros(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Integers*>(), { "NumberOfLeadingZeros", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i);
}
inline int32_t Org::BouncyCastle::Utilities::Integers::NumberOfTrailingZeros(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Integers*>(), { "NumberOfTrailingZeros", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i);
}
inline int32_t Org::BouncyCastle::Utilities::Integers::RotateLeft(int32_t i, int32_t distance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Integers*>(), { "RotateLeft", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i, distance);
}
inline uint32_t Org::BouncyCastle::Utilities::Integers::RotateLeft(uint32_t i, int32_t distance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Integers*>(), { "RotateLeft", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, i, distance);
}
inline int32_t Org::BouncyCastle::Utilities::Integers::RotateRight(int32_t i, int32_t distance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Integers*>(), { "RotateRight", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i, distance);
}
inline uint32_t Org::BouncyCastle::Utilities::Integers::RotateRight(uint32_t i, int32_t distance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Integers*>(), { "RotateRight", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, i, distance);
}
inline void Org::BouncyCastle::Utilities::Integers::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Integers*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Integers* Org::BouncyCastle::Utilities::Integers::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Integers*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Integers::Integers() {}
