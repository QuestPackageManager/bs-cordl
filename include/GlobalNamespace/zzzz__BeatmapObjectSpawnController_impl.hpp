#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectSpawnController.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__IJumpOffsetYProvider_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapObjectSpawnController__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapObjectSpawnController__InitData::*)(
    float_t, int32_t, float_t, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType, float_t)>(&::GlobalNamespace::__BeatmapObjectSpawnController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3a8859c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectSpawnController__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__BeatmapObjectSpawnController__InitData::__cordl_internal_get_beatsPerMinute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatsPerMinute;
}
constexpr float_t const& GlobalNamespace::__BeatmapObjectSpawnController__InitData::__cordl_internal_get_beatsPerMinute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatsPerMinute;
}
constexpr void GlobalNamespace::__BeatmapObjectSpawnController__InitData::__cordl_internal_set_beatsPerMinute(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatsPerMinute = value;
}
constexpr int32_t& GlobalNamespace::__BeatmapObjectSpawnController__InitData::__cordl_internal_get_noteLinesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteLinesCount;
}
constexpr int32_t const& GlobalNamespace::__BeatmapObjectSpawnController__InitData::__cordl_internal_get_noteLinesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteLinesCount;
}
constexpr void GlobalNamespace::__BeatmapObjectSpawnController__InitData::__cordl_internal_set_noteLinesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteLinesCount = value;
}
constexpr float_t& GlobalNamespace::__BeatmapObjectSpawnController__InitData::__cordl_internal_get_noteJumpMovementSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpMovementSpeed;
}
constexpr float_t const& GlobalNamespace::__BeatmapObjectSpawnController__InitData::__cordl_internal_get_noteJumpMovementSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpMovementSpeed;
}
constexpr void GlobalNamespace::__BeatmapObjectSpawnController__InitData::__cordl_internal_set_noteJumpMovementSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteJumpMovementSpeed = value;
}
constexpr ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType& GlobalNamespace::__BeatmapObjectSpawnController__InitData::__cordl_internal_get_noteJumpValueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpValueType;
}
constexpr ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType const& GlobalNamespace::__BeatmapObjectSpawnController__InitData::__cordl_internal_get_noteJumpValueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpValueType;
}
constexpr void GlobalNamespace::__BeatmapObjectSpawnController__InitData::__cordl_internal_set_noteJumpValueType(::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteJumpValueType = value;
}
constexpr float_t& GlobalNamespace::__BeatmapObjectSpawnController__InitData::__cordl_internal_get_noteJumpValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpValue;
}
constexpr float_t const& GlobalNamespace::__BeatmapObjectSpawnController__InitData::__cordl_internal_get_noteJumpValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpValue;
}
constexpr void GlobalNamespace::__BeatmapObjectSpawnController__InitData::__cordl_internal_set_noteJumpValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteJumpValue = value;
}
inline ::GlobalNamespace::__BeatmapObjectSpawnController__InitData*
GlobalNamespace::__BeatmapObjectSpawnController__InitData::New_ctor(float_t beatsPerMinute, int32_t noteLinesCount, float_t noteJumpMovementSpeed,
                                                                    ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType noteJumpValueType, float_t noteJumpValue) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapObjectSpawnController__InitData*>(beatsPerMinute, noteLinesCount, noteJumpMovementSpeed, noteJumpValueType, noteJumpValue));
}
inline void GlobalNamespace::__BeatmapObjectSpawnController__InitData::_ctor(float_t beatsPerMinute, int32_t noteLinesCount, float_t noteJumpMovementSpeed,
                                                                             ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType noteJumpValueType, float_t noteJumpValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapObjectSpawnController__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatsPerMinute, noteLinesCount, noteJumpMovementSpeed, noteJumpValueType, noteJumpValue);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapObjectSpawnController__InitData::__BeatmapObjectSpawnController__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.get_noteLinesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnController::get_noteLinesCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a875ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                               "get_noteLinesCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.get_jumpOffsetY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnController::get_jumpOffsetY)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3a875c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                               "get_jumpOffsetY", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.get_moveDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnController::get_moveDuration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a87680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                               "get_moveDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.get_jumpDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnController::get_jumpDuration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a8769c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                               "get_jumpDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.get_jumpDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnController::get_jumpDistance)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a876b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                               "get_jumpDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.get_verticalLayerDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnController::get_verticalLayerDistance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3a876d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                               "get_verticalLayerDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.get_noteJumpMovementSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnController::get_noteJumpMovementSpeed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a87700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                               "get_noteJumpMovementSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.get_noteLinesDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnController::get_noteLinesDistance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3a8771c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                               "get_noteLinesDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.get_beatmapObjectSpawnMovementData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapObjectSpawnMovementData* (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnController::get_beatmapObjectSpawnMovementData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a87748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(), "get_beatmapObjectSpawnMovementData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.get_isInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnController::get_isInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a87750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                               "get_isInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.add_didInitEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnController::*)(::System::Action*)>(
    &::GlobalNamespace::BeatmapObjectSpawnController::add_didInitEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a87758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(), "add_didInitEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.remove_didInitEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnController::*)(::System::Action*)>(
    &::GlobalNamespace::BeatmapObjectSpawnController::remove_didInitEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a877f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(), "remove_didInitEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnController::Start)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x3a87890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnController::OnDestroy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3a87ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.HandleObstacleDataCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnController::*)(::GlobalNamespace::ObstacleData*)>(
    &::GlobalNamespace::BeatmapObjectSpawnController::HandleObstacleDataCallback)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3a87d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(), "HandleObstacleDataCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.HandleNoteDataCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnController::*)(::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::BeatmapObjectSpawnController::HandleNoteDataCallback)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3a87f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(), "HandleNoteDataCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.HandleSliderDataCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnController::*)(::GlobalNamespace::SliderData*)>(
    &::GlobalNamespace::BeatmapObjectSpawnController::HandleSliderDataCallback)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3a8818c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(), "HandleSliderDataCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.StopSpawning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnController::StopSpawning)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a88414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                               "StopSpawning", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.Get2DNoteOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::BeatmapObjectSpawnController::*)(
    int32_t, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::BeatmapObjectSpawnController::Get2DNoteOffset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3a88420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(), "Get2DNoteOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnController::*)(::GlobalNamespace::NoteLineLayer, float_t)>(
    &::GlobalNamespace::BeatmapObjectSpawnController::JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3a8845c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                 "JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnController::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3a884e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectSpawnController"
constexpr GlobalNamespace::BeatmapObjectSpawnController::operator ::GlobalNamespace::IBeatmapObjectSpawnController*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapObjectSpawnController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatmapObjectSpawnController"
constexpr ::GlobalNamespace::IBeatmapObjectSpawnController* GlobalNamespace::BeatmapObjectSpawnController::i___GlobalNamespace__IBeatmapObjectSpawnController() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapObjectSpawnController*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData*& GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get__beatmapObjectSpawnMovementData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnMovementData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectSpawnMovementData*> const&
GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get__beatmapObjectSpawnMovementData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnMovementData;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_set__beatmapObjectSpawnMovementData(::GlobalNamespace::BeatmapObjectSpawnMovementData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectSpawnMovementData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const&
GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatmapObjectSpawner*& GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get__beatmapObjectSpawner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawner;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawner*> const& GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get__beatmapObjectSpawner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawner;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_set__beatmapObjectSpawner(::GlobalNamespace::IBeatmapObjectSpawner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectSpawner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IJumpOffsetYProvider*& GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get__jumpOffsetYProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpOffsetYProvider;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IJumpOffsetYProvider*> const& GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get__jumpOffsetYProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpOffsetYProvider;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_set__jumpOffsetYProvider(::GlobalNamespace::IJumpOffsetYProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____jumpOffsetYProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__BeatmapObjectSpawnController__InitData*& GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapObjectSpawnController__InitData*> const&
GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_set__initData(::GlobalNamespace::__BeatmapObjectSpawnController__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get_didInitEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didInitEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get_didInitEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didInitEvent;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_set_didInitEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didInitEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get__disableSpawning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disableSpawning;
}
constexpr bool const& GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get__disableSpawning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disableSpawning;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_set__disableSpawning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disableSpawning = value;
}
constexpr bool& GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get__isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr bool const& GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get__isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_set__isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInitialized = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get__obstacleDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const&
GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get__obstacleDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleDataCallbackWrapper;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_set__obstacleDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obstacleDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get__noteDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const&
GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get__noteDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDataCallbackWrapper;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_set__noteDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get__sliderDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const&
GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_get__sliderDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDataCallbackWrapper;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnController::__cordl_internal_set__sliderDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t GlobalNamespace::BeatmapObjectSpawnController::get_noteLinesCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                             "get_noteLinesCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnController::get_jumpOffsetY() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                             "get_jumpOffsetY", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnController::get_moveDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                             "get_moveDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnController::get_jumpDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                             "get_jumpDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnController::get_jumpDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                             "get_jumpDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnController::get_verticalLayerDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                             "get_verticalLayerDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnController::get_noteJumpMovementSpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                             "get_noteJumpMovementSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnController::get_noteLinesDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                             "get_noteLinesDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapObjectSpawnMovementData* GlobalNamespace::BeatmapObjectSpawnController::get_beatmapObjectSpawnMovementData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(), "get_beatmapObjectSpawnMovementData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectSpawnMovementData*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapObjectSpawnController::get_isInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                             "get_isInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectSpawnController::add_didInitEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(), "add_didInitEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectSpawnController::remove_didInitEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(), "remove_didInitEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectSpawnController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectSpawnController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectSpawnController::HandleObstacleDataCallback(::GlobalNamespace::ObstacleData* obstacleData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(), "HandleObstacleDataCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obstacleData);
}
inline void GlobalNamespace::BeatmapObjectSpawnController::HandleNoteDataCallback(::GlobalNamespace::NoteData* noteData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(), "HandleNoteDataCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteData);
}
inline void GlobalNamespace::BeatmapObjectSpawnController::HandleSliderDataCallback(::GlobalNamespace::SliderData* sliderNoteData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(), "HandleSliderDataCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderNoteData);
}
inline void GlobalNamespace::BeatmapObjectSpawnController::StopSpawning() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                                                             "StopSpawning", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 GlobalNamespace::BeatmapObjectSpawnController::Get2DNoteOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(), "Get2DNoteOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, noteLineIndex, noteLineLayer);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnController::JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(::GlobalNamespace::NoteLineLayer lineLayer, float_t distanceFromPlayer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(),
                                               "JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, lineLayer, distanceFromPlayer);
}
inline ::GlobalNamespace::BeatmapObjectSpawnController* GlobalNamespace::BeatmapObjectSpawnController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapObjectSpawnController*>());
}
inline void GlobalNamespace::BeatmapObjectSpawnController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectSpawnController::BeatmapObjectSpawnController() {}
