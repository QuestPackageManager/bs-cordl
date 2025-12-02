#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ResourcePathsBaseAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ResourcePathsBaseAttribute_def.hpp"
#include "UnityEngine/Rendering/zzzz__SearchType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ResourcePathsBaseAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ResourcePathsBaseAttribute::*)(
    ::ArrayW<::StringW, ::Array<::StringW>*>, bool, ::UnityEngine::Rendering::SearchType)>(&::UnityEngine::Rendering::ResourcePathsBaseAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68d7204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ResourcePathsBaseAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SearchType>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ResourcePathsBaseAttribute::_ctor(::ArrayW<::StringW, ::Array<::StringW>*> paths, bool isField, ::UnityEngine::Rendering::SearchType location) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ResourcePathsBaseAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SearchType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, paths, isField, location);
}
inline ::UnityEngine::Rendering::ResourcePathsBaseAttribute* UnityEngine::Rendering::ResourcePathsBaseAttribute::New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> paths, bool isField,
                                                                                                                          ::UnityEngine::Rendering::SearchType location) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ResourcePathsBaseAttribute*>(paths, isField, location));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ResourcePathsBaseAttribute::ResourcePathsBaseAttribute() {}
