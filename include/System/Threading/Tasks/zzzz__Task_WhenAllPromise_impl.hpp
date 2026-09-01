#pragma once
// IWYU pragma private; include "System\Threading\Tasks\Task_WhenAllPromise.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_impl.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_WhenAllPromise_def.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Task_WhenAllPromise._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Task_WhenAllPromise::*)(::ArrayW<::System::Threading::Tasks::Task*>)>(&::GlobalNamespace::Task_WhenAllPromise::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5cc47b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Task_WhenAllPromise*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Task_WhenAllPromise.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Task_WhenAllPromise::*)(::System::Threading::Tasks::Task*)>(&::GlobalNamespace::Task_WhenAllPromise::Invoke)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x5cc5934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Task_WhenAllPromise*>(), { "Invoke", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Task_WhenAllPromise.get_ShouldNotifyDebuggerOfWaitCompletion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Task_WhenAllPromise::*)()>(&::GlobalNamespace::Task_WhenAllPromise::get_ShouldNotifyDebuggerOfWaitCompletion)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cc5c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Task_WhenAllPromise*>(), { ::i2c::class_of<::GlobalNamespace::Task_WhenAllPromise*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Task_WhenAllPromise.get_InvokeMayRunArbitraryCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Task_WhenAllPromise::*)()>(&::GlobalNamespace::Task_WhenAllPromise::get_InvokeMayRunArbitraryCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc5ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Task_WhenAllPromise*>(), { "get_InvokeMayRunArbitraryCode", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Threading::Tasks::Task*>& GlobalNamespace::Task_WhenAllPromise::__cordl_internal_get_m_tasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tasks;
}
constexpr ::ArrayW<::System::Threading::Tasks::Task*> const& GlobalNamespace::Task_WhenAllPromise::__cordl_internal_get_m_tasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tasks;
}
constexpr void GlobalNamespace::Task_WhenAllPromise::__cordl_internal_set_m_tasks(::ArrayW<::System::Threading::Tasks::Task*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_tasks = value;
}
constexpr int32_t& GlobalNamespace::Task_WhenAllPromise::__cordl_internal_get_m_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_count;
}
constexpr int32_t const& GlobalNamespace::Task_WhenAllPromise::__cordl_internal_get_m_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_count;
}
constexpr void GlobalNamespace::Task_WhenAllPromise::__cordl_internal_set_m_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_count = value;
}
inline void GlobalNamespace::Task_WhenAllPromise::_ctor(::ArrayW<::System::Threading::Tasks::Task*> tasks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Task_WhenAllPromise*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Threading::Tasks::Task*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tasks);
}
inline void GlobalNamespace::Task_WhenAllPromise::Invoke(::System::Threading::Tasks::Task* ignored) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Task_WhenAllPromise*>(), { "Invoke", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ignored);
}
inline bool GlobalNamespace::Task_WhenAllPromise::get_ShouldNotifyDebuggerOfWaitCompletion() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Task_WhenAllPromise*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::Task_WhenAllPromise::get_InvokeMayRunArbitraryCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Task_WhenAllPromise*>(), { "get_InvokeMayRunArbitraryCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::Task_WhenAllPromise* GlobalNamespace::Task_WhenAllPromise::New_ctor(::ArrayW<::System::Threading::Tasks::Task*> tasks) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Task_WhenAllPromise*>(tasks));
}
/// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr GlobalNamespace::Task_WhenAllPromise::operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept {
  return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::ITaskCompletionAction"
constexpr ::System::Threading::Tasks::ITaskCompletionAction* GlobalNamespace::Task_WhenAllPromise::i___System__Threading__Tasks__ITaskCompletionAction() noexcept {
  return static_cast<::System::Threading::Tasks::ITaskCompletionAction*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Task_WhenAllPromise::Task_WhenAllPromise() {}
