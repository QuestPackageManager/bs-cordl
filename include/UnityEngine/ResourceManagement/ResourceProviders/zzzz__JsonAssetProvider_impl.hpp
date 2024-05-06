#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/JsonAssetProvider.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__TextDataProvider_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__JsonAssetProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::*)(::System::Type*, ::StringW)>(&::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::Convert)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x330dae0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x330daec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Object* UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::Convert(::System::Type* type, ::StringW text) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, type, text);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider* UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider*>());
}
inline void UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::JsonAssetProvider() {}
