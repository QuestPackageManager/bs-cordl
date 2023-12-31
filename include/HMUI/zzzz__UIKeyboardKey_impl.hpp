#pragma once
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__UIKeyboardKey_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
//  Writing Method size for method: ::HMUI::UIKeyboardKey.get_keyCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::KeyCode (::HMUI::UIKeyboardKey::*)()>(&::HMUI::UIKeyboardKey::get_keyCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211e540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboardKey*>::get(), "get_keyCode",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboardKey.get_canBeUppercase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::UIKeyboardKey::*)()>(&::HMUI::UIKeyboardKey::get_canBeUppercase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211e548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboardKey*>::get(), "get_canBeUppercase",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboardKey.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboardKey::*)()>(&::HMUI::UIKeyboardKey::Awake)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x211e550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboardKey*>::get(), "Awake", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboardKey.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboardKey::*)()>(&::HMUI::UIKeyboardKey::OnValidate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x211e5f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboardKey*>::get(), "OnValidate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboardKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboardKey::*)()>(&::HMUI::UIKeyboardKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211e6d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboardKey*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::KeyCode& HMUI::UIKeyboardKey::__get__keyCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyCode;
}
constexpr ::UnityEngine::KeyCode const& HMUI::UIKeyboardKey::__get__keyCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyCode;
}
constexpr void HMUI::UIKeyboardKey::__set__keyCode(::UnityEngine::KeyCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyCode = value;
}
constexpr ::TMPro::TextMeshProUGUI*& HMUI::UIKeyboardKey::__get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& HMUI::UIKeyboardKey::__get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void HMUI::UIKeyboardKey::__set__text(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HMUI::UIKeyboardKey::__get__overrideText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideText;
}
constexpr ::StringW const& HMUI::UIKeyboardKey::__get__overrideText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideText;
}
constexpr void HMUI::UIKeyboardKey::__set__overrideText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overrideText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HMUI::UIKeyboardKey::__get__canBeUppercase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canBeUppercase;
}
constexpr bool const& HMUI::UIKeyboardKey::__get__canBeUppercase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canBeUppercase;
}
constexpr void HMUI::UIKeyboardKey::__set__canBeUppercase(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canBeUppercase = value;
}
inline ::UnityEngine::KeyCode HMUI::UIKeyboardKey::get_keyCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboardKey*>::get(), "get_keyCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::KeyCode, false>(this, ___internal_method);
}
inline bool HMUI::UIKeyboardKey::get_canBeUppercase() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboardKey*>::get(), "get_canBeUppercase",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HMUI::UIKeyboardKey::Awake() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboardKey*>::get(), "Awake", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::UIKeyboardKey::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboardKey*>::get(), "OnValidate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::UIKeyboardKey* HMUI::UIKeyboardKey::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::UIKeyboardKey*>());
}
inline void HMUI::UIKeyboardKey::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboardKey*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::UIKeyboardKey::UIKeyboardKey() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
