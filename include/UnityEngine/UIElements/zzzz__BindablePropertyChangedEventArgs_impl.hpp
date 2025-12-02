#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindablePropertyChangedEventArgs.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindablePropertyChangedEventArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BindablePropertyChangedEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BindablePropertyChangedEventArgs::*)(::ByRef<::UnityEngine::UIElements::BindingId>)>(
    &::UnityEngine::UIElements::BindablePropertyChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a10cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::BindingId>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BindablePropertyChangedEventArgs.get_propertyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BindingId (::UnityEngine::UIElements::BindablePropertyChangedEventArgs::*)()>(
    &::UnityEngine::UIElements::BindablePropertyChangedEventArgs::get_propertyName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a10cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>::get(), "get_propertyName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::BindablePropertyChangedEventArgs::_ctor(::ByRef<::UnityEngine::UIElements::BindingId> propertyName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::BindingId>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyName);
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::BindablePropertyChangedEventArgs::get_propertyName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>::get(),
                                                                             "get_propertyName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingId, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_PropertyName", ty: "::UnityEngine::UIElements::BindingId", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::BindablePropertyChangedEventArgs::BindablePropertyChangedEventArgs(::UnityEngine::UIElements::BindingId m_PropertyName) noexcept {
  this->m_PropertyName = m_PropertyName;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BindablePropertyChangedEventArgs::BindablePropertyChangedEventArgs() {}
