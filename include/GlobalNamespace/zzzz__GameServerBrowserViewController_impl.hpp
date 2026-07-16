#pragma once
// IWYU pragma private; include "GlobalNamespace/GameServerBrowserViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__GameServerBrowserViewController_def.hpp"
#include "GlobalNamespace/zzzz__GameServersFilterText_def.hpp"
#include "GlobalNamespace/zzzz__GameServersListTableView_def.hpp"
#include "GlobalNamespace/zzzz__LoadingControl_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameServerBrowserViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameServerBrowserViewController::*)()>(&::GlobalNamespace::GameServerBrowserViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x595ed20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerBrowserViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::GameServerBrowserViewController::__cordl_internal_get__filterServersButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterServersButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::GameServerBrowserViewController::__cordl_internal_get__filterServersButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterServersButton;
}
constexpr void GlobalNamespace::GameServerBrowserViewController::__cordl_internal_set__filterServersButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filterServersButton = value;
}
constexpr ::UnityW<::GlobalNamespace::GameServersFilterText>& GlobalNamespace::GameServerBrowserViewController::__cordl_internal_get__filterText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterText;
}
constexpr ::UnityW<::GlobalNamespace::GameServersFilterText> const& GlobalNamespace::GameServerBrowserViewController::__cordl_internal_get__filterText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterText;
}
constexpr void GlobalNamespace::GameServerBrowserViewController::__cordl_internal_set__filterText(::UnityW<::GlobalNamespace::GameServersFilterText> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filterText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::GameServerBrowserViewController::__cordl_internal_get__createServerButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createServerButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::GameServerBrowserViewController::__cordl_internal_get__createServerButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createServerButton;
}
constexpr void GlobalNamespace::GameServerBrowserViewController::__cordl_internal_set__createServerButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____createServerButton = value;
}
constexpr ::UnityW<::GlobalNamespace::GameServersListTableView>& GlobalNamespace::GameServerBrowserViewController::__cordl_internal_get__gameServersListTableView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameServersListTableView;
}
constexpr ::UnityW<::GlobalNamespace::GameServersListTableView> const& GlobalNamespace::GameServerBrowserViewController::__cordl_internal_get__gameServersListTableView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameServersListTableView;
}
constexpr void GlobalNamespace::GameServerBrowserViewController::__cordl_internal_set__gameServersListTableView(::UnityW<::GlobalNamespace::GameServersListTableView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameServersListTableView = value;
}
constexpr ::UnityW<::GlobalNamespace::LoadingControl>& GlobalNamespace::GameServerBrowserViewController::__cordl_internal_get__mainLoadingControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainLoadingControl;
}
constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& GlobalNamespace::GameServerBrowserViewController::__cordl_internal_get__mainLoadingControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainLoadingControl;
}
constexpr void GlobalNamespace::GameServerBrowserViewController::__cordl_internal_set__mainLoadingControl(::UnityW<::GlobalNamespace::LoadingControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainLoadingControl = value;
}
constexpr ::UnityW<::GlobalNamespace::LoadingControl>& GlobalNamespace::GameServerBrowserViewController::__cordl_internal_get__smallLoadingControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smallLoadingControl;
}
constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& GlobalNamespace::GameServerBrowserViewController::__cordl_internal_get__smallLoadingControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smallLoadingControl;
}
constexpr void GlobalNamespace::GameServerBrowserViewController::__cordl_internal_set__smallLoadingControl(::UnityW<::GlobalNamespace::LoadingControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____smallLoadingControl = value;
}
inline void GlobalNamespace::GameServerBrowserViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameServerBrowserViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameServerBrowserViewController* GlobalNamespace::GameServerBrowserViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameServerBrowserViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServerBrowserViewController::GameServerBrowserViewController() {}
