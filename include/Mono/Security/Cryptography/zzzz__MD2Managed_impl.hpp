#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/MD2Managed.hpp"
#include "Mono/Security/Cryptography/zzzz__MD2_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__MD2Managed_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::MD2Managed.Padding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Cryptography::MD2Managed::*)(int32_t)>(&::Mono::Security::Cryptography::MD2Managed::Padding)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5ab98c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD2Managed*>(), { "Padding", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD2Managed._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::MD2Managed::*)()>(&::Mono::Security::Cryptography::MD2Managed::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ab981c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD2Managed*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD2Managed.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::MD2Managed::*)()>(&::Mono::Security::Cryptography::MD2Managed::Initialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ab9b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD2Managed*>(), { ::i2c::class_of<::Mono::Security::Cryptography::MD2Managed*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD2Managed.HashCore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::MD2Managed::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Mono::Security::Cryptography::MD2Managed::HashCore)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5ab9bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD2Managed*>(), { ::i2c::class_of<::Mono::Security::Cryptography::MD2Managed*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD2Managed.HashFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Cryptography::MD2Managed::*)()>(&::Mono::Security::Cryptography::MD2Managed::HashFinal)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5ab9f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD2Managed*>(), { ::i2c::class_of<::Mono::Security::Cryptography::MD2Managed*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD2Managed.MD2Transform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::MD2Managed::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(
    &::Mono::Security::Cryptography::MD2Managed::MD2Transform)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5ab9ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD2Managed*>(),
                            { "MD2Transform", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Mono::Security::Cryptography::MD2Managed::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Cryptography::MD2Managed::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void Mono::Security::Cryptography::MD2Managed::__cordl_internal_set_state(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Cryptography::MD2Managed::__cordl_internal_get_checksum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checksum;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Cryptography::MD2Managed::__cordl_internal_get_checksum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checksum;
}
constexpr void Mono::Security::Cryptography::MD2Managed::__cordl_internal_set_checksum(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___checksum = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Cryptography::MD2Managed::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Cryptography::MD2Managed::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void Mono::Security::Cryptography::MD2Managed::__cordl_internal_set_buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffer = value;
}
constexpr int32_t& Mono::Security::Cryptography::MD2Managed::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& Mono::Security::Cryptography::MD2Managed::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void Mono::Security::Cryptography::MD2Managed::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::Cryptography::MD2Managed::__cordl_internal_get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::Cryptography::MD2Managed::__cordl_internal_get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void Mono::Security::Cryptography::MD2Managed::__cordl_internal_set_x(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
inline void Mono::Security::Cryptography::MD2Managed::setStaticF_PI_SUBST(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "PI_SUBST", ::Mono::Security::Cryptography::MD2Managed*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::MD2Managed::getStaticF_PI_SUBST() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "PI_SUBST", ::Mono::Security::Cryptography::MD2Managed*>();
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::MD2Managed::Padding(int32_t nLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD2Managed*>(), { "Padding", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, nLength);
}
inline void Mono::Security::Cryptography::MD2Managed::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD2Managed*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::MD2Managed::Initialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::MD2Managed*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::MD2Managed::HashCore(::ArrayW<uint8_t> array, int32_t ibStart, int32_t cbSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::MD2Managed*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, ibStart, cbSize);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::MD2Managed::HashFinal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::MD2Managed*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::MD2Managed::MD2Transform(::ArrayW<uint8_t> state, ::ArrayW<uint8_t> checksum, ::ArrayW<uint8_t> block, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::MD2Managed*>(),
                          { "MD2Transform", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, checksum, block, index);
}
inline ::Mono::Security::Cryptography::MD2Managed* Mono::Security::Cryptography::MD2Managed::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Cryptography::MD2Managed*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::MD2Managed::MD2Managed() {}
