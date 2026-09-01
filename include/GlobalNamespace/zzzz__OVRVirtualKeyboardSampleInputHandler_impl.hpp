#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRVirtualKeyboardSampleInputHandler.hpp"
#include "GlobalNamespace/zzzz__OVRInput_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRVirtualKeyboardSampleInputHandler_def.hpp"
#include "GlobalNamespace/zzzz__OVRRaycaster_def.hpp"
#include "GlobalNamespace/zzzz__OVRVirtualKeyboard_def.hpp"
#include "UnityEngine/EventSystems/zzzz__OVRInputModule_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler.ApplyDeadzone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::ApplyDeadzone)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5eef254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(), { "ApplyDeadzone", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler.get_AnalogStickX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::*)()>(
    &::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::get_AnalogStickX)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5eeea74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(), { "get_AnalogStickX", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler.get_AnalogStickY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::*)()>(
    &::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::get_AnalogStickY)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5eee9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(), { "get_AnalogStickY", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler.get_InputRayPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::*)()>(
    &::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::get_InputRayPosition)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5eee400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(), { "get_InputRayPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler.get_InputRayRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::*)()>(
    &::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::get_InputRayRotation)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5eeeb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(), { "get_InputRayRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::Start)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5eef29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5eef36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler.UpdateLineRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::*)()>(
    &::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::UpdateLineRenderer)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5eef638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(), { "UpdateLineRenderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler.UpdateLineRendererFromSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::*)(::GlobalNamespace::OVRVirtualKeyboard_InputSource)>(
    &::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::UpdateLineRendererFromSource)> {
  constexpr static std::size_t size = 0x754;
  constexpr static std::size_t addrs = 0x5eef730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(),
                                                             { "UpdateLineRendererFromSource", {}, { ::i2c::type_of<::GlobalNamespace::OVRVirtualKeyboard_InputSource>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler.UpdateInteractionAnchor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::*)()>(
    &::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::UpdateInteractionAnchor)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5eef384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(), { "UpdateInteractionAnchor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::*)()>(&::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5eefe84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard>& GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_get_OVRVirtualKeyboard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OVRVirtualKeyboard;
}
constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> const& GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_get_OVRVirtualKeyboard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OVRVirtualKeyboard;
}
constexpr void GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_set_OVRVirtualKeyboard(::UnityW<::GlobalNamespace::OVRVirtualKeyboard> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___OVRVirtualKeyboard = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRRaycaster>& GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_get_raycaster() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycaster;
}
constexpr ::UnityW<::GlobalNamespace::OVRRaycaster> const& GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_get_raycaster() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raycaster;
}
constexpr void GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_set_raycaster(::UnityW<::GlobalNamespace::OVRRaycaster> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___raycaster = value;
}
constexpr ::UnityW<::UnityEngine::EventSystems::OVRInputModule>& GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_get_inputModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputModule;
}
constexpr ::UnityW<::UnityEngine::EventSystems::OVRInputModule> const& GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_get_inputModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputModule;
}
constexpr void GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_set_inputModule(::UnityW<::UnityEngine::EventSystems::OVRInputModule> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputModule = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_get_leftLinePointer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftLinePointer;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_get_leftLinePointer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftLinePointer;
}
constexpr void GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_set_leftLinePointer(::UnityW<::UnityEngine::LineRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftLinePointer = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_get_rightLinePointer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightLinePointer;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_get_rightLinePointer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightLinePointer;
}
constexpr void GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_set_rightLinePointer(::UnityW<::UnityEngine::LineRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rightLinePointer = value;
}
constexpr ::System::Nullable_1<::GlobalNamespace::OVRInput_Controller>& GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_get_interactionDevice_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactionDevice_;
}
constexpr ::System::Nullable_1<::GlobalNamespace::OVRInput_Controller> const& GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_get_interactionDevice_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interactionDevice_;
}
constexpr void GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_set_interactionDevice_(::System::Nullable_1<::GlobalNamespace::OVRInput_Controller> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___interactionDevice_ = value;
}
constexpr float_t& GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_get_linePointerInitialWidth_() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePointerInitialWidth_;
}
constexpr float_t const& GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_get_linePointerInitialWidth_() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linePointerInitialWidth_;
}
constexpr void GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::__cordl_internal_set_linePointerInitialWidth_(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___linePointerInitialWidth_ = value;
}
inline float_t GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::ApplyDeadzone(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(), { "ApplyDeadzone", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::get_AnalogStickX() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(), { "get_AnalogStickX", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::get_AnalogStickY() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(), { "get_AnalogStickY", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::get_InputRayPosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(), { "get_InputRayPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::get_InputRayRotation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(), { "get_InputRayRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::UpdateLineRenderer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(), { "UpdateLineRenderer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::UpdateLineRendererFromSource(::GlobalNamespace::OVRVirtualKeyboard_InputSource source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(),
                                                           { "UpdateLineRendererFromSource", {}, { ::i2c::type_of<::GlobalNamespace::OVRVirtualKeyboard_InputSource>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::UpdateInteractionAnchor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(), { "UpdateInteractionAnchor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler* GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::OVRVirtualKeyboardSampleInputHandler() {}
