#pragma once
// IWYU pragma private; include "GlobalNamespace/AlertViewHUD.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::AlertViewHUD> (*)()>(&::GlobalNamespace::AlertViewHUD::get_Instance)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x58818a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "get_Instance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.set_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::AlertViewHUD*)>(&::GlobalNamespace::AlertViewHUD::set_Instance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58818ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "set_Instance", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AlertViewHUD*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.get_HideAfterSec
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::get_HideAfterSec)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588193c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "get_HideAfterSec",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.set_HideAfterSec
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)(int32_t)>(&::GlobalNamespace::AlertViewHUD::set_HideAfterSec)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5881944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "set_HideAfterSec", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.get_CenterInCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::get_CenterInCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588194c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "get_CenterInCamera",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.set_CenterInCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)(bool)>(&::GlobalNamespace::AlertViewHUD::set_CenterInCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5881954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "set_CenterInCamera",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.get_Hidden
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::get_Hidden)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x588195c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "get_Hidden",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::Awake)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5881984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.PostMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::GlobalNamespace::AlertViewHUD_MessageType)>(&::GlobalNamespace::AlertViewHUD::PostMessage)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5881ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "PostMessage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AlertViewHUD_MessageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.Post
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)(::StringW, ::GlobalNamespace::AlertViewHUD_MessageType)>(
    &::GlobalNamespace::AlertViewHUD::Post)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5881bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "Post", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AlertViewHUD_MessageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.ClearMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::ClearMessage)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5881d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "ClearMessage",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5881dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.CalculateHideAfterMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::CalculateHideAfterMessage)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5881e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(),
                                                                               "CalculateHideAfterMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::Reset)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5881d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.Hide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::Hide)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5881ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "Hide",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD.FollowCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::FollowCamera)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5881e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "FollowCamera",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlertViewHUD._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlertViewHUD::*)()>(&::GlobalNamespace::AlertViewHUD::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5882150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____warningIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____errorIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____infoIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____messageTextField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____messageTypeTextField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____messageTypeIconField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____centerEyeTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  ::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::AlertViewHUD>, "<Instance>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get>(std::forward<::UnityW<::GlobalNamespace::AlertViewHUD>>(value));
}
inline ::UnityW<::GlobalNamespace::AlertViewHUD> GlobalNamespace::AlertViewHUD::getStaticF__Instance_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::AlertViewHUD>, "<Instance>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get>();
}
inline ::UnityW<::GlobalNamespace::AlertViewHUD> GlobalNamespace::AlertViewHUD::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "get_Instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AlertViewHUD>, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::set_Instance(::GlobalNamespace::AlertViewHUD* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "set_Instance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AlertViewHUD*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::AlertViewHUD::get_HideAfterSec() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "get_HideAfterSec",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::set_HideAfterSec(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "set_HideAfterSec",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AlertViewHUD::get_CenterInCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "get_CenterInCamera",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::set_CenterInCamera(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "set_CenterInCamera",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AlertViewHUD::get_Hidden() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "get_Hidden",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::PostMessage(::StringW message, ::GlobalNamespace::AlertViewHUD_MessageType messageType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "PostMessage", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AlertViewHUD_MessageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message, messageType);
}
inline void GlobalNamespace::AlertViewHUD::Post(::StringW message, ::GlobalNamespace::AlertViewHUD_MessageType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "Post", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AlertViewHUD_MessageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, type);
}
inline void GlobalNamespace::AlertViewHUD::ClearMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "ClearMessage",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::CalculateHideAfterMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(),
                                                                             "CalculateHideAfterMessage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::Hide() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "Hide",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::FollowCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), "FollowCamera",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AlertViewHUD::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlertViewHUD*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AlertViewHUD* GlobalNamespace::AlertViewHUD::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AlertViewHUD*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AlertViewHUD::AlertViewHUD() {}
