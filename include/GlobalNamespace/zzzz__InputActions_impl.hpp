#pragma once
// IWYU pragma private; include "GlobalNamespace/InputActions.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__InputActions_def.hpp"
#include "GlobalNamespace/zzzz__UIKeyboardManager_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "Zenject/zzzz__SceneContext_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputActions.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputActions::*)()>(&::GlobalNamespace::InputActions::Update)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x58df824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputActions*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActions.ToggleLevelFreeze
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::InputActions::ToggleLevelFreeze)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58dfdb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputActions*>(), { "ToggleLevelFreeze", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActions.ToggleAutoplay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::InputActions::ToggleAutoplay)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x58dfc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputActions*>(), { "ToggleAutoplay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActions.ResolveGameplayCoreSceneContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Zenject::SceneContext> (*)()>(&::GlobalNamespace::InputActions::ResolveGameplayCoreSceneContext)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x58dfdb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputActions*>(), { "ResolveGameplayCoreSceneContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActions.HasInputFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::EventSystems::EventSystem*, ::GlobalNamespace::UIKeyboardManager*)>(&::GlobalNamespace::InputActions::HasInputFocus)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x58dfafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputActions*>(),
                                                { "HasInputFocus", {}, { ::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>(), ::i2c::type_of<::GlobalNamespace::UIKeyboardManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputActions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputActions::*)()>(&::GlobalNamespace::InputActions::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e015c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputActions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::UIKeyboardManager>& GlobalNamespace::InputActions::__cordl_internal_get__keyboardManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboardManager;
}
constexpr ::UnityW<::GlobalNamespace::UIKeyboardManager> const& GlobalNamespace::InputActions::__cordl_internal_get__keyboardManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboardManager;
}
constexpr void GlobalNamespace::InputActions::__cordl_internal_set__keyboardManager(::UnityW<::GlobalNamespace::UIKeyboardManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyboardManager = value;
}
inline void GlobalNamespace::InputActions::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputActions*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InputActions::ToggleLevelFreeze() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputActions*>(), { "ToggleLevelFreeze", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::InputActions::ToggleAutoplay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputActions*>(), { "ToggleAutoplay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::Zenject::SceneContext> GlobalNamespace::InputActions::ResolveGameplayCoreSceneContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputActions*>(), { "ResolveGameplayCoreSceneContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Zenject::SceneContext>>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::InputActions::HasInputFocus(::UnityEngine::EventSystems::EventSystem* eventSystem, ::GlobalNamespace::UIKeyboardManager* keyboardManager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputActions*>(),
                                              { "HasInputFocus", {}, { ::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>(), ::i2c::type_of<::GlobalNamespace::UIKeyboardManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, eventSystem, keyboardManager);
}
inline void GlobalNamespace::InputActions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputActions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::InputActions* GlobalNamespace::InputActions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InputActions*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputActions::InputActions() {}
