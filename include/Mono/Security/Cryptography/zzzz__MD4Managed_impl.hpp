#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/MD4Managed.hpp"
#include "Mono/Security/Cryptography/zzzz__MD4_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__MD4Managed_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::MD4Managed._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::MD4Managed::*)()>(&::Mono::Security::Cryptography::MD4Managed::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5aba11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD4Managed.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::MD4Managed::*)()>(&::Mono::Security::Cryptography::MD4Managed::Initialize)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5aba1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(), { ::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD4Managed.HashCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::MD4Managed::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Mono::Security::Cryptography::MD4Managed::HashCore)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5aba2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(), { ::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD4Managed.HashFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Cryptography::MD4Managed::*)()>(&::Mono::Security::Cryptography::MD4Managed::HashFinal)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5abaa34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(), { ::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD4Managed.Padding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Cryptography::MD4Managed::*)(int32_t)>(&::Mono::Security::Cryptography::MD4Managed::Padding)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5abac20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(), { "Padding", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD4Managed.F
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Mono::Security::Cryptography::MD4Managed::*)(uint32_t, uint32_t, uint32_t)>(&::Mono::Security::Cryptography::MD4Managed::F)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5abac9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(),
                                                                                           { "F", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD4Managed.G
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Mono::Security::Cryptography::MD4Managed::*)(uint32_t, uint32_t, uint32_t)>(&::Mono::Security::Cryptography::MD4Managed::G)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5abacac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(),
                                                                                           { "G", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD4Managed.H
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Mono::Security::Cryptography::MD4Managed::*)(uint32_t, uint32_t, uint32_t)>(&::Mono::Security::Cryptography::MD4Managed::H)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5abacc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(),
                                                                                           { "H", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD4Managed.ROL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Mono::Security::Cryptography::MD4Managed::*)(uint32_t, uint8_t)>(&::Mono::Security::Cryptography::MD4Managed::ROL)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5abaccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(), { "ROL", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD4Managed.FF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::MD4Managed::*)(::by_ref<uint32_t>, uint32_t, uint32_t, uint32_t, uint32_t, uint8_t)>(
    &::Mono::Security::Cryptography::MD4Managed::FF)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5abacd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(),
                                                                                           { "FF",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(),
                                                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD4Managed.GG
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::MD4Managed::*)(::by_ref<uint32_t>, uint32_t, uint32_t, uint32_t, uint32_t, uint8_t)>(
    &::Mono::Security::Cryptography::MD4Managed::GG)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5abad00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(),
                                                                                           { "GG",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(),
                                                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD4Managed.HH
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::MD4Managed::*)(::by_ref<uint32_t>, uint32_t, uint32_t, uint32_t, uint32_t, uint8_t)>(
    &::Mono::Security::Cryptography::MD4Managed::HH)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5abad38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(),
                                                                                           { "HH",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(),
                                                                                               ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD4Managed.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::MD4Managed::*)(::ArrayW<uint8_t>, ::ArrayW<uint32_t>)>(
    &::Mono::Security::Cryptography::MD4Managed::Encode)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5abab34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(),
                                                                                           { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD4Managed.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::MD4Managed::*)(::ArrayW<uint32_t>, ::ArrayW<uint8_t>, int32_t)>(
    &::Mono::Security::Cryptography::MD4Managed::Decode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5abad68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(),
                                                             { "Decode", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD4Managed.MD4Transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::MD4Managed::*)(::ArrayW<uint32_t>, ::ArrayW<uint8_t>, int32_t)>(
    &::Mono::Security::Cryptography::MD4Managed::MD4Transform)> {
  constexpr static std::size_t size = 0x66c;
  constexpr static std::size_t addrs = 0x5aba3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(),
                                                             { "MD4Transform", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint32_t>& Mono::Security::Cryptography::MD4Managed::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::ArrayW<uint32_t> const& Mono::Security::Cryptography::MD4Managed::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void Mono::Security::Cryptography::MD4Managed::__cordl_internal_set_state(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Cryptography::MD4Managed::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Cryptography::MD4Managed::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void Mono::Security::Cryptography::MD4Managed::__cordl_internal_set_buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffer = value;
}
constexpr ::ArrayW<uint32_t>& Mono::Security::Cryptography::MD4Managed::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr ::ArrayW<uint32_t> const& Mono::Security::Cryptography::MD4Managed::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void Mono::Security::Cryptography::MD4Managed::__cordl_internal_set_count(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
constexpr ::ArrayW<uint32_t>& Mono::Security::Cryptography::MD4Managed::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::ArrayW<uint32_t> const& Mono::Security::Cryptography::MD4Managed::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Mono::Security::Cryptography::MD4Managed::__cordl_internal_set_x(::ArrayW<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Cryptography::MD4Managed::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Cryptography::MD4Managed::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Mono::Security::Cryptography::MD4Managed::__cordl_internal_set_digest(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digest = value;
}
inline void Mono::Security::Cryptography::MD4Managed::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::MD4Managed::Initialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::MD4Managed::HashCore(::ArrayW<uint8_t> array, int32_t ibStart, int32_t cbSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, ibStart, cbSize);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::MD4Managed::HashFinal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::MD4Managed::Padding(int32_t nLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(), { "Padding", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, nLength);
}
inline uint32_t Mono::Security::Cryptography::MD4Managed::F(uint32_t x, uint32_t y, uint32_t z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(),
                                                                                         { "F", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, x, y, z);
}
inline uint32_t Mono::Security::Cryptography::MD4Managed::G(uint32_t x, uint32_t y, uint32_t z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(),
                                                                                         { "G", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, x, y, z);
}
inline uint32_t Mono::Security::Cryptography::MD4Managed::H(uint32_t x, uint32_t y, uint32_t z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(),
                                                                                         { "H", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, x, y, z);
}
inline uint32_t Mono::Security::Cryptography::MD4Managed::ROL(uint32_t x, uint8_t n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(), { "ROL", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, x, n);
}
inline void Mono::Security::Cryptography::MD4Managed::FF(::by_ref<uint32_t> a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(), { "FF",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(),
                                                                                                           ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, c, d, x, s);
}
inline void Mono::Security::Cryptography::MD4Managed::GG(::by_ref<uint32_t> a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(), { "GG",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(),
                                                                                                           ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, c, d, x, s);
}
inline void Mono::Security::Cryptography::MD4Managed::HH(::by_ref<uint32_t> a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(), { "HH",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(),
                                                                                                           ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, c, d, x, s);
}
inline void Mono::Security::Cryptography::MD4Managed::Encode(::ArrayW<uint8_t> output, ::ArrayW<uint32_t> input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(),
                                                                                         { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, input);
}
inline void Mono::Security::Cryptography::MD4Managed::Decode(::ArrayW<uint32_t> output, ::ArrayW<uint8_t> input, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(),
                                                           { "Decode", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, input, index);
}
inline void Mono::Security::Cryptography::MD4Managed::MD4Transform(::ArrayW<uint32_t> state, ::ArrayW<uint8_t> block, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD4Managed*>(),
                                                           { "MD4Transform", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, block, index);
}
inline ::Mono::Security::Cryptography::MD4Managed* Mono::Security::Cryptography::MD4Managed::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Cryptography::MD4Managed*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::MD4Managed::MD4Managed() {}
