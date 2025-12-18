#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/AtlasSpriteProvider.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__AtlasSpriteProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider.Provide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::Provide)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x67648f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Object*)>(&::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::Release)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6764c74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6764d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, providerInterface);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, location, obj);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider* UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::AtlasSpriteProvider() {}
