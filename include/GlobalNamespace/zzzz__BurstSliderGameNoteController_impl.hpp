#pragma once
// IWYU pragma private; include "GlobalNamespace/BurstSliderGameNoteController.hpp"
#include "GlobalNamespace/zzzz__ICubeNoteControllerInitializable_1_impl.hpp"
#include "GlobalNamespace/zzzz__IGameNoteMirrorable_impl.hpp"
#include "GlobalNamespace/zzzz__INoteMirrorable_impl.hpp"
#include "GlobalNamespace/zzzz__INoteMovementProvider_impl.hpp"
#include "GlobalNamespace/zzzz__INoteVisualModifierTypeProvider_impl.hpp"
#include "GlobalNamespace/zzzz__NoteController_impl.hpp"
#include "GlobalNamespace/zzzz__NoteData_impl.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__BurstSliderGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BoxCuttableBySaber_def.hpp"
#include "GlobalNamespace/zzzz__BurstSliderGameNoteController_def.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController_Pool::*)()>(
    &::GlobalNamespace::BurstSliderGameNoteController_Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3ae3b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController_Pool*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BurstSliderGameNoteController_Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController_Pool*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BurstSliderGameNoteController_Pool* GlobalNamespace::BurstSliderGameNoteController_Pool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BurstSliderGameNoteController_Pool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstSliderGameNoteController_Pool::BurstSliderGameNoteController_Pool() {}
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.add_cubeNoteControllerDidInitEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*)>(&::GlobalNamespace::BurstSliderGameNoteController::add_cubeNoteControllerDidInitEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3ae2918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), "add_cubeNoteControllerDidInitEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.remove_cubeNoteControllerDidInitEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*)>(&::GlobalNamespace::BurstSliderGameNoteController::remove_cubeNoteControllerDidInitEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3ae29c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), "remove_cubeNoteControllerDidInitEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.get_noteMovement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::NoteMovement> (::GlobalNamespace::BurstSliderGameNoteController::*)()>(
    &::GlobalNamespace::BurstSliderGameNoteController::get_noteMovement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ae2a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(),
                                                                               "get_noteMovement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.get_noteVisualModifierType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteVisualModifierType (::GlobalNamespace::BurstSliderGameNoteController::*)()>(
    &::GlobalNamespace::BurstSliderGameNoteController::get_noteVisualModifierType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ae2a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(),
                                                                               "get_noteVisualModifierType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.get_gameplayType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteData_GameplayType (::GlobalNamespace::BurstSliderGameNoteController::*)()>(
    &::GlobalNamespace::BurstSliderGameNoteController::get_gameplayType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ae2a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(),
                                                                               "get_gameplayType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)(
    ::GlobalNamespace::NoteData*, ::ByRef<::GlobalNamespace::NoteSpawnData>, ::GlobalNamespace::NoteVisualModifierType, float_t)>(&::GlobalNamespace::BurstSliderGameNoteController::Init)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3ae2a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NoteSpawnData>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteVisualModifierType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)()>(
    &::GlobalNamespace::BurstSliderGameNoteController::Awake)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x3ae2f24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)()>(
    &::GlobalNamespace::BurstSliderGameNoteController::OnDestroy)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x3ae30c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.NoteDidPassMissedMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)()>(
    &::GlobalNamespace::BurstSliderGameNoteController::NoteDidPassMissedMarker)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3ae3298;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.NoteDidStartDissolving
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)()>(
    &::GlobalNamespace::BurstSliderGameNoteController::NoteDidStartDissolving)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3ae3354;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.ManualUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)()>(
    &::GlobalNamespace::BurstSliderGameNoteController::ManualUpdate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3ae340c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.HandleBigWasCutBySaber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)(
    ::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::BurstSliderGameNoteController::HandleBigWasCutBySaber)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3ae3448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), "HandleBigWasCutBySaber", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.HandleSmallWasCutBySaber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)(
    ::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::BurstSliderGameNoteController::HandleSmallWasCutBySaber)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3ae39f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), "HandleSmallWasCutBySaber", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.HandleCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)(
    ::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, bool)>(&::GlobalNamespace::BurstSliderGameNoteController::HandleCut)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x3ae3460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), "HandleCut", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.NoteDidStartJump
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)()>(
    &::GlobalNamespace::BurstSliderGameNoteController::NoteDidStartJump)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3ae3a08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.HiddenStateDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)(bool)>(
    &::GlobalNamespace::BurstSliderGameNoteController::HiddenStateDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3ae3ac8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.Pause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)(bool)>(
    &::GlobalNamespace::BurstSliderGameNoteController::Pause)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3ae3aec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController.SetBigCuttableColliderSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)()>(
    &::GlobalNamespace::BurstSliderGameNoteController::SetBigCuttableColliderSize)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x3ae2c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(),
                                                                               "SetBigCuttableColliderSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstSliderGameNoteController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BurstSliderGameNoteController::*)()>(
    &::GlobalNamespace::BurstSliderGameNoteController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3ae3afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*>&
GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__bigCuttableBySaberList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bigCuttableBySaberList;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> const&
GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__bigCuttableBySaberList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bigCuttableBySaberList;
}
constexpr void GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_set__bigCuttableBySaberList(
    ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bigCuttableBySaberList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*>&
GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__smallCuttableBySaberList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smallCuttableBySaberList;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> const&
GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_get__smallCuttableBySaberList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smallCuttableBySaberList;
}
constexpr void GlobalNamespace::BurstSliderGameNoteController::__cordl_internal_set__smallCuttableBySaberList(
    ::ArrayW<::UnityW<::GlobalNamespace::BoxCuttableBySaber>, ::Array<::UnityW<::GlobalNamespace::BoxCuttableBySaber>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____smallCuttableBySaberList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____wrapperGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____variableMovementDataProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cubeNoteControllerDidInitEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bigCuttableBySaber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), "add_cubeNoteControllerDidInitEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BurstSliderGameNoteController::remove_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), "remove_cubeNoteControllerDidInitEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::NoteMovement> GlobalNamespace::BurstSliderGameNoteController::get_noteMovement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(),
                                                                             "get_noteMovement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::NoteMovement>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteVisualModifierType GlobalNamespace::BurstSliderGameNoteController::get_noteVisualModifierType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(),
                                                                             "get_noteVisualModifierType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteVisualModifierType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteData_GameplayType GlobalNamespace::BurstSliderGameNoteController::get_gameplayType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(),
                                                                             "get_gameplayType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData_GameplayType, false>(this, ___internal_method);
}
inline void GlobalNamespace::BurstSliderGameNoteController::Init(::GlobalNamespace::NoteData* noteData, ::ByRef<::GlobalNamespace::NoteSpawnData> noteSpawnData,
                                                                 ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType, float_t uniformScale) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NoteSpawnData>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteVisualModifierType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteData, noteSpawnData, noteVisualModifierType, uniformScale);
}
inline void GlobalNamespace::BurstSliderGameNoteController::Awake() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BurstSliderGameNoteController::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BurstSliderGameNoteController::NoteDidPassMissedMarker() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BurstSliderGameNoteController::NoteDidStartDissolving() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BurstSliderGameNoteController::ManualUpdate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BurstSliderGameNoteController::HandleBigWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation,
                                                                                   ::UnityEngine::Vector3 cutDirVec) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), "HandleBigWasCutBySaber", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saber, cutPoint, orientation, cutDirVec);
}
inline void GlobalNamespace::BurstSliderGameNoteController::HandleSmallWasCutBySaber(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation,
                                                                                     ::UnityEngine::Vector3 cutDirVec) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), "HandleSmallWasCutBySaber", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saber, cutPoint, orientation, cutDirVec);
}
inline void GlobalNamespace::BurstSliderGameNoteController::HandleCut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation,
                                                                      ::UnityEngine::Vector3 cutDirVec, bool allowBadCut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), "HandleCut", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saber, cutPoint, orientation, cutDirVec, allowBadCut);
}
inline void GlobalNamespace::BurstSliderGameNoteController::NoteDidStartJump() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BurstSliderGameNoteController::HiddenStateDidChange(bool hide) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hide);
}
inline void GlobalNamespace::BurstSliderGameNoteController::Pause(bool pause) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pause);
}
inline void GlobalNamespace::BurstSliderGameNoteController::SetBigCuttableColliderSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(),
                                                                             "SetBigCuttableColliderSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BurstSliderGameNoteController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BurstSliderGameNoteController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BurstSliderGameNoteController* GlobalNamespace::BurstSliderGameNoteController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BurstSliderGameNoteController*>());
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
