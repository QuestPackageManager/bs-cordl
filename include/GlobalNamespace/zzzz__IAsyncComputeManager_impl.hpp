#pragma once
// IWYU pragma private; include "GlobalNamespace/IAsyncComputeManager.hpp"
#include "GlobalNamespace/zzzz__IAsyncComputeManager_def.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_1_def.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IAsyncComputeManager.BeginOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IAsyncComputeManager::*)(::GlobalNamespace::AsyncComputeOperation*)>(
    &::GlobalNamespace::IAsyncComputeManager::BeginOperation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IAsyncComputeManager*>(), { ::i2c::class_of<::GlobalNamespace::IAsyncComputeManager*>(), 0 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IAsyncComputeManager::BeginOperation(::GlobalNamespace::AsyncComputeOperation* asyncComputeOperation) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IAsyncComputeManager*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncComputeOperation);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* GlobalNamespace::IAsyncComputeManager::BeginOperation(::GlobalNamespace::AsyncComputeOperation_1<T>* asyncComputeOperation) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IAsyncComputeManager*>(), 1 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(this, ___internal_method, asyncComputeOperation);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::IAsyncComputeManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::IAsyncComputeManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
