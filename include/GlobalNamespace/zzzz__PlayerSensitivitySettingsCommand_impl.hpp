#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSensitivitySettingsCommand.hpp"
#include "GlobalNamespace/zzzz__ConsoleCommandBase_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__UserAgeCategory_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivitySettingsCommand_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__ConsoleMessage_def.hpp"
#include "GlobalNamespace/zzzz__OptionalArgument_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivitySettingsCommand_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9::*)()>(
    &::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9::MoveNext)> {
  constexpr static std::size_t size = 0xb8c;
  constexpr static std::size_t addrs = 0x35677a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3568334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::PlayerSensitivitySettingsCommand*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "messages", ty:
// "::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_previousSensitivityFlag_5__2", ty:
// "::GlobalNamespace::PlayerSensitivityFlag", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_previousAgreementVersion_5__3", ty: "int32_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::UserAgeCategory>", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::PlayerSensitivitySettingsCommand* __4__this,
    ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages, ::GlobalNamespace::PlayerSensitivityFlag _previousSensitivityFlag_5__2, int32_t _previousAgreementVersion_5__3,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::UserAgeCategory> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->messages = messages;
  this->_previousSensitivityFlag_5__2 = _previousSensitivityFlag_5__2;
  this->_previousAgreementVersion_5__3 = _previousAgreementVersion_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9::PlayerSensitivitySettingsCommand__ExecuteAsync_d__9() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSensitivitySettingsCommand.get_commandName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerSensitivitySettingsCommand::*)()>(&::GlobalNamespace::PlayerSensitivitySettingsCommand::get_commandName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x35674d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSensitivitySettingsCommand*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::PlayerSensitivitySettingsCommand*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSensitivitySettingsCommand.get_description
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerSensitivitySettingsCommand::*)()>(&::GlobalNamespace::PlayerSensitivitySettingsCommand::get_description)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x356751c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSensitivitySettingsCommand*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::PlayerSensitivitySettingsCommand*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSensitivitySettingsCommand.ExecuteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::PlayerSensitivitySettingsCommand::*)(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>*)>(
        &::GlobalNamespace::PlayerSensitivitySettingsCommand::ExecuteAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3567560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSensitivitySettingsCommand*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::PlayerSensitivitySettingsCommand*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSensitivitySettingsCommand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSensitivitySettingsCommand::*)()>(&::GlobalNamespace::PlayerSensitivitySettingsCommand::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x3567650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSensitivitySettingsCommand*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::PlayerSensitivitySettingsCommand::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::PlayerSensitivitySettingsCommand::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::PlayerSensitivitySettingsCommand::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::PlayerSensitivitySettingsCommand::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::PlayerSensitivitySettingsCommand::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::PlayerSensitivitySettingsCommand::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::OculusStudios::Platform::Core::IPlatform*& GlobalNamespace::PlayerSensitivitySettingsCommand::__cordl_internal_get__platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr ::OculusStudios::Platform::Core::IPlatform* const& GlobalNamespace::PlayerSensitivitySettingsCommand::__cordl_internal_get__platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr void GlobalNamespace::PlayerSensitivitySettingsCommand::__cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platform = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::PlayerSensitivityFlag>*& GlobalNamespace::PlayerSensitivitySettingsCommand::__cordl_internal_get__setting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setting;
}
constexpr ::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::PlayerSensitivityFlag>* const& GlobalNamespace::PlayerSensitivitySettingsCommand::__cordl_internal_get__setting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setting;
}
constexpr void GlobalNamespace::PlayerSensitivitySettingsCommand::__cordl_internal_set__setting(::GlobalNamespace::OptionalArgument_1<::GlobalNamespace::PlayerSensitivityFlag>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setting = value;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>*& GlobalNamespace::PlayerSensitivitySettingsCommand::__cordl_internal_get__apply() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____apply;
}
constexpr ::GlobalNamespace::OptionalArgument_1<bool>* const& GlobalNamespace::PlayerSensitivitySettingsCommand::__cordl_internal_get__apply() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____apply;
}
constexpr void GlobalNamespace::PlayerSensitivitySettingsCommand::__cordl_internal_set__apply(::GlobalNamespace::OptionalArgument_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____apply = value;
}
inline ::StringW GlobalNamespace::PlayerSensitivitySettingsCommand::get_commandName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlayerSensitivitySettingsCommand*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PlayerSensitivitySettingsCommand::get_description() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlayerSensitivitySettingsCommand*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::PlayerSensitivitySettingsCommand::ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlayerSensitivitySettingsCommand*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, messages);
}
inline void GlobalNamespace::PlayerSensitivitySettingsCommand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSensitivitySettingsCommand*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSensitivitySettingsCommand* GlobalNamespace::PlayerSensitivitySettingsCommand::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerSensitivitySettingsCommand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSensitivitySettingsCommand::PlayerSensitivitySettingsCommand() {}
