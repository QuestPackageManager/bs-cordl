#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorNoteVisuals.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MeshRenderer_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ColorNoteVisuals_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerDidInitEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidPassJumpThreeQuartersEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidStartDissolvingEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorNoteVisuals.add_didInitEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorNoteVisuals::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::ColorNoteVisuals>, ::UnityW<::GlobalNamespace::NoteControllerBase>>*)>(&::GlobalNamespace::ColorNoteVisuals::add_didInitEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58d0f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoteVisuals*>(),
                            { "add_didInitEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::ColorNoteVisuals>, ::UnityW<::GlobalNamespace::NoteControllerBase>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorNoteVisuals.remove_didInitEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorNoteVisuals::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::ColorNoteVisuals>, ::UnityW<::GlobalNamespace::NoteControllerBase>>*)>(&::GlobalNamespace::ColorNoteVisuals::remove_didInitEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58d1024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoteVisuals*>(),
                            { "remove_didInitEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::ColorNoteVisuals>, ::UnityW<::GlobalNamespace::NoteControllerBase>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorNoteVisuals.set_showArrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorNoteVisuals::*)(bool)>(&::GlobalNamespace::ColorNoteVisuals::set_showArrow)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58d10e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoteVisuals*>(), { "set_showArrow", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorNoteVisuals.set_showCircle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorNoteVisuals::*)(bool)>(&::GlobalNamespace::ColorNoteVisuals::set_showCircle)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58d1148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoteVisuals*>(), { "set_showCircle", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorNoteVisuals.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorNoteVisuals::*)()>(&::GlobalNamespace::ColorNoteVisuals::Awake)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x58d11ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoteVisuals*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorNoteVisuals.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorNoteVisuals::*)()>(&::GlobalNamespace::ColorNoteVisuals::OnDestroy)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x58d1388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoteVisuals*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorNoteVisuals.HandleNoteControllerDidInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorNoteVisuals::*)(::GlobalNamespace::NoteControllerBase*)>(
    &::GlobalNamespace::ColorNoteVisuals::HandleNoteControllerDidInit)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x58d15b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoteVisuals*>(),
                                                                                           { "HandleNoteControllerDidInit", {}, { ::i2c::type_of<::GlobalNamespace::NoteControllerBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorNoteVisuals.HandleNoteControllerNoteDidPassJumpThreeQuarters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorNoteVisuals::*)(::GlobalNamespace::NoteControllerBase*)>(
    &::GlobalNamespace::ColorNoteVisuals::HandleNoteControllerNoteDidPassJumpThreeQuarters)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58d1730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoteVisuals*>(),
                                                             { "HandleNoteControllerNoteDidPassJumpThreeQuarters", {}, { ::i2c::type_of<::GlobalNamespace::NoteControllerBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorNoteVisuals.HandleNoteControllerNoteDidStartDissolving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorNoteVisuals::*)(::GlobalNamespace::NoteControllerBase*, float_t)>(
    &::GlobalNamespace::ColorNoteVisuals::HandleNoteControllerNoteDidStartDissolving)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58d1750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoteVisuals*>(),
                                                { "HandleNoteControllerNoteDidStartDissolving", {}, { ::i2c::type_of<::GlobalNamespace::NoteControllerBase*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorNoteVisuals._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorNoteVisuals::*)()>(&::GlobalNamespace::ColorNoteVisuals::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58d1770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoteVisuals*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ColorNoteVisuals::__cordl_internal_get__defaultColorAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultColorAlpha;
}
constexpr float_t const& GlobalNamespace::ColorNoteVisuals::__cordl_internal_get__defaultColorAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultColorAlpha;
}
constexpr void GlobalNamespace::ColorNoteVisuals::__cordl_internal_set__defaultColorAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultColorAlpha = value;
}
constexpr ::UnityW<::GlobalNamespace::NoteControllerBase>& GlobalNamespace::ColorNoteVisuals::__cordl_internal_get__noteController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteController;
}
constexpr ::UnityW<::GlobalNamespace::NoteControllerBase> const& GlobalNamespace::ColorNoteVisuals::__cordl_internal_get__noteController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteController;
}
constexpr void GlobalNamespace::ColorNoteVisuals::__cordl_internal_set__noteController(::UnityW<::GlobalNamespace::NoteControllerBase> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteController = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>& GlobalNamespace::ColorNoteVisuals::__cordl_internal_get__materialPropertyBlockControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockControllers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>> const& GlobalNamespace::ColorNoteVisuals::__cordl_internal_get__materialPropertyBlockControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockControllers;
}
constexpr void GlobalNamespace::ColorNoteVisuals::__cordl_internal_set__materialPropertyBlockControllers(::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockControllers = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GlobalNamespace::ColorNoteVisuals::__cordl_internal_get__arrowMeshRenderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrowMeshRenderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GlobalNamespace::ColorNoteVisuals::__cordl_internal_get__arrowMeshRenderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrowMeshRenderers;
}
constexpr void GlobalNamespace::ColorNoteVisuals::__cordl_internal_set__arrowMeshRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arrowMeshRenderers = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GlobalNamespace::ColorNoteVisuals::__cordl_internal_get__circleMeshRenderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____circleMeshRenderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GlobalNamespace::ColorNoteVisuals::__cordl_internal_get__circleMeshRenderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____circleMeshRenderers;
}
constexpr void GlobalNamespace::ColorNoteVisuals::__cordl_internal_set__circleMeshRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____circleMeshRenderers = value;
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::ColorNoteVisuals::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::ColorNoteVisuals::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::ColorNoteVisuals::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorManager = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::ColorNoteVisuals>, ::UnityW<::GlobalNamespace::NoteControllerBase>>*& GlobalNamespace::ColorNoteVisuals::__cordl_internal_get_didInitEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didInitEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::ColorNoteVisuals>, ::UnityW<::GlobalNamespace::NoteControllerBase>>* const&
GlobalNamespace::ColorNoteVisuals::__cordl_internal_get_didInitEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didInitEvent;
}
constexpr void
GlobalNamespace::ColorNoteVisuals::__cordl_internal_set_didInitEvent(::System::Action_2<::UnityW<::GlobalNamespace::ColorNoteVisuals>, ::UnityW<::GlobalNamespace::NoteControllerBase>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didInitEvent = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ColorNoteVisuals::__cordl_internal_get__noteColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ColorNoteVisuals::__cordl_internal_get__noteColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteColor;
}
constexpr void GlobalNamespace::ColorNoteVisuals::__cordl_internal_set__noteColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteColor = value;
}
inline void GlobalNamespace::ColorNoteVisuals::setStaticF__colorId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_colorId", ::GlobalNamespace::ColorNoteVisuals*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::ColorNoteVisuals::getStaticF__colorId() {
  return ::cordl_internals::getStaticField<int32_t, "_colorId", ::GlobalNamespace::ColorNoteVisuals*>();
}
inline void GlobalNamespace::ColorNoteVisuals::add_didInitEvent(::System::Action_2<::UnityW<::GlobalNamespace::ColorNoteVisuals>, ::UnityW<::GlobalNamespace::NoteControllerBase>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoteVisuals*>(),
                          { "add_didInitEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::ColorNoteVisuals>, ::UnityW<::GlobalNamespace::NoteControllerBase>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ColorNoteVisuals::remove_didInitEvent(::System::Action_2<::UnityW<::GlobalNamespace::ColorNoteVisuals>, ::UnityW<::GlobalNamespace::NoteControllerBase>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoteVisuals*>(),
                          { "remove_didInitEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::ColorNoteVisuals>, ::UnityW<::GlobalNamespace::NoteControllerBase>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ColorNoteVisuals::set_showArrow(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoteVisuals*>(), { "set_showArrow", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ColorNoteVisuals::set_showCircle(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoteVisuals*>(), { "set_showCircle", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ColorNoteVisuals::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoteVisuals*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorNoteVisuals::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoteVisuals*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorNoteVisuals::HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase* noteController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoteVisuals*>(), { "HandleNoteControllerDidInit", {}, { ::i2c::type_of<::GlobalNamespace::NoteControllerBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::ColorNoteVisuals::HandleNoteControllerNoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteControllerBase* noteController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoteVisuals*>(),
                                                           { "HandleNoteControllerNoteDidPassJumpThreeQuarters", {}, { ::i2c::type_of<::GlobalNamespace::NoteControllerBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::ColorNoteVisuals::HandleNoteControllerNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase* noteController, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoteVisuals*>(),
                                              { "HandleNoteControllerNoteDidStartDissolving", {}, { ::i2c::type_of<::GlobalNamespace::NoteControllerBase*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController, duration);
}
inline void GlobalNamespace::ColorNoteVisuals::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorNoteVisuals*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorNoteVisuals* GlobalNamespace::ColorNoteVisuals::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorNoteVisuals*>());
}
/// @brief Convert operator to "::GlobalNamespace::INoteControllerDidInitEvent"
constexpr GlobalNamespace::ColorNoteVisuals::operator ::GlobalNamespace::INoteControllerDidInitEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerDidInitEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteControllerDidInitEvent"
constexpr ::GlobalNamespace::INoteControllerDidInitEvent* GlobalNamespace::ColorNoteVisuals::i___GlobalNamespace__INoteControllerDidInitEvent() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerDidInitEvent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent"
constexpr GlobalNamespace::ColorNoteVisuals::operator ::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent"
constexpr ::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent* GlobalNamespace::ColorNoteVisuals::i___GlobalNamespace__INoteControllerNoteDidPassJumpThreeQuartersEvent() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent"
constexpr GlobalNamespace::ColorNoteVisuals::operator ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent"
constexpr ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent* GlobalNamespace::ColorNoteVisuals::i___GlobalNamespace__INoteControllerNoteDidStartDissolvingEvent() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorNoteVisuals::ColorNoteVisuals() {}
