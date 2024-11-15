#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerGameNoteController.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerNoteController_impl.hpp"
#include "GlobalNamespace/zzzz__NoteData_impl.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__ICubeNoteControllerInitializable_1_def.hpp"
#include "GlobalNamespace/zzzz__INoteMovementProvider_def.hpp"
#include "GlobalNamespace/zzzz__INoteVisualModifierTypeProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteMovement_def.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool::*)()>(
    &::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3b55cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool* GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*>());
}
inline void GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool::__MultiplayerConnectedPlayerGameNoteController__Pool() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController.add_cubeNoteControllerDidInitEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::*)(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*)>(
        &::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::add_cubeNoteControllerDidInitEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b55b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>::get(), "add_cubeNoteControllerDidInitEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController.remove_cubeNoteControllerDidInitEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::*)(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*)>(
        &::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::remove_cubeNoteControllerDidInitEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b55be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>::get(), "remove_cubeNoteControllerDidInitEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController.get_noteMovement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::NoteMovement> (::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::get_noteMovement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b55c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>::get(), "get_noteMovement",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController.get_gameplayType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__NoteData__GameplayType (::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::get_gameplayType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b55ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>::get(), "get_gameplayType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController.get_noteVisualModifierType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteVisualModifierType (::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::get_noteVisualModifierType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b55ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>::get(),
                                                 "get_noteVisualModifierType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::*)(
    ::GlobalNamespace::NoteData*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, float_t, ::GlobalNamespace::NoteVisualModifierType, float_t)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::Init)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3b51c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteVisualModifierType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b55cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>"
constexpr GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::operator ::GlobalNamespace::ICubeNoteControllerInitializable_1<
    ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*() noexcept {
  return static_cast<::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>"
constexpr ::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* GlobalNamespace::
    MultiplayerConnectedPlayerGameNoteController::i___GlobalNamespace__ICubeNoteControllerInitializable_1___UnityW___GlobalNamespace__MultiplayerConnectedPlayerGameNoteController__() noexcept {
  return static_cast<::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteVisualModifierTypeProvider"
constexpr GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::operator ::GlobalNamespace::INoteVisualModifierTypeProvider*() noexcept {
  return static_cast<::GlobalNamespace::INoteVisualModifierTypeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteVisualModifierTypeProvider"
constexpr ::GlobalNamespace::INoteVisualModifierTypeProvider* GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::i___GlobalNamespace__INoteVisualModifierTypeProvider() noexcept {
  return static_cast<::GlobalNamespace::INoteVisualModifierTypeProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteMovementProvider"
constexpr GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::operator ::GlobalNamespace::INoteMovementProvider*() noexcept {
  return static_cast<::GlobalNamespace::INoteMovementProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteMovementProvider"
constexpr ::GlobalNamespace::INoteMovementProvider* GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::i___GlobalNamespace__INoteMovementProvider() noexcept {
  return static_cast<::GlobalNamespace::INoteMovementProvider*>(static_cast<void*>(this));
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*&
GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::__cordl_internal_get_cubeNoteControllerDidInitEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cubeNoteControllerDidInitEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*> const&
GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::__cordl_internal_get_cubeNoteControllerDidInitEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cubeNoteControllerDidInitEvent;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::__cordl_internal_set_cubeNoteControllerDidInitEvent(
    ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cubeNoteControllerDidInitEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NoteVisualModifierType& GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::__cordl_internal_get__noteVisualModifierType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteVisualModifierType;
}
constexpr ::GlobalNamespace::NoteVisualModifierType const& GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::__cordl_internal_get__noteVisualModifierType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteVisualModifierType;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::__cordl_internal_set__noteVisualModifierType(::GlobalNamespace::NoteVisualModifierType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteVisualModifierType = value;
}
constexpr ::GlobalNamespace::__NoteData__GameplayType& GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::__cordl_internal_get__gameplayType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayType;
}
constexpr ::GlobalNamespace::__NoteData__GameplayType const& GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::__cordl_internal_get__gameplayType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayType;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::__cordl_internal_set__gameplayType(::GlobalNamespace::__NoteData__GameplayType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayType = value;
}
inline void GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::add_cubeNoteControllerDidInitEvent(
    ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>::get(), "add_cubeNoteControllerDidInitEvent",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::remove_cubeNoteControllerDidInitEvent(
    ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>::get(),
                                  "remove_cubeNoteControllerDidInitEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::NoteMovement> GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::get_noteMovement() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>::get(), "get_noteMovement",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::NoteMovement>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__NoteData__GameplayType GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::get_gameplayType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>::get(), "get_gameplayType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__NoteData__GameplayType, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteVisualModifierType GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::get_noteVisualModifierType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>::get(),
                                               "get_noteVisualModifierType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteVisualModifierType, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::Init(::GlobalNamespace::NoteData* noteData, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos,
                                                                                ::UnityEngine::Vector3 jumpEndPos, float_t moveDuration, float_t jumpDuration, float_t jumpGravity,
                                                                                ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType, float_t uniformScale) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteVisualModifierType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteData, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity, noteVisualModifierType,
                                                          uniformScale);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>());
}
inline void GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::MultiplayerConnectedPlayerGameNoteController() {}
