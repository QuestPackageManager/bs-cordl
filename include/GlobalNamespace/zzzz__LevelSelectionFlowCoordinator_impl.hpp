#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelSelectionFlowCoordinator.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__SelectLevelCategoryViewController_impl.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
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
//  Writing Method size for method: ::GlobalNamespace::__LevelSelectionFlowCoordinator__State._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelSelectionFlowCoordinator__State::*)(
    ::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>, ::GlobalNamespace::BeatmapLevelPack*, ByRef<::GlobalNamespace::BeatmapKey>,
    ::GlobalNamespace::BeatmapLevel*)>(&::GlobalNamespace::__LevelSelectionFlowCoordinator__State::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x27624c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelSelectionFlowCoordinator__State._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelSelectionFlowCoordinator__State::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::__LevelSelectionFlowCoordinator__State::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2762514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelSelectionFlowCoordinator__State._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelSelectionFlowCoordinator__State::*)(
    ::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::BeatmapLevel*)>(&::GlobalNamespace::__LevelSelectionFlowCoordinator__State::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2762544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>& GlobalNamespace::__LevelSelectionFlowCoordinator__State::__cordl_internal_get_levelCategory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelCategory;
}
constexpr ::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory> const&
GlobalNamespace::__LevelSelectionFlowCoordinator__State::__cordl_internal_get_levelCategory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelCategory;
}
constexpr void
GlobalNamespace::__LevelSelectionFlowCoordinator__State::__cordl_internal_set_levelCategory(::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelCategory = value;
}
constexpr ::GlobalNamespace::BeatmapLevelPack*& GlobalNamespace::__LevelSelectionFlowCoordinator__State::__cordl_internal_get_beatmapLevelPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelPack;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPack*> const& GlobalNamespace::__LevelSelectionFlowCoordinator__State::__cordl_internal_get_beatmapLevelPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelPack;
}
constexpr void GlobalNamespace::__LevelSelectionFlowCoordinator__State::__cordl_internal_set_beatmapLevelPack(::GlobalNamespace::BeatmapLevelPack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapLevelPack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::__LevelSelectionFlowCoordinator__State::__cordl_internal_get_beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::__LevelSelectionFlowCoordinator__State::__cordl_internal_get_beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr void GlobalNamespace::__LevelSelectionFlowCoordinator__State::__cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapKey = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::__LevelSelectionFlowCoordinator__State::__cordl_internal_get_beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& GlobalNamespace::__LevelSelectionFlowCoordinator__State::__cordl_internal_get_beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr void GlobalNamespace::__LevelSelectionFlowCoordinator__State::__cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__LevelSelectionFlowCoordinator__State*
GlobalNamespace::__LevelSelectionFlowCoordinator__State::New_ctor(::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory> levelCategory,
                                                                  ::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey,
                                                                  ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>(levelCategory, beatmapLevelPack, beatmapKey, beatmapLevel));
}
inline void GlobalNamespace::__LevelSelectionFlowCoordinator__State::_ctor(::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory> levelCategory,
                                                                           ::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey,
                                                                           ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelCategory, beatmapLevelPack, beatmapKey, beatmapLevel);
}
inline ::GlobalNamespace::__LevelSelectionFlowCoordinator__State* GlobalNamespace::__LevelSelectionFlowCoordinator__State::New_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>(beatmapLevelPack));
}
inline void GlobalNamespace::__LevelSelectionFlowCoordinator__State::_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevelPack);
}
inline ::GlobalNamespace::__LevelSelectionFlowCoordinator__State* GlobalNamespace::__LevelSelectionFlowCoordinator__State::New_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack,
                                                                                                                                    ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>(beatmapLevelPack, beatmapLevel));
}
inline void GlobalNamespace::__LevelSelectionFlowCoordinator__State::_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevelPack, beatmapLevel);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LevelSelectionFlowCoordinator__State::__LevelSelectionFlowCoordinator__State() {}
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_isInRootViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_isInRootViewController)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x27617a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                                               "get_isInRootViewController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_selectedLevelCategory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory (
    ::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(&::GlobalNamespace::LevelSelectionFlowCoordinator::get_selectedLevelCategory)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2761814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                                               "get_selectedLevelCategory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_selectedBeatmapLevelPack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelPack* (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_selectedBeatmapLevelPack)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2761830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                                               "get_selectedBeatmapLevelPack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_selectedBeatmapKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapKey (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_selectedBeatmapKey)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x276184c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                                               "get_selectedBeatmapKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_selectedBeatmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevel* (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_selectedBeatmapLevel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x276188c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                                               "get_selectedBeatmapLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_initialTopScreenViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::ViewController> (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_initialTopScreenViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27618a8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_initialLeftScreenViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::ViewController> (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_initialLeftScreenViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27618b0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_initialRightScreenViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::ViewController> (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_initialRightScreenViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27618b8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_showBackButtonForMainViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_showBackButtonForMainViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27618c0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_hidePacksIfOneOrNone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_hidePacksIfOneOrNone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27618c8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_hidePracticeButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_hidePracticeButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27618d0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_actionButtonText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_actionButtonText)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27618d8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_mainTitle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_mainTitle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276191c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_enableCustomLevels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_enableCustomLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2761924;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_songPackMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SongPackMask (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_songPackMask)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x276192c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_allowedBeatmapDifficultyMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDifficultyMask (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::get_allowedBeatmapDifficultyMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2761958;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.get_notAllowedCharacteristics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
        &::GlobalNamespace::LevelSelectionFlowCoordinator::get_notAllowedCharacteristics)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2761960;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.LevelSelectionFlowCoordinatorDidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidActivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27619a4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.LevelSelectionFlowCoordinatorDidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidDeactivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27619a8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.LevelSelectionFlowCoordinatorTopViewControllerWillChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(
        &::GlobalNamespace::LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x27619ac;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.ActionButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::ActionButtonWasPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2761aa8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.PracticeButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::PracticeButtonWasPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2761aac;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.SelectionDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(
    ::GlobalNamespace::BeatmapLevelPack*, ByRef<::GlobalNamespace::BeatmapKey>)>(&::GlobalNamespace::LevelSelectionFlowCoordinator::SelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2761ab0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(::GlobalNamespace::__LevelSelectionFlowCoordinator__State*)>(&::GlobalNamespace::LevelSelectionFlowCoordinator::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2761ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x2761abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), "DidActivate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x2761fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), "DidDeactivate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.TopViewControllerWillChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(
    ::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(&::GlobalNamespace::LevelSelectionFlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2762264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), "TopViewControllerWillChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.HandleLevelSelectionNavigationControllerDidSelectPack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(::GlobalNamespace::LevelSelectionNavigationController*, ::GlobalNamespace::BeatmapLevelPack*)>(
        &::GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidSelectPack)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2762274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                    "HandleLevelSelectionNavigationControllerDidSelectPack", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelSelectionNavigationController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.HandleSearchFilterParamsViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(
    ::GlobalNamespace::SearchFilterParamsViewController*, ::GlobalNamespace::LevelFilter)>(&::GlobalNamespace::LevelSelectionFlowCoordinator::HandleSearchFilterParamsViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x27622a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                 "HandleSearchFilterParamsViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SearchFilterParamsViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelFilter>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.HandleLevelSearchViewControllerDidPressSearchButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(
    ::GlobalNamespace::LevelSearchViewController*, ::GlobalNamespace::LevelFilter)>(&::GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSearchViewControllerDidPressSearchButton)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27622ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                 "HandleLevelSearchViewControllerDidPressSearchButton", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelSearchViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelFilter>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.HandleLevelSelectionNavigationControllerDidPressActionButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(::GlobalNamespace::LevelSelectionNavigationController*)>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidPressActionButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x276232c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                    "HandleLevelSelectionNavigationControllerDidPressActionButton", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelSelectionNavigationController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.HandleLevelSelectionNavigationControllerDidPressPracticeButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(::GlobalNamespace::LevelSelectionNavigationController*, ::GlobalNamespace::BeatmapLevel*)>(
        &::GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidPressPracticeButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x276233c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.HandleLevelSelectionNavigationControllerDidChangeDifficultyBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(::GlobalNamespace::LevelSelectionNavigationController*)>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidChangeDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x276234c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.HandleLevelSelectionNavigationControllerDidChangeLevelDetailContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(
    ::GlobalNamespace::LevelSelectionNavigationController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType)>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidChangeLevelDetailContent)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27623b0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::Refresh)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x276241c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.IsMainViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::IsMainViewController)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2762438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), "IsMainViewController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator.PresentMainViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)(
    ::System::Action*, ::HMUI::__ViewController__AnimationType)>(&::GlobalNamespace::LevelSelectionFlowCoordinator::PresentMainViewController)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27624a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), "PresentMainViewController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSelectionFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::LevelSelectionFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27624c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelSelectionNavigationController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____searchFilterParamsViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelSearchViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__LevelSelectionFlowCoordinator__State*& GlobalNamespace::LevelSelectionFlowCoordinator::__cordl_internal_get__startState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startState;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*> const&
GlobalNamespace::LevelSelectionFlowCoordinator::__cordl_internal_get__startState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startState;
}
constexpr void GlobalNamespace::LevelSelectionFlowCoordinator::__cordl_internal_set__startState(::GlobalNamespace::__LevelSelectionFlowCoordinator__State* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____startState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::LevelSelectionFlowCoordinator::get_isInRootViewController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                                             "get_isInRootViewController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory GlobalNamespace::LevelSelectionFlowCoordinator::get_selectedLevelCategory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                                             "get_selectedLevelCategory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelPack* GlobalNamespace::LevelSelectionFlowCoordinator::get_selectedBeatmapLevelPack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                                             "get_selectedBeatmapLevelPack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPack*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapKey GlobalNamespace::LevelSelectionFlowCoordinator::get_selectedBeatmapKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                                             "get_selectedBeatmapKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevel* GlobalNamespace::LevelSelectionFlowCoordinator::get_selectedBeatmapLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                                                             "get_selectedBeatmapLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevel*, false>(this, ___internal_method);
}
inline ::UnityW<::HMUI::ViewController> GlobalNamespace::LevelSelectionFlowCoordinator::get_initialTopScreenViewController() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>, false>(this, ___internal_method);
}
inline ::UnityW<::HMUI::ViewController> GlobalNamespace::LevelSelectionFlowCoordinator::get_initialLeftScreenViewController() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>, false>(this, ___internal_method);
}
inline ::UnityW<::HMUI::ViewController> GlobalNamespace::LevelSelectionFlowCoordinator::get_initialRightScreenViewController() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LevelSelectionFlowCoordinator::get_showBackButtonForMainViewController() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LevelSelectionFlowCoordinator::get_hidePacksIfOneOrNone() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LevelSelectionFlowCoordinator::get_hidePracticeButton() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LevelSelectionFlowCoordinator::get_actionButtonText() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LevelSelectionFlowCoordinator::get_mainTitle() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LevelSelectionFlowCoordinator::get_enableCustomLevels() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SongPackMask GlobalNamespace::LevelSelectionFlowCoordinator::get_songPackMask() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDifficultyMask GlobalNamespace::LevelSelectionFlowCoordinator::get_allowedBeatmapDifficultyMask() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficultyMask, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>
GlobalNamespace::LevelSelectionFlowCoordinator::get_notAllowedCharacteristics() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>, false>(this,
                                                                                                                                                                                    ___internal_method);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange(::HMUI::ViewController* oldViewController,
                                                                                                                     ::HMUI::ViewController* newViewController,
                                                                                                                     ::HMUI::__ViewController__AnimationType animationType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::ActionButtonWasPressed() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::PracticeButtonWasPressed() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::SelectionDidChange(::GlobalNamespace::BeatmapLevelPack* pack, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pack, beatmapKey);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::Setup(::GlobalNamespace::__LevelSelectionFlowCoordinator__State* state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelSelectionFlowCoordinator__State*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), "DidActivate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), "DidDeactivate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                                        ::HMUI::__ViewController__AnimationType animationType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), "TopViewControllerWillChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidSelectPack(::GlobalNamespace::LevelSelectionNavigationController* viewController,
                                                                                                                  ::GlobalNamespace::BeatmapLevelPack* pack) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                               "HandleLevelSelectionNavigationControllerDidSelectPack", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelSelectionNavigationController*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, pack);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::HandleSearchFilterParamsViewControllerDidFinish(::GlobalNamespace::SearchFilterParamsViewController* viewController,
                                                                                                            ::GlobalNamespace::LevelFilter filter) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                               "HandleSearchFilterParamsViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SearchFilterParamsViewController*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelFilter>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, filter);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSearchViewControllerDidPressSearchButton(::GlobalNamespace::LevelSearchViewController* viewController,
                                                                                                                ::GlobalNamespace::LevelFilter filter) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                               "HandleLevelSearchViewControllerDidPressSearchButton", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelSearchViewController*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelFilter>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, filter);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidPressActionButton(::GlobalNamespace::LevelSelectionNavigationController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(),
                                  "HandleLevelSelectionNavigationControllerDidPressActionButton", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelSelectionNavigationController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidPressPracticeButton(::GlobalNamespace::LevelSelectionNavigationController* viewController,
                                                                                                                           ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, beatmapLevel);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidChangeDifficultyBeatmap(::GlobalNamespace::LevelSelectionNavigationController* viewController) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline void
GlobalNamespace::LevelSelectionFlowCoordinator::HandleLevelSelectionNavigationControllerDidChangeLevelDetailContent(::GlobalNamespace::LevelSelectionNavigationController* viewController,
                                                                                                                    ::GlobalNamespace::__StandardLevelDetailViewController__ContentType contentType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, contentType);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::Refresh() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LevelSelectionFlowCoordinator::IsMainViewController(::HMUI::ViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), "IsMainViewController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::PresentMainViewController(::System::Action* finishedCallback, ::HMUI::__ViewController__AnimationType animationType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), "PresentMainViewController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, finishedCallback, animationType);
}
inline ::GlobalNamespace::LevelSelectionFlowCoordinator* GlobalNamespace::LevelSelectionFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LevelSelectionFlowCoordinator*>());
}
inline void GlobalNamespace::LevelSelectionFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSelectionFlowCoordinator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelSelectionFlowCoordinator::LevelSelectionFlowCoordinator() {}
