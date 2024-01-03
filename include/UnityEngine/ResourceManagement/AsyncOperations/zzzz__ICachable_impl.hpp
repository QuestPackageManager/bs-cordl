#pragma once
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__ICachable_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IOperationCacheKey_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::ICachable.get_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::Util::IOperationCacheKey* (
    ::UnityEngine::ResourceManagement::AsyncOperations::ICachable::*)()>(&::UnityEngine::ResourceManagement::AsyncOperations::ICachable::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ICachable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ICachable*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::ICachable.set_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::ICachable::*)(
    ::UnityEngine::ResourceManagement::Util::IOperationCacheKey*)>(&::UnityEngine::ResourceManagement::AsyncOperations::ICachable::set_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ICachable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ICachable*>::get(), 1));
    return ___internal_method;
  }
};
inline ::UnityEngine::ResourceManagement::Util::IOperationCacheKey* UnityEngine::ResourceManagement::AsyncOperations::ICachable::get_Key() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ICachable*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, false>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::ICachable::set_Key(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::AsyncOperations::ICachable*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
