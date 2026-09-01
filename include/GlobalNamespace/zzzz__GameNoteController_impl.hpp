#pragma once
// IWYU pragma private; include "GlobalNamespace\GameNoteController.hpp"
#include "GlobalNamespace/zzzz__BoxCuttableBySaber_impl.hpp"
#include "GlobalNamespace/zzzz__NoteController_impl.hpp"
#include "GlobalNamespace/zzzz__NoteData_impl.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__GameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__GameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__ICubeNoteControllerInitializable_1_def.hpp"
#include "GlobalNamespace/zzzz__IGameNoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__INoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__INoteMovementProvider_def.hpp"
#include "GlobalNamespace/zzzz__INoteVisualModifierTypeProvider_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteMovement_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameNoteController_Pool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameNoteController_Pool::*)()>(&::GlobalNamespace::GameNoteController_Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58d26e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController_Pool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameNoteController_Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController_Pool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameNoteController_Pool* GlobalNamespace::GameNoteController_Pool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameNoteController_Pool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameNoteController_Pool::GameNoteController_Pool() {}
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.add_cubeNoteControllerDidInitEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameNoteController::*)(::System::Action_1<::UnityW<::GlobalNamespace::GameNoteController>>*)>(
    &::GlobalNamespace::GameNoteController::add_cubeNoteControllerDidInitEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58d186c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(),
                                                { "add_cubeNoteControllerDidInitEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::GameNoteController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.remove_cubeNoteControllerDidInitEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameNoteController::*)(::System::Action_1<::UnityW<::GlobalNamespace::GameNoteController>>*)>(
    &::GlobalNamespace::GameNoteController::remove_cubeNoteControllerDidInitEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58d192c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(),
                                                { "remove_cubeNoteControllerDidInitEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::GameNoteController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.get_noteMovement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::NoteMovement> (::GlobalNamespace::GameNoteController::*)()>(
    &::GlobalNamespace::GameNoteController::get_noteMovement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d19ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(), { "get_noteMovement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.get_noteVisualModifierType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteVisualModifierType (::GlobalNamespace::GameNoteController::*)()>(
    &::GlobalNamespace::GameNoteController::get_noteVisualModifierType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d19f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(), { "get_noteVisualModifierType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.get_gameplayType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteData_GameplayType (::GlobalNamespace::GameNoteController::*)()>(
    &::GlobalNamespace::GameNoteController::get_gameplayType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d19fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(), { "get_gameplayType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameNoteController::*)(
    ::GlobalNamespace::NoteData*, ::by_ref<::GlobalNamespace::NoteSpawnData>, ::GlobalNamespace::NoteVisualModifierType, float_t, float_t)>(&::GlobalNamespace::GameNoteController::Init)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x58d1a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(),
                                                             { "Init",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::NoteData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteSpawnData>>(),
                                                                 ::i2c::type_of<::GlobalNamespace::NoteVisualModifierType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameNoteController::*)()>(&::GlobalNamespace::GameNoteController::Awake)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x58d1bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(), { ::i2c::class_of<::GlobalNamespace::GameNoteController*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameNoteController::*)()>(&::GlobalNamespace::GameNoteController::OnDestroy)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x58d1d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(), { ::i2c::class_of<::GlobalNamespace::GameNoteController*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.NoteDidPassMissedMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameNoteController::*)()>(&::GlobalNamespace::GameNoteController::NoteDidPassMissedMarker)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58d1f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(), { ::i2c::class_of<::GlobalNamespace::GameNoteController*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.NoteDidStartDissolving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameNoteController::*)()>(&::GlobalNamespace::GameNoteController::NoteDidStartDissolving)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58d1fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(), { ::i2c::class_of<::GlobalNamespace::GameNoteController*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.HandleBigWasCutBySaber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameNoteController::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                                                                                                       ::UnityEngine::Vector3)>(&::GlobalNamespace::GameNoteController::HandleBigWasCutBySaber)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58d2088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(), { "HandleBigWasCutBySaber",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                        ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.HandleSmallWasCutBySaber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameNoteController::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                                                                                                       ::UnityEngine::Vector3)>(&::GlobalNamespace::GameNoteController::HandleSmallWasCutBySaber)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58d25e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(), { "HandleSmallWasCutBySaber",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                        ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.HandleCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameNoteController::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                                                                                                       ::UnityEngine::Vector3, bool)>(&::GlobalNamespace::GameNoteController::HandleCut)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x58d20a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(),
                                                             { "HandleCut",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.NoteDidStartJump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameNoteController::*)()>(&::GlobalNamespace::GameNoteController::NoteDidStartJump)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58d2600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(), { ::i2c::class_of<::GlobalNamespace::GameNoteController*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.HiddenStateDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameNoteController::*)(bool)>(&::GlobalNamespace::GameNoteController::HiddenStateDidChange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58d26b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(), { ::i2c::class_of<::GlobalNamespace::GameNoteController*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController.Pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameNoteController::*)(bool)>(&::GlobalNamespace::GameNoteController::Pause)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58d26d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(), { ::i2c::class_of<::GlobalNamespace::GameNoteController*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameNoteController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameNoteController::*)()>(&::GlobalNamespace::GameNoteController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d26e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>& GlobalNamespace::GameNoteController::__cordl_internal_get__bigCuttableBySaberList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bigCuttableBySaberList;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>> const& GlobalNamespace::GameNoteController::__cordl_internal_get__bigCuttableBySaberList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bigCuttableBySaberList;
}
constexpr void GlobalNamespace::GameNoteController::__cordl_internal_set__bigCuttableBySaberList(::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bigCuttableBySaberList = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>& GlobalNamespace::GameNoteController::__cordl_internal_get__smallCuttableBySaberList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smallCuttableBySaberList;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>> const& GlobalNamespace::GameNoteController::__cordl_internal_get__smallCuttableBySaberList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smallCuttableBySaberList;
}
constexpr void GlobalNamespace::GameNoteController::__cordl_internal_set__smallCuttableBySaberList(::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____smallCuttableBySaberList = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GameNoteController::__cordl_internal_get__wrapperGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrapperGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GameNoteController::__cordl_internal_get__wrapperGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrapperGO;
}
constexpr void GlobalNamespace::GameNoteController::__cordl_internal_set__wrapperGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wrapperGO = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::GameNoteController::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::GameNoteController::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::GameNoteController::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSyncController = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::GameNoteController>>*& GlobalNamespace::GameNoteController::__cordl_internal_get_cubeNoteControllerDidInitEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cubeNoteControllerDidInitEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::GameNoteController>>* const& GlobalNamespace::GameNoteController::__cordl_internal_get_cubeNoteControllerDidInitEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cubeNoteControllerDidInitEvent;
}
constexpr void GlobalNamespace::GameNoteController::__cordl_internal_set_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::GameNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cubeNoteControllerDidInitEvent = value;
}
constexpr ::GlobalNamespace::NoteVisualModifierType& GlobalNamespace::GameNoteController::__cordl_internal_get__noteVisualModifierType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteVisualModifierType;
}
constexpr ::GlobalNamespace::NoteVisualModifierType const& GlobalNamespace::GameNoteController::__cordl_internal_get__noteVisualModifierType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteVisualModifierType;
}
constexpr void GlobalNamespace::GameNoteController::__cordl_internal_set__noteVisualModifierType(::GlobalNamespace::NoteVisualModifierType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteVisualModifierType = value;
}
constexpr ::GlobalNamespace::NoteData_GameplayType& GlobalNamespace::GameNoteController::__cordl_internal_get__gameplayType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayType;
}
constexpr ::GlobalNamespace::NoteData_GameplayType const& GlobalNamespace::GameNoteController::__cordl_internal_get__gameplayType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayType;
}
constexpr void GlobalNamespace::GameNoteController::__cordl_internal_set__gameplayType(::GlobalNamespace::NoteData_GameplayType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayType = value;
}
constexpr float_t& GlobalNamespace::GameNoteController::__cordl_internal_get__cutAngleTolerance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutAngleTolerance;
}
constexpr float_t const& GlobalNamespace::GameNoteController::__cordl_internal_get__cutAngleTolerance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutAngleTolerance;
}
constexpr void GlobalNamespace::GameNoteController::__cordl_internal_set__cutAngleTolerance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cutAngleTolerance = value;
}
inline void GlobalNamespace::GameNoteController::add_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::GameNoteController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(),
                                                           { "add_cubeNoteControllerDidInitEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::GameNoteController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameNoteController::remove_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::GameNoteController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(),
                                              { "remove_cubeNoteControllerDidInitEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::GameNoteController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::NoteMovement> GlobalNamespace::GameNoteController::get_noteMovement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(), { "get_noteMovement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::NoteMovement>>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteVisualModifierType GlobalNamespace::GameNoteController::get_noteVisualModifierType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(), { "get_noteVisualModifierType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteVisualModifierType>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteData_GameplayType GlobalNamespace::GameNoteController::get_gameplayType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(), { "get_gameplayType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData_GameplayType>(this, ___internal_method);
}
inline void GlobalNamespace::GameNoteController::Init(::GlobalNamespace::NoteData* noteData, ::by_ref<::GlobalNamespace::NoteSpawnData> noteSpawnData,
                                                      ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType, float_t cutAngleTolerance, float_t uniformScale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(),
                                                           { "Init",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::NoteData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteSpawnData>>(),
                                                               ::i2c::type_of<::GlobalNamespace::NoteVisualModifierType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteData, noteSpawnData, noteVisualModifierType, cutAngleTolerance, uniformScale);
}
inline void GlobalNamespace::GameNoteController::Awake() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameNoteController*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameNoteController::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameNoteController*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameNoteController::NoteDidPassMissedMarker() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameNoteController*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameNoteController::NoteDidStartDissolving() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameNoteController*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameNoteController::HandleBigWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation,
                                                                        ::UnityEngine::Vector3 cutDirVec) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(), { "HandleBigWasCutBySaber",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                      ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saber, cutPoint, orientation, cutDirVec);
}
inline void GlobalNamespace::GameNoteController::HandleSmallWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation,
                                                                          ::UnityEngine::Vector3 cutDirVec) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(), { "HandleSmallWasCutBySaber",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                      ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saber, cutPoint, orientation, cutDirVec);
}
inline void GlobalNamespace::GameNoteController::HandleCut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec,
                                                           bool allowBadCut) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(),
                                                           { "HandleCut",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                               ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saber, cutPoint, orientation, cutDirVec, allowBadCut);
}
inline void GlobalNamespace::GameNoteController::NoteDidStartJump() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameNoteController*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameNoteController::HiddenStateDidChange(bool hide) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameNoteController*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hide);
}
inline void GlobalNamespace::GameNoteController::Pause(bool pause) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameNoteController*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pause);
}
inline void GlobalNamespace::GameNoteController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameNoteController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameNoteController* GlobalNamespace::GameNoteController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameNoteController*>());
}
/// @brief Convert operator to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::GameNoteController>>"
constexpr GlobalNamespace::GameNoteController::operator ::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::GameNoteController>>*() noexcept {
  return static_cast<::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::GameNoteController>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::GameNoteController>>"
constexpr ::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::GameNoteController>>*
GlobalNamespace::GameNoteController::i___GlobalNamespace__ICubeNoteControllerInitializable_1___UnityW___GlobalNamespace__GameNoteController__() noexcept {
  return static_cast<::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::GameNoteController>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteVisualModifierTypeProvider"
constexpr GlobalNamespace::GameNoteController::operator ::GlobalNamespace::INoteVisualModifierTypeProvider*() noexcept {
  return static_cast<::GlobalNamespace::INoteVisualModifierTypeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteVisualModifierTypeProvider"
constexpr ::GlobalNamespace::INoteVisualModifierTypeProvider* GlobalNamespace::GameNoteController::i___GlobalNamespace__INoteVisualModifierTypeProvider() noexcept {
  return static_cast<::GlobalNamespace::INoteVisualModifierTypeProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteMovementProvider"
constexpr GlobalNamespace::GameNoteController::operator ::GlobalNamespace::INoteMovementProvider*() noexcept {
  return static_cast<::GlobalNamespace::INoteMovementProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteMovementProvider"
constexpr ::GlobalNamespace::INoteMovementProvider* GlobalNamespace::GameNoteController::i___GlobalNamespace__INoteMovementProvider() noexcept {
  return static_cast<::GlobalNamespace::INoteMovementProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameNoteMirrorable"
constexpr GlobalNamespace::GameNoteController::operator ::GlobalNamespace::IGameNoteMirrorable*() noexcept {
  return static_cast<::GlobalNamespace::IGameNoteMirrorable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameNoteMirrorable"
constexpr ::GlobalNamespace::IGameNoteMirrorable* GlobalNamespace::GameNoteController::i___GlobalNamespace__IGameNoteMirrorable() noexcept {
  return static_cast<::GlobalNamespace::IGameNoteMirrorable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteMirrorable"
constexpr GlobalNamespace::GameNoteController::operator ::GlobalNamespace::INoteMirrorable*() noexcept {
  return static_cast<::GlobalNamespace::INoteMirrorable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteMirrorable"
constexpr ::GlobalNamespace::INoteMirrorable* GlobalNamespace::GameNoteController::i___GlobalNamespace__INoteMirrorable() noexcept {
  return static_cast<::GlobalNamespace::INoteMirrorable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameNoteController::GameNoteController() {}
