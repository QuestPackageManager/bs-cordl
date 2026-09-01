#pragma once
// IWYU pragma private; include "GlobalNamespace\BurstSliderGameNoteController.hpp"
#include "GlobalNamespace/zzzz__BoxCuttableBySaber_impl.hpp"
#include "GlobalNamespace/zzzz__NoteController_impl.hpp"
#include "GlobalNamespace/zzzz__NoteData_impl.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__BurstSliderGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BoxCuttableBySaber_def.hpp"
#include "GlobalNamespace/zzzz__BurstSliderGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__ICubeNoteControllerInitializable_1_def.hpp"
#include "GlobalNamespace/zzzz__IGameNoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__INoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__INoteMovementProvider_def.hpp"
#include "GlobalNamespace/zzzz__INoteVisualModifierTypeProvider_def.hpp"
#include "GlobalNamespace/zzzz__IVariableMovementDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteMovement_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController_Pool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController_Pool::*)()>(&::GlobalNamespace::BurstSliderGameNoteController_Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58d0ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController_Pool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BurstSliderGameNoteController_Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController_Pool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BurstSliderGameNoteController_Pool* GlobalNamespace::BurstSliderGameNoteController_Pool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BurstSliderGameNoteController_Pool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstSliderGameNoteController_Pool::BurstSliderGameNoteController_Pool() {}
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.add_cubeNoteControllerDidInitEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)(::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*)>(
    &::GlobalNamespace::BurstSliderGameNoteController::add_cubeNoteControllerDidInitEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58cfce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(),
                                                { "add_cubeNoteControllerDidInitEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.remove_cubeNoteControllerDidInitEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)(::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*)>(
    &::GlobalNamespace::BurstSliderGameNoteController::remove_cubeNoteControllerDidInitEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58cfda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(),
                                         { "remove_cubeNoteControllerDidInitEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.get_noteMovement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::NoteMovement> (::GlobalNamespace::BurstSliderGameNoteController::*)()>(
    &::GlobalNamespace::BurstSliderGameNoteController::get_noteMovement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58cfe64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), { "get_noteMovement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.get_noteVisualModifierType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteVisualModifierType (::GlobalNamespace::BurstSliderGameNoteController::*)()>(
    &::GlobalNamespace::BurstSliderGameNoteController::get_noteVisualModifierType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58cfe6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), { "get_noteVisualModifierType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.get_gameplayType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteData_GameplayType (::GlobalNamespace::BurstSliderGameNoteController::*)()>(
    &::GlobalNamespace::BurstSliderGameNoteController::get_gameplayType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58cfe74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), { "get_gameplayType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)(
    ::GlobalNamespace::NoteData*, ::by_ref<::GlobalNamespace::NoteSpawnData>, ::GlobalNamespace::NoteVisualModifierType, float_t)>(&::GlobalNamespace::BurstSliderGameNoteController::Init)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x58cfe7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(),
                                                             { "Init",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::NoteData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteSpawnData>>(),
                                                                 ::i2c::type_of<::GlobalNamespace::NoteVisualModifierType>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)()>(&::GlobalNamespace::BurstSliderGameNoteController::Awake)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x58d030c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), { ::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)()>(&::GlobalNamespace::BurstSliderGameNoteController::OnDestroy)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x58d04bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), { ::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.NoteDidPassMissedMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)()>(&::GlobalNamespace::BurstSliderGameNoteController::NoteDidPassMissedMarker)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58d0698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), { ::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.NoteDidStartDissolving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)()>(&::GlobalNamespace::BurstSliderGameNoteController::NoteDidStartDissolving)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58d0748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), { ::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.ManualUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)()>(&::GlobalNamespace::BurstSliderGameNoteController::ManualUpdate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58d07f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), { ::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.HandleBigWasCutBySaber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)(
    ::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::BurstSliderGameNoteController::HandleBigWasCutBySaber)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58d082c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(),
                                                                                           { "HandleBigWasCutBySaber",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                               ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.HandleSmallWasCutBySaber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)(
    ::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::BurstSliderGameNoteController::HandleSmallWasCutBySaber)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58d0da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(),
                                                                                           { "HandleSmallWasCutBySaber",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                               ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.HandleCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)(
    ::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, bool)>(&::GlobalNamespace::BurstSliderGameNoteController::HandleCut)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x58d0844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(),
                                                             { "HandleCut",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.NoteDidStartJump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)()>(&::GlobalNamespace::BurstSliderGameNoteController::NoteDidStartJump)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58d0dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), { ::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.HiddenStateDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)(bool)>(&::GlobalNamespace::BurstSliderGameNoteController::HiddenStateDidChange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58d0e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), { ::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.Pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)(bool)>(&::GlobalNamespace::BurstSliderGameNoteController::Pause)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58d0e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), { ::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.SetBigCuttableColliderSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)()>(&::GlobalNamespace::BurstSliderGameNoteController::SetBigCuttableColliderSize)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x58d0008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), { "SetBigCuttableColliderSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)()>(&::GlobalNamespace::BurstSliderGameNoteController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d0ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__bigCuttableBySaberList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bigCuttableBySaberList;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>> const& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__bigCuttableBySaberList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bigCuttableBySaberList;
}
constexpr void GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_set__bigCuttableBySaberList(::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bigCuttableBySaberList = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__smallCuttableBySaberList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smallCuttableBySaberList;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>> const& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__smallCuttableBySaberList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smallCuttableBySaberList;
}
constexpr void GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_set__smallCuttableBySaberList(::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____smallCuttableBySaberList = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__wrapperGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrapperGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__wrapperGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrapperGO;
}
constexpr void GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_set__wrapperGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wrapperGO = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSyncController = value;
}
constexpr ::GlobalNamespace::IVariableMovementDataProvider*& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__variableMovementDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr ::GlobalNamespace::IVariableMovementDataProvider* const& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__variableMovementDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr void GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::IVariableMovementDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____variableMovementDataProvider = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get_cubeNoteControllerDidInitEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cubeNoteControllerDidInitEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>* const&
GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get_cubeNoteControllerDidInitEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cubeNoteControllerDidInitEvent;
}
constexpr void
GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_set_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cubeNoteControllerDidInitEvent = value;
}
constexpr ::GlobalNamespace::NoteVisualModifierType& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__noteVisualModifierType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteVisualModifierType;
}
constexpr ::GlobalNamespace::NoteVisualModifierType const& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__noteVisualModifierType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteVisualModifierType;
}
constexpr void GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_set__noteVisualModifierType(::GlobalNamespace::NoteVisualModifierType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteVisualModifierType = value;
}
constexpr ::GlobalNamespace::NoteData_GameplayType& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__gameplayType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayType;
}
constexpr ::GlobalNamespace::NoteData_GameplayType const& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__gameplayType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayType;
}
constexpr void GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_set__gameplayType(::GlobalNamespace::NoteData_GameplayType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayType = value;
}
constexpr ::UnityW<::GlobalNamespace::BoxCuttableBySaber>& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__bigCuttableBySaber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bigCuttableBySaber;
}
constexpr ::UnityW<::GlobalNamespace::BoxCuttableBySaber> const& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__bigCuttableBySaber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bigCuttableBySaber;
}
constexpr void GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_set__bigCuttableBySaber(::UnityW<::GlobalNamespace::BoxCuttableBySaber> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bigCuttableBySaber = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__originalColliderSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalColliderSize;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__originalColliderSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalColliderSize;
}
constexpr void GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_set__originalColliderSize(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____originalColliderSize = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__originalColliderCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalColliderCenter;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__originalColliderCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalColliderCenter;
}
constexpr void GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_set__originalColliderCenter(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____originalColliderCenter = value;
}
constexpr float_t& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__moveEndOffsetZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveEndOffsetZ;
}
constexpr float_t const& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__moveEndOffsetZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveEndOffsetZ;
}
constexpr void GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_set__moveEndOffsetZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveEndOffsetZ = value;
}
constexpr float_t& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__jumpEndOffsetZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpEndOffsetZ;
}
constexpr float_t const& GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__jumpEndOffsetZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpEndOffsetZ;
}
constexpr void GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_set__jumpEndOffsetZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpEndOffsetZ = value;
}
inline void GlobalNamespace::BurstSliderGameNoteController::add_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(),
                                              { "add_cubeNoteControllerDidInitEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BurstSliderGameNoteController::remove_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(),
                                              { "remove_cubeNoteControllerDidInitEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::NoteMovement> GlobalNamespace::BurstSliderGameNoteController::get_noteMovement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), { "get_noteMovement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::NoteMovement>>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteVisualModifierType GlobalNamespace::BurstSliderGameNoteController::get_noteVisualModifierType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), { "get_noteVisualModifierType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteVisualModifierType>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteData_GameplayType GlobalNamespace::BurstSliderGameNoteController::get_gameplayType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), { "get_gameplayType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData_GameplayType>(this, ___internal_method);
}
inline void GlobalNamespace::BurstSliderGameNoteController::Init(::GlobalNamespace::NoteData* noteData, ::by_ref<::GlobalNamespace::NoteSpawnData> noteSpawnData,
                                                                 ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType, float_t uniformScale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(),
                                                           { "Init",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::NoteData*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteSpawnData>>(),
                                                               ::i2c::type_of<::GlobalNamespace::NoteVisualModifierType>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteData, noteSpawnData, noteVisualModifierType, uniformScale);
}
inline void GlobalNamespace::BurstSliderGameNoteController::Awake() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BurstSliderGameNoteController::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BurstSliderGameNoteController::NoteDidPassMissedMarker() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BurstSliderGameNoteController::NoteDidStartDissolving() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BurstSliderGameNoteController::ManualUpdate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BurstSliderGameNoteController::HandleBigWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation,
                                                                                   ::UnityEngine::Vector3 cutDirVec) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(),
                                                                                         { "HandleBigWasCutBySaber",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                             ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saber, cutPoint, orientation, cutDirVec);
}
inline void GlobalNamespace::BurstSliderGameNoteController::HandleSmallWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation,
                                                                                     ::UnityEngine::Vector3 cutDirVec) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(),
                                                                                         { "HandleSmallWasCutBySaber",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                             ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saber, cutPoint, orientation, cutDirVec);
}
inline void GlobalNamespace::BurstSliderGameNoteController::HandleCut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation,
                                                                      ::UnityEngine::Vector3 cutDirVec, bool allowBadCut) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(),
                                                           { "HandleCut",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(),
                                                               ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saber, cutPoint, orientation, cutDirVec, allowBadCut);
}
inline void GlobalNamespace::BurstSliderGameNoteController::NoteDidStartJump() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BurstSliderGameNoteController::HiddenStateDidChange(bool hide) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hide);
}
inline void GlobalNamespace::BurstSliderGameNoteController::Pause(bool pause) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pause);
}
inline void GlobalNamespace::BurstSliderGameNoteController::SetBigCuttableColliderSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), { "SetBigCuttableColliderSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BurstSliderGameNoteController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstSliderGameNoteController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BurstSliderGameNoteController* GlobalNamespace::BurstSliderGameNoteController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BurstSliderGameNoteController*>());
}
/// @brief Convert operator to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>"
constexpr GlobalNamespace::BurstSliderGameNoteController::operator ::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*() noexcept {
  return static_cast<::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>"
constexpr ::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*
GlobalNamespace::BurstSliderGameNoteController::i___GlobalNamespace__ICubeNoteControllerInitializable_1___UnityW___GlobalNamespace__BurstSliderGameNoteController__() noexcept {
  return static_cast<::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteVisualModifierTypeProvider"
constexpr GlobalNamespace::BurstSliderGameNoteController::operator ::GlobalNamespace::INoteVisualModifierTypeProvider*() noexcept {
  return static_cast<::GlobalNamespace::INoteVisualModifierTypeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteVisualModifierTypeProvider"
constexpr ::GlobalNamespace::INoteVisualModifierTypeProvider* GlobalNamespace::BurstSliderGameNoteController::i___GlobalNamespace__INoteVisualModifierTypeProvider() noexcept {
  return static_cast<::GlobalNamespace::INoteVisualModifierTypeProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteMovementProvider"
constexpr GlobalNamespace::BurstSliderGameNoteController::operator ::GlobalNamespace::INoteMovementProvider*() noexcept {
  return static_cast<::GlobalNamespace::INoteMovementProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteMovementProvider"
constexpr ::GlobalNamespace::INoteMovementProvider* GlobalNamespace::BurstSliderGameNoteController::i___GlobalNamespace__INoteMovementProvider() noexcept {
  return static_cast<::GlobalNamespace::INoteMovementProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameNoteMirrorable"
constexpr GlobalNamespace::BurstSliderGameNoteController::operator ::GlobalNamespace::IGameNoteMirrorable*() noexcept {
  return static_cast<::GlobalNamespace::IGameNoteMirrorable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameNoteMirrorable"
constexpr ::GlobalNamespace::IGameNoteMirrorable* GlobalNamespace::BurstSliderGameNoteController::i___GlobalNamespace__IGameNoteMirrorable() noexcept {
  return static_cast<::GlobalNamespace::IGameNoteMirrorable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteMirrorable"
constexpr GlobalNamespace::BurstSliderGameNoteController::operator ::GlobalNamespace::INoteMirrorable*() noexcept {
  return static_cast<::GlobalNamespace::INoteMirrorable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteMirrorable"
constexpr ::GlobalNamespace::INoteMirrorable* GlobalNamespace::BurstSliderGameNoteController::i___GlobalNamespace__INoteMirrorable() noexcept {
  return static_cast<::GlobalNamespace::INoteMirrorable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstSliderGameNoteController::BurstSliderGameNoteController() {}
