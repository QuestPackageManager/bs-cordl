#pragma once
// IWYU pragma private; include "Tayx/Graphy/Audio/G_AudioManager.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Tayx/Graphy/Audio/zzzz__G_AudioManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Tayx/Graphy/Audio/zzzz__G_AudioGraph_def.hpp"
#include "Tayx/Graphy/Audio/zzzz__G_AudioMonitor_def.hpp"
#include "Tayx/Graphy/Audio/zzzz__G_AudioText_def.hpp"
#include "Tayx/Graphy/UI/zzzz__IModifiableState_def.hpp"
#include "Tayx/Graphy/UI/zzzz__IMovable_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioManager.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Audio::G_AudioManager::*)()>(&::Tayx::Graphy::Audio::G_AudioManager::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643c114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioManager*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Audio::G_AudioManager::*)()>(&::Tayx::Graphy::Audio::G_AudioManager::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643c118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioManager.SetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Audio::G_AudioManager::*)(::Tayx::Graphy::GraphyManager_ModulePosition)>(
    &::Tayx::Graphy::Audio::G_AudioManager::SetPosition)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x6433054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioManager*>(), { "SetPosition", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModulePosition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioManager.SetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Audio::G_AudioManager::*)(::Tayx::Graphy::GraphyManager_ModuleState, bool)>(
    &::Tayx::Graphy::Audio::G_AudioManager::SetState)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6433c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioManager*>(), { "SetState", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModuleState>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioManager.RestorePreviousState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Audio::G_AudioManager::*)()>(&::Tayx::Graphy::Audio::G_AudioManager::RestorePreviousState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6435860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioManager*>(), { "RestorePreviousState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioManager.UpdateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Audio::G_AudioManager::*)()>(&::Tayx::Graphy::Audio::G_AudioManager::UpdateParameters)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6433e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioManager*>(), { "UpdateParameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioManager.RefreshParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Audio::G_AudioManager::*)()>(&::Tayx::Graphy::Audio::G_AudioManager::RefreshParameters)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6437f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioManager*>(), { "RefreshParameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioManager.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Audio::G_AudioManager::*)()>(&::Tayx::Graphy::Audio::G_AudioManager::Init)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x64363fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioManager*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioManager.SetGraphActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Audio::G_AudioManager::*)(bool)>(&::Tayx::Graphy::Audio::G_AudioManager::SetGraphActive)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x643c11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioManager*>(), { "SetGraphActive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Audio::G_AudioManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Audio::G_AudioManager::*)()>(&::Tayx::Graphy::Audio::G_AudioManager::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x643c374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_audioGraphGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioGraphGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_audioGraphGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioGraphGameObject;
}
constexpr void Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_set_m_audioGraphGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_audioGraphGameObject = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_audioDbText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioDbText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_audioDbText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioDbText;
}
constexpr void Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_set_m_audioDbText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_audioDbText = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_backgroundImages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_backgroundImages;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* const& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_backgroundImages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_backgroundImages;
}
constexpr void Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_set_m_backgroundImages(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_backgroundImages = value;
}
constexpr ::UnityW<::Tayx::Graphy::GraphyManager>& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_graphyManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphyManager;
}
constexpr ::UnityW<::Tayx::Graphy::GraphyManager> const& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_graphyManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphyManager;
}
constexpr void Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_set_m_graphyManager(::UnityW<::Tayx::Graphy::GraphyManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_graphyManager = value;
}
constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioGraph>& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_audioGraph() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioGraph;
}
constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioGraph> const& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_audioGraph() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioGraph;
}
constexpr void Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_set_m_audioGraph(::UnityW<::Tayx::Graphy::Audio::G_AudioGraph> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_audioGraph = value;
}
constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor>& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_audioMonitor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioMonitor;
}
constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> const& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_audioMonitor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioMonitor;
}
constexpr void Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_set_m_audioMonitor(::UnityW<::Tayx::Graphy::Audio::G_AudioMonitor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_audioMonitor = value;
}
constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioText>& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_audioText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioText;
}
constexpr ::UnityW<::Tayx::Graphy::Audio::G_AudioText> const& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_audioText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_audioText;
}
constexpr void Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_set_m_audioText(::UnityW<::Tayx::Graphy::Audio::G_AudioText> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_audioText = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_rectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_rectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_rectTransform;
}
constexpr void Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_set_m_rectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_rectTransform = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_childrenGameObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_childrenGameObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_childrenGameObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_childrenGameObjects;
}
constexpr void Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_set_m_childrenGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_childrenGameObjects = value;
}
constexpr ::Tayx::Graphy::GraphyManager_ModuleState& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_previousModuleState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_previousModuleState;
}
constexpr ::Tayx::Graphy::GraphyManager_ModuleState const& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_previousModuleState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_previousModuleState;
}
constexpr void Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_set_m_previousModuleState(::Tayx::Graphy::GraphyManager_ModuleState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_previousModuleState = value;
}
constexpr ::Tayx::Graphy::GraphyManager_ModuleState& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_currentModuleState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentModuleState;
}
constexpr ::Tayx::Graphy::GraphyManager_ModuleState const& Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_get_m_currentModuleState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentModuleState;
}
constexpr void Tayx::Graphy::Audio::G_AudioManager::__cordl_internal_set_m_currentModuleState(::Tayx::Graphy::GraphyManager_ModuleState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_currentModuleState = value;
}
inline void Tayx::Graphy::Audio::G_AudioManager::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioManager*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioManager::SetPosition(::Tayx::Graphy::GraphyManager_ModulePosition newModulePosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioManager*>(), { "SetPosition", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModulePosition>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newModulePosition);
}
inline void Tayx::Graphy::Audio::G_AudioManager::SetState(::Tayx::Graphy::GraphyManager_ModuleState state, bool silentUpdate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioManager*>(),
                                                                                         { "SetState", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModuleState>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, silentUpdate);
}
inline void Tayx::Graphy::Audio::G_AudioManager::RestorePreviousState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioManager*>(), { "RestorePreviousState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioManager::UpdateParameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioManager*>(), { "UpdateParameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioManager::RefreshParameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioManager*>(), { "RefreshParameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioManager::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioManager*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Audio::G_AudioManager::SetGraphActive(bool active) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioManager*>(), { "SetGraphActive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void Tayx::Graphy::Audio::G_AudioManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Audio::G_AudioManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Tayx::Graphy::Audio::G_AudioManager* Tayx::Graphy::Audio::G_AudioManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tayx::Graphy::Audio::G_AudioManager*>());
}
/// @brief Convert operator to "::Tayx::Graphy::UI::IMovable"
constexpr Tayx::Graphy::Audio::G_AudioManager::operator ::Tayx::Graphy::UI::IMovable*() noexcept {
  return static_cast<::Tayx::Graphy::UI::IMovable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Tayx::Graphy::UI::IMovable"
constexpr ::Tayx::Graphy::UI::IMovable* Tayx::Graphy::Audio::G_AudioManager::i___Tayx__Graphy__UI__IMovable() noexcept {
  return static_cast<::Tayx::Graphy::UI::IMovable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Tayx::Graphy::UI::IModifiableState"
constexpr Tayx::Graphy::Audio::G_AudioManager::operator ::Tayx::Graphy::UI::IModifiableState*() noexcept {
  return static_cast<::Tayx::Graphy::UI::IModifiableState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Tayx::Graphy::UI::IModifiableState"
constexpr ::Tayx::Graphy::UI::IModifiableState* Tayx::Graphy::Audio::G_AudioManager::i___Tayx__Graphy__UI__IModifiableState() noexcept {
  return static_cast<::Tayx::Graphy::UI::IModifiableState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::Audio::G_AudioManager::G_AudioManager() {}
