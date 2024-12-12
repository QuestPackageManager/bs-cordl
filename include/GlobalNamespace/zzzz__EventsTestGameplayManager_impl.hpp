#pragma once
// IWYU pragma private; include "GlobalNamespace/EventsTestGameplayManager.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EventsTestGameplayManager_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupList_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__EventsTestGameplayManager_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::*)(float_t)>(
    &::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3b9cb9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter.ConvertBeatToTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::*)(float_t)>(
    &::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::ConvertBeatToTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3b9f82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter*>::get(), "ConvertBeatToTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::__cordl_internal_get__bpm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpm;
}
constexpr float_t const& GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::__cordl_internal_get__bpm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bpm;
}
constexpr void GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::__cordl_internal_set__bpm(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bpm = value;
}
inline void GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::_ctor(float_t bpm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bpm);
}
inline float_t GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::ConvertBeatToTime(float_t beat) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter*>::get(), "ConvertBeatToTime",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, beat);
}
inline ::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter* GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::New_ctor(float_t bpm) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter*>(bpm));
}
/// @brief Convert operator to "::GlobalNamespace::IBeatToTimeConverter"
constexpr GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::operator ::GlobalNamespace::IBeatToTimeConverter*() noexcept {
  return static_cast<::GlobalNamespace::IBeatToTimeConverter*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatToTimeConverter"
constexpr ::GlobalNamespace::IBeatToTimeConverter* GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::i___GlobalNamespace__IBeatToTimeConverter() noexcept {
  return static_cast<::GlobalNamespace::IBeatToTimeConverter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventsTestGameplayManager_MockBeatToTimeConverter::EventsTestGameplayManager_MockBeatToTimeConverter() {}
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::*)()>(
    &::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b9f1b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0._AddEventsForLightGroup_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::*)(::GlobalNamespace::LightGroup*)>(
    &::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::_AddEventsForLightGroup_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3b9f844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0*>::get(), "<AddEventsForLightGroup>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::__cordl_internal_get_lightGroupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroupId;
}
constexpr int32_t const& GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::__cordl_internal_get_lightGroupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroupId;
}
constexpr void GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::__cordl_internal_set_lightGroupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightGroupId = value;
}
inline void GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::_AddEventsForLightGroup_b__0(::GlobalNamespace::LightGroup* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0*>::get(), "<AddEventsForLightGroup>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0* GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass18_0::EventsTestGameplayManager___c__DisplayClass18_0() {}
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::*)()>(
    &::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b9f1b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0._AddInstantToggleEventsForLightGroup_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::*)(::GlobalNamespace::LightGroup*)>(
    &::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::_AddInstantToggleEventsForLightGroup_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3b9f874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0*>::get(), "<AddInstantToggleEventsForLightGroup>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::__cordl_internal_get_lightGroupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroupId;
}
constexpr int32_t const& GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::__cordl_internal_get_lightGroupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroupId;
}
constexpr void GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::__cordl_internal_set_lightGroupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightGroupId = value;
}
inline void GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::_AddInstantToggleEventsForLightGroup_b__0(::GlobalNamespace::LightGroup* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0*>::get(), "<AddInstantToggleEventsForLightGroup>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0* GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass19_0::EventsTestGameplayManager___c__DisplayClass19_0() {}
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::*)()>(
    &::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b9f1c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0._AddToggleEventsForLightGroup_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::*)(::GlobalNamespace::LightGroup*)>(
    &::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::_AddToggleEventsForLightGroup_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3b9f8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0*>::get(), "<AddToggleEventsForLightGroup>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::__cordl_internal_get_lightGroupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroupId;
}
constexpr int32_t const& GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::__cordl_internal_get_lightGroupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightGroupId;
}
constexpr void GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::__cordl_internal_set_lightGroupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightGroupId = value;
}
inline void GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::_AddToggleEventsForLightGroup_b__0(::GlobalNamespace::LightGroup* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0*>::get(), "<AddToggleEventsForLightGroup>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
inline ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0* GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventsTestGameplayManager___c__DisplayClass20_0::EventsTestGameplayManager___c__DisplayClass20_0() {}
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)()>(&::GlobalNamespace::EventsTestGameplayManager::Start)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3b9ca5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)()>(&::GlobalNamespace::EventsTestGameplayManager::Update)> {
  constexpr static std::size_t size = 0x8e0;
  constexpr static std::size_t addrs = 0x3b9cbc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.AddEventsForLightGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)(int32_t)>(
    &::GlobalNamespace::EventsTestGameplayManager::AddEventsForLightGroup)> {
  constexpr static std::size_t size = 0x948;
  constexpr static std::size_t addrs = 0x3b9d4a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "AddEventsForLightGroup",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.AddInstantToggleEventsForLightGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)(int32_t)>(
    &::GlobalNamespace::EventsTestGameplayManager::AddInstantToggleEventsForLightGroup)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x3b9e37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "AddInstantToggleEventsForLightGroup",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.AddToggleEventsForLightGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)(int32_t, ::GlobalNamespace::EnvironmentColorType)>(
    &::GlobalNamespace::EventsTestGameplayManager::AddToggleEventsForLightGroup)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x3b9ddec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "AddToggleEventsForLightGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.AddTestBox
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)()>(
    &::GlobalNamespace::EventsTestGameplayManager::AddTestBox)> {
  constexpr static std::size_t size = 0x9d4;
  constexpr static std::size_t addrs = 0x3b9e7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(),
                                                                               "AddTestBox", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)()>(&::GlobalNamespace::EventsTestGameplayManager::_ctor)> {
  constexpr static std::size_t size = 0x664;
  constexpr static std::size_t addrs = 0x3b9f1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__moveTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveTime;
}
constexpr bool const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__moveTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveTime;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__moveTime(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveTime = value;
}
constexpr bool& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__spawnTestBox() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnTestBox;
}
constexpr bool const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__spawnTestBox() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnTestBox;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__spawnTestBox(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnTestBox = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapData*& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr ::GlobalNamespace::BeatmapData* const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__beatmapData(::GlobalNamespace::BeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::GlobalNamespace::IAudioTimeSource* const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__basicBeatmapEventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicBeatmapEventType;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__basicBeatmapEventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____basicBeatmapEventType;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__basicBeatmapEventType(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____basicBeatmapEventType = value;
}
constexpr float_t& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__floatValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValue;
}
constexpr float_t const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__floatValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValue;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__floatValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatValue = value;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*, ::Array<::GlobalNamespace::BeatmapEventDataBoxGroupList*>*>&
GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__beatmapEventDataBoxGroupLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventDataBoxGroupLists;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*, ::Array<::GlobalNamespace::BeatmapEventDataBoxGroupList*>*> const&
GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__beatmapEventDataBoxGroupLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventDataBoxGroupLists;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__beatmapEventDataBoxGroupLists(
    ::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList*, ::Array<::GlobalNamespace::BeatmapEventDataBoxGroupList*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapEventDataBoxGroupLists)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<bool, ::Array<bool>*>& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get_groupState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupState;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get_groupState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupState;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set_groupState(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___groupState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>*&
GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__beatmapEventTypeBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventTypeBindings;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>* const&
GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__beatmapEventTypeBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventTypeBindings;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__beatmapEventTypeBindings(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, ::GlobalNamespace::BasicBeatmapEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapEventTypeBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>*& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__intBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intBindings;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__intBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intBindings;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__intBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____intBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>*& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__beatmapValuesBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapValuesBindings;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__beatmapValuesBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapValuesBindings;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__beatmapValuesBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapValuesBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float_t>*& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__floatValuesBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValuesBindings;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float_t>* const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__floatValuesBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatValuesBindings;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__floatValuesBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floatValuesBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__rotatingLasers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotatingLasers;
}
constexpr bool const& GlobalNamespace::EventsTestGameplayManager::__cordl_internal_get__rotatingLasers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotatingLasers;
}
constexpr void GlobalNamespace::EventsTestGameplayManager::__cordl_internal_set__rotatingLasers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotatingLasers = value;
}
inline void GlobalNamespace::EventsTestGameplayManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EventsTestGameplayManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EventsTestGameplayManager::AddEventsForLightGroup(int32_t lightGroupId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "AddEventsForLightGroup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightGroupId);
}
inline void GlobalNamespace::EventsTestGameplayManager::AddInstantToggleEventsForLightGroup(int32_t lightGroupId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "AddInstantToggleEventsForLightGroup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightGroupId);
}
inline void GlobalNamespace::EventsTestGameplayManager::AddToggleEventsForLightGroup(int32_t lightGroupId, ::GlobalNamespace::EnvironmentColorType color) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "AddToggleEventsForLightGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightGroupId, color);
}
inline void GlobalNamespace::EventsTestGameplayManager::AddTestBox() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), "AddTestBox",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::EventsTestGameplayManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EventsTestGameplayManager* GlobalNamespace::EventsTestGameplayManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EventsTestGameplayManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventsTestGameplayManager::EventsTestGameplayManager() {}
