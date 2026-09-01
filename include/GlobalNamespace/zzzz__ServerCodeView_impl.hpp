#pragma once
// IWYU pragma private; include "GlobalNamespace\ServerCodeView.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ServerCodeView_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ServerCodeView.SetCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerCodeView::*)(::StringW)>(&::GlobalNamespace::ServerCodeView::SetCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a25e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerCodeView*>(), { "SetCode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerCodeView.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerCodeView::*)()>(&::GlobalNamespace::ServerCodeView::OnEnable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a25f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerCodeView*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerCodeView.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerCodeView::*)()>(&::GlobalNamespace::ServerCodeView::OnDisable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a25fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerCodeView*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerCodeView.HandleShowServerCodeButtonPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerCodeView::*)()>(&::GlobalNamespace::ServerCodeView::HandleShowServerCodeButtonPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a26000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerCodeView*>(), { "HandleShowServerCodeButtonPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerCodeView.RefreshText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerCodeView::*)(bool)>(&::GlobalNamespace::ServerCodeView::RefreshText)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a25ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerCodeView*>(), { "RefreshText", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerCodeView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerCodeView::*)()>(&::GlobalNamespace::ServerCodeView::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a26010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerCodeView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::ServerCodeView::__cordl_internal_get__serverCodeText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverCodeText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::ServerCodeView::__cordl_internal_get__serverCodeText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverCodeText;
}
constexpr void GlobalNamespace::ServerCodeView::__cordl_internal_set__serverCodeText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serverCodeText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::ServerCodeView::__cordl_internal_get__button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::ServerCodeView::__cordl_internal_get__button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button;
}
constexpr void GlobalNamespace::ServerCodeView::__cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____button = value;
}
constexpr ::HMUI::ButtonBinder*& GlobalNamespace::ServerCodeView::__cordl_internal_get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::HMUI::ButtonBinder* const& GlobalNamespace::ServerCodeView::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void GlobalNamespace::ServerCodeView::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonBinder = value;
}
constexpr ::StringW& GlobalNamespace::ServerCodeView::__cordl_internal_get__serverCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverCode;
}
constexpr ::StringW const& GlobalNamespace::ServerCodeView::__cordl_internal_get__serverCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serverCode;
}
constexpr void GlobalNamespace::ServerCodeView::__cordl_internal_set__serverCode(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serverCode = value;
}
constexpr bool& GlobalNamespace::ServerCodeView::__cordl_internal_get__codeIsShown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codeIsShown;
}
constexpr bool const& GlobalNamespace::ServerCodeView::__cordl_internal_get__codeIsShown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codeIsShown;
}
constexpr void GlobalNamespace::ServerCodeView::__cordl_internal_set__codeIsShown(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____codeIsShown = value;
}
inline void GlobalNamespace::ServerCodeView::SetCode(::StringW serverCode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerCodeView*>(), { "SetCode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverCode);
}
inline void GlobalNamespace::ServerCodeView::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerCodeView*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ServerCodeView::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerCodeView*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ServerCodeView::HandleShowServerCodeButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerCodeView*>(), { "HandleShowServerCodeButtonPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ServerCodeView::RefreshText(bool showCode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerCodeView*>(), { "RefreshText", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, showCode);
}
inline void GlobalNamespace::ServerCodeView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerCodeView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ServerCodeView* GlobalNamespace::ServerCodeView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ServerCodeView*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ServerCodeView::ServerCodeView() {}
