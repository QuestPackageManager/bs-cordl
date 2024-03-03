#pragma once
#include "UnityEngine/ResourceManagement/Util/zzzz__IInitializableObject_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::IInitializableObject.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::Util::IInitializableObject::*)(::StringW, ::StringW)>(
    &::UnityEngine::ResourceManagement::Util::IInitializableObject::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::IInitializableObject*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::IInitializableObject*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Util::IInitializableObject.InitializeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (
    ::UnityEngine::ResourceManagement::Util::IInitializableObject::*)(::UnityEngine::ResourceManagement::ResourceManager*, ::StringW, ::StringW)>(
    &::UnityEngine::ResourceManagement::Util::IInitializableObject::InitializeAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::IInitializableObject*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::IInitializableObject*>::get(), 1));
    return ___internal_method;
  }
};
inline bool UnityEngine::ResourceManagement::Util::IInitializableObject::Initialize(::StringW id, ::StringW data) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::IInitializableObject*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, data);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>
UnityEngine::ResourceManagement::Util::IInitializableObject::InitializeAsync(::UnityEngine::ResourceManagement::ResourceManager* rm, ::StringW id, ::StringW data) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::IInitializableObject*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>, false>(this, ___internal_method, rm, id, data);
}
