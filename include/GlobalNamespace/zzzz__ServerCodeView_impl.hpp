#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ServerCodeView_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ServerCodeView.SetCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ServerCodeView::*)(::StringW)>(&::GlobalNamespace::ServerCodeView::SetCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22e9838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerCodeView*>::get(), "SetCode", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerCodeView.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ServerCodeView::*)()>(&::GlobalNamespace::ServerCodeView::OnEnable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x22e98e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerCodeView*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerCodeView.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ServerCodeView::*)()>(&::GlobalNamespace::ServerCodeView::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22e997c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerCodeView*>::get(), "OnDisable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerCodeView.HandleShowServerCodeButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ServerCodeView::*)()>(
    &::GlobalNamespace::ServerCodeView::HandleShowServerCodeButtonPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22e9998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerCodeView*>::get(),
                                                                               "HandleShowServerCodeButtonPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerCodeView.RefreshText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ServerCodeView::*)(bool)>(&::GlobalNamespace::ServerCodeView::RefreshText)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x22e9844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerCodeView*>::get(), "RefreshText", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerCodeView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ServerCodeView::*)()>(&::GlobalNamespace::ServerCodeView::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22e99a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerCodeView*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::ServerCodeView::__get__serverCodeText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____serverCodeText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::ServerCodeView::__get__serverCodeText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____serverCodeText;
}
constexpr void GlobalNamespace::ServerCodeView::__set__serverCodeText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serverCodeText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::ServerCodeView::__get__button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____button;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::ServerCodeView::__get__button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____button;
}
constexpr void GlobalNamespace::ServerCodeView::__set__button(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____button)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ButtonBinder*& GlobalNamespace::ServerCodeView::__get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____buttonBinder;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& GlobalNamespace::ServerCodeView::__get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____buttonBinder;
}
constexpr void GlobalNamespace::ServerCodeView::__set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::ServerCodeView::__get__serverCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____serverCode;
}
constexpr ::StringW const& GlobalNamespace::ServerCodeView::__get__serverCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____serverCode;
}
constexpr void GlobalNamespace::ServerCodeView::__set__serverCode(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serverCode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::ServerCodeView::__get__codeIsShown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____codeIsShown;
}
constexpr bool const& GlobalNamespace::ServerCodeView::__get__codeIsShown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____codeIsShown;
}
constexpr void GlobalNamespace::ServerCodeView::__set__codeIsShown(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____codeIsShown = value;
}
inline void GlobalNamespace::ServerCodeView::SetCode(::StringW serverCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerCodeView*>::get(), "SetCode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serverCode);
}
inline void GlobalNamespace::ServerCodeView::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerCodeView*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ServerCodeView::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerCodeView*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ServerCodeView::HandleShowServerCodeButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerCodeView*>::get(),
                                                                             "HandleShowServerCodeButtonPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ServerCodeView::RefreshText(bool showCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerCodeView*>::get(), "RefreshText", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, showCode);
}
inline ::GlobalNamespace::ServerCodeView* GlobalNamespace::ServerCodeView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ServerCodeView*>());
}
inline void GlobalNamespace::ServerCodeView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ServerCodeView*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ServerCodeView::ServerCodeView() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
