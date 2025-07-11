#pragma once
// IWYU pragma private; include "Zenject/Internal/LookupId.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__BindingId_impl.hpp"
#include "Zenject/Internal/zzzz__LookupId_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
//  Writing Method size for method: ::Zenject::Internal::LookupId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::LookupId::*)()>(&::Zenject::Internal::LookupId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4b57084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::LookupId*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::LookupId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::LookupId::*)(::Zenject::IProvider*, ::Zenject::BindingId)>(
    &::Zenject::Internal::LookupId::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4b5708c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::LookupId*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::Internal::LookupId.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Zenject::Internal::LookupId::*)()>(&::Zenject::Internal::LookupId::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4b57128;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::LookupId*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::LookupId*>::get(), 2));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Provider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::LookupId*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::Internal::LookupId::_ctor(::Zenject::IProvider* provider, ::Zenject::BindingId bindingId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::LookupId*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindingId>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provider, bindingId);
}
inline int32_t Zenject::Internal::LookupId::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::LookupId*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Zenject::Internal::LookupId* Zenject::Internal::LookupId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::LookupId*>());
}
inline ::Zenject::Internal::LookupId* Zenject::Internal::LookupId::New_ctor(::Zenject::IProvider* provider, ::Zenject::BindingId bindingId) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::LookupId*>(provider, bindingId));
}
// Ctor Parameters []
constexpr ::Zenject::Internal::LookupId::LookupId() {}
