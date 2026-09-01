#pragma once
// IWYU pragma private; include "GlobalNamespace\AlertViewHUD.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AlertViewHUD_def.hpp"
#include "GlobalNamespace/zzzz__AlertViewHUD_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AlertViewHUD_MessageType::AlertViewHUD_MessageType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AlertViewHUD_MessageType::AlertViewHUD_MessageType() {}
constexpr ::GlobalNamespace::AlertViewHUD_MessageType GlobalNamespace::AlertViewHUD_MessageType::Info{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::AlertViewHUD_MessageType GlobalNamespace::AlertViewHUD_MessageType::Warning{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::AlertViewHUD_MessageType GlobalNamespace::AlertViewHUD_MessageType::Error{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.get_Instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AlertViewHUD> (*)()>(&::GlobalNamespace::AlertViewHUD::get_Instance)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a310ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "get_Instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.set_Instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AlertViewHUD*)>(&::GlobalNamespace::AlertViewHUD::set_Instance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a31138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "set_Instance", {}, { ::i2c::type_of<::GlobalNamespace::AlertViewHUD*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.get_HideAfterSec
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::get_HideAfterSec)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a31188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "get_HideAfterSec", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.set_HideAfterSec
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)(int32_t)>(&::GlobalNamespace::AlertViewHUD::set_HideAfterSec)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a31190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "set_HideAfterSec", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.get_CenterInCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::get_CenterInCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a31198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "get_CenterInCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.set_CenterInCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)(bool)>(&::GlobalNamespace::AlertViewHUD::set_CenterInCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a311a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "set_CenterInCamera", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.get_Hidden
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::get_Hidden)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a311a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "get_Hidden", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::Awake)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5a311d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.PostMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::GlobalNamespace::AlertViewHUD_MessageType)>(&::GlobalNamespace::AlertViewHUD::PostMessage)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5a31320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(),
                                                             { "PostMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::AlertViewHUD_MessageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.Post
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)(::StringW, ::GlobalNamespace::AlertViewHUD_MessageType)>(&::GlobalNamespace::AlertViewHUD::Post)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5a3141c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "Post", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::AlertViewHUD_MessageType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.ClearMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::ClearMessage)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a315d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "ClearMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a31638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.CalculateHideAfterMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::CalculateHideAfterMessage)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a31650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "CalculateHideAfterMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::Reset)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5a31584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.Hide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::Hide)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a31304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "Hide", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.FollowCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::FollowCamera)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5a316c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "FollowCamera", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a3199c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::AlertViewHUD::__cordl_internal_get__hideAfterSec() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideAfterSec;
}
constexpr int32_t const& GlobalNamespace::AlertViewHUD::__cordl_internal_get__hideAfterSec() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideAfterSec;
}
constexpr void GlobalNamespace::AlertViewHUD::__cordl_internal_set__hideAfterSec(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideAfterSec = value;
}
constexpr bool& GlobalNamespace::AlertViewHUD::__cordl_internal_get__centerInCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerInCamera;
}
constexpr bool const& GlobalNamespace::AlertViewHUD::__cordl_internal_get__centerInCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerInCamera;
}
constexpr void GlobalNamespace::AlertViewHUD::__cordl_internal_set__centerInCamera(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____centerInCamera = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::AlertViewHUD::__cordl_internal_get__panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____panel;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::AlertViewHUD::__cordl_internal_get__panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____panel;
}
constexpr void GlobalNamespace::AlertViewHUD::__cordl_internal_set__panel(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____panel = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::AlertViewHUD::__cordl_internal_get__warningIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____warningIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::AlertViewHUD::__cordl_internal_get__warningIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____warningIcon;
}
constexpr void GlobalNamespace::AlertViewHUD::__cordl_internal_set__warningIcon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____warningIcon = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::AlertViewHUD::__cordl_internal_get__errorIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____errorIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::AlertViewHUD::__cordl_internal_get__errorIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____errorIcon;
}
constexpr void GlobalNamespace::AlertViewHUD::__cordl_internal_set__errorIcon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____errorIcon = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::AlertViewHUD::__cordl_internal_get__infoIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____infoIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::AlertViewHUD::__cordl_internal_get__infoIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____infoIcon;
}
constexpr void GlobalNamespace::AlertViewHUD::__cordl_internal_set__infoIcon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____infoIcon = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::AlertViewHUD::__cordl_internal_get__messageTextField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageTextField;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::AlertViewHUD::__cordl_internal_get__messageTextField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageTextField;
}
constexpr void GlobalNamespace::AlertViewHUD::__cordl_internal_set__messageTextField(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____messageTextField = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::AlertViewHUD::__cordl_internal_get__messageTypeTextField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageTypeTextField;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::AlertViewHUD::__cordl_internal_get__messageTypeTextField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageTypeTextField;
}
constexpr void GlobalNamespace::AlertViewHUD::__cordl_internal_set__messageTypeTextField(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____messageTypeTextField = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::AlertViewHUD::__cordl_internal_get__messageTypeIconField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageTypeIconField;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::AlertViewHUD::__cordl_internal_get__messageTypeIconField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageTypeIconField;
}
constexpr void GlobalNamespace::AlertViewHUD::__cordl_internal_set__messageTypeIconField(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____messageTypeIconField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AlertViewHUD::__cordl_internal_get__centerEyeTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerEyeTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AlertViewHUD::__cordl_internal_get__centerEyeTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerEyeTransform;
}
constexpr void GlobalNamespace::AlertViewHUD::__cordl_internal_set__centerEyeTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____centerEyeTransform = value;
}
constexpr float_t& GlobalNamespace::AlertViewHUD::__cordl_internal_get__initialTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialTime;
}
constexpr float_t const& GlobalNamespace::AlertViewHUD::__cordl_internal_get__initialTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialTime;
}
constexpr void GlobalNamespace::AlertViewHUD::__cordl_internal_set__initialTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AlertViewHUD::__cordl_internal_get__initialPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AlertViewHUD::__cordl_internal_get__initialPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialPosition;
}
constexpr void GlobalNamespace::AlertViewHUD::__cordl_internal_set__initialPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::AlertViewHUD::__cordl_internal_get__initialRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::AlertViewHUD::__cordl_internal_get__initialRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialRotation;
}
constexpr void GlobalNamespace::AlertViewHUD::__cordl_internal_set__initialRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialRotation = value;
}
constexpr float_t& GlobalNamespace::AlertViewHUD::__cordl_internal_get__speed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speed;
}
constexpr float_t const& GlobalNamespace::AlertViewHUD::__cordl_internal_get__speed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speed;
}
constexpr void GlobalNamespace::AlertViewHUD::__cordl_internal_set__speed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____speed = value;
}
inline void GlobalNamespace::AlertViewHUD::setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::AlertViewHUD> value) {
  ::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::AlertViewHUD>, "<Instance>k__BackingField", ::GlobalNamespace::AlertViewHUD*>(
      std::forward<::UnityW<::GlobalNamespace::AlertViewHUD>>(value));
}
inline ::UnityW<::GlobalNamespace::AlertViewHUD> GlobalNamespace::AlertViewHUD::getStaticF__Instance_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::AlertViewHUD>, "<Instance>k__BackingField", ::GlobalNamespace::AlertViewHUD*>();
}
inline ::UnityW<::GlobalNamespace::AlertViewHUD> GlobalNamespace::AlertViewHUD::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "get_Instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AlertViewHUD>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::set_Instance(::GlobalNamespace::AlertViewHUD* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "set_Instance", {}, { ::i2c::type_of<::GlobalNamespace::AlertViewHUD*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::AlertViewHUD::get_HideAfterSec() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "get_HideAfterSec", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::set_HideAfterSec(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "set_HideAfterSec", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AlertViewHUD::get_CenterInCamera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "get_CenterInCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::set_CenterInCamera(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "set_CenterInCamera", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AlertViewHUD::get_Hidden() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "get_Hidden", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::PostMessage(::StringW message, ::GlobalNamespace::AlertViewHUD_MessageType messageType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "PostMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::AlertViewHUD_MessageType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, messageType);
}
inline void GlobalNamespace::AlertViewHUD::Post(::StringW message, ::GlobalNamespace::AlertViewHUD_MessageType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "Post", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::AlertViewHUD_MessageType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, type);
}
inline void GlobalNamespace::AlertViewHUD::ClearMessage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "ClearMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::CalculateHideAfterMessage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "CalculateHideAfterMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::Hide() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "Hide", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::FollowCamera() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { "FollowCamera", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlertViewHUD*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AlertViewHUD* GlobalNamespace::AlertViewHUD::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AlertViewHUD*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AlertViewHUD::AlertViewHUD() {}
