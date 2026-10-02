#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerDeviceState.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDeviceState_impl.hpp"
#include "UnityEngine/UIElements/zzzz__RuntimePanel_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_impl.hpp"
#include "UnityEngine/zzzz__Camera_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDeviceState_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDeviceState_def.hpp"
#include "UnityEngine/UIElements/zzzz__RuntimePanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::PointerDeviceState_LocationFlag::PointerDeviceState_LocationFlag(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerDeviceState_LocationFlag::PointerDeviceState_LocationFlag() {}
constexpr ::UnityEngine::UIElements::PointerDeviceState_LocationFlag UnityEngine::UIElements::PointerDeviceState_LocationFlag::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::PointerDeviceState_LocationFlag UnityEngine::UIElements::PointerDeviceState_LocationFlag::OutsidePanel{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_PointerLocation.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)()>(
    &::UnityEngine::UIElements::PointerDeviceState_PointerLocation::get_Position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x7231a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(), { "get_Position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_PointerLocation.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::PointerDeviceState_PointerLocation::set_Position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x7231a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(), { "set_Position", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_PointerLocation.get_Panel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IPanel* (::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)()>(
    &::UnityEngine::UIElements::PointerDeviceState_PointerLocation::get_Panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7231a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(), { "get_Panel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_PointerLocation.set_Panel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)(::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::PointerDeviceState_PointerLocation::set_Panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7231a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(),
                                                                                           { "set_Panel", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_PointerLocation.get_Flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PointerDeviceState_LocationFlag (::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)()>(
    &::UnityEngine::UIElements::PointerDeviceState_PointerLocation::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7231a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(), { "get_Flags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_PointerLocation.set_Flags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)(::UnityEngine::UIElements::PointerDeviceState_LocationFlag)>(
    &::UnityEngine::UIElements::PointerDeviceState_PointerLocation::set_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7231a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(),
                                                                                           { "set_Flags", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_PointerLocation.SetLocation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDeviceState_PointerLocation::*)(::UnityEngine::Vector3, ::UnityEngine::UIElements::IPanel*)>(
    &::UnityEngine::UIElements::PointerDeviceState_PointerLocation::SetLocation)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x723061c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(),
                                                             { "SetLocation", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::UIElements::PointerDeviceState_PointerLocation::get_Position() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(), { "get_Position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PointerDeviceState_PointerLocation::set_Position(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(), { "set_Position", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::PointerDeviceState_PointerLocation::get_Panel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(), { "get_Panel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPanel*>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PointerDeviceState_PointerLocation::set_Panel(::UnityEngine::UIElements::IPanel* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(),
                                                                                         { "set_Panel", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::PointerDeviceState_LocationFlag UnityEngine::UIElements::PointerDeviceState_PointerLocation::get_Flags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(), { "get_Flags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PointerDeviceState_PointerLocation::set_Flags(::UnityEngine::UIElements::PointerDeviceState_LocationFlag value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(),
                                                                                         { "set_Flags", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::PointerDeviceState_PointerLocation::SetLocation(::UnityEngine::Vector3 position, ::UnityEngine::UIElements::IPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>(),
                                                           { "SetLocation", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, panel);
}
// Ctor Parameters [CppParam { name: "_Position_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Panel_k__BackingField", ty:
// "::UnityEngine::UIElements::IPanel*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Flags_k__BackingField", ty:
// "::UnityEngine::UIElements::PointerDeviceState_LocationFlag", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::PointerDeviceState_PointerLocation::PointerDeviceState_PointerLocation(
    ::UnityEngine::Vector3 _Position_k__BackingField, ::UnityEngine::UIElements::IPanel* _Panel_k__BackingField,
    ::UnityEngine::UIElements::PointerDeviceState_LocationFlag _Flags_k__BackingField) noexcept {
  this->_Position_k__BackingField = _Position_k__BackingField;
  this->_Panel_k__BackingField = _Panel_k__BackingField;
  this->_Flags_k__BackingField = _Flags_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerDeviceState_PointerLocation::PointerDeviceState_PointerLocation() {}
// Ctor Parameters [CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "collider", ty: "::UnityW<::UnityEngine::Collider>", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "document", ty: "::UnityW<::UnityEngine::UIElements::UIDocument>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::RuntimePointerState_PointerDeviceState_RaycastHit::RuntimePointerState_PointerDeviceState_RaycastHit(float_t distance, ::UnityW<::UnityEngine::Collider> collider,
                                                                                                                                          ::UnityW<::UnityEngine::UIElements::UIDocument> document,
                                                                                                                                          ::UnityEngine::UIElements::VisualElement* element) noexcept {
  this->distance = distance;
  this->collider = collider;
  this->document = document;
  this->element = element;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RuntimePointerState_PointerDeviceState_RaycastHit::RuntimePointerState_PointerDeviceState_RaycastHit() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState::*)()>(
    &::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7231a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState::*)()>(
    &::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7231a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::RuntimePointerState_PointerDeviceState_RaycastHit& UnityEngine::UIElements::PointerDeviceState_RuntimePointerState::__cordl_internal_get_hit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hit;
}
constexpr ::UnityEngine::UIElements::RuntimePointerState_PointerDeviceState_RaycastHit const& UnityEngine::UIElements::PointerDeviceState_RuntimePointerState::__cordl_internal_get_hit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hit;
}
constexpr void UnityEngine::UIElements::PointerDeviceState_RuntimePointerState::__cordl_internal_set_hit(::UnityEngine::UIElements::RuntimePointerState_PointerDeviceState_RaycastHit value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hit = value;
}
constexpr int32_t& UnityEngine::UIElements::PointerDeviceState_RuntimePointerState::__cordl_internal_get_updateFrameCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateFrameCount;
}
constexpr int32_t const& UnityEngine::UIElements::PointerDeviceState_RuntimePointerState::__cordl_internal_get_updateFrameCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___updateFrameCount;
}
constexpr void UnityEngine::UIElements::PointerDeviceState_RuntimePointerState::__cordl_internal_set_updateFrameCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___updateFrameCount = value;
}
inline void UnityEngine::UIElements::PointerDeviceState_RuntimePointerState::Reset() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PointerDeviceState_RuntimePointerState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState* UnityEngine::UIElements::PointerDeviceState_RuntimePointerState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState::PointerDeviceState_RuntimePointerState() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState::*)()>(
    &::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState::Reset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x7231a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState::*)()>(
    &::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7231860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::PointerDeviceState_ScreenPointerState::__cordl_internal_get_mousePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mousePosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::PointerDeviceState_ScreenPointerState::__cordl_internal_get_mousePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mousePosition;
}
constexpr void UnityEngine::UIElements::PointerDeviceState_ScreenPointerState::__cordl_internal_set_mousePosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mousePosition = value;
}
constexpr ::System::Nullable_1<int32_t>& UnityEngine::UIElements::PointerDeviceState_ScreenPointerState::__cordl_internal_get_targetDisplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetDisplay;
}
constexpr ::System::Nullable_1<int32_t> const& UnityEngine::UIElements::PointerDeviceState_ScreenPointerState::__cordl_internal_get_targetDisplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetDisplay;
}
constexpr void UnityEngine::UIElements::PointerDeviceState_ScreenPointerState::__cordl_internal_set_targetDisplay(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetDisplay = value;
}
inline void UnityEngine::UIElements::PointerDeviceState_ScreenPointerState::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PointerDeviceState_ScreenPointerState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState* UnityEngine::UIElements::PointerDeviceState_ScreenPointerState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState::PointerDeviceState_ScreenPointerState() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState.get_worldRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState::*)()>(
    &::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState::get_worldRay)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x7231ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState*>(), { "get_worldRay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState::*)()>(
    &::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState::Reset)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x7231c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState::*)()>(
    &::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x7231524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& UnityEngine::UIElements::PointerDeviceState_TrackedPointerState::__cordl_internal_get_worldPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::UIElements::PointerDeviceState_TrackedPointerState::__cordl_internal_get_worldPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldPosition;
}
constexpr void UnityEngine::UIElements::PointerDeviceState_TrackedPointerState::__cordl_internal_set_worldPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___worldPosition = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::UIElements::PointerDeviceState_TrackedPointerState::__cordl_internal_get_worldOrientation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldOrientation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::UIElements::PointerDeviceState_TrackedPointerState::__cordl_internal_get_worldOrientation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldOrientation;
}
constexpr void UnityEngine::UIElements::PointerDeviceState_TrackedPointerState::__cordl_internal_set_worldOrientation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___worldOrientation = value;
}
constexpr float_t& UnityEngine::UIElements::PointerDeviceState_TrackedPointerState::__cordl_internal_get_maxDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxDistance;
}
constexpr float_t const& UnityEngine::UIElements::PointerDeviceState_TrackedPointerState::__cordl_internal_get_maxDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxDistance;
}
constexpr void UnityEngine::UIElements::PointerDeviceState_TrackedPointerState::__cordl_internal_set_maxDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxDistance = value;
}
inline ::UnityEngine::Ray UnityEngine::UIElements::PointerDeviceState_TrackedPointerState::get_worldRay() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState*>(), { "get_worldRay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PointerDeviceState_TrackedPointerState::Reset() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::PointerDeviceState_TrackedPointerState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState* UnityEngine::UIElements::PointerDeviceState_TrackedPointerState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState::PointerDeviceState_TrackedPointerState() {}
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.RemovePanelData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::IPanel*)>(&::UnityEngine::UIElements::PointerDeviceState::RemovePanelData)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x72303b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "RemovePanelData", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.RemoveDocumentData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::UIDocument*)>(&::UnityEngine::UIElements::PointerDeviceState::RemoveDocumentData)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x723080c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                                                                                           { "RemoveDocumentData", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.SavePointerPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::UIElements::IPanel*, ::UnityEngine::UIElements::ContextType)>(
    &::UnityEngine::UIElements::PointerDeviceState::SavePointerPosition)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x7230968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                                                             { "SavePointerPosition",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::ContextType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.PressButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::UIElements::PointerDeviceState::PressButton)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x7230a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "PressButton", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.ReleaseButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::UIElements::PointerDeviceState::ReleaseButton)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x7230b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "ReleaseButton", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.ReleaseAllButtons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::UIElements::PointerDeviceState::ReleaseAllButtons)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x722e810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "ReleaseAllButtons", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.GetPointerPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(int32_t, ::UnityEngine::UIElements::ContextType)>(
    &::UnityEngine::UIElements::PointerDeviceState::GetPointerPosition)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x722550c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                                                             { "GetPointerPosition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::ContextType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.GetPointerDeltaPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(int32_t, ::UnityEngine::UIElements::ContextType, ::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::PointerDeviceState::GetPointerDeltaPosition)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x7230c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                            { "GetPointerDeltaPosition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::ContextType>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.GetPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IPanel* (*)(int32_t, ::UnityEngine::UIElements::ContextType)>(
    &::UnityEngine::UIElements::PointerDeviceState::GetPanel)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x7230d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                                                             { "GetPanel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::ContextType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.HasFlagFast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::PointerDeviceState_LocationFlag, ::UnityEngine::UIElements::PointerDeviceState_LocationFlag)>(
    &::UnityEngine::UIElements::PointerDeviceState::HasFlagFast)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x7230e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
            { "HasFlagFast", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>(), ::i2c::type_of<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.HasLocationFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::UnityEngine::UIElements::ContextType, ::UnityEngine::UIElements::PointerDeviceState_LocationFlag)>(
    &::UnityEngine::UIElements::PointerDeviceState::HasLocationFlag)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x7230e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "HasLocationFlag",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::ContextType>(),
                                                                                                                ::i2c::type_of<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.GetPressedButtons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::UIElements::PointerDeviceState::GetPressedButtons)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7230ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "GetPressedButtons", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.HasAdditionalPressedButtons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t)>(&::UnityEngine::UIElements::PointerDeviceState::HasAdditionalPressedButtons)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x7230f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                                                                                           { "HasAdditionalPressedButtons", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.GetPlayerPanelWithSoftPointerCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::RuntimePanel* (*)(int32_t)>(&::UnityEngine::UIElements::PointerDeviceState::GetPlayerPanelWithSoftPointerCapture)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7230fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "GetPlayerPanelWithSoftPointerCapture", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.GetWorldSpaceDocumentWithSoftPointerCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::UIDocument> (*)(int32_t)>(
    &::UnityEngine::UIElements::PointerDeviceState::GetWorldSpaceDocumentWithSoftPointerCapture)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x7231044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "GetWorldSpaceDocumentWithSoftPointerCapture", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.GetCameraWithSoftPointerCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (*)(int32_t)>(&::UnityEngine::UIElements::PointerDeviceState::GetCameraWithSoftPointerCapture)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x72310c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "GetCameraWithSoftPointerCapture", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.SetElementWithSoftPointerCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Camera*)>(
    &::UnityEngine::UIElements::PointerDeviceState::SetElementWithSoftPointerCapture)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x7231144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
            { "SetElementWithSoftPointerCapture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.GetTrackedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState* (*)(int32_t, bool)>(
    &::UnityEngine::UIElements::PointerDeviceState::GetTrackedState)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x7231364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "GetTrackedState", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.RemoveTrackedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::UIElements::PointerDeviceState::RemoveTrackedState)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x72315c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "RemoveTrackedState", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PointerDeviceState.GetScreenPointerState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState* (*)(int32_t, bool)>(
    &::UnityEngine::UIElements::PointerDeviceState::GetScreenPointerState)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x72316a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "GetScreenPointerState", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::PointerDeviceState::setStaticF_s_RuntimePointerStates(::ArrayW<::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState*>, "s_RuntimePointerStates", ::UnityEngine::UIElements::PointerDeviceState*>(
      std::forward<::ArrayW<::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState*>>(value));
}
inline ::ArrayW<::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState*> UnityEngine::UIElements::PointerDeviceState::getStaticF_s_RuntimePointerStates() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::UIElements::PointerDeviceState_RuntimePointerState*>, "s_RuntimePointerStates", ::UnityEngine::UIElements::PointerDeviceState*>();
}
inline void UnityEngine::UIElements::PointerDeviceState::setStaticF_s_PlayerPointerLocations(::ArrayW<::UnityEngine::UIElements::PointerDeviceState_PointerLocation> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>, "s_PlayerPointerLocations", ::UnityEngine::UIElements::PointerDeviceState*>(
      std::forward<::ArrayW<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>>(value));
}
inline ::ArrayW<::UnityEngine::UIElements::PointerDeviceState_PointerLocation> UnityEngine::UIElements::PointerDeviceState::getStaticF_s_PlayerPointerLocations() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::UIElements::PointerDeviceState_PointerLocation>, "s_PlayerPointerLocations", ::UnityEngine::UIElements::PointerDeviceState*>();
}
inline void UnityEngine::UIElements::PointerDeviceState::setStaticF_s_PressedButtons(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_PressedButtons", ::UnityEngine::UIElements::PointerDeviceState*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> UnityEngine::UIElements::PointerDeviceState::getStaticF_s_PressedButtons() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_PressedButtons", ::UnityEngine::UIElements::PointerDeviceState*>();
}
inline void UnityEngine::UIElements::PointerDeviceState::setStaticF_s_PlayerPanelWithSoftPointerCapture(::ArrayW<::UnityEngine::UIElements::RuntimePanel*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::UIElements::RuntimePanel*>, "s_PlayerPanelWithSoftPointerCapture", ::UnityEngine::UIElements::PointerDeviceState*>(
      std::forward<::ArrayW<::UnityEngine::UIElements::RuntimePanel*>>(value));
}
inline ::ArrayW<::UnityEngine::UIElements::RuntimePanel*> UnityEngine::UIElements::PointerDeviceState::getStaticF_s_PlayerPanelWithSoftPointerCapture() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::UIElements::RuntimePanel*>, "s_PlayerPanelWithSoftPointerCapture", ::UnityEngine::UIElements::PointerDeviceState*>();
}
inline void UnityEngine::UIElements::PointerDeviceState::setStaticF_s_WorldSpaceDocumentWithSoftPointerCapture(::ArrayW<::UnityW<::UnityEngine::UIElements::UIDocument>> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::UIElements::UIDocument>>, "s_WorldSpaceDocumentWithSoftPointerCapture", ::UnityEngine::UIElements::PointerDeviceState*>(
      std::forward<::ArrayW<::UnityW<::UnityEngine::UIElements::UIDocument>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::UIElements::UIDocument>> UnityEngine::UIElements::PointerDeviceState::getStaticF_s_WorldSpaceDocumentWithSoftPointerCapture() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::UIElements::UIDocument>>, "s_WorldSpaceDocumentWithSoftPointerCapture", ::UnityEngine::UIElements::PointerDeviceState*>();
}
inline void UnityEngine::UIElements::PointerDeviceState::setStaticF_s_CameraWithSoftPointerCapture(::ArrayW<::UnityW<::UnityEngine::Camera>> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::Camera>>, "s_CameraWithSoftPointerCapture", ::UnityEngine::UIElements::PointerDeviceState*>(
      std::forward<::ArrayW<::UnityW<::UnityEngine::Camera>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::Camera>> UnityEngine::UIElements::PointerDeviceState::getStaticF_s_CameraWithSoftPointerCapture() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::Camera>>, "s_CameraWithSoftPointerCapture", ::UnityEngine::UIElements::PointerDeviceState*>();
}
inline void UnityEngine::UIElements::PointerDeviceState::RemovePanelData(::UnityEngine::UIElements::IPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "RemovePanelData", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, panel);
}
inline void UnityEngine::UIElements::PointerDeviceState::RemoveDocumentData(::UnityEngine::UIElements::UIDocument* document) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "RemoveDocumentData", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, document);
}
inline void UnityEngine::UIElements::PointerDeviceState::SavePointerPosition(int32_t pointerId, ::UnityEngine::Vector3 position, ::UnityEngine::UIElements::IPanel* panel,
                                                                             ::UnityEngine::UIElements::ContextType contextType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                                                           { "SavePointerPosition",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::UIElements::IPanel*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::ContextType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointerId, position, panel, contextType);
}
inline void UnityEngine::UIElements::PointerDeviceState::PressButton(int32_t pointerId, int32_t buttonId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "PressButton", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointerId, buttonId);
}
inline void UnityEngine::UIElements::PointerDeviceState::ReleaseButton(int32_t pointerId, int32_t buttonId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "ReleaseButton", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointerId, buttonId);
}
inline void UnityEngine::UIElements::PointerDeviceState::ReleaseAllButtons(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "ReleaseAllButtons", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointerId);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::PointerDeviceState::GetPointerPosition(int32_t pointerId, ::UnityEngine::UIElements::ContextType contextType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                                                           { "GetPointerPosition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::ContextType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, pointerId, contextType);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::PointerDeviceState::GetPointerDeltaPosition(int32_t pointerId, ::UnityEngine::UIElements::ContextType contextType,
                                                                                                   ::UnityEngine::Vector3 newPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                          { "GetPointerDeltaPosition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::ContextType>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, pointerId, contextType, newPosition);
}
inline ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::PointerDeviceState::GetPanel(int32_t pointerId, ::UnityEngine::UIElements::ContextType contextType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                                                                                         { "GetPanel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::ContextType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPanel*>(nullptr, ___internal_method, pointerId, contextType);
}
inline bool UnityEngine::UIElements::PointerDeviceState::HasFlagFast(::UnityEngine::UIElements::PointerDeviceState_LocationFlag flagSet,
                                                                     ::UnityEngine::UIElements::PointerDeviceState_LocationFlag flag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
          { "HasFlagFast", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>(), ::i2c::type_of<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flagSet, flag);
}
inline bool UnityEngine::UIElements::PointerDeviceState::HasLocationFlag(int32_t pointerId, ::UnityEngine::UIElements::ContextType contextType,
                                                                         ::UnityEngine::UIElements::PointerDeviceState_LocationFlag flag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                          { "HasLocationFlag",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::ContextType>(), ::i2c::type_of<::UnityEngine::UIElements::PointerDeviceState_LocationFlag>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pointerId, contextType, flag);
}
inline int32_t UnityEngine::UIElements::PointerDeviceState::GetPressedButtons(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "GetPressedButtons", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pointerId);
}
inline bool UnityEngine::UIElements::PointerDeviceState::HasAdditionalPressedButtons(int32_t pointerId, int32_t exceptButtonId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
                                                                                         { "HasAdditionalPressedButtons", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pointerId, exceptButtonId);
}
inline ::UnityEngine::UIElements::RuntimePanel* UnityEngine::UIElements::PointerDeviceState::GetPlayerPanelWithSoftPointerCapture(int32_t pointerId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "GetPlayerPanelWithSoftPointerCapture", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::RuntimePanel*>(nullptr, ___internal_method, pointerId);
}
inline ::UnityW<::UnityEngine::UIElements::UIDocument> UnityEngine::UIElements::PointerDeviceState::GetWorldSpaceDocumentWithSoftPointerCapture(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "GetWorldSpaceDocumentWithSoftPointerCapture", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::UIDocument>>(nullptr, ___internal_method, pointerId);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::UIElements::PointerDeviceState::GetCameraWithSoftPointerCapture(int32_t pointerId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "GetCameraWithSoftPointerCapture", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(nullptr, ___internal_method, pointerId);
}
inline void UnityEngine::UIElements::PointerDeviceState::SetElementWithSoftPointerCapture(int32_t pointerId, ::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(),
          { "SetElementWithSoftPointerCapture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointerId, element, camera);
}
inline ::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState* UnityEngine::UIElements::PointerDeviceState::GetTrackedState(int32_t pointerId, bool createIfNull) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "GetTrackedState", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PointerDeviceState_TrackedPointerState*>(nullptr, ___internal_method, pointerId, createIfNull);
}
inline void UnityEngine::UIElements::PointerDeviceState::RemoveTrackedState(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "RemoveTrackedState", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointerId);
}
inline ::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState* UnityEngine::UIElements::PointerDeviceState::GetScreenPointerState(int32_t pointerId, bool createIfNull) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerDeviceState*>(), { "GetScreenPointerState", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PointerDeviceState_ScreenPointerState*>(nullptr, ___internal_method, pointerId, createIfNull);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerDeviceState::PointerDeviceState() {}
