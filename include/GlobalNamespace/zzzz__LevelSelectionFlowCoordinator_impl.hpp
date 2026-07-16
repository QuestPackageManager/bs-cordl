#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelSelectionFlowCoordinator.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__SelectLevelCategoryViewController_impl.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__LevelFilter_def.hpp"
#include "GlobalNamespace/zzzz__LevelSearchViewController_def.hpp"
#include "GlobalNamespace/zzzz__LevelSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__LevelSelectionNavigationController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__SearchFilterParamsViewController_def.hpp"
#include "GlobalNamespace/zzzz__SelectLevelCategoryViewController_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelDetailViewController_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator_State._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator_State::*)(
    ::System::Nullable_1<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>, ::GlobalNamespace::BeatmapLevelPack*, ::by_ref<::GlobalNamespace::BeatmapKey>,
    ::GlobalNamespace::BeatmapLevel*)>(&::GlobalNamespace::LevelSelectionFlowCoordinator_State::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5924310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(),
                                ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator_State._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator_State::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator_State::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5924324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator_State._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator_State::*)(::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator_State::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5924334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>& GlobalNamespace::LevelSelectionFlowCoordinator_State::__cordl_internal_get_levelCategory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelCategory;
}
constexpr ::System::Nullable_1<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory> const&
GlobalNamespace::LevelSelectionFlowCoordinator_State::__cordl_internal_get_levelCategory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelCategory;
}
constexpr void
GlobalNamespace::LevelSelectionFlowCoordinator_State::__cordl_internal_set_levelCategory(::System::Nullable_1<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelCategory = value;
}
constexpr ::GlobalNamespace::BeatmapLevelPack*& GlobalNamespace::LevelSelectionFlowCoordinator_State::__cordl_internal_get_beatmapLevelPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelPack;
}
constexpr ::GlobalNamespace::BeatmapLevelPack* const& GlobalNamespace::LevelSelectionFlowCoordinator_State::__cordl_internal_get_beatmapLevelPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelPack;
}
constexpr void GlobalNamespace::LevelSelectionFlowCoordinator_State::__cordl_internal_set_beatmapLevelPack(::GlobalNamespace::BeatmapLevelPack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapLevelPack = value;
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::LevelSelectionFlowCoordinator_State::__cordl_internal_get_beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::LevelSelectionFlowCoordinator_State::__cordl_internal_get_beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr void GlobalNamespace::LevelSelectionFlowCoordinator_State::__cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapKey = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::LevelSelectionFlowCoordinator_State::__cordl_internal_get_beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::LevelSelectionFlowCoordinator_State::__cordl_internal_get_beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr void GlobalNamespace::LevelSelectionFlowCoordinator_State::__cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapLevel = value;
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator_State::_ctor(::System::Nullable_1<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory> levelCategory,
                                                                        ::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey,
                                                                        ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(),
                              ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelCategory, beatmapLevelPack, beatmapKey, beatmapLevel);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator_State::_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapLevelPack);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator_State::_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapLevelPack, beatmapLevel);
}
inline ::GlobalNamespace::LevelSelectionFlowCoordinator_State*
GlobalNamespace::LevelSelectionFlowCoordinator_State::New_ctor(::System::Nullable_1<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory> levelCategory,
                                                               ::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey,
                                                               ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>(levelCategory, beatmapLevelPack, beatmapKey, beatmapLevel));
}
inline ::GlobalNamespace::LevelSelectionFlowCoordinator_State* GlobalNamespace::LevelSelectionFlowCoordinator_State::New_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>(beatmapLevelPack));
}
inline ::GlobalNamespace::LevelSelectionFlowCoordinator_State* GlobalNamespace::LevelSelectionFlowCoordinator_State::New_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack,
                                                                                                                              ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>(beatmapLevelPack, beatmapLevel));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelSelectionFlowCoordinator_State::LevelSelectionFlowCoordinator_State() {}
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_isInRootViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::LevelSelectionFlowCoordinator::get_isInRootViewController)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5923628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { "get_isInRootViewController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_selectedLevelCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_selectedLevelCategory)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59236a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { "get_selectedLevelCategory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_selectedBeatmapLevelPack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelPack* (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_selectedBeatmapLevelPack)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59236b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { "get_selectedBeatmapLevelPack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_selectedBeatmapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapKey (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_selectedBeatmapKey)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59236d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { "get_selectedBeatmapKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_selectedBeatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevel* (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_selectedBeatmapLevel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59236f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { "get_selectedBeatmapLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_initialTopScreenViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::ViewController> (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_initialTopScreenViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592370c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_initialLeftScreenViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::ViewController> (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_initialLeftScreenViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5923714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_initialRightScreenViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::ViewController> (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_initialRightScreenViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592371c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_showBackButtonForMainViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_showBackButtonForMainViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5923724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_hidePacksIfOneOrNone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::LevelSelectionFlowCoordinator::get_hidePacksIfOneOrNone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592372c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_hidePracticeButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::LevelSelectionFlowCoordinator::get_hidePracticeButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5923734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_actionButtonText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::LevelSelectionFlowCoordinator::get_actionButtonText)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x592373c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_mainTitle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::LevelSelectionFlowCoordinator::get_mainTitle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5923784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_enableCustomLevels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::LevelSelectionFlowCoordinator::get_enableCustomLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592378c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_songPackMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SongPackMask (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_songPackMask)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5923794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_allowedBeatmapDifficultyMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDifficultyMask (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_allowedBeatmapDifficultyMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59237a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_notAllowedCharacteristics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::BeatmapCharacteristic> (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_notAllowedCharacteristics)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59237a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.LevelSelectionFlowCoordinatorDidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidActivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59237f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.LevelSelectionFlowCoordinatorDidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidDeactivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59237f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.LevelSelectionFlowCoordinatorTopViewControllerWillChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController_AnimationType)>(
        &::GlobalNamespace::LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x59237f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.ActionButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::LevelSelectionFlowCoordinator::ActionButtonWasPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59238fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.PracticeButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::LevelSelectionFlowCoordinator::PracticeButtonWasPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5923900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.SelectionDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(::GlobalNamespace::BeatmapLevelPack*, ::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::SelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5923904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(::GlobalNamespace::LevelSelectionFlowCoordinator_State*)>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5923908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(),
                                                                                           { "Setup", {}, { ::i2c::type_of<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(bool, bool, bool)>(&::GlobalNamespace::LevelSelectionFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x5923910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(),
                                                                                           { "DidActivate", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(bool, bool)>(&::GlobalNamespace::LevelSelectionFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5923dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { "DidDeactivate", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.TopViewControllerWillChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(
    ::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController_AnimationType)>(&::GlobalNamespace::LevelSelectionFlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x592408c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(),
            { "TopViewControllerWillChange", {}, { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController_AnimationType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.HandleLevelSelectionNavigationControllerDidSelectPack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(::GlobalNamespace::LevelSelectionNavigationController*, ::GlobalNamespace::BeatmapLevelPack*)>(
        &::GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidSelectPack)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x592409c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(),
                                                { "HandleLevelSelectionNavigationControllerDidSelectPack",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::LevelSelectionNavigationController*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.HandleSearchFilterParamsViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(
    ::GlobalNamespace::SearchFilterParamsViewController*, ::GlobalNamespace::LevelFilter)>(&::GlobalNamespace::LevelSelectionFlowCoordinator::HandleSearchFilterParamsViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x59240cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(),
            { "HandleSearchFilterParamsViewControllerDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::SearchFilterParamsViewController*>(), ::i2c::type_of<::GlobalNamespace::LevelFilter>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.HandleLevelSearchViewControllerDidPressSearchButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(::GlobalNamespace::LevelSearchViewController*, ::GlobalNamespace::LevelFilter)>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSearchViewControllerDidPressSearchButton)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5924120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(),
            { "HandleLevelSearchViewControllerDidPressSearchButton", {}, { ::i2c::type_of<::GlobalNamespace::LevelSearchViewController*>(), ::i2c::type_of<::GlobalNamespace::LevelFilter>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.HandleLevelSelectionNavigationControllerDidPressActionButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(::GlobalNamespace::LevelSelectionNavigationController*)>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidPressActionButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5924184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(),
                                                { "HandleLevelSelectionNavigationControllerDidPressActionButton", {}, { ::i2c::type_of<::GlobalNamespace::LevelSelectionNavigationController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.HandleLevelSelectionNavigationControllerDidPressPracticeButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(::GlobalNamespace::LevelSelectionNavigationController*, ::GlobalNamespace::BeatmapLevel*)>(
        &::GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidPressPracticeButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5924194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.HandleLevelSelectionNavigationControllerDidChangeDifficultyBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(::GlobalNamespace::LevelSelectionNavigationController*)>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidChangeDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x59241a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.HandleLevelSelectionNavigationControllerDidChangeLevelDetailContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(::GlobalNamespace::LevelSelectionNavigationController*, ::GlobalNamespace::StandardLevelDetailViewController_ContentType)>(
        &::GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidChangeLevelDetailContent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59241f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::LevelSelectionFlowCoordinator::Refresh)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5924258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.IsMainViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::IsMainViewController)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x592427c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { "IsMainViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.PresentMainViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(::System::Action*, ::HMUI::ViewController_AnimationType)>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::PresentMainViewController)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59242ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(),
                                                             { "PresentMainViewController", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::HMUI::ViewController_AnimationType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::LevelSelectionFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5924308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::LevelSelectionFlowCoordinator::__cordl_internal_get_playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::LevelSelectionFlowCoordinator::__cordl_internal_get_playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDataModel;
}
constexpr void GlobalNamespace::LevelSelectionFlowCoordinator::__cordl_internal_set_playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerDataModel = value;
}
constexpr ::UnityW<::GlobalNamespace::LevelSelectionNavigationController>& GlobalNamespace::LevelSelectionFlowCoordinator::__cordl_internal_get_levelSelectionNavigationController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelSelectionNavigationController;
}
constexpr ::UnityW<::GlobalNamespace::LevelSelectionNavigationController> const& GlobalNamespace::LevelSelectionFlowCoordinator::__cordl_internal_get_levelSelectionNavigationController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelSelectionNavigationController;
}
constexpr void GlobalNamespace::LevelSelectionFlowCoordinator::__cordl_internal_set_levelSelectionNavigationController(::UnityW<::GlobalNamespace::LevelSelectionNavigationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelSelectionNavigationController = value;
}
constexpr ::UnityW<::GlobalNamespace::SearchFilterParamsViewController>& GlobalNamespace::LevelSelectionFlowCoordinator::__cordl_internal_get__searchFilterParamsViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____searchFilterParamsViewController;
}
constexpr ::UnityW<::GlobalNamespace::SearchFilterParamsViewController> const& GlobalNamespace::LevelSelectionFlowCoordinator::__cordl_internal_get__searchFilterParamsViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____searchFilterParamsViewController;
}
constexpr void GlobalNamespace::LevelSelectionFlowCoordinator::__cordl_internal_set__searchFilterParamsViewController(::UnityW<::GlobalNamespace::SearchFilterParamsViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____searchFilterParamsViewController = value;
}
constexpr ::UnityW<::GlobalNamespace::LevelSearchViewController>& GlobalNamespace::LevelSelectionFlowCoordinator::__cordl_internal_get__levelSearchViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelSearchViewController;
}
constexpr ::UnityW<::GlobalNamespace::LevelSearchViewController> const& GlobalNamespace::LevelSelectionFlowCoordinator::__cordl_internal_get__levelSearchViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelSearchViewController;
}
constexpr void GlobalNamespace::LevelSelectionFlowCoordinator::__cordl_internal_set__levelSearchViewController(::UnityW<::GlobalNamespace::LevelSearchViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelSearchViewController = value;
}
constexpr ::GlobalNamespace::LevelSelectionFlowCoordinator_State*& GlobalNamespace::LevelSelectionFlowCoordinator::__cordl_internal_get__startState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startState;
}
constexpr ::GlobalNamespace::LevelSelectionFlowCoordinator_State* const& GlobalNamespace::LevelSelectionFlowCoordinator::__cordl_internal_get__startState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startState;
}
constexpr void GlobalNamespace::LevelSelectionFlowCoordinator::__cordl_internal_set__startState(::GlobalNamespace::LevelSelectionFlowCoordinator_State* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startState = value;
}
inline bool GlobalNamespace::LevelSelectionFlowCoordinator::get_isInRootViewController() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { "get_isInRootViewController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory GlobalNamespace::LevelSelectionFlowCoordinator::get_selectedLevelCategory() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { "get_selectedLevelCategory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelPack* GlobalNamespace::LevelSelectionFlowCoordinator::get_selectedBeatmapLevelPack() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { "get_selectedBeatmapLevelPack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPack*>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapKey GlobalNamespace::LevelSelectionFlowCoordinator::get_selectedBeatmapKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { "get_selectedBeatmapKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevel* GlobalNamespace::LevelSelectionFlowCoordinator::get_selectedBeatmapLevel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { "get_selectedBeatmapLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevel*>(this, ___internal_method);
}
inline ::UnityW<::HMUI::ViewController> GlobalNamespace::LevelSelectionFlowCoordinator::get_initialTopScreenViewController() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>>(this, ___internal_method);
}
inline ::UnityW<::HMUI::ViewController> GlobalNamespace::LevelSelectionFlowCoordinator::get_initialLeftScreenViewController() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>>(this, ___internal_method);
}
inline ::UnityW<::HMUI::ViewController> GlobalNamespace::LevelSelectionFlowCoordinator::get_initialRightScreenViewController() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>>(this, ___internal_method);
}
inline bool GlobalNamespace::LevelSelectionFlowCoordinator::get_showBackButtonForMainViewController() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::LevelSelectionFlowCoordinator::get_hidePacksIfOneOrNone() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::LevelSelectionFlowCoordinator::get_hidePracticeButton() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LevelSelectionFlowCoordinator::get_actionButtonText() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LevelSelectionFlowCoordinator::get_mainTitle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::LevelSelectionFlowCoordinator::get_enableCustomLevels() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::SongPackMask GlobalNamespace::LevelSelectionFlowCoordinator::get_songPackMask() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDifficultyMask GlobalNamespace::LevelSelectionFlowCoordinator::get_allowedBeatmapDifficultyMask() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficultyMask>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::BeatmapCharacteristic> GlobalNamespace::LevelSelectionFlowCoordinator::get_notAllowedCharacteristics() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>>(this, ___internal_method);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange(::HMUI::ViewController* oldViewController,
                                                                                                                     ::HMUI::ViewController* newViewController,
                                                                                                                     ::HMUI::ViewController_AnimationType animationType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::ActionButtonWasPressed() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::PracticeButtonWasPressed() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::SelectionDidChange(::GlobalNamespace::BeatmapLevelPack* pack, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pack, beatmapKey);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::Setup(::GlobalNamespace::LevelSelectionFlowCoordinator_State* state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(),
                                                                                         { "Setup", {}, { ::i2c::type_of<::GlobalNamespace::LevelSelectionFlowCoordinator_State*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(),
                                                                                         { "DidActivate", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { "DidDeactivate", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                                        ::HMUI::ViewController_AnimationType animationType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(),
          { "TopViewControllerWillChange", {}, { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController_AnimationType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidSelectPack(::GlobalNamespace::LevelSelectionNavigationController* viewController,
                                                                                                                  ::GlobalNamespace::BeatmapLevelPack* pack) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(),
                                                           { "HandleLevelSelectionNavigationControllerDidSelectPack",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::LevelSelectionNavigationController*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController, pack);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::HandleSearchFilterParamsViewControllerDidFinish(::GlobalNamespace::SearchFilterParamsViewController* viewController,
                                                                                                            ::GlobalNamespace::LevelFilter filter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(),
          { "HandleSearchFilterParamsViewControllerDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::SearchFilterParamsViewController*>(), ::i2c::type_of<::GlobalNamespace::LevelFilter>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController, filter);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSearchViewControllerDidPressSearchButton(::GlobalNamespace::LevelSearchViewController* viewController,
                                                                                                                ::GlobalNamespace::LevelFilter filter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(),
          { "HandleLevelSearchViewControllerDidPressSearchButton", {}, { ::i2c::type_of<::GlobalNamespace::LevelSearchViewController*>(), ::i2c::type_of<::GlobalNamespace::LevelFilter>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController, filter);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidPressActionButton(::GlobalNamespace::LevelSelectionNavigationController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(),
                                              { "HandleLevelSelectionNavigationControllerDidPressActionButton", {}, { ::i2c::type_of<::GlobalNamespace::LevelSelectionNavigationController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidPressPracticeButton(::GlobalNamespace::LevelSelectionNavigationController* viewController,
                                                                                                                           ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController, beatmapLevel);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidChangeDifficultyBeatmap(::GlobalNamespace::LevelSelectionNavigationController* viewController) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController);
}
inline void
GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidChangeLevelDetailContent(::GlobalNamespace::LevelSelectionNavigationController* viewController,
                                                                                                                    ::GlobalNamespace::StandardLevelDetailViewController_ContentType contentType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController, contentType);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::Refresh() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LevelSelectionFlowCoordinator::IsMainViewController(::HMUI::ViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { "IsMainViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::PresentMainViewController(::System::Action* finishedCallback, ::HMUI::ViewController_AnimationType animationType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(),
                                                           { "PresentMainViewController", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::HMUI::ViewController_AnimationType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finishedCallback, animationType);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSelectionFlowCoordinator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelSelectionFlowCoordinator* GlobalNamespace::LevelSelectionFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelSelectionFlowCoordinator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinator() {}
