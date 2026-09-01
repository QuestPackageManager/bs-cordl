#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionNodeConnection.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__MissionNodeConnection_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodeVisualController_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionNodeConnection.get_parentMissionNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MissionNodeVisualController> (::GlobalNamespace::MissionNodeConnection::*)()>(
    &::GlobalNamespace::MissionNodeConnection::get_parentMissionNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593bc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodeConnection*>(), { "get_parentMissionNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodeConnection.get_childMissionNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MissionNodeVisualController> (::GlobalNamespace::MissionNodeConnection::*)()>(
    &::GlobalNamespace::MissionNodeConnection::get_childMissionNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593bca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodeConnection*>(), { "get_childMissionNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodeConnection.get_isActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionNodeConnection::*)()>(&::GlobalNamespace::MissionNodeConnection::get_isActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593bca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodeConnection*>(), { "get_isActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodeConnection.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionNodeConnection::*)(
    ::GlobalNamespace::MissionNodeVisualController*, ::GlobalNamespace::MissionNodeVisualController*)>(&::GlobalNamespace::MissionNodeConnection::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593a884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodeConnection*>(),
                                         { "Setup", {}, { ::i2c::type_of<::GlobalNamespace::MissionNodeVisualController*>(), ::i2c::type_of<::GlobalNamespace::MissionNodeVisualController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodeConnection.UpdateConnectionRectTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionNodeConnection::*)()>(&::GlobalNamespace::MissionNodeConnection::UpdateConnectionRectTransform)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x593bcb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodeConnection*>(), { "UpdateConnectionRectTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodeConnection.SetActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionNodeConnection::*)(bool)>(&::GlobalNamespace::MissionNodeConnection::SetActive)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x593b7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodeConnection*>(), { "SetActive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodeConnection.MissionConnectionEnabledDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionNodeConnection::*)()>(&::GlobalNamespace::MissionNodeConnection::MissionConnectionEnabledDidFinish)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x593bf40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodeConnection*>(), { "MissionConnectionEnabledDidFinish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodeConnection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionNodeConnection::*)()>(&::GlobalNamespace::MissionNodeConnection::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x593bf5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodeConnection*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MissionNodeConnection::__cordl_internal_get__separator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separator;
}
constexpr float_t const& GlobalNamespace::MissionNodeConnection::__cordl_internal_get__separator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separator;
}
constexpr void GlobalNamespace::MissionNodeConnection::__cordl_internal_set__separator(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____separator = value;
}
constexpr float_t& GlobalNamespace::MissionNodeConnection::__cordl_internal_get__width() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____width;
}
constexpr float_t const& GlobalNamespace::MissionNodeConnection::__cordl_internal_get__width() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____width;
}
constexpr void GlobalNamespace::MissionNodeConnection::__cordl_internal_set__width(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____width = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::MissionNodeConnection::__cordl_internal_get__rectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::MissionNodeConnection::__cordl_internal_get__rectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectTransform;
}
constexpr void GlobalNamespace::MissionNodeConnection::__cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rectTransform = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::MissionNodeConnection::__cordl_internal_get__image() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____image;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::MissionNodeConnection::__cordl_internal_get__image() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____image;
}
constexpr void GlobalNamespace::MissionNodeConnection::__cordl_internal_set__image(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____image = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionNodeVisualController>& GlobalNamespace::MissionNodeConnection::__cordl_internal_get__parentMissionNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentMissionNode;
}
constexpr ::UnityW<::GlobalNamespace::MissionNodeVisualController> const& GlobalNamespace::MissionNodeConnection::__cordl_internal_get__parentMissionNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentMissionNode;
}
constexpr void GlobalNamespace::MissionNodeConnection::__cordl_internal_set__parentMissionNode(::UnityW<::GlobalNamespace::MissionNodeVisualController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentMissionNode = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionNodeVisualController>& GlobalNamespace::MissionNodeConnection::__cordl_internal_get__childMissionNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childMissionNode;
}
constexpr ::UnityW<::GlobalNamespace::MissionNodeVisualController> const& GlobalNamespace::MissionNodeConnection::__cordl_internal_get__childMissionNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childMissionNode;
}
constexpr void GlobalNamespace::MissionNodeConnection::__cordl_internal_set__childMissionNode(::UnityW<::GlobalNamespace::MissionNodeVisualController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____childMissionNode = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::MissionNodeConnection::__cordl_internal_get__animator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::MissionNodeConnection::__cordl_internal_get__animator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animator;
}
constexpr void GlobalNamespace::MissionNodeConnection::__cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animator = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::MissionNodeConnection::__cordl_internal_get__parentMissionNodePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentMissionNodePosition;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::MissionNodeConnection::__cordl_internal_get__parentMissionNodePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentMissionNodePosition;
}
constexpr void GlobalNamespace::MissionNodeConnection::__cordl_internal_set__parentMissionNodePosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentMissionNodePosition = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::MissionNodeConnection::__cordl_internal_get__childMissionNodePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childMissionNodePosition;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::MissionNodeConnection::__cordl_internal_get__childMissionNodePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childMissionNodePosition;
}
constexpr void GlobalNamespace::MissionNodeConnection::__cordl_internal_set__childMissionNodePosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____childMissionNodePosition = value;
}
constexpr bool& GlobalNamespace::MissionNodeConnection::__cordl_internal_get__isActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isActive;
}
constexpr bool const& GlobalNamespace::MissionNodeConnection::__cordl_internal_get__isActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isActive;
}
constexpr void GlobalNamespace::MissionNodeConnection::__cordl_internal_set__isActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isActive = value;
}
inline ::UnityW<::GlobalNamespace::MissionNodeVisualController> GlobalNamespace::MissionNodeConnection::get_parentMissionNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodeConnection*>(), { "get_parentMissionNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionNodeVisualController>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MissionNodeVisualController> GlobalNamespace::MissionNodeConnection::get_childMissionNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodeConnection*>(), { "get_childMissionNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionNodeVisualController>>(this, ___internal_method);
}
inline bool GlobalNamespace::MissionNodeConnection::get_isActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodeConnection*>(), { "get_isActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MissionNodeConnection::Setup(::GlobalNamespace::MissionNodeVisualController* parentMissionNode, ::GlobalNamespace::MissionNodeVisualController* childMissionNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodeConnection*>(),
                                       { "Setup", {}, { ::i2c::type_of<::GlobalNamespace::MissionNodeVisualController*>(), ::i2c::type_of<::GlobalNamespace::MissionNodeVisualController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentMissionNode, childMissionNode);
}
inline void GlobalNamespace::MissionNodeConnection::UpdateConnectionRectTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodeConnection*>(), { "UpdateConnectionRectTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionNodeConnection::SetActive(bool animated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodeConnection*>(), { "SetActive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animated);
}
inline void GlobalNamespace::MissionNodeConnection::MissionConnectionEnabledDidFinish() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodeConnection*>(), { "MissionConnectionEnabledDidFinish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionNodeConnection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodeConnection*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionNodeConnection* GlobalNamespace::MissionNodeConnection::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionNodeConnection*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionNodeConnection::MissionNodeConnection() {}
