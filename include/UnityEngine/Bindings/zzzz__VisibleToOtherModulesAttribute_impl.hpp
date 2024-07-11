#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/VisibleToOtherModulesAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__VisibleToOtherModulesAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::VisibleToOtherModulesAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::VisibleToOtherModulesAttribute::*)()>(
    &::UnityEngine::Bindings::VisibleToOtherModulesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34aaaf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::VisibleToOtherModulesAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::VisibleToOtherModulesAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::VisibleToOtherModulesAttribute::*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::UnityEngine::Bindings::VisibleToOtherModulesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34aab00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::VisibleToOtherModulesAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Bindings::VisibleToOtherModulesAttribute* UnityEngine::Bindings::VisibleToOtherModulesAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Bindings::VisibleToOtherModulesAttribute*>());
}
inline void UnityEngine::Bindings::VisibleToOtherModulesAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::VisibleToOtherModulesAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Bindings::VisibleToOtherModulesAttribute* UnityEngine::Bindings::VisibleToOtherModulesAttribute::New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> modules) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Bindings::VisibleToOtherModulesAttribute*>(modules));
}
inline void UnityEngine::Bindings::VisibleToOtherModulesAttribute::_ctor(::ArrayW<::StringW, ::Array<::StringW>*> modules) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::VisibleToOtherModulesAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, modules);
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::VisibleToOtherModulesAttribute::VisibleToOtherModulesAttribute() {}
