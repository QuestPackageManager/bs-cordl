#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialScenesTransitionSetupData.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformation_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupData_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType::TutorialScenesTransitionSetupData_TutorialEndStateType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType::TutorialScenesTransitionSetupData_TutorialEndStateType() {}
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType::Completed{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType::ReturnToMenu{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType::Restart{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupData.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupData::*)(
    ::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupData*, ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>*)>(
    &::GlobalNamespace::TutorialScenesTransitionSetupData::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x590efa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::TutorialScenesTransitionSetupData*>(),
            { "add_didFinishEvent",
              {},
              { ::i2c::type_of<::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupData*, ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupData.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupData::*)(
    ::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupData*, ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>*)>(
    &::GlobalNamespace::TutorialScenesTransitionSetupData::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x590db54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::TutorialScenesTransitionSetupData*>(),
            { "remove_didFinishEvent",
              {},
              { ::i2c::type_of<::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupData*, ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupData.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupData::*)(
    ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::GameplayAdditionalInformation*)>(&::GlobalNamespace::TutorialScenesTransitionSetupData::Init)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x590f068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialScenesTransitionSetupData*>(),
                                         { "Init", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupData.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupData::*)(::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType)>(
    &::GlobalNamespace::TutorialScenesTransitionSetupData::Finish)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5910870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialScenesTransitionSetupData*>(),
                                                             { "Finish", {}, { ::i2c::type_of<::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialScenesTransitionSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialScenesTransitionSetupData::*)()>(&::GlobalNamespace::TutorialScenesTransitionSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5910898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupData*, ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>*&
GlobalNamespace::TutorialScenesTransitionSetupData::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupData*, ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>* const&
GlobalNamespace::TutorialScenesTransitionSetupData::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::TutorialScenesTransitionSetupData::__cordl_internal_set_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupData*, ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
inline void GlobalNamespace::TutorialScenesTransitionSetupData::add_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupData*, ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::TutorialScenesTransitionSetupData*>(),
          { "add_didFinishEvent",
            {},
            { ::i2c::type_of<::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupData*, ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TutorialScenesTransitionSetupData::remove_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupData*, ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::TutorialScenesTransitionSetupData*>(),
          { "remove_didFinishEvent",
            {},
            { ::i2c::type_of<::System::Action_2<::GlobalNamespace::TutorialScenesTransitionSetupData*, ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TutorialScenesTransitionSetupData::Init(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                                     ::GlobalNamespace::GameplayAdditionalInformation* gameplayAdditionalInformation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialScenesTransitionSetupData*>(),
                                              { "Init", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerSpecificSettings, gameplayAdditionalInformation);
}
inline void GlobalNamespace::TutorialScenesTransitionSetupData::Finish(::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType endState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialScenesTransitionSetupData*>(),
                                                           { "Finish", {}, { ::i2c::type_of<::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endState);
}
inline void GlobalNamespace::TutorialScenesTransitionSetupData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TutorialScenesTransitionSetupData* GlobalNamespace::TutorialScenesTransitionSetupData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TutorialScenesTransitionSetupData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupData::TutorialScenesTransitionSetupData() {}
