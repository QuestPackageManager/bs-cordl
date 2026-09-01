#pragma once
// IWYU pragma private; include "GlobalNamespace\EnterPlayerGuestNameViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EnterPlayerGuestNameViewController_def.hpp"
#include "GlobalNamespace/zzzz__EnterPlayerGuestNameViewController_def.hpp"
#include "GlobalNamespace/zzzz__GuestNameButtonsListItem_def.hpp"
#include "GlobalNamespace/zzzz__GuestNameButtonsListItemsList_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__StringSignal_def.hpp"
#include "HMUI/zzzz__InputFieldView_def.hpp"
#include "HMUI/zzzz__UIKeyboard_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5a18d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate::*)(
    ::GlobalNamespace::EnterPlayerGuestNameViewController*, ::StringW)>(&::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a18e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate::*)(::GlobalNamespace::EnterPlayerGuestNameViewController*, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a18ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a18ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate::Invoke(::GlobalNamespace::EnterPlayerGuestNameViewController* viewController, ::StringW playerName) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController, playerName);
}
inline ::System::IAsyncResult* GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate::BeginInvoke(::GlobalNamespace::EnterPlayerGuestNameViewController* viewController,
                                                                                                               ::StringW playerName, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, viewController, playerName, callback, object);
}
inline void GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate* GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate::New_ctor(::System::Object* object,
                                                                                                                                                          ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate::EnterPlayerGuestNameViewController_FinishDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0::*)()>(
    &::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a18b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0._DidActivate_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0::*)(int32_t, ::GlobalNamespace::GuestNameButtonsListItem*)>(
    &::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0::_DidActivate_b__0)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5a18ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0*>(),
                                                             { "<DidActivate>b__0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GuestNameButtonsListItem*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::EnterPlayerGuestNameViewController>& GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::EnterPlayerGuestNameViewController> const& GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EnterPlayerGuestNameViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0::__cordl_internal_get_guestPlayerNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___guestPlayerNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0::__cordl_internal_get_guestPlayerNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___guestPlayerNames;
}
constexpr void GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0::__cordl_internal_set_guestPlayerNames(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___guestPlayerNames = value;
}
inline void GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0::_DidActivate_b__0(int32_t idx, ::GlobalNamespace::GuestNameButtonsListItem* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0*>(),
                                                           { "<DidActivate>b__0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GuestNameButtonsListItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, item);
}
inline ::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0* GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0::EnterPlayerGuestNameViewController___c__DisplayClass11_0() {}
//  Writing Method size for method: ::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1::*)()>(
    &::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a19024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1._DidActivate_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1::*)()>(
    &::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1::_DidActivate_b__1)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a19028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1*>(), { "<DidActivate>b__1", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1::__cordl_internal_get_guestPlayerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___guestPlayerName;
}
constexpr ::StringW const& GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1::__cordl_internal_get_guestPlayerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___guestPlayerName;
}
constexpr void GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1::__cordl_internal_set_guestPlayerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___guestPlayerName = value;
}
constexpr ::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0*&
GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0* const&
GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void
GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1::__cordl_internal_set_CS$__8__locals1(::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CS$__8__locals1 = value;
}
inline void GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1::_DidActivate_b__1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1*>(), { "<DidActivate>b__1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1* GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnterPlayerGuestNameViewController___c__DisplayClass11_1::EnterPlayerGuestNameViewController___c__DisplayClass11_1() {}
//  Writing Method size for method: ::GlobalNamespace::EnterPlayerGuestNameViewController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnterPlayerGuestNameViewController::*)(::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate*)>(
    &::GlobalNamespace::EnterPlayerGuestNameViewController::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a18928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController*>(),
                                                             { "Init", {}, { ::i2c::type_of<::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnterPlayerGuestNameViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnterPlayerGuestNameViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::EnterPlayerGuestNameViewController::DidActivate)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5a18930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnterPlayerGuestNameViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnterPlayerGuestNameViewController::*)(bool, bool)>(
    &::GlobalNamespace::EnterPlayerGuestNameViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5a18b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnterPlayerGuestNameViewController.OkButtonPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnterPlayerGuestNameViewController::*)()>(&::GlobalNamespace::EnterPlayerGuestNameViewController::OkButtonPressed)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5a18c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController*>(), { "OkButtonPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnterPlayerGuestNameViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnterPlayerGuestNameViewController::*)()>(&::GlobalNamespace::EnterPlayerGuestNameViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a18d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::StringSignal>& GlobalNamespace::EnterPlayerGuestNameViewController::__cordl_internal_get__playerNameWasEnteredSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerNameWasEnteredSignal;
}
constexpr ::UnityW<::GlobalNamespace::StringSignal> const& GlobalNamespace::EnterPlayerGuestNameViewController::__cordl_internal_get__playerNameWasEnteredSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerNameWasEnteredSignal;
}
constexpr void GlobalNamespace::EnterPlayerGuestNameViewController::__cordl_internal_set__playerNameWasEnteredSignal(::UnityW<::GlobalNamespace::StringSignal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerNameWasEnteredSignal = value;
}
constexpr ::UnityW<::HMUI::UIKeyboard>& GlobalNamespace::EnterPlayerGuestNameViewController::__cordl_internal_get__uiKeyboard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiKeyboard;
}
constexpr ::UnityW<::HMUI::UIKeyboard> const& GlobalNamespace::EnterPlayerGuestNameViewController::__cordl_internal_get__uiKeyboard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiKeyboard;
}
constexpr void GlobalNamespace::EnterPlayerGuestNameViewController::__cordl_internal_set__uiKeyboard(::UnityW<::HMUI::UIKeyboard> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uiKeyboard = value;
}
constexpr ::UnityW<::HMUI::InputFieldView>& GlobalNamespace::EnterPlayerGuestNameViewController::__cordl_internal_get__nameInputFieldView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameInputFieldView;
}
constexpr ::UnityW<::HMUI::InputFieldView> const& GlobalNamespace::EnterPlayerGuestNameViewController::__cordl_internal_get__nameInputFieldView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameInputFieldView;
}
constexpr void GlobalNamespace::EnterPlayerGuestNameViewController::__cordl_internal_set__nameInputFieldView(::UnityW<::HMUI::InputFieldView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nameInputFieldView = value;
}
constexpr ::UnityW<::GlobalNamespace::GuestNameButtonsListItemsList>& GlobalNamespace::EnterPlayerGuestNameViewController::__cordl_internal_get__guestNameButtonsListItemsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____guestNameButtonsListItemsList;
}
constexpr ::UnityW<::GlobalNamespace::GuestNameButtonsListItemsList> const& GlobalNamespace::EnterPlayerGuestNameViewController::__cordl_internal_get__guestNameButtonsListItemsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____guestNameButtonsListItemsList;
}
constexpr void GlobalNamespace::EnterPlayerGuestNameViewController::__cordl_internal_set__guestNameButtonsListItemsList(::UnityW<::GlobalNamespace::GuestNameButtonsListItemsList> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____guestNameButtonsListItemsList = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::EnterPlayerGuestNameViewController::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::EnterPlayerGuestNameViewController::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::EnterPlayerGuestNameViewController::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate*& GlobalNamespace::EnterPlayerGuestNameViewController::__cordl_internal_get__didFinishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didFinishCallback;
}
constexpr ::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate* const& GlobalNamespace::EnterPlayerGuestNameViewController::__cordl_internal_get__didFinishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didFinishCallback;
}
constexpr void GlobalNamespace::EnterPlayerGuestNameViewController::__cordl_internal_set__didFinishCallback(::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didFinishCallback = value;
}
inline void GlobalNamespace::EnterPlayerGuestNameViewController::Init(::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate* didFinishCallback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::GlobalNamespace::EnterPlayerGuestNameViewController_FinishDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, didFinishCallback);
}
inline void GlobalNamespace::EnterPlayerGuestNameViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::EnterPlayerGuestNameViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::EnterPlayerGuestNameViewController::OkButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController*>(), { "OkButtonPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnterPlayerGuestNameViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnterPlayerGuestNameViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnterPlayerGuestNameViewController* GlobalNamespace::EnterPlayerGuestNameViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnterPlayerGuestNameViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnterPlayerGuestNameViewController::EnterPlayerGuestNameViewController() {}
