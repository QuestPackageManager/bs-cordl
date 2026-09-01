#pragma once
// IWYU pragma private; include "System\Security\Cryptography\RC2.hpp"
#include "System/Security/Cryptography/zzzz__KeySizes_impl.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__RC2_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RC2._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RC2::*)()>(&::System::Security::Cryptography::RC2::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5afcd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RC2*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RC2.get_EffectiveKeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::RC2::*)()>(&::System::Security::Cryptography::RC2::get_EffectiveKeySize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5afcdcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RC2*>(), { ::i2c::class_of<::System::Security::Cryptography::RC2*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RC2.get_KeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::RC2::*)()>(&::System::Security::Cryptography::RC2::get_KeySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5afcde8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RC2*>(), { ::i2c::class_of<::System::Security::Cryptography::RC2*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RC2.set_KeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RC2::*)(int32_t)>(&::System::Security::Cryptography::RC2::set_KeySize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5afcdf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RC2*>(), { ::i2c::class_of<::System::Security::Cryptography::RC2*>(), 15 }));
    return ___internal_method;
  }
};
constexpr int32_t& System::Security::Cryptography::RC2::__cordl_internal_get_EffectiveKeySizeValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EffectiveKeySizeValue;
}
constexpr int32_t const& System::Security::Cryptography::RC2::__cordl_internal_get_EffectiveKeySizeValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EffectiveKeySizeValue;
}
constexpr void System::Security::Cryptography::RC2::__cordl_internal_set_EffectiveKeySizeValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EffectiveKeySizeValue = value;
}
inline void System::Security::Cryptography::RC2::setStaticF_s_legalBlockSizes(::ArrayW<::System::Security::Cryptography::KeySizes*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*>, "s_legalBlockSizes", ::System::Security::Cryptography::RC2*>(
      std::forward<::ArrayW<::System::Security::Cryptography::KeySizes*>>(value));
}
inline ::ArrayW<::System::Security::Cryptography::KeySizes*> System::Security::Cryptography::RC2::getStaticF_s_legalBlockSizes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*>, "s_legalBlockSizes", ::System::Security::Cryptography::RC2*>();
}
inline void System::Security::Cryptography::RC2::setStaticF_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*>, "s_legalKeySizes", ::System::Security::Cryptography::RC2*>(
      std::forward<::ArrayW<::System::Security::Cryptography::KeySizes*>>(value));
}
inline ::ArrayW<::System::Security::Cryptography::KeySizes*> System::Security::Cryptography::RC2::getStaticF_s_legalKeySizes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*>, "s_legalKeySizes", ::System::Security::Cryptography::RC2*>();
}
inline void System::Security::Cryptography::RC2::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RC2*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::RC2::get_EffectiveKeySize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RC2*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::RC2::get_KeySize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RC2*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Security::Cryptography::RC2::set_KeySize(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RC2*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::RC2* System::Security::Cryptography::RC2::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RC2*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RC2::RC2() {}
