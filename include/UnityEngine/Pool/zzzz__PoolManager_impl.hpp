#pragma once
// IWYU pragma private; include "UnityEngine/Pool/PoolManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Pool/zzzz__PoolManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__WeakReference_1_def.hpp"
#include "UnityEngine/Pool/zzzz__IPool_def.hpp"
//  Writing Method size for method: ::UnityEngine::Pool::PoolManager.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Pool::IPool*)>(&::UnityEngine::Pool::PoolManager::Register)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6936adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::PoolManager*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pool::IPool*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Pool::PoolManager::setStaticF_s_WeakPoolReferences(::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityEngine::Pool::IPool*>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityEngine::Pool::IPool*>*>*, "s_WeakPoolReferences",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::PoolManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityEngine::Pool::IPool*>*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityEngine::Pool::IPool*>*>* UnityEngine::Pool::PoolManager::getStaticF_s_WeakPoolReferences() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityEngine::Pool::IPool*>*>*, "s_WeakPoolReferences",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::PoolManager*>::get>();
}
inline void UnityEngine::Pool::PoolManager::Register(::UnityEngine::Pool::IPool* pool) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::PoolManager*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pool::IPool*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pool);
}
// Ctor Parameters []
constexpr ::UnityEngine::Pool::PoolManager::PoolManager() {}
