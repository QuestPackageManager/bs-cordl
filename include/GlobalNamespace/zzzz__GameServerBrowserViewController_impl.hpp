#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__GameServerBrowserViewController_def.hpp"
#include "GlobalNamespace/zzzz__GameServersFilterText_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "GlobalNamespace/zzzz__GameServersListTableView_def.hpp"
#include "GlobalNamespace/zzzz__LoadingControl_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameServerBrowserViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerBrowserViewController::*)()>(
    &::GlobalNamespace::GameServerBrowserViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218a8e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerBrowserViewController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::GameServerBrowserViewController::__get__filterServersButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterServersButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::GameServerBrowserViewController::__get__filterServersButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterServersButton;
}
constexpr void GlobalNamespace::GameServerBrowserViewController::__set__filterServersButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filterServersButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameServersFilterText*& GlobalNamespace::GameServerBrowserViewController::__get__filterText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterText;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServersFilterText*> const& GlobalNamespace::GameServerBrowserViewController::__get__filterText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterText;
}
constexpr void GlobalNamespace::GameServerBrowserViewController::__set__filterText(::GlobalNamespace::GameServersFilterText* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filterText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Toggle*& GlobalNamespace::GameServerBrowserViewController::__get__canBeInvitedOnLocalNetworkToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canBeInvitedOnLocalNetworkToggle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& GlobalNamespace::GameServerBrowserViewController::__get__canBeInvitedOnLocalNetworkToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canBeInvitedOnLocalNetworkToggle;
}
constexpr void GlobalNamespace::GameServerBrowserViewController::__set__canBeInvitedOnLocalNetworkToggle(::UnityEngine::UI::Toggle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____canBeInvitedOnLocalNetworkToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::GameServerBrowserViewController::__get__createServerButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createServerButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::GameServerBrowserViewController::__get__createServerButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createServerButton;
}
constexpr void GlobalNamespace::GameServerBrowserViewController::__set__createServerButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____createServerButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameServersListTableView*& GlobalNamespace::GameServerBrowserViewController::__get__gameServersListTableView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameServersListTableView;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServersListTableView*> const& GlobalNamespace::GameServerBrowserViewController::__get__gameServersListTableView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameServersListTableView;
}
constexpr void GlobalNamespace::GameServerBrowserViewController::__set__gameServersListTableView(::GlobalNamespace::GameServersListTableView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameServersListTableView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LoadingControl*& GlobalNamespace::GameServerBrowserViewController::__get__mainLoadingControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainLoadingControl;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LoadingControl*> const& GlobalNamespace::GameServerBrowserViewController::__get__mainLoadingControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainLoadingControl;
}
constexpr void GlobalNamespace::GameServerBrowserViewController::__set__mainLoadingControl(::GlobalNamespace::LoadingControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainLoadingControl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LoadingControl*& GlobalNamespace::GameServerBrowserViewController::__get__smallLoadingControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smallLoadingControl;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LoadingControl*> const& GlobalNamespace::GameServerBrowserViewController::__get__smallLoadingControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smallLoadingControl;
}
constexpr void GlobalNamespace::GameServerBrowserViewController::__set__smallLoadingControl(::GlobalNamespace::LoadingControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____smallLoadingControl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::GameServerBrowserViewController* GlobalNamespace::GameServerBrowserViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameServerBrowserViewController*>());
}
inline void GlobalNamespace::GameServerBrowserViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerBrowserViewController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServerBrowserViewController::GameServerBrowserViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
