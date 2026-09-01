#pragma once
// IWYU pragma private; include "GlobalNamespace\StandardLevelBuyView.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelBuyView_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "HMUI/zzzz__ToggleBinder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyView.add_didFavoriteToggleChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelBuyView::*)(::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>*)>(
    &::GlobalNamespace::StandardLevelBuyView::add_didFavoriteToggleChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a26114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyView*>(),
                                                             { "add_didFavoriteToggleChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyView.remove_didFavoriteToggleChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelBuyView::*)(::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>*)>(
    &::GlobalNamespace::StandardLevelBuyView::remove_didFavoriteToggleChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a261d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyView*>(),
                                                             { "remove_didFavoriteToggleChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyView.get_buyButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Button> (::GlobalNamespace::StandardLevelBuyView::*)()>(&::GlobalNamespace::StandardLevelBuyView::get_buyButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a26294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyView*>(), { "get_buyButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyView.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelBuyView::*)()>(&::GlobalNamespace::StandardLevelBuyView::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5a2629c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyView*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyView.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelBuyView::*)()>(&::GlobalNamespace::StandardLevelBuyView::OnDestroy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a263ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyView*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyView.SetContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelBuyView::*)(::GlobalNamespace::BeatmapLevel*)>(&::GlobalNamespace::StandardLevelBuyView::SetContent)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a263c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyView*>(), { "SetContent", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyView.RefreshFavouriteToggle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelBuyView::*)()>(&::GlobalNamespace::StandardLevelBuyView::RefreshFavouriteToggle)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a263f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyView*>(), { "RefreshFavouriteToggle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelBuyView::*)()>(&::GlobalNamespace::StandardLevelBuyView::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a26438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyView._Awake_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelBuyView::*)(bool)>(&::GlobalNamespace::StandardLevelBuyView::_Awake_b__12_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a2643c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyView*>(), { "<Awake>b__12_0", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LevelBar>& GlobalNamespace::StandardLevelBuyView::__cordl_internal_get__levelBar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelBar;
}
constexpr ::UnityW<::GlobalNamespace::LevelBar> const& GlobalNamespace::StandardLevelBuyView::__cordl_internal_get__levelBar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelBar;
}
constexpr void GlobalNamespace::StandardLevelBuyView::__cordl_internal_set__levelBar(::UnityW<::GlobalNamespace::LevelBar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelBar = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::StandardLevelBuyView::__cordl_internal_get__steamMessageGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamMessageGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::StandardLevelBuyView::__cordl_internal_get__steamMessageGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamMessageGameObject;
}
constexpr void GlobalNamespace::StandardLevelBuyView::__cordl_internal_set__steamMessageGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____steamMessageGameObject = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::StandardLevelBuyView::__cordl_internal_get__buyButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buyButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::StandardLevelBuyView::__cordl_internal_get__buyButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buyButton;
}
constexpr void GlobalNamespace::StandardLevelBuyView::__cordl_internal_set__buyButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buyButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::StandardLevelBuyView::__cordl_internal_get__favoriteToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____favoriteToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::StandardLevelBuyView::__cordl_internal_get__favoriteToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____favoriteToggle;
}
constexpr void GlobalNamespace::StandardLevelBuyView::__cordl_internal_set__favoriteToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____favoriteToggle = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::StandardLevelBuyView::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::StandardLevelBuyView::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::StandardLevelBuyView::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>*& GlobalNamespace::StandardLevelBuyView::__cordl_internal_get_didFavoriteToggleChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFavoriteToggleChangeEvent;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* const& GlobalNamespace::StandardLevelBuyView::__cordl_internal_get_didFavoriteToggleChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFavoriteToggleChangeEvent;
}
constexpr void GlobalNamespace::StandardLevelBuyView::__cordl_internal_set_didFavoriteToggleChangeEvent(::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFavoriteToggleChangeEvent = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::StandardLevelBuyView::__cordl_internal_get__beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::StandardLevelBuyView::__cordl_internal_get__beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel;
}
constexpr void GlobalNamespace::StandardLevelBuyView::__cordl_internal_set__beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevel = value;
}
constexpr ::HMUI::ToggleBinder*& GlobalNamespace::StandardLevelBuyView::__cordl_internal_get__toggleBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr ::HMUI::ToggleBinder* const& GlobalNamespace::StandardLevelBuyView::__cordl_internal_get__toggleBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr void GlobalNamespace::StandardLevelBuyView::__cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toggleBinder = value;
}
inline void GlobalNamespace::StandardLevelBuyView::add_didFavoriteToggleChangeEvent(::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyView*>(),
                                                           { "add_didFavoriteToggleChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelBuyView::remove_didFavoriteToggleChangeEvent(::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyView*>(),
                                                           { "remove_didFavoriteToggleChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UI::Button> GlobalNamespace::StandardLevelBuyView::get_buyButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyView*>(), { "get_buyButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Button>>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelBuyView::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyView*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelBuyView::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyView*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelBuyView::SetContent(::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyView*>(), { "SetContent", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapLevel);
}
inline void GlobalNamespace::StandardLevelBuyView::RefreshFavouriteToggle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyView*>(), { "RefreshFavouriteToggle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelBuyView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelBuyView::_Awake_b__12_0(bool _) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelBuyView*>(), { "<Awake>b__12_0", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::GlobalNamespace::StandardLevelBuyView* GlobalNamespace::StandardLevelBuyView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StandardLevelBuyView*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelBuyView::StandardLevelBuyView() {}
