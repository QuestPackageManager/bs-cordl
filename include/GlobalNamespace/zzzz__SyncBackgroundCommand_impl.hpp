#pragma once
// IWYU pragma private; include "GlobalNamespace\SyncBackgroundCommand.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SyncBackgroundCommand_def.hpp"
#include "GlobalNamespace/zzzz__IBackgroundCommand_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SyncBackgroundCommand.get_resultTask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::SyncBackgroundCommand::*)()>(&::GlobalNamespace::SyncBackgroundCommand::get_resultTask)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3322910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncBackgroundCommand*>(), { "get_resultTask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncBackgroundCommand.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::SyncBackgroundCommand::*)()>(&::GlobalNamespace::SyncBackgroundCommand::Execute)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x3322960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncBackgroundCommand*>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncBackgroundCommand.ExecuteInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncBackgroundCommand::*)()>(&::GlobalNamespace::SyncBackgroundCommand::ExecuteInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncBackgroundCommand*>(), { ::i2c::class_of<::GlobalNamespace::SyncBackgroundCommand*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SyncBackgroundCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SyncBackgroundCommand::*)()>(&::GlobalNamespace::SyncBackgroundCommand::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3322ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncBackgroundCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*& GlobalNamespace::SyncBackgroundCommand::__cordl_internal_get__taskCompletionSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskCompletionSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* const& GlobalNamespace::SyncBackgroundCommand::__cordl_internal_get__taskCompletionSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskCompletionSource;
}
constexpr void GlobalNamespace::SyncBackgroundCommand::__cordl_internal_set__taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____taskCompletionSource = value;
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::SyncBackgroundCommand::get_resultTask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncBackgroundCommand*>(), { "get_resultTask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::SyncBackgroundCommand::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncBackgroundCommand*>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::SyncBackgroundCommand::ExecuteInternal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SyncBackgroundCommand*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SyncBackgroundCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncBackgroundCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SyncBackgroundCommand* GlobalNamespace::SyncBackgroundCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SyncBackgroundCommand*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBackgroundCommand"
constexpr GlobalNamespace::SyncBackgroundCommand::operator ::GlobalNamespace::IBackgroundCommand*() noexcept {
  return static_cast<::GlobalNamespace::IBackgroundCommand*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBackgroundCommand"
constexpr ::GlobalNamespace::IBackgroundCommand* GlobalNamespace::SyncBackgroundCommand::i___GlobalNamespace__IBackgroundCommand() noexcept {
  return static_cast<::GlobalNamespace::IBackgroundCommand*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SyncBackgroundCommand::SyncBackgroundCommand() {}
