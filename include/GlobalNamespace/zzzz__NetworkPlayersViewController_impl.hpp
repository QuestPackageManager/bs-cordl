#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkPlayersViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayersViewController_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayersTableView_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersViewController.get_myPartyTitle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkPlayersViewController::*)()>(&::GlobalNamespace::NetworkPlayersViewController::get_myPartyTitle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), { ::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersViewController.get_otherPlayersTitle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NetworkPlayersViewController::*)()>(&::GlobalNamespace::NetworkPlayersViewController::get_otherPlayersTitle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), { ::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersViewController.get_networkPlayerModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::INetworkPlayerModel* (::GlobalNamespace::NetworkPlayersViewController::*)()>(
    &::GlobalNamespace::NetworkPlayersViewController::get_networkPlayerModel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), { ::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersViewController.add_onJoinRequestEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayersViewController::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(
    &::GlobalNamespace::NetworkPlayersViewController::add_onJoinRequestEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a151b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(),
                                                             { "add_onJoinRequestEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersViewController.remove_onJoinRequestEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayersViewController::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(
    &::GlobalNamespace::NetworkPlayersViewController::remove_onJoinRequestEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a15270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(),
                                                             { "remove_onJoinRequestEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersViewController.add_onInviteRequestEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayersViewController::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(
    &::GlobalNamespace::NetworkPlayersViewController::add_onInviteRequestEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a15330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(),
                                                             { "add_onInviteRequestEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersViewController.remove_onInviteRequestEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayersViewController::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(
    &::GlobalNamespace::NetworkPlayersViewController::remove_onInviteRequestEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a153f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(),
                                                             { "remove_onInviteRequestEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayersViewController::*)(bool, bool, bool)>(&::GlobalNamespace::NetworkPlayersViewController::DidActivate)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5a154b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), { ::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersViewController.NetworkPlayersViewControllerDidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayersViewController::*)(bool, bool)>(
    &::GlobalNamespace::NetworkPlayersViewController::NetworkPlayersViewControllerDidActivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1593c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), { ::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayersViewController::*)(bool, bool)>(&::GlobalNamespace::NetworkPlayersViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5a15940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), { ::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersViewController.NetworkPlayersViewControllerDidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayersViewController::*)(bool)>(
    &::GlobalNamespace::NetworkPlayersViewController::NetworkPlayersViewControllerDidDeactivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a15c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), { ::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayersViewController::*)()>(&::GlobalNamespace::NetworkPlayersViewController::OnDestroy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a15c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), { ::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersViewController.HandlePartyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayersViewController::*)(::GlobalNamespace::INetworkPlayerModel*)>(
    &::GlobalNamespace::NetworkPlayersViewController::HandlePartyChanged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a15c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(),
                                                                                           { "HandlePartyChanged", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayerModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersViewController.HandleJoinRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayersViewController::*)(::GlobalNamespace::INetworkPlayer*)>(
    &::GlobalNamespace::NetworkPlayersViewController::HandleJoinRequest)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a15c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), { "HandleJoinRequest", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersViewController.HandleInviteRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayersViewController::*)(::GlobalNamespace::INetworkPlayer*)>(
    &::GlobalNamespace::NetworkPlayersViewController::HandleInviteRequest)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a15c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(),
                                                                                           { "HandleInviteRequest", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersViewController.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayersViewController::*)()>(&::GlobalNamespace::NetworkPlayersViewController::Refresh)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5a157a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), { "Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayersViewController::*)()>(&::GlobalNamespace::NetworkPlayersViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a15c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NetworkPlayersTableView>& GlobalNamespace::NetworkPlayersViewController::__cordl_internal_get__networkPlayersTableView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkPlayersTableView;
}
constexpr ::UnityW<::GlobalNamespace::NetworkPlayersTableView> const& GlobalNamespace::NetworkPlayersViewController::__cordl_internal_get__networkPlayersTableView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkPlayersTableView;
}
constexpr void GlobalNamespace::NetworkPlayersViewController::__cordl_internal_set__networkPlayersTableView(::UnityW<::GlobalNamespace::NetworkPlayersTableView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____networkPlayersTableView = value;
}
constexpr bool& GlobalNamespace::NetworkPlayersViewController::__cordl_internal_get__refreshIsNeeded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshIsNeeded;
}
constexpr bool const& GlobalNamespace::NetworkPlayersViewController::__cordl_internal_get__refreshIsNeeded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshIsNeeded;
}
constexpr void GlobalNamespace::NetworkPlayersViewController::__cordl_internal_set__refreshIsNeeded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____refreshIsNeeded = value;
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& GlobalNamespace::NetworkPlayersViewController::__cordl_internal_get_onJoinRequestEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onJoinRequestEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* const& GlobalNamespace::NetworkPlayersViewController::__cordl_internal_get_onJoinRequestEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onJoinRequestEvent;
}
constexpr void GlobalNamespace::NetworkPlayersViewController::__cordl_internal_set_onJoinRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onJoinRequestEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& GlobalNamespace::NetworkPlayersViewController::__cordl_internal_get_onInviteRequestEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onInviteRequestEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* const& GlobalNamespace::NetworkPlayersViewController::__cordl_internal_get_onInviteRequestEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onInviteRequestEvent;
}
constexpr void GlobalNamespace::NetworkPlayersViewController::__cordl_internal_set_onInviteRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onInviteRequestEvent = value;
}
inline ::StringW GlobalNamespace::NetworkPlayersViewController::get_myPartyTitle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::NetworkPlayersViewController::get_otherPlayersTitle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::INetworkPlayerModel* GlobalNamespace::NetworkPlayersViewController::get_networkPlayerModel() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPlayerModel*>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkPlayersViewController::add_onJoinRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(),
                                                           { "add_onJoinRequestEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NetworkPlayersViewController::remove_onJoinRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(),
                                                           { "remove_onJoinRequestEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NetworkPlayersViewController::add_onInviteRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(),
                                                           { "add_onInviteRequestEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NetworkPlayersViewController::remove_onInviteRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(),
                                                           { "remove_onInviteRequestEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NetworkPlayersViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::NetworkPlayersViewController::NetworkPlayersViewControllerDidActivate(bool firstActivation, bool addedToHierarchy) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy);
}
inline void GlobalNamespace::NetworkPlayersViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::NetworkPlayersViewController::NetworkPlayersViewControllerDidDeactivate(bool removedFromHierarchy) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy);
}
inline void GlobalNamespace::NetworkPlayersViewController::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkPlayersViewController::HandlePartyChanged(::GlobalNamespace::INetworkPlayerModel* playerModel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(),
                                                                                         { "HandlePartyChanged", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayerModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerModel);
}
inline void GlobalNamespace::NetworkPlayersViewController::HandleJoinRequest(::GlobalNamespace::INetworkPlayer* player) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), { "HandleJoinRequest", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::NetworkPlayersViewController::HandleInviteRequest(::GlobalNamespace::INetworkPlayer* player) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), { "HandleInviteRequest", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::NetworkPlayersViewController::Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkPlayersViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayersViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NetworkPlayersViewController* GlobalNamespace::NetworkPlayersViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkPlayersViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkPlayersViewController::NetworkPlayersViewController() {}
