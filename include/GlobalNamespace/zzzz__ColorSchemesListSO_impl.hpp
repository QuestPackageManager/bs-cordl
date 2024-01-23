#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSchemesListSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesListSO.get_colorSchemes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::Array<::UnityW<::GlobalNamespace::ColorSchemeSO>>*> (
    ::GlobalNamespace::ColorSchemesListSO::*)()>(&::GlobalNamespace::ColorSchemesListSO::get_colorSchemes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122d580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesListSO*>::get(),
                                                                               "get_colorSchemes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesListSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemesListSO::*)()>(&::GlobalNamespace::ColorSchemesListSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122d588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesListSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::Array<::UnityW<::GlobalNamespace::ColorSchemeSO>>*>& GlobalNamespace::ColorSchemesListSO::__cordl_internal_get__colorSchemes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemes;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::Array<::UnityW<::GlobalNamespace::ColorSchemeSO>>*> const&
GlobalNamespace::ColorSchemesListSO::__cordl_internal_get__colorSchemes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemes;
}
constexpr void
GlobalNamespace::ColorSchemesListSO::__cordl_internal_set__colorSchemes(::ArrayW<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::Array<::UnityW<::GlobalNamespace::ColorSchemeSO>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorSchemes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::Array<::UnityW<::GlobalNamespace::ColorSchemeSO>>*> GlobalNamespace::ColorSchemesListSO::get_colorSchemes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesListSO*>::get(), "get_colorSchemes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::Array<::UnityW<::GlobalNamespace::ColorSchemeSO>>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorSchemesListSO* GlobalNamespace::ColorSchemesListSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ColorSchemesListSO*>());
}
inline void GlobalNamespace::ColorSchemesListSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesListSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSchemesListSO::ColorSchemesListSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
