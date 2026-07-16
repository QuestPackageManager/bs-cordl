#pragma once
// IWYU pragma private; include "Tayx/Graphy/Fps/G_FpsManager.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Tayx/Graphy/Fps/zzzz__G_FpsManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Tayx/Graphy/Fps/zzzz__G_FpsGraph_def.hpp"
#include "Tayx/Graphy/Fps/zzzz__G_FpsMonitor_def.hpp"
#include "Tayx/Graphy/Fps/zzzz__G_FpsText_def.hpp"
#include "Tayx/Graphy/UI/zzzz__IModifiableState_def.hpp"
#include "Tayx/Graphy/UI/zzzz__IMovable_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyManager_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsManager.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsManager::*)()>(&::Tayx::Graphy::Fps::G_FpsManager::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643a994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsManager*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsManager::*)()>(&::Tayx::Graphy::Fps::G_FpsManager::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x643a998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsManager.SetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsManager::*)(::Tayx::Graphy::GraphyManager_ModulePosition)>(&::Tayx::Graphy::Fps::G_FpsManager::SetPosition)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x6432a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsManager*>(), { "SetPosition", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModulePosition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsManager.SetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsManager::*)(::Tayx::Graphy::GraphyManager_ModuleState, bool)>(&::Tayx::Graphy::Fps::G_FpsManager::SetState)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x64333a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsManager*>(), { "SetState", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModuleState>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsManager.RestorePreviousState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsManager::*)()>(&::Tayx::Graphy::Fps::G_FpsManager::RestorePreviousState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6435848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsManager*>(), { "RestorePreviousState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsManager.UpdateParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsManager::*)()>(&::Tayx::Graphy::Fps::G_FpsManager::UpdateParameters)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x643358c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsManager*>(), { "UpdateParameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsManager.RefreshParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsManager::*)()>(&::Tayx::Graphy::Fps::G_FpsManager::RefreshParameters)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6437c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsManager*>(), { "RefreshParameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsManager.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsManager::*)()>(&::Tayx::Graphy::Fps::G_FpsManager::Init)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x6435aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsManager*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsManager.SetGraphActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsManager::*)(bool)>(&::Tayx::Graphy::Fps::G_FpsManager::SetGraphActive)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x643a99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsManager*>(), { "SetGraphActive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::Fps::G_FpsManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tayx::Graphy::Fps::G_FpsManager::*)()>(&::Tayx::Graphy::Fps::G_FpsManager::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x643ab90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_fpsGraphGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsGraphGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_fpsGraphGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsGraphGameObject;
}
constexpr void Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_set_m_fpsGraphGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fpsGraphGameObject = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_nonBasicTextGameObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_nonBasicTextGameObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_nonBasicTextGameObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_nonBasicTextGameObjects;
}
constexpr void Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_set_m_nonBasicTextGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_nonBasicTextGameObjects = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_backgroundImages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_backgroundImages;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* const& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_backgroundImages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_backgroundImages;
}
constexpr void Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_set_m_backgroundImages(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_backgroundImages = value;
}
constexpr ::UnityW<::Tayx::Graphy::GraphyManager>& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_graphyManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphyManager;
}
constexpr ::UnityW<::Tayx::Graphy::GraphyManager> const& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_graphyManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_graphyManager;
}
constexpr void Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_set_m_graphyManager(::UnityW<::Tayx::Graphy::GraphyManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_graphyManager = value;
}
constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsGraph>& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_fpsGraph() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsGraph;
}
constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsGraph> const& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_fpsGraph() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsGraph;
}
constexpr void Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_set_m_fpsGraph(::UnityW<::Tayx::Graphy::Fps::G_FpsGraph> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fpsGraph = value;
}
constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor>& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_fpsMonitor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsMonitor;
}
constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> const& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_fpsMonitor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsMonitor;
}
constexpr void Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_set_m_fpsMonitor(::UnityW<::Tayx::Graphy::Fps::G_FpsMonitor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fpsMonitor = value;
}
constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsText>& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_fpsText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsText;
}
constexpr ::UnityW<::Tayx::Graphy::Fps::G_FpsText> const& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_fpsText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fpsText;
}
constexpr void Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_set_m_fpsText(::UnityW<::Tayx::Graphy::Fps::G_FpsText> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fpsText = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_rectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_rectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_rectTransform;
}
constexpr void Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_set_m_rectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_rectTransform = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_childrenGameObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_childrenGameObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_childrenGameObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_childrenGameObjects;
}
constexpr void Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_set_m_childrenGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_childrenGameObjects = value;
}
constexpr ::Tayx::Graphy::GraphyManager_ModuleState& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_previousModuleState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_previousModuleState;
}
constexpr ::Tayx::Graphy::GraphyManager_ModuleState const& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_previousModuleState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_previousModuleState;
}
constexpr void Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_set_m_previousModuleState(::Tayx::Graphy::GraphyManager_ModuleState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_previousModuleState = value;
}
constexpr ::Tayx::Graphy::GraphyManager_ModuleState& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_currentModuleState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentModuleState;
}
constexpr ::Tayx::Graphy::GraphyManager_ModuleState const& Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_get_m_currentModuleState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentModuleState;
}
constexpr void Tayx::Graphy::Fps::G_FpsManager::__cordl_internal_set_m_currentModuleState(::Tayx::Graphy::GraphyManager_ModuleState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_currentModuleState = value;
}
inline void Tayx::Graphy::Fps::G_FpsManager::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsManager*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsManager::SetPosition(::Tayx::Graphy::GraphyManager_ModulePosition newModulePosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsManager*>(), { "SetPosition", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModulePosition>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newModulePosition);
}
inline void Tayx::Graphy::Fps::G_FpsManager::SetState(::Tayx::Graphy::GraphyManager_ModuleState state, bool silentUpdate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsManager*>(),
                                                                                         { "SetState", {}, { ::i2c::type_of<::Tayx::Graphy::GraphyManager_ModuleState>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, silentUpdate);
}
inline void Tayx::Graphy::Fps::G_FpsManager::RestorePreviousState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsManager*>(), { "RestorePreviousState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsManager::UpdateParameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsManager*>(), { "UpdateParameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsManager::RefreshParameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsManager*>(), { "RefreshParameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsManager::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsManager*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tayx::Graphy::Fps::G_FpsManager::SetGraphActive(bool active) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsManager*>(), { "SetGraphActive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void Tayx::Graphy::Fps::G_FpsManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tayx::Graphy::Fps::G_FpsManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Tayx::Graphy::Fps::G_FpsManager* Tayx::Graphy::Fps::G_FpsManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tayx::Graphy::Fps::G_FpsManager*>());
}
/// @brief Convert operator to "::Tayx::Graphy::UI::IMovable"
constexpr Tayx::Graphy::Fps::G_FpsManager::operator ::Tayx::Graphy::UI::IMovable*() noexcept {
  return static_cast<::Tayx::Graphy::UI::IMovable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Tayx::Graphy::UI::IMovable"
constexpr ::Tayx::Graphy::UI::IMovable* Tayx::Graphy::Fps::G_FpsManager::i___Tayx__Graphy__UI__IMovable() noexcept {
  return static_cast<::Tayx::Graphy::UI::IMovable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Tayx::Graphy::UI::IModifiableState"
constexpr Tayx::Graphy::Fps::G_FpsManager::operator ::Tayx::Graphy::UI::IModifiableState*() noexcept {
  return static_cast<::Tayx::Graphy::UI::IModifiableState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Tayx::Graphy::UI::IModifiableState"
constexpr ::Tayx::Graphy::UI::IModifiableState* Tayx::Graphy::Fps::G_FpsManager::i___Tayx__Graphy__UI__IModifiableState() noexcept {
  return static_cast<::Tayx::Graphy::UI::IModifiableState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Tayx::Graphy::Fps::G_FpsManager::G_FpsManager() {}
