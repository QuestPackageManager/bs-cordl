#pragma once
// IWYU pragma private; include "GlobalNamespace/IAsyncComputeManager.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "GlobalNamespace/zzzz__IAsyncComputeManager_def.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_1_def.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IAsyncComputeManager.BeginOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IAsyncComputeManager::*)(::GlobalNamespace::AsyncComputeOperation*)>(
    &::GlobalNamespace::IAsyncComputeManager::BeginOperation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAsyncComputeManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAsyncComputeManager*>::get(), 0));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IAsyncComputeManager::BeginOperation(::GlobalNamespace::AsyncComputeOperation* asyncComputeOperation) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAsyncComputeManager*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncComputeOperation);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* GlobalNamespace::IAsyncComputeManager::BeginOperation(::GlobalNamespace::AsyncComputeOperation_1<T>* asyncComputeOperation) {
  auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAsyncComputeManager*>::get(), 1)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, asyncComputeOperation);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::IAsyncComputeManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::IAsyncComputeManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
