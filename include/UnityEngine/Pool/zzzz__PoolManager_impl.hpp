#pragma once
// IWYU pragma private; include "UnityEngine\Pool\PoolManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Pool/zzzz__PoolManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__WeakReference_1_def.hpp"
#include "UnityEngine/Pool/zzzz__IPool_def.hpp"
//  Writing Method size for method: ::UnityEngine::Pool::PoolManager.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Pool::IPool*)>(&::UnityEngine::Pool::PoolManager::Register)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6b01a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::PoolManager*>(), { "Register", {}, { ::i2c::type_of<::UnityEngine::Pool::IPool*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Pool::PoolManager::setStaticF_s_WeakPoolReferences(::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityEngine::Pool::IPool*>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityEngine::Pool::IPool*>*>*, "s_WeakPoolReferences", ::UnityEngine::Pool::PoolManager*>(
      std::forward<::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityEngine::Pool::IPool*>*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityEngine::Pool::IPool*>*>* UnityEngine::Pool::PoolManager::getStaticF_s_WeakPoolReferences() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::WeakReference_1<::UnityEngine::Pool::IPool*>*>*, "s_WeakPoolReferences",
                                           ::UnityEngine::Pool::PoolManager*>();
}
inline void UnityEngine::Pool::PoolManager::Register(::UnityEngine::Pool::IPool* pool) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::PoolManager*>(), { "Register", {}, { ::i2c::type_of<::UnityEngine::Pool::IPool*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pool);
}
// Ctor Parameters []
constexpr ::UnityEngine::Pool::PoolManager::PoolManager() {}
