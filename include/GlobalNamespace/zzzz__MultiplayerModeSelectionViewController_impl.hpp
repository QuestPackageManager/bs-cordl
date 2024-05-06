#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSelectionViewController_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSelectionViewController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton::__MultiplayerModeSelectionViewController__MenuButton(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton::__MultiplayerModeSelectionViewController__MenuButton() {}
constexpr ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton::QuickPlay{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton::CreateServer{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton::JoinWithCode{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton::GameBrowser{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionViewController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*)>(
    &::GlobalNamespace::MultiplayerModeSelectionViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2653cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(), "add_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionViewController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*)>(
    &::GlobalNamespace::MultiplayerModeSelectionViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2653d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(), "remove_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::MultiplayerModeSelectionViewController::DidActivate)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x2653e4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionViewController.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionViewController::*)(::GlobalNamespace::MultiplayerStatusData*)>(
    &::GlobalNamespace::MultiplayerModeSelectionViewController::SetData)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x2654128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(), "SetData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerStatusData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionViewController.HandleMenuButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionViewController::*)(
    ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton)>(&::GlobalNamespace::MultiplayerModeSelectionViewController::HandleMenuButton)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26543b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(), "HandleMenuButton", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionViewController::*)()>(
    &::GlobalNamespace::MultiplayerModeSelectionViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26543dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionViewController._DidActivate_b__11_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionViewController::*)()>(
    &::GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26543e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(), "<DidActivate>b__11_0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionViewController._DidActivate_b__11_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionViewController::*)()>(
    &::GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2654408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(), "<DidActivate>b__11_1",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionViewController._DidActivate_b__11_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionViewController::*)()>(
    &::GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x265442c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(), "<DidActivate>b__11_2",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionViewController._DidActivate_b__11_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionViewController::*)()>(
    &::GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_3)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2654450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(), "<DidActivate>b__11_3",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_get__quickPlayButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quickPlayButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_get__quickPlayButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quickPlayButton;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_set__quickPlayButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____quickPlayButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_get__gameBrowserButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameBrowserButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_get__gameBrowserButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameBrowserButton;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_set__gameBrowserButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameBrowserButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_get__joinWithCodeButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____joinWithCodeButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_get__joinWithCodeButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____joinWithCodeButton;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_set__joinWithCodeButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____joinWithCodeButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_get__createServerButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createServerButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_get__createServerButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createServerButton;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_set__createServerButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____createServerButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_get__maintenanceMessageText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maintenanceMessageText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_get__maintenanceMessageText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maintenanceMessageText;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_set__maintenanceMessageText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____maintenanceMessageText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_get__customServerEndPointText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customServerEndPointText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_get__customServerEndPointText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customServerEndPointText;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_set__customServerEndPointText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____customServerEndPointText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::INetworkConfig*& GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_get__networkConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> const& GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_get__networkConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkConfig;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_set__networkConfig(::GlobalNamespace::INetworkConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____networkConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*&
GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*> const&
GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionViewController::__cordl_internal_set_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerModeSelectionViewController::add_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(), "add_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerModeSelectionViewController::remove_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(), "remove_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerModeSelectionViewController>, ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerModeSelectionViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MultiplayerModeSelectionViewController::SetData(::GlobalNamespace::MultiplayerStatusData* multiplayerStatusData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(), "SetData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerStatusData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplayerStatusData);
}
inline void GlobalNamespace::MultiplayerModeSelectionViewController::HandleMenuButton(::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton menuButton) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(), "HandleMenuButton", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, menuButton);
}
inline ::GlobalNamespace::MultiplayerModeSelectionViewController* GlobalNamespace::MultiplayerModeSelectionViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerModeSelectionViewController*>());
}
inline void GlobalNamespace::MultiplayerModeSelectionViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                                                                             "<DidActivate>b__11_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                                                                             "<DidActivate>b__11_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                                                                             "<DidActivate>b__11_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerModeSelectionViewController::_DidActivate_b__11_3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                                                                             "<DidActivate>b__11_3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerModeSelectionViewController::MultiplayerModeSelectionViewController() {}
