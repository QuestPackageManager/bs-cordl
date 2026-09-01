#pragma once
// IWYU pragma private; include "GlobalNamespace\GetEntitlementStatusConsoleCommand.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_impl.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "GlobalNamespace/zzzz__GetEntitlementStatusConsoleCommand_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__GetEntitlementStatusConsoleCommand_def.hpp"
#include "GlobalNamespace/zzzz__IEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__OptionalArgument_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9::*)()>(
    &::GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x7d4;
  constexpr static std::size_t addrs = 0x32dba88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32dc25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::GetEntitlementStatusConsoleCommand*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::GetEntitlementStatusConsoleCommand* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9::GetEntitlementStatusConsoleCommand__ExecuteAsync_d__9() {}
//  Writing Method size for method: ::GlobalNamespace::GetEntitlementStatusConsoleCommand.get_commandName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GetEntitlementStatusConsoleCommand::*)()>(
    &::GlobalNamespace::GetEntitlementStatusConsoleCommand::get_commandName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32db064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GetEntitlementStatusConsoleCommand*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GetEntitlementStatusConsoleCommand*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetEntitlementStatusConsoleCommand.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GetEntitlementStatusConsoleCommand::*)()>(
    &::GlobalNamespace::GetEntitlementStatusConsoleCommand::get_description)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32db0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GetEntitlementStatusConsoleCommand*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GetEntitlementStatusConsoleCommand*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetEntitlementStatusConsoleCommand.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetEntitlementStatusConsoleCommand::*)()>(&::GlobalNamespace::GetEntitlementStatusConsoleCommand::Initialize)> {
  constexpr static std::size_t size = 0x770;
  constexpr static std::size_t addrs = 0x32db0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GetEntitlementStatusConsoleCommand*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GetEntitlementStatusConsoleCommand*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetEntitlementStatusConsoleCommand.ExecuteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::GetEntitlementStatusConsoleCommand::*)(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(
        &::GlobalNamespace::GetEntitlementStatusConsoleCommand::ExecuteAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x32db85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GetEntitlementStatusConsoleCommand*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GetEntitlementStatusConsoleCommand*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetEntitlementStatusConsoleCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetEntitlementStatusConsoleCommand::*)()>(&::GlobalNamespace::GetEntitlementStatusConsoleCommand::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x32db938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GetEntitlementStatusConsoleCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IEntitlementModel*& GlobalNamespace::GetEntitlementStatusConsoleCommand::__cordl_internal_get__entitlementModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementModel;
}
constexpr ::GlobalNamespace::IEntitlementModel* const& GlobalNamespace::GetEntitlementStatusConsoleCommand::__cordl_internal_get__entitlementModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementModel;
}
constexpr void GlobalNamespace::GetEntitlementStatusConsoleCommand::__cordl_internal_set__entitlementModel(::GlobalNamespace::IEntitlementModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____entitlementModel = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::GetEntitlementStatusConsoleCommand::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::GetEntitlementStatusConsoleCommand::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::GetEntitlementStatusConsoleCommand::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& GlobalNamespace::GetEntitlementStatusConsoleCommand::__cordl_internal_get__packId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packId;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& GlobalNamespace::GetEntitlementStatusConsoleCommand::__cordl_internal_get__packId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packId;
}
constexpr void GlobalNamespace::GetEntitlementStatusConsoleCommand::__cordl_internal_set__packId(::GlobalNamespace::OptionalArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packId = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>*& GlobalNamespace::GetEntitlementStatusConsoleCommand::__cordl_internal_get__levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::StringW>* const& GlobalNamespace::GetEntitlementStatusConsoleCommand::__cordl_internal_get__levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr void GlobalNamespace::GetEntitlementStatusConsoleCommand::__cordl_internal_set__levelId(::GlobalNamespace::OptionalArgument_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelId = value;
}
inline ::StringW GlobalNamespace::GetEntitlementStatusConsoleCommand::get_commandName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GetEntitlementStatusConsoleCommand*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GetEntitlementStatusConsoleCommand::get_description() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GetEntitlementStatusConsoleCommand*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GetEntitlementStatusConsoleCommand::Initialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GetEntitlementStatusConsoleCommand*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>*
GlobalNamespace::GetEntitlementStatusConsoleCommand::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GetEntitlementStatusConsoleCommand*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, messages);
}
inline void GlobalNamespace::GetEntitlementStatusConsoleCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GetEntitlementStatusConsoleCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GetEntitlementStatusConsoleCommand* GlobalNamespace::GetEntitlementStatusConsoleCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GetEntitlementStatusConsoleCommand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetEntitlementStatusConsoleCommand::GetEntitlementStatusConsoleCommand() {}
