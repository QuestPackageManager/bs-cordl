#pragma once
// IWYU pragma private; include "GlobalNamespace/AsyncComputeManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeManager_def.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_1_def.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_def.hpp"
#include "GlobalNamespace/zzzz__IAsyncComputeManager_def.hpp"
#include "System/Collections/Concurrent/zzzz__BlockingCollection_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AsyncComputeManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AsyncComputeManager::*)()>(&::GlobalNamespace::AsyncComputeManager::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x332a3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AsyncComputeManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AsyncComputeManager::*)()>(&::GlobalNamespace::AsyncComputeManager::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x332a510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeManager*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AsyncComputeManager.BeginOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AsyncComputeManager::*)(::GlobalNamespace::AsyncComputeOperation*)>(
    &::GlobalNamespace::AsyncComputeManager::BeginOperation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x332a57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeManager*>(), { "BeginOperation", {}, { ::i2c::type_of<::GlobalNamespace::AsyncComputeOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AsyncComputeManager.ComputeThreadRun
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AsyncComputeManager::*)()>(&::GlobalNamespace::AsyncComputeManager::ComputeThreadRun)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x332a5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeManager*>(), { "ComputeThreadRun", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>*& GlobalNamespace::AsyncComputeManager::__cordl_internal_get__asyncComputeRequests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncComputeRequests;
}
constexpr ::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>* const&
GlobalNamespace::AsyncComputeManager::__cordl_internal_get__asyncComputeRequests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncComputeRequests;
}
constexpr void
GlobalNamespace::AsyncComputeManager::__cordl_internal_set__asyncComputeRequests(::System::Collections::Concurrent::BlockingCollection_1<::GlobalNamespace::AsyncComputeOperation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____asyncComputeRequests = value;
}
constexpr ::System::Threading::Thread*& GlobalNamespace::AsyncComputeManager::__cordl_internal_get__computeThread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____computeThread;
}
constexpr ::System::Threading::Thread* const& GlobalNamespace::AsyncComputeManager::__cordl_internal_get__computeThread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____computeThread;
}
constexpr void GlobalNamespace::AsyncComputeManager::__cordl_internal_set__computeThread(::System::Threading::Thread* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____computeThread = value;
}
constexpr bool& GlobalNamespace::AsyncComputeManager::__cordl_internal_get__disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr bool const& GlobalNamespace::AsyncComputeManager::__cordl_internal_get__disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr void GlobalNamespace::AsyncComputeManager::__cordl_internal_set__disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed = value;
}
inline void GlobalNamespace::AsyncComputeManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AsyncComputeManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeManager*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AsyncComputeManager::BeginOperation(::GlobalNamespace::AsyncComputeOperation* operation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeManager*>(), { "BeginOperation", {}, { ::i2c::type_of<::GlobalNamespace::AsyncComputeOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* GlobalNamespace::AsyncComputeManager::BeginOperation(::GlobalNamespace::AsyncComputeOperation_1<T>* operation) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeManager*>(),
                                                           { "BeginOperation", { ::i2c::class_of<T>() }, { ::i2c::type_of<::GlobalNamespace::AsyncComputeOperation_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(this, ___internal_method, operation);
}
inline void GlobalNamespace::AsyncComputeManager::ComputeThreadRun() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeManager*>(), { "ComputeThreadRun", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AsyncComputeManager* GlobalNamespace::AsyncComputeManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AsyncComputeManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAsyncComputeManager"
constexpr GlobalNamespace::AsyncComputeManager::operator ::GlobalNamespace::IAsyncComputeManager*() noexcept {
  return static_cast<::GlobalNamespace::IAsyncComputeManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAsyncComputeManager"
constexpr ::GlobalNamespace::IAsyncComputeManager* GlobalNamespace::AsyncComputeManager::i___GlobalNamespace__IAsyncComputeManager() noexcept {
  return static_cast<::GlobalNamespace::IAsyncComputeManager*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::AsyncComputeManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::AsyncComputeManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AsyncComputeManager::AsyncComputeManager() {}
