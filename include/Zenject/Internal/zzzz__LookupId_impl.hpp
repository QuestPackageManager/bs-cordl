#pragma once
// IWYU pragma private; include "Zenject\Internal\LookupId.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__BindingId_impl.hpp"
#include "Zenject/Internal/zzzz__LookupId_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
//  Writing Method size for method: ::Zenject::Internal::LookupId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::LookupId::*)()>(&::Zenject::Internal::LookupId::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e9fd68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::LookupId*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::LookupId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::LookupId::*)(::Zenject::IProvider*, ::Zenject::BindingId)>(&::Zenject::Internal::LookupId::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e9fd6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::Internal::LookupId*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::BindingId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::LookupId.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Zenject::Internal::LookupId::*)()>(&::Zenject::Internal::LookupId::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e9fe00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::Internal::LookupId*>(), { ::i2c::class_of<::Zenject::Internal::LookupId*>(), 2 }));
    return ___internal_method;
  }
};
constexpr ::Zenject::IProvider*& Zenject::Internal::LookupId::__cordl_internal_get_Provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Provider;
}
constexpr ::Zenject::IProvider* const& Zenject::Internal::LookupId::__cordl_internal_get_Provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Provider;
}
constexpr void Zenject::Internal::LookupId::__cordl_internal_set_Provider(::Zenject::IProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Provider = value;
}
constexpr ::Zenject::BindingId& Zenject::Internal::LookupId::__cordl_internal_get_BindingId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BindingId;
}
constexpr ::Zenject::BindingId const& Zenject::Internal::LookupId::__cordl_internal_get_BindingId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BindingId;
}
constexpr void Zenject::Internal::LookupId::__cordl_internal_set_BindingId(::Zenject::BindingId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BindingId = value;
}
inline void Zenject::Internal::LookupId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::LookupId*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::Internal::LookupId::_ctor(::Zenject::IProvider* provider, ::Zenject::BindingId bindingId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::Internal::LookupId*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::IProvider*>(), ::i2c::type_of<::Zenject::BindingId>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider, bindingId);
}
inline int32_t Zenject::Internal::LookupId::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::Internal::LookupId*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Zenject::Internal::LookupId* Zenject::Internal::LookupId::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::LookupId*>());
}
inline ::Zenject::Internal::LookupId* Zenject::Internal::LookupId::New_ctor(::Zenject::IProvider* provider, ::Zenject::BindingId bindingId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::LookupId*>(provider, bindingId));
}
// Ctor Parameters []
constexpr ::Zenject::Internal::LookupId::LookupId() {}
