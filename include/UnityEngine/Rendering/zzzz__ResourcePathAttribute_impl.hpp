#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ResourcePathAttribute.hpp"
#include "UnityEngine/Rendering/zzzz__ResourcePathsBaseAttribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ResourcePathAttribute_def.hpp"
#include "UnityEngine/Rendering/zzzz__SearchType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ResourcePathAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ResourcePathAttribute::*)(::StringW, ::UnityEngine::Rendering::SearchType)>(
    &::UnityEngine::Rendering::ResourcePathAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68d7208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ResourcePathAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SearchType>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ResourcePathAttribute::_ctor(::StringW path, ::UnityEngine::Rendering::SearchType location) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ResourcePathAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SearchType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path, location);
}
inline ::UnityEngine::Rendering::ResourcePathAttribute* UnityEngine::Rendering::ResourcePathAttribute::New_ctor(::StringW path, ::UnityEngine::Rendering::SearchType location) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ResourcePathAttribute*>(path, location));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ResourcePathAttribute::ResourcePathAttribute() {}
