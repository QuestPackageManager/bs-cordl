#pragma once
// IWYU pragma private; include "System\Security\Cryptography\TripleDESTransform.hpp"
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_impl.hpp"
#include "System/Security/Cryptography/zzzz__TripleDESTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__DESTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__TripleDES_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESTransform._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::TripleDESTransform::*)(
    ::System::Security::Cryptography::TripleDES*, bool, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::TripleDESTransform::_ctor)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5b110d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Security::Cryptography::TripleDESTransform*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::TripleDES*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESTransform.ECB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::TripleDESTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::TripleDESTransform::ECB)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b114a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::TripleDESTransform*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::TripleDESTransform*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::TripleDESTransform.GetStrongKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)()>(&::System::Security::Cryptography::TripleDESTransform::GetStrongKey)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b113f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::TripleDESTransform*>(), { "GetStrongKey", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::DESTransform*& System::Security::Cryptography::TripleDESTransform::__cordl_internal_get_E1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___E1;
}
constexpr ::System::Security::Cryptography::DESTransform* const& System::Security::Cryptography::TripleDESTransform::__cordl_internal_get_E1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___E1;
}
constexpr void System::Security::Cryptography::TripleDESTransform::__cordl_internal_set_E1(::System::Security::Cryptography::DESTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___E1 = value;
}
constexpr ::System::Security::Cryptography::DESTransform*& System::Security::Cryptography::TripleDESTransform::__cordl_internal_get_D2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___D2;
}
constexpr ::System::Security::Cryptography::DESTransform* const& System::Security::Cryptography::TripleDESTransform::__cordl_internal_get_D2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___D2;
}
constexpr void System::Security::Cryptography::TripleDESTransform::__cordl_internal_set_D2(::System::Security::Cryptography::DESTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___D2 = value;
}
constexpr ::System::Security::Cryptography::DESTransform*& System::Security::Cryptography::TripleDESTransform::__cordl_internal_get_E3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___E3;
}
constexpr ::System::Security::Cryptography::DESTransform* const& System::Security::Cryptography::TripleDESTransform::__cordl_internal_get_E3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___E3;
}
constexpr void System::Security::Cryptography::TripleDESTransform::__cordl_internal_set_E3(::System::Security::Cryptography::DESTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___E3 = value;
}
constexpr ::System::Security::Cryptography::DESTransform*& System::Security::Cryptography::TripleDESTransform::__cordl_internal_get_D1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___D1;
}
constexpr ::System::Security::Cryptography::DESTransform* const& System::Security::Cryptography::TripleDESTransform::__cordl_internal_get_D1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___D1;
}
constexpr void System::Security::Cryptography::TripleDESTransform::__cordl_internal_set_D1(::System::Security::Cryptography::DESTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___D1 = value;
}
constexpr ::System::Security::Cryptography::DESTransform*& System::Security::Cryptography::TripleDESTransform::__cordl_internal_get_E2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___E2;
}
constexpr ::System::Security::Cryptography::DESTransform* const& System::Security::Cryptography::TripleDESTransform::__cordl_internal_get_E2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___E2;
}
constexpr void System::Security::Cryptography::TripleDESTransform::__cordl_internal_set_E2(::System::Security::Cryptography::DESTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___E2 = value;
}
constexpr ::System::Security::Cryptography::DESTransform*& System::Security::Cryptography::TripleDESTransform::__cordl_internal_get_D3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___D3;
}
constexpr ::System::Security::Cryptography::DESTransform* const& System::Security::Cryptography::TripleDESTransform::__cordl_internal_get_D3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___D3;
}
constexpr void System::Security::Cryptography::TripleDESTransform::__cordl_internal_set_D3(::System::Security::Cryptography::DESTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___D3 = value;
}
inline void System::Security::Cryptography::TripleDESTransform::_ctor(::System::Security::Cryptography::TripleDES* algo, bool encryption, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Security::Cryptography::TripleDESTransform*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::TripleDES*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algo, encryption, key, iv);
}
inline void System::Security::Cryptography::TripleDESTransform::ECB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::TripleDESTransform*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, output);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::TripleDESTransform::GetStrongKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::TripleDESTransform*>(), { "GetStrongKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::TripleDESTransform* System::Security::Cryptography::TripleDESTransform::New_ctor(::System::Security::Cryptography::TripleDES* algo, bool encryption,
                                                                                                                          ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::TripleDESTransform*>(algo, encryption, key, iv));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::TripleDESTransform::TripleDESTransform() {}
