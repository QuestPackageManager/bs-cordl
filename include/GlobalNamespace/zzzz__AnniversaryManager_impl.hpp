#pragma once
// IWYU pragma private; include "GlobalNamespace/AnniversaryManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AnniversaryManager_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "GlobalNamespace/zzzz__FireworksController_def.hpp"
#include "GlobalNamespace/zzzz__MainMenuViewController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnniversaryManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnniversaryManager::*)()>(&::GlobalNamespace::AnniversaryManager::Start)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x58b1570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnniversaryManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnniversaryManager.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnniversaryManager::*)()>(&::GlobalNamespace::AnniversaryManager::OnDestroy)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x58b1688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnniversaryManager*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnniversaryManager.HandleMainMenuViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnniversaryManager::*)(
    ::GlobalNamespace::MainMenuViewController*, ::GlobalNamespace::MainMenuViewController_MenuButton)>(&::GlobalNamespace::AnniversaryManager::HandleMainMenuViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58b17c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnniversaryManager*>(),
                                                { "HandleMainMenuViewControllerDidFinish",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::MainMenuViewController*>(), ::i2c::type_of<::GlobalNamespace::MainMenuViewController_MenuButton>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnniversaryManager.HandleMainMenuViewControllerPromoButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnniversaryManager::*)(::GlobalNamespace::DlcPromoPanelModel_PromoInfo*)>(
    &::GlobalNamespace::AnniversaryManager::HandleMainMenuViewControllerPromoButtonWasPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58b17e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnniversaryManager*>(),
                                                             { "HandleMainMenuViewControllerPromoButtonWasPressed", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnniversaryManager.StartFireworks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnniversaryManager::*)()>(&::GlobalNamespace::AnniversaryManager::StartFireworks)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58b166c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnniversaryManager*>(), { "StartFireworks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnniversaryManager.StopFireworks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnniversaryManager::*)()>(&::GlobalNamespace::AnniversaryManager::StopFireworks)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58b17cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnniversaryManager*>(), { "StopFireworks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnniversaryManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnniversaryManager::*)()>(&::GlobalNamespace::AnniversaryManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58b17ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnniversaryManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FireworksController>& GlobalNamespace::AnniversaryManager::__cordl_internal_get__fireworksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fireworksController;
}
constexpr ::UnityW<::GlobalNamespace::FireworksController> const& GlobalNamespace::AnniversaryManager::__cordl_internal_get__fireworksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fireworksController;
}
constexpr void GlobalNamespace::AnniversaryManager::__cordl_internal_set__fireworksController(::UnityW<::GlobalNamespace::FireworksController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fireworksController = value;
}
constexpr ::UnityW<::GlobalNamespace::MainMenuViewController>& GlobalNamespace::AnniversaryManager::__cordl_internal_get__mainMenuViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainMenuViewController;
}
constexpr ::UnityW<::GlobalNamespace::MainMenuViewController> const& GlobalNamespace::AnniversaryManager::__cordl_internal_get__mainMenuViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainMenuViewController;
}
constexpr void GlobalNamespace::AnniversaryManager::__cordl_internal_set__mainMenuViewController(::UnityW<::GlobalNamespace::MainMenuViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainMenuViewController = value;
}
inline void GlobalNamespace::AnniversaryManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnniversaryManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnniversaryManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnniversaryManager*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnniversaryManager::HandleMainMenuViewControllerDidFinish(::GlobalNamespace::MainMenuViewController* mainMenuViewController,
                                                                                       ::GlobalNamespace::MainMenuViewController_MenuButton menuButton) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::AnniversaryManager*>(),
          { "HandleMainMenuViewControllerDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::MainMenuViewController*>(), ::i2c::type_of<::GlobalNamespace::MainMenuViewController_MenuButton>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mainMenuViewController, menuButton);
}
inline void GlobalNamespace::AnniversaryManager::HandleMainMenuViewControllerPromoButtonWasPressed(::GlobalNamespace::DlcPromoPanelModel_PromoInfo* promoInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnniversaryManager*>(),
                                                           { "HandleMainMenuViewControllerPromoButtonWasPressed", {}, { ::i2c::type_of<::GlobalNamespace::DlcPromoPanelModel_PromoInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, promoInfo);
}
inline void GlobalNamespace::AnniversaryManager::StartFireworks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnniversaryManager*>(), { "StartFireworks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnniversaryManager::StopFireworks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnniversaryManager*>(), { "StopFireworks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnniversaryManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnniversaryManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AnniversaryManager* GlobalNamespace::AnniversaryManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AnniversaryManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnniversaryManager::AnniversaryManager() {}
