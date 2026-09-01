#pragma once
// IWYU pragma private; include "System\Security\Principal\GenericIdentity.hpp"
#include "System/Security/Claims/zzzz__ClaimsIdentity_impl.hpp"
#include "System/Security/Principal/zzzz__GenericIdentity_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Security/Claims/zzzz__Claim_def.hpp"
#include "System/Security/Claims/zzzz__ClaimsIdentity_def.hpp"
//  Writing Method size for method: ::System::Security::Principal::GenericIdentity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::GenericIdentity::*)(::StringW, ::StringW)>(&::System::Security::Principal::GenericIdentity::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b12f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::GenericIdentity*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::GenericIdentity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::GenericIdentity::*)()>(&::System::Security::Principal::GenericIdentity::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b13110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::GenericIdentity*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::GenericIdentity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::GenericIdentity::*)(::System::Security::Principal::GenericIdentity*)>(
    &::System::Security::Principal::GenericIdentity::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b1312c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::Principal::GenericIdentity*>(), { ".ctor", {}, { ::i2c::type_of<::System::Security::Principal::GenericIdentity*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::GenericIdentity.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Claims::ClaimsIdentity* (::System::Security::Principal::GenericIdentity::*)()>(
    &::System::Security::Principal::GenericIdentity::Clone)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b13340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::GenericIdentity*>(), { ::i2c::class_of<::System::Security::Principal::GenericIdentity*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::GenericIdentity.get_Claims
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* (::System::Security::Principal::GenericIdentity::*)()>(
    &::System::Security::Principal::GenericIdentity::get_Claims)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b1339c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::GenericIdentity*>(), { ::i2c::class_of<::System::Security::Principal::GenericIdentity*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::GenericIdentity.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Principal::GenericIdentity::*)()>(&::System::Security::Principal::GenericIdentity::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b13410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::GenericIdentity*>(), { ::i2c::class_of<::System::Security::Principal::GenericIdentity*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::GenericIdentity.get_AuthenticationType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Principal::GenericIdentity::*)()>(&::System::Security::Principal::GenericIdentity::get_AuthenticationType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b13418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::GenericIdentity*>(), { ::i2c::class_of<::System::Security::Principal::GenericIdentity*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::GenericIdentity.AddNameClaim
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::GenericIdentity::*)()>(&::System::Security::Principal::GenericIdentity::AddNameClaim)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b13034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::GenericIdentity*>(), { "AddNameClaim", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Security::Principal::GenericIdentity::__cordl_internal_get_m_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_name;
}
constexpr ::StringW const& System::Security::Principal::GenericIdentity::__cordl_internal_get_m_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_name;
}
constexpr void System::Security::Principal::GenericIdentity::__cordl_internal_set_m_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_name = value;
}
constexpr ::StringW& System::Security::Principal::GenericIdentity::__cordl_internal_get_m_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_type;
}
constexpr ::StringW const& System::Security::Principal::GenericIdentity::__cordl_internal_get_m_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_type;
}
constexpr void System::Security::Principal::GenericIdentity::__cordl_internal_set_m_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_type = value;
}
inline void System::Security::Principal::GenericIdentity::_ctor(::StringW name, ::StringW type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::GenericIdentity*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, type);
}
inline void System::Security::Principal::GenericIdentity::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::GenericIdentity*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Principal::GenericIdentity::_ctor(::System::Security::Principal::GenericIdentity* identity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::Principal::GenericIdentity*>(), { ".ctor", {}, { ::i2c::type_of<::System::Security::Principal::GenericIdentity*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity);
}
inline ::System::Security::Claims::ClaimsIdentity* System::Security::Principal::GenericIdentity::Clone() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::GenericIdentity*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Claims::ClaimsIdentity*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* System::Security::Principal::GenericIdentity::get_Claims() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::GenericIdentity*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>*>(this, ___internal_method);
}
inline ::StringW System::Security::Principal::GenericIdentity::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::GenericIdentity*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Security::Principal::GenericIdentity::get_AuthenticationType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::GenericIdentity*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Security::Principal::GenericIdentity::AddNameClaim() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::GenericIdentity*>(), { "AddNameClaim", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Principal::GenericIdentity* System::Security::Principal::GenericIdentity::New_ctor(::StringW name, ::StringW type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Principal::GenericIdentity*>(name, type));
}
inline ::System::Security::Principal::GenericIdentity* System::Security::Principal::GenericIdentity::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Principal::GenericIdentity*>());
}
inline ::System::Security::Principal::GenericIdentity* System::Security::Principal::GenericIdentity::New_ctor(::System::Security::Principal::GenericIdentity* identity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Principal::GenericIdentity*>(identity));
}
// Ctor Parameters []
constexpr ::System::Security::Principal::GenericIdentity::GenericIdentity() {}
