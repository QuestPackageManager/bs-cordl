#pragma once
// IWYU pragma private; include "GlobalNamespace\MirroredGameNoteController.hpp"
#include "GlobalNamespace/zzzz__MirroredNoteController_1_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__MirroredGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__ICubeNoteControllerInitializable_1_def.hpp"
#include "GlobalNamespace/zzzz__IGameNoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__INoteMovementProvider_def.hpp"
#include "GlobalNamespace/zzzz__INoteVisualModifierTypeProvider_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteMovement_def.hpp"
#include "GlobalNamespace/zzzz__NoteVisualModifierType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MirroredGameNoteController_Pool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredGameNoteController_Pool::*)()>(&::GlobalNamespace::MirroredGameNoteController_Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58d2d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredGameNoteController_Pool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MirroredGameNoteController_Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredGameNoteController_Pool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MirroredGameNoteController_Pool* GlobalNamespace::MirroredGameNoteController_Pool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MirroredGameNoteController_Pool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MirroredGameNoteController_Pool::MirroredGameNoteController_Pool() {}
//  Writing Method size for method: ::GlobalNamespace::MirroredGameNoteController.add_cubeNoteControllerDidInitEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredGameNoteController::*)(::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*)>(
    &::GlobalNamespace::MirroredGameNoteController::add_cubeNoteControllerDidInitEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58d282c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredGameNoteController*>(),
                                                { "add_cubeNoteControllerDidInitEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredGameNoteController.remove_cubeNoteControllerDidInitEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredGameNoteController::*)(::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*)>(
    &::GlobalNamespace::MirroredGameNoteController::remove_cubeNoteControllerDidInitEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58d28ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredGameNoteController*>(),
                                                { "remove_cubeNoteControllerDidInitEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredGameNoteController.get_noteMovement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::NoteMovement> (::GlobalNamespace::MirroredGameNoteController::*)()>(
    &::GlobalNamespace::MirroredGameNoteController::get_noteMovement)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58d29ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredGameNoteController*>(), { "get_noteMovement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredGameNoteController.get_noteVisualModifierType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteVisualModifierType (::GlobalNamespace::MirroredGameNoteController::*)()>(
    &::GlobalNamespace::MirroredGameNoteController::get_noteVisualModifierType)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58d2a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredGameNoteController*>(), { "get_noteVisualModifierType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredGameNoteController.Mirror
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredGameNoteController::*)(::GlobalNamespace::IGameNoteMirrorable*)>(
    &::GlobalNamespace::MirroredGameNoteController::Mirror)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x58d2b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredGameNoteController*>(), { ::i2c::class_of<::GlobalNamespace::MirroredGameNoteController*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MirroredGameNoteController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MirroredGameNoteController::*)()>(&::GlobalNamespace::MirroredGameNoteController::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x58d2c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredGameNoteController*>(), { ".ctor", {}, {} })));
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
  this->____materialPropertyBlockController = value;
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
  this->____colorManager = value;
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
  this->___cubeNoteControllerDidInitEvent = value;
}
inline void GlobalNamespace::MirroredGameNoteController::setStaticF__colorId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_colorId", ::GlobalNamespace::MirroredGameNoteController*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MirroredGameNoteController::getStaticF__colorId() {
  return ::cordl_internals::getStaticField<int32_t, "_colorId", ::GlobalNamespace::MirroredGameNoteController*>();
}
inline void GlobalNamespace::MirroredGameNoteController::add_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredGameNoteController*>(),
                                              { "add_cubeNoteControllerDidInitEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MirroredGameNoteController::remove_cubeNoteControllerDidInitEvent(::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredGameNoteController*>(),
                                              { "remove_cubeNoteControllerDidInitEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::NoteMovement> GlobalNamespace::MirroredGameNoteController::get_noteMovement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredGameNoteController*>(), { "get_noteMovement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::NoteMovement>>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteVisualModifierType GlobalNamespace::MirroredGameNoteController::get_noteVisualModifierType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredGameNoteController*>(), { "get_noteVisualModifierType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteVisualModifierType>(this, ___internal_method);
}
inline void GlobalNamespace::MirroredGameNoteController::Mirror(::GlobalNamespace::IGameNoteMirrorable* noteController) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MirroredGameNoteController*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::MirroredGameNoteController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MirroredGameNoteController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MirroredGameNoteController* GlobalNamespace::MirroredGameNoteController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MirroredGameNoteController*>());
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
