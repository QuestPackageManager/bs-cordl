#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RC2Transform.hpp"
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_impl.hpp"
#include "System/Security/Cryptography/zzzz__RC2Transform_def.hpp"
#include "System/Security/Cryptography/zzzz__RC2_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RC2Transform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RC2Transform::*)(::System::Security::Cryptography::RC2*, bool, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::RC2Transform::_ctor)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x5b0c1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Security::Cryptography::RC2Transform*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::RC2*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RC2Transform.ECB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RC2Transform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::RC2Transform::ECB)> {
  constexpr static std::size_t size = 0x86c;
  constexpr static std::size_t addrs = 0x5b0c6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RC2Transform*>(), { ::i2c::class_of<::System::Security::Cryptography::RC2Transform*>(), 15 }));
    return ___internal_method;
  }
};
constexpr uint16_t& System::Security::Cryptography::RC2Transform::__cordl_internal_get_R0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___R0;
}
constexpr uint16_t const& System::Security::Cryptography::RC2Transform::__cordl_internal_get_R0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___R0;
}
constexpr void System::Security::Cryptography::RC2Transform::__cordl_internal_set_R0(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___R0 = value;
}
constexpr uint16_t& System::Security::Cryptography::RC2Transform::__cordl_internal_get_R1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___R1;
}
constexpr uint16_t const& System::Security::Cryptography::RC2Transform::__cordl_internal_get_R1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___R1;
}
constexpr void System::Security::Cryptography::RC2Transform::__cordl_internal_set_R1(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___R1 = value;
}
constexpr uint16_t& System::Security::Cryptography::RC2Transform::__cordl_internal_get_R2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___R2;
}
constexpr uint16_t const& System::Security::Cryptography::RC2Transform::__cordl_internal_get_R2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___R2;
}
constexpr void System::Security::Cryptography::RC2Transform::__cordl_internal_set_R2(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___R2 = value;
}
constexpr uint16_t& System::Security::Cryptography::RC2Transform::__cordl_internal_get_R3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___R3;
}
constexpr uint16_t const& System::Security::Cryptography::RC2Transform::__cordl_internal_get_R3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___R3;
}
constexpr void System::Security::Cryptography::RC2Transform::__cordl_internal_set_R3(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___R3 = value;
}
constexpr ::ArrayW<uint16_t>& System::Security::Cryptography::RC2Transform::__cordl_internal_get_K() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___K;
}
constexpr ::ArrayW<uint16_t> const& System::Security::Cryptography::RC2Transform::__cordl_internal_get_K() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___K;
}
constexpr void System::Security::Cryptography::RC2Transform::__cordl_internal_set_K(::ArrayW<uint16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___K = value;
}
constexpr int32_t& System::Security::Cryptography::RC2Transform::__cordl_internal_get_j() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___j;
}
constexpr int32_t const& System::Security::Cryptography::RC2Transform::__cordl_internal_get_j() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___j;
}
constexpr void System::Security::Cryptography::RC2Transform::__cordl_internal_set_j(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___j = value;
}
inline void System::Security::Cryptography::RC2Transform::setStaticF_pitable(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "pitable", ::System::Security::Cryptography::RC2Transform*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RC2Transform::getStaticF_pitable() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "pitable", ::System::Security::Cryptography::RC2Transform*>();
}
inline void System::Security::Cryptography::RC2Transform::_ctor(::System::Security::Cryptography::RC2* rc2Algo, bool encryption, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Security::Cryptography::RC2Transform*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::RC2*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rc2Algo, encryption, key, iv);
}
inline void System::Security::Cryptography::RC2Transform::ECB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RC2Transform*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, output);
}
inline ::System::Security::Cryptography::RC2Transform* System::Security::Cryptography::RC2Transform::New_ctor(::System::Security::Cryptography::RC2* rc2Algo, bool encryption, ::ArrayW<uint8_t> key,
                                                                                                              ::ArrayW<uint8_t> iv) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RC2Transform*>(rc2Algo, encryption, key, iv));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RC2Transform::RC2Transform() {}
