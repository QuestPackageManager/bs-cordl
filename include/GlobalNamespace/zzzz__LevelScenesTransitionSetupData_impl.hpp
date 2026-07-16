#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelScenesTransitionSetupData.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupData_def.hpp"
#include "Analytics/Model/zzzz__TelemetryModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformationSetupData_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupData_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11::*)()>(
    &::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x590d3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x590d7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelScenesTransitionSetupData*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_stopwatch_5__2", ty: "::System::Diagnostics::Stopwatch*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::LevelScenesTransitionSetupData* __4__this,
    ::System::Diagnostics::Stopwatch* _stopwatch_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_stopwatch_5__2 = _stopwatch_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11::LevelScenesTransitionSetupData__BeforeScenesWillBeActivatedAsync_d__11() {}
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupData.get_transformedBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (::GlobalNamespace::LevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::LevelScenesTransitionSetupData::get_transformedBeatmapData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x590d2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData*>(), { "get_transformedBeatmapData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupData.get_gameplayCoreSceneSetupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayCoreSceneSetupData* (::GlobalNamespace::LevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::LevelScenesTransitionSetupData::get_gameplayCoreSceneSetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590d2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData*>(), { "get_gameplayCoreSceneSetupData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupData.set_gameplayCoreSceneSetupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelScenesTransitionSetupData::*)(::GlobalNamespace::GameplayCoreSceneSetupData*)>(
    &::GlobalNamespace::LevelScenesTransitionSetupData::set_gameplayCoreSceneSetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590d2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData*>(),
                                                             { "set_gameplayCoreSceneSetupData", {}, { ::i2c::type_of<::GlobalNamespace::GameplayCoreSceneSetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupData.get_gameplayAdditionalInformationSetupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayAdditionalInformationSetupData* (::GlobalNamespace::LevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::LevelScenesTransitionSetupData::get_gameplayAdditionalInformationSetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590d2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData*>(), { "get_gameplayAdditionalInformationSetupData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupData.set_gameplayAdditionalInformationSetupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelScenesTransitionSetupData::*)(::GlobalNamespace::GameplayAdditionalInformationSetupData*)>(
    &::GlobalNamespace::LevelScenesTransitionSetupData::set_gameplayAdditionalInformationSetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590d2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData*>(),
                                                             { "set_gameplayAdditionalInformationSetupData", {}, { ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformationSetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupData.BeforeScenesWillBeActivatedAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::LevelScenesTransitionSetupData::BeforeScenesWillBeActivatedAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x590d2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData*>(), { ::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelScenesTransitionSetupData::*)()>(&::GlobalNamespace::LevelScenesTransitionSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590d3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelScenesTransitionSetupData.__n__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::LevelScenesTransitionSetupData::__n__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590d3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData*>(), { "<>n__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Analytics::Model::TelemetryModel*& GlobalNamespace::LevelScenesTransitionSetupData::__cordl_internal_get__telemetryModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryModel;
}
constexpr ::Analytics::Model::TelemetryModel* const& GlobalNamespace::LevelScenesTransitionSetupData::__cordl_internal_get__telemetryModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryModel;
}
constexpr void GlobalNamespace::LevelScenesTransitionSetupData::__cordl_internal_set__telemetryModel(::Analytics::Model::TelemetryModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____telemetryModel = value;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& GlobalNamespace::LevelScenesTransitionSetupData::__cordl_internal_get__gameplayCoreSceneSetupData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayCoreSceneSetupData_k__BackingField;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& GlobalNamespace::LevelScenesTransitionSetupData::__cordl_internal_get__gameplayCoreSceneSetupData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayCoreSceneSetupData_k__BackingField;
}
constexpr void GlobalNamespace::LevelScenesTransitionSetupData::__cordl_internal_set__gameplayCoreSceneSetupData_k__BackingField(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayCoreSceneSetupData_k__BackingField = value;
}
constexpr ::GlobalNamespace::GameplayAdditionalInformationSetupData*& GlobalNamespace::LevelScenesTransitionSetupData::__cordl_internal_get__gameplayAdditionalInformationSetupData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayAdditionalInformationSetupData_k__BackingField;
}
constexpr ::GlobalNamespace::GameplayAdditionalInformationSetupData* const&
GlobalNamespace::LevelScenesTransitionSetupData::__cordl_internal_get__gameplayAdditionalInformationSetupData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayAdditionalInformationSetupData_k__BackingField;
}
constexpr void
GlobalNamespace::LevelScenesTransitionSetupData::__cordl_internal_set__gameplayAdditionalInformationSetupData_k__BackingField(::GlobalNamespace::GameplayAdditionalInformationSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayAdditionalInformationSetupData_k__BackingField = value;
}
inline ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::LevelScenesTransitionSetupData::get_transformedBeatmapData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData*>(), { "get_transformedBeatmapData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayCoreSceneSetupData* GlobalNamespace::LevelScenesTransitionSetupData::get_gameplayCoreSceneSetupData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData*>(), { "get_gameplayCoreSceneSetupData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayCoreSceneSetupData*>(this, ___internal_method);
}
inline void GlobalNamespace::LevelScenesTransitionSetupData::set_gameplayCoreSceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData*>(),
                                                           { "set_gameplayCoreSceneSetupData", {}, { ::i2c::type_of<::GlobalNamespace::GameplayCoreSceneSetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayAdditionalInformationSetupData* GlobalNamespace::LevelScenesTransitionSetupData::get_gameplayAdditionalInformationSetupData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData*>(), { "get_gameplayAdditionalInformationSetupData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayAdditionalInformationSetupData*>(this, ___internal_method);
}
inline void GlobalNamespace::LevelScenesTransitionSetupData::set_gameplayAdditionalInformationSetupData(::GlobalNamespace::GameplayAdditionalInformationSetupData* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData*>(),
                                                           { "set_gameplayAdditionalInformationSetupData", {}, { ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformationSetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LevelScenesTransitionSetupData::BeforeScenesWillBeActivatedAsync() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::LevelScenesTransitionSetupData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LevelScenesTransitionSetupData::__n__0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelScenesTransitionSetupData*>(), { "<>n__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelScenesTransitionSetupData* GlobalNamespace::LevelScenesTransitionSetupData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelScenesTransitionSetupData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelScenesTransitionSetupData::LevelScenesTransitionSetupData() {}
