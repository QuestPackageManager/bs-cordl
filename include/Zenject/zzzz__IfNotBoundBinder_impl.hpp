#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__IfNotBoundBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::IfNotBoundBinder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::IfNotBoundBinder::*)(::Zenject::BindInfo*)>(&::Zenject::IfNotBoundBinder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ef72e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IfNotBoundBinder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IfNotBoundBinder.get_BindInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::BindInfo* (::Zenject::IfNotBoundBinder::*)()>(&::Zenject::IfNotBoundBinder::get_BindInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ef7308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IfNotBoundBinder*>::get(), "get_BindInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IfNotBoundBinder.set_BindInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::IfNotBoundBinder::*)(::Zenject::BindInfo*)>(&::Zenject::IfNotBoundBinder::set_BindInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ef7310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IfNotBoundBinder*>::get(), "set_BindInfo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IfNotBoundBinder.IfNotBound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::IfNotBoundBinder::*)()>(&::Zenject::IfNotBoundBinder::IfNotBound)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2ef7318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IfNotBoundBinder*>::get(), "IfNotBound",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Zenject::BindInfo*& Zenject::IfNotBoundBinder::__cordl_internal_get__BindInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindInfo_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::BindInfo*> const& Zenject::IfNotBoundBinder::__cordl_internal_get__BindInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindInfo_k__BackingField;
}
constexpr void Zenject::IfNotBoundBinder::__cordl_internal_set__BindInfo_k__BackingField(::Zenject::BindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____BindInfo_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::IfNotBoundBinder* Zenject::IfNotBoundBinder::New_ctor(::Zenject::BindInfo* bindInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::IfNotBoundBinder*>(bindInfo));
}
inline void Zenject::IfNotBoundBinder::_ctor(::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IfNotBoundBinder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindInfo);
}
inline ::Zenject::BindInfo* Zenject::IfNotBoundBinder::get_BindInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IfNotBoundBinder*>::get(), "get_BindInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindInfo*, false>(this, ___internal_method);
}
inline void Zenject::IfNotBoundBinder::set_BindInfo(::Zenject::BindInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IfNotBoundBinder*>::get(), "set_BindInfo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Zenject::IfNotBoundBinder::IfNotBound() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IfNotBoundBinder*>::get(), "IfNotBound",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::IfNotBoundBinder::IfNotBoundBinder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
