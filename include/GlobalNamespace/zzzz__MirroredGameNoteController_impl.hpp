#pragma once
// IWYU pragma private; include "GlobalNamespace/MirroredGameNoteController.hpp"
#include "GlobalNamespace/zzzz__ICubeNoteControllerInitializable_1_impl.hpp"
#include "GlobalNamespace/zzzz__INoteMovementProvider_impl.hpp"
#include "GlobalNamespace/zzzz__INoteVisualModifierTypeProvider_impl.hpp"
#include "GlobalNamespace/zzzz__MirroredNoteController_1_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__MirroredGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__IGameNoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteMovement_def.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MirroredGameNoteController_Pool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredGameNoteController_Pool::*)()>(
    &::GlobalNamespace::MirroredGameNoteController_Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3aec988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredGameNoteController_Pool*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MirroredGameNoteController_Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredGameNoteController_Pool*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MirroredGameNoteController_Pool* GlobalNamespace::MirroredGameNoteController_Pool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MirroredGameNoteController_Pool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirroredGameNoteController_Pool::MirroredGameNoteController_Pool() {}
//  Writing Method size for method: ::GlobalNamespace::MirroredGameNoteController.add_cubeNoteControllerDidInitEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredGameNoteController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*)>(&::GlobalNamespace::MirroredGameNoteController::add_cubeNoteControllerDidInitEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3aec4d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredGameNoteController*>::get(), "add_cubeNoteControllerDidInitEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredGameNoteController.remove_cubeNoteControllerDidInitEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredGameNoteController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*)>(&::GlobalNamespace::MirroredGameNoteController::remove_cubeNoteControllerDidInitEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3aec588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredGameNoteController*>::get(), "remove_cubeNoteControllerDidInitEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredGameNoteController.get_noteMovement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::NoteMovement> (::GlobalNamespace::MirroredGameNoteController::*)()>(
    &::GlobalNamespace::MirroredGameNoteController::get_noteMovement)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3aec638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredGameNoteController*>::get(),
                                                                               "get_noteMovement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredGameNoteController.get_noteVisualModifierType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteVisualModifierType (::GlobalNamespace::MirroredGameNoteController::*)()>(
    &::GlobalNamespace::MirroredGameNoteController::get_noteVisualModifierType)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3aec6e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredGameNoteController*>::get(),
                                                                               "get_noteVisualModifierType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredGameNoteController.Mirror
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredGameNoteController::*)(::GlobalNamespace::IGameNoteMirrorable*)>(
    &::GlobalNamespace::MirroredGameNoteController::Mirror)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3aec788;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredGameNoteController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredGameNoteController*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredGameNoteController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MirroredGameNoteController::*)()>(&::GlobalNamespace::MirroredGameNoteController::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3aec8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredGameNoteController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::MirroredGameNoteController::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::MirroredGameNoteController::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::MirroredGameNoteController::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlockController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::MirroredGameNoteController::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::MirroredGameNoteController::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::MirroredGameNoteController::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*& GlobalNamespace::MirroredGameNoteController::__cordl_internal_get_cubeNoteControllerDidInitEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cubeNoteControllerDidInitEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* const& GlobalNamespace::MirroredGameNoteController::__cordl_internal_get_cubeNoteControllerDidInitEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cubeNoteControllerDidInitEvent;
}
constexpr void GlobalNamespace::MirroredGameNoteController::__cordl_internal_set_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cubeNoteControllerDidInitEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MirroredGameNoteController::setStaticF__colorId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_colorId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredGameNoteController*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MirroredGameNoteController::getStaticF__colorId() {
  return ::cordl_internals::getStaticField<int32_t, "_colorId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredGameNoteController*>::get>();
}
inline void GlobalNamespace::MirroredGameNoteController::add_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredGameNoteController*>::get(), "add_cubeNoteControllerDidInitEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MirroredGameNoteController::remove_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredGameNoteController*>::get(), "remove_cubeNoteControllerDidInitEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::NoteMovement> GlobalNamespace::MirroredGameNoteController::get_noteMovement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredGameNoteController*>::get(),
                                                                             "get_noteMovement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::NoteMovement>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteVisualModifierType GlobalNamespace::MirroredGameNoteController::get_noteVisualModifierType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredGameNoteController*>::get(),
                                                                             "get_noteVisualModifierType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteVisualModifierType, false>(this, ___internal_method);
}
inline void GlobalNamespace::MirroredGameNoteController::Mirror(::GlobalNamespace::IGameNoteMirrorable* noteController) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredGameNoteController*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::MirroredGameNoteController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredGameNoteController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MirroredGameNoteController* GlobalNamespace::MirroredGameNoteController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MirroredGameNoteController*>());
}
/// @brief Convert operator to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>"
constexpr GlobalNamespace::MirroredGameNoteController::operator ::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*() noexcept {
  return static_cast<::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>"
constexpr ::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*
GlobalNamespace::MirroredGameNoteController::i___GlobalNamespace__ICubeNoteControllerInitializable_1___UnityW___GlobalNamespace__MirroredGameNoteController__() noexcept {
  return static_cast<::GlobalNamespace::ICubeNoteControllerInitializable_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteVisualModifierTypeProvider"
constexpr GlobalNamespace::MirroredGameNoteController::operator ::GlobalNamespace::INoteVisualModifierTypeProvider*() noexcept {
  return static_cast<::GlobalNamespace::INoteVisualModifierTypeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteVisualModifierTypeProvider"
constexpr ::GlobalNamespace::INoteVisualModifierTypeProvider* GlobalNamespace::MirroredGameNoteController::i___GlobalNamespace__INoteVisualModifierTypeProvider() noexcept {
  return static_cast<::GlobalNamespace::INoteVisualModifierTypeProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteMovementProvider"
constexpr GlobalNamespace::MirroredGameNoteController::operator ::GlobalNamespace::INoteMovementProvider*() noexcept {
  return static_cast<::GlobalNamespace::INoteMovementProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteMovementProvider"
constexpr ::GlobalNamespace::INoteMovementProvider* GlobalNamespace::MirroredGameNoteController::i___GlobalNamespace__INoteMovementProvider() noexcept {
  return static_cast<::GlobalNamespace::INoteMovementProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirroredGameNoteController::MirroredGameNoteController() {}
