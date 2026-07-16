#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelBuyInfoView.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelBuyInfoView_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyInfoView.get_buyLevelButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Button> (::GlobalNamespace::StandardLevelBuyInfoView::*)()>(
    &::GlobalNamespace::StandardLevelBuyInfoView::get_buyLevelButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2013c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyInfoView*>(), { "get_buyLevelButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyInfoView.get_openPackButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Button> (::GlobalNamespace::StandardLevelBuyInfoView::*)()>(
    &::GlobalNamespace::StandardLevelBuyInfoView::get_openPackButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a20144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyInfoView*>(), { "get_openPackButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyInfoView.get_buyPackButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Button> (::GlobalNamespace::StandardLevelBuyInfoView::*)()>(
    &::GlobalNamespace::StandardLevelBuyInfoView::get_buyPackButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2014c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyInfoView*>(), { "get_buyPackButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyInfoView.RefreshView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelBuyInfoView::*)(::StringW, bool)>(&::GlobalNamespace::StandardLevelBuyInfoView::RefreshView)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a20154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyInfoView*>(), { "RefreshView", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyInfoView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelBuyInfoView::*)()>(&::GlobalNamespace::StandardLevelBuyInfoView::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a201e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyInfoView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::StandardLevelBuyInfoView::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::StandardLevelBuyInfoView::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::StandardLevelBuyInfoView::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::StandardLevelBuyInfoView::__cordl_internal_get__buyLevelButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buyLevelButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::StandardLevelBuyInfoView::__cordl_internal_get__buyLevelButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buyLevelButton;
}
constexpr void GlobalNamespace::StandardLevelBuyInfoView::__cordl_internal_set__buyLevelButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buyLevelButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::StandardLevelBuyInfoView::__cordl_internal_get__openPackButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____openPackButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::StandardLevelBuyInfoView::__cordl_internal_get__openPackButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____openPackButton;
}
constexpr void GlobalNamespace::StandardLevelBuyInfoView::__cordl_internal_set__openPackButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____openPackButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::StandardLevelBuyInfoView::__cordl_internal_get__buyPackButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buyPackButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::StandardLevelBuyInfoView::__cordl_internal_get__buyPackButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buyPackButton;
}
constexpr void GlobalNamespace::StandardLevelBuyInfoView::__cordl_internal_set__buyPackButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buyPackButton = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::StandardLevelBuyInfoView::__cordl_internal_get__steamMessageGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamMessageGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::StandardLevelBuyInfoView::__cordl_internal_get__steamMessageGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamMessageGameObject;
}
constexpr void GlobalNamespace::StandardLevelBuyInfoView::__cordl_internal_set__steamMessageGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____steamMessageGameObject = value;
}
inline ::UnityW<::UnityEngine::UI::Button> GlobalNamespace::StandardLevelBuyInfoView::get_buyLevelButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyInfoView*>(), { "get_buyLevelButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Button>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::UI::Button> GlobalNamespace::StandardLevelBuyInfoView::get_openPackButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyInfoView*>(), { "get_openPackButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Button>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::UI::Button> GlobalNamespace::StandardLevelBuyInfoView::get_buyPackButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyInfoView*>(), { "get_buyPackButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Button>>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelBuyInfoView::RefreshView(::StringW infoText, bool canBuyPack) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyInfoView*>(), { "RefreshView", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, infoText, canBuyPack);
}
inline void GlobalNamespace::StandardLevelBuyInfoView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyInfoView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StandardLevelBuyInfoView* GlobalNamespace::StandardLevelBuyInfoView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StandardLevelBuyInfoView*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelBuyInfoView::StandardLevelBuyInfoView() {}
