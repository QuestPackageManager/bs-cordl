#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeManager_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "GlobalNamespace/zzzz__IAsyncComputeManager_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_def.hpp"
#include "System/Collections/Concurrent/zzzz__BlockingCollection_1_def.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AsyncComputeManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AsyncComputeManager::*)()>(&::GlobalNamespace::AsyncComputeManager::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xe28f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AsyncComputeManager.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AsyncComputeManager::*)()>(&::GlobalNamespace::AsyncComputeManager::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe29098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeManager*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AsyncComputeManager.BeginOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AsyncComputeManager::*)(::GlobalNamespace::AsyncComputeOperation*)>(
    &::GlobalNamespace::AsyncComputeManager::BeginOperation)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe29100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeManager*>::get(), "BeginOperation", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AsyncComputeOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AsyncComputeManager.ComputeThreadRun
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AsyncComputeManager::*)()>(&::GlobalNamespace::AsyncComputeManager::ComputeThreadRun)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xe29158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeManager*>::get(),
                                                                               "ComputeThreadRun", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IAsyncComputeManager"
constexpr GlobalNamespace::AsyncComputeManager::operator ::GlobalNamespace::IAsyncComputeManager*() noexcept {
  return static_cast<::GlobalNamespace::IAsyncComputeManager*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::AsyncComputeManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>*& GlobalNamespace::AsyncComputeManager::__get__asyncComputeRequests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncComputeRequests;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>*> const&
GlobalNamespace::AsyncComputeManager::__get__asyncComputeRequests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncComputeRequests;
}
constexpr void GlobalNamespace::AsyncComputeManager::__set__asyncComputeRequests(::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____asyncComputeRequests)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Thread*& GlobalNamespace::AsyncComputeManager::__get__computeThread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____computeThread;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& GlobalNamespace::AsyncComputeManager::__get__computeThread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____computeThread;
}
constexpr void GlobalNamespace::AsyncComputeManager::__set__computeThread(::System::Threading::Thread* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____computeThread)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::AsyncComputeManager::__get__disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr bool const& GlobalNamespace::AsyncComputeManager::__get__disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr void GlobalNamespace::AsyncComputeManager::__set__disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed = value;
}
inline ::GlobalNamespace::AsyncComputeManager* GlobalNamespace::AsyncComputeManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AsyncComputeManager*>());
}
inline void GlobalNamespace::AsyncComputeManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AsyncComputeManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeManager*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AsyncComputeManager::BeginOperation(::GlobalNamespace::AsyncComputeOperation* operation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeManager*>::get(), "BeginOperation", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AsyncComputeOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* GlobalNamespace::AsyncComputeManager::BeginOperation(::GlobalNamespace::AsyncComputeOperation_1<T>* operation) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeManager*>::get(), "BeginOperation",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AsyncComputeOperation_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, operation);
}
inline void GlobalNamespace::AsyncComputeManager::ComputeThreadRun() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncComputeManager*>::get(), "ComputeThreadRun",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AsyncComputeManager::AsyncComputeManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
