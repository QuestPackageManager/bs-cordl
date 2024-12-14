#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelCollectionNavigationController.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_impl.hpp"
#include "HMUI/zzzz__NavigationController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelCollectionNavigationController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__LevelCollectionNavigationController_def.hpp"
#include "GlobalNamespace/zzzz__LevelCollectionViewController_def.hpp"
#include "GlobalNamespace/zzzz__LevelPackDetailViewController_def.hpp"
#include "GlobalNamespace/zzzz__LoadingControl_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelDetailViewController_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelCollectionNavigationController_AlphaAnimationType::LevelCollectionNavigationController_AlphaAnimationType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelCollectionNavigationController_AlphaAnimationType::LevelCollectionNavigationController_AlphaAnimationType() {}
constexpr ::GlobalNamespace::LevelCollectionNavigationController_AlphaAnimationType GlobalNamespace::LevelCollectionNavigationController_AlphaAnimationType::In{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::LevelCollectionNavigationController_AlphaAnimationType GlobalNamespace::LevelCollectionNavigationController_AlphaAnimationType::Out{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b5d370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0._PresentDetailViewController_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0::_PresentDetailViewController_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3b5d520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0*>::get(),
                                                 "<PresentDetailViewController>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LevelCollectionNavigationController>& GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::LevelCollectionNavigationController> const& GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LevelCollectionNavigationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0::__cordl_internal_get_viewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0::__cordl_internal_get_viewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewController;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0::__cordl_internal_set_viewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___viewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0::_PresentDetailViewController_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0*>::get(),
                                               "<PresentDetailViewController>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0* GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0::LevelCollectionNavigationController___c__DisplayClass53_0() {}
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.add_didChangeLevelDetailContentEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*)>(
    &::GlobalNamespace::LevelCollectionNavigationController::add_didChangeLevelDetailContentEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b5b440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didChangeLevelDetailContentEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.remove_didChangeLevelDetailContentEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*)>(
    &::GlobalNamespace::LevelCollectionNavigationController::remove_didChangeLevelDetailContentEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b5b4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didChangeLevelDetailContentEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.add_didSelectLevelPackEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>*)>(
    &::GlobalNamespace::LevelCollectionNavigationController::add_didSelectLevelPackEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b5b5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didSelectLevelPackEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.remove_didSelectLevelPackEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>*)>(
    &::GlobalNamespace::LevelCollectionNavigationController::remove_didSelectLevelPackEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b5b650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                 "remove_didSelectLevelPackEvent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                     ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.add_didPressActionButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>*)>(&::GlobalNamespace::LevelCollectionNavigationController::add_didPressActionButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b5b700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didPressActionButtonEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.remove_didPressActionButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>*)>(&::GlobalNamespace::LevelCollectionNavigationController::remove_didPressActionButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b5b7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didPressActionButtonEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.add_didPressOpenPackButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>*)>(
    &::GlobalNamespace::LevelCollectionNavigationController::add_didPressOpenPackButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b5b860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                 "add_didPressOpenPackButtonEvent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                     ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.remove_didPressOpenPackButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>*)>(
    &::GlobalNamespace::LevelCollectionNavigationController::remove_didPressOpenPackButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b5b910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                 "remove_didPressOpenPackButtonEvent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                     ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.add_didPressPracticeButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevel*>*)>(
    &::GlobalNamespace::LevelCollectionNavigationController::add_didPressPracticeButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b5b9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didPressPracticeButtonEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.remove_didPressPracticeButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevel*>*)>(
    &::GlobalNamespace::LevelCollectionNavigationController::remove_didPressPracticeButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b5ba70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didPressPracticeButtonEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.add_didChangeDifficultyBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>*)>(&::GlobalNamespace::LevelCollectionNavigationController::add_didChangeDifficultyBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b5bb20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didChangeDifficultyBeatmapEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.remove_didChangeDifficultyBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>*)>(&::GlobalNamespace::LevelCollectionNavigationController::remove_didChangeDifficultyBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b5bbd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didChangeDifficultyBeatmapEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.get_beatmapKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapKey (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::get_beatmapKey)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3b5bc80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               "get_beatmapKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.get_beatmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevel* (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::get_beatmapLevel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3b5bcc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               "get_beatmapLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::GlobalNamespace::BeatmapLevelPack*, bool, bool, ::StringW, bool, ::UnityEngine::GameObject*, ::GlobalNamespace::BeatmapDifficultyMask,
    ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>, bool)>(&::GlobalNamespace::LevelCollectionNavigationController::SetData)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3b5bcdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "SetData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.SelectLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::LevelCollectionNavigationController::SelectLevel)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3b5bf04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "SelectLevel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.AnimateCanvasGroupAlpha
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::GlobalNamespace::LevelCollectionNavigationController_AlphaAnimationType)>(&::GlobalNamespace::LevelCollectionNavigationController::AnimateCanvasGroupAlpha)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x3b5bf6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "AnimateCanvasGroupAlpha", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCollectionNavigationController_AlphaAnimationType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(bool, bool, bool)>(
    &::GlobalNamespace::LevelCollectionNavigationController::DidActivate)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x3b5c154;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(bool, bool)>(
    &::GlobalNamespace::LevelCollectionNavigationController::DidDeactivate)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x3b5c750;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.SetDataForPack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::GlobalNamespace::BeatmapLevelPack*, bool, bool, ::StringW, bool)>(&::GlobalNamespace::LevelCollectionNavigationController::SetDataForPack)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3b5bd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "SetDataForPack", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.SetDataForLevelCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::GlobalNamespace::BeatmapLevelPack*, bool, ::StringW, ::UnityEngine::GameObject*, bool)>(&::GlobalNamespace::LevelCollectionNavigationController::SetDataForLevelCollection)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3b5bdec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "SetDataForLevelCollection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.RefreshDetail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::RefreshDetail)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3b5cf54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               "RefreshDetail", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.ClearSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::ClearSelected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3b5cf70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               "ClearSelected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.ShowLoading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::ShowLoading)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3b5cf8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               "ShowLoading", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.PresentViewControllersForPack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::PresentViewControllersForPack)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3b5ce7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               "PresentViewControllersForPack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.PresentViewControllersForLevelCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::PresentViewControllersForLevelCollection)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3b5cef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                 "PresentViewControllersForLevelCollection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HideLoading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::HideLoading)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3b5d068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               "HideLoading", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HideDetailViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::HideDetailViewController)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3b5d238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               "HideDetailViewController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelCollectionViewControllerDidSelectLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::GlobalNamespace::LevelCollectionViewController*, ::GlobalNamespace::BeatmapLevel*)>(&::GlobalNamespace::LevelCollectionNavigationController::HandleLevelCollectionViewControllerDidSelectLevel)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3b5d28c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                 "HandleLevelCollectionViewControllerDidSelectLevel", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCollectionViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelCollectionViewControllerDidSelectPack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::LevelCollectionViewController*)>(
    &::GlobalNamespace::LevelCollectionNavigationController::HandleLevelCollectionViewControllerDidSelectPack)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3b5d310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                    "HandleLevelCollectionViewControllerDidSelectPack", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCollectionViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.PresentDetailViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::HMUI::ViewController*, bool)>(
    &::GlobalNamespace::LevelCollectionNavigationController::PresentDetailViewController)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x3b5d08c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "PresentDetailViewController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelDetailViewControllerDidPressActionButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::GlobalNamespace::StandardLevelDetailViewController*)>(&::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPressActionButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3b5d378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                    "HandleLevelDetailViewControllerDidPressActionButton", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelDetailViewControllerDidPressPracticeButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::BeatmapLevel*)>(
        &::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPressPracticeButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3b5d398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                    "HandleLevelDetailViewControllerDidPressPracticeButton", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelDetailViewControllerDidChangeDifficultyBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::GlobalNamespace::StandardLevelDetailViewController*)>(&::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidChangeDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3b5d3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                    "HandleLevelDetailViewControllerDidChangeDifficultyBeatmap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelDetailViewControllerDidPresentContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::StandardLevelDetailViewController_ContentType)>(
    &::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPresentContent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3b5d3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "HandleLevelDetailViewControllerDidPresentContent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController_ContentType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelDetailViewControllerDidPressOpenLevelPackButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::BeatmapLevelPack*)>(
        &::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPressOpenLevelPackButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3b5d3f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                    "HandleLevelDetailViewControllerDidPressOpenLevelPackButton", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelDetailViewControllerLevelFavoriteStatusDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::GlobalNamespace::StandardLevelDetailViewController*, bool)>(&::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerLevelFavoriteStatusDidChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3b5d418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                    "HandleLevelDetailViewControllerLevelFavoriteStatusDidChange", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b5d460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController._AnimateCanvasGroupAlpha_b__39_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(float_t)>(
    &::GlobalNamespace::LevelCollectionNavigationController::_AnimateCanvasGroupAlpha_b__39_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3b5d468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "<AnimateCanvasGroupAlpha>b__39_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController._AnimateCanvasGroupAlpha_b__39_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::_AnimateCanvasGroupAlpha_b__39_1)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3b5d498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                 "<AnimateCanvasGroupAlpha>b__39_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LoadingControl>& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__loadingControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingControl;
}
constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__loadingControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingControl;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_set__loadingControl(::UnityW<::GlobalNamespace::LoadingControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadingControl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LevelCollectionViewController>& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__levelCollectionViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelCollectionViewController;
}
constexpr ::UnityW<::GlobalNamespace::LevelCollectionViewController> const& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__levelCollectionViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelCollectionViewController;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_set__levelCollectionViewController(::UnityW<::GlobalNamespace::LevelCollectionViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelCollectionViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LevelPackDetailViewController>& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__levelPackDetailViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackDetailViewController;
}
constexpr ::UnityW<::GlobalNamespace::LevelPackDetailViewController> const& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__levelPackDetailViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackDetailViewController;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_set__levelPackDetailViewController(::UnityW<::GlobalNamespace::LevelPackDetailViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackDetailViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::StandardLevelDetailViewController>& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__levelDetailViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelDetailViewController;
}
constexpr ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> const& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__levelDetailViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelDetailViewController;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_set__levelDetailViewController(::UnityW<::GlobalNamespace::StandardLevelDetailViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelDetailViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Tweening::TimeTweeningManager>& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__timeTweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeTweeningManager;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager> const& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__timeTweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeTweeningManager;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_set__timeTweeningManager(::UnityW<::Tweening::TimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timeTweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*&
GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get_didChangeLevelDetailContentEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeLevelDetailContentEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* const&
GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get_didChangeLevelDetailContentEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeLevelDetailContentEvent;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_set_didChangeLevelDetailContentEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didChangeLevelDetailContentEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>*&
GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get_didSelectLevelPackEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectLevelPackEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>* const&
GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get_didSelectLevelPackEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectLevelPackEvent;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_set_didSelectLevelPackEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didSelectLevelPackEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>*&
GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get_didPressActionButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressActionButtonEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>* const&
GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get_didPressActionButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressActionButtonEvent;
}
constexpr void
GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_set_didPressActionButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressActionButtonEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>*&
GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get_didPressOpenPackButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressOpenPackButtonEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>* const&
GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get_didPressOpenPackButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressOpenPackButtonEvent;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_set_didPressOpenPackButtonEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressOpenPackButtonEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevel*>*&
GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get_didPressPracticeButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressPracticeButtonEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevel*>* const&
GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get_didPressPracticeButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressPracticeButtonEvent;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_set_didPressPracticeButtonEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressPracticeButtonEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>*&
GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get_didChangeDifficultyBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeDifficultyBeatmapEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>* const&
GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get_didChangeDifficultyBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeDifficultyBeatmapEvent;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_set_didChangeDifficultyBeatmapEvent(
    ::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didChangeDifficultyBeatmapEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__showPracticeButtonInDetailView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showPracticeButtonInDetailView;
}
constexpr bool const& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__showPracticeButtonInDetailView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showPracticeButtonInDetailView;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_set__showPracticeButtonInDetailView(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showPracticeButtonInDetailView = value;
}
constexpr ::StringW& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__actionButtonTextInDetailView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actionButtonTextInDetailView;
}
constexpr ::StringW const& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__actionButtonTextInDetailView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actionButtonTextInDetailView;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_set__actionButtonTextInDetailView(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____actionButtonTextInDetailView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelPack*& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__levelPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPack;
}
constexpr ::GlobalNamespace::BeatmapLevelPack* const& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__levelPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPack;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_set__levelPack(::GlobalNamespace::BeatmapLevelPack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__allowedBeatmapDifficultyMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowedBeatmapDifficultyMask;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask const& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__allowedBeatmapDifficultyMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowedBeatmapDifficultyMask;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_set__allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowedBeatmapDifficultyMask = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__beatmapLevelToBeSelectedAfterPresent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelToBeSelectedAfterPresent;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__beatmapLevelToBeSelectedAfterPresent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelToBeSelectedAfterPresent;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_set__beatmapLevelToBeSelectedAfterPresent(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelToBeSelectedAfterPresent)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__loading() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loading;
}
constexpr bool const& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__loading() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loading;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_set__loading(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loading = value;
}
constexpr bool& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__hideDetailViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideDetailViewController;
}
constexpr bool const& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__hideDetailViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideDetailViewController;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_set__hideDetailViewController(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideDetailViewController = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>&
GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__notAllowedCharacteristics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notAllowedCharacteristics;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> const&
GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__notAllowedCharacteristics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notAllowedCharacteristics;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_set__notAllowedCharacteristics(
    ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____notAllowedCharacteristics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__floatTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatTween;
}
constexpr ::Tweening::FloatTween* const& GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_get__floatTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatTween;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__cordl_internal_set__floatTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floatTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LevelCollectionNavigationController::add_didChangeLevelDetailContentEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didChangeLevelDetailContentEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::remove_didChangeLevelDetailContentEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didChangeLevelDetailContentEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::add_didSelectLevelPackEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didSelectLevelPackEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::remove_didSelectLevelPackEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didSelectLevelPackEvent",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                   ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::add_didPressActionButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didPressActionButtonEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::remove_didPressActionButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didPressActionButtonEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::add_didPressOpenPackButtonEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                               "add_didPressOpenPackButtonEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                   ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::remove_didPressOpenPackButtonEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                               "remove_didPressOpenPackButtonEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                   ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevelPack*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::add_didPressPracticeButtonEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didPressPracticeButtonEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::remove_didPressPracticeButtonEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didPressPracticeButtonEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>, ::GlobalNamespace::BeatmapLevel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::add_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didChangeDifficultyBeatmapEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::remove_didChangeDifficultyBeatmapEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didChangeDifficultyBeatmapEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::LevelCollectionNavigationController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapKey GlobalNamespace::LevelCollectionNavigationController::get_beatmapKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             "get_beatmapKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevel* GlobalNamespace::LevelCollectionNavigationController::get_beatmapLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             "get_beatmapLevel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevel*, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionNavigationController::SetData(
    ::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, bool showPackHeader, bool showPracticeButton, ::StringW actionButtonText, bool sortAlphabetically,
    ::UnityEngine::GameObject* noDataInfoPrefab, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
    ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> notAllowedCharacteristics, bool isFiltered) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "SetData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevelPack, showPackHeader, showPracticeButton, actionButtonText, sortAlphabetically, noDataInfoPrefab,
                                                          allowedBeatmapDifficultyMask, notAllowedCharacteristics, isFiltered);
}
inline void GlobalNamespace::LevelCollectionNavigationController::SelectLevel(::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "SelectLevel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevel);
}
inline void GlobalNamespace::LevelCollectionNavigationController::AnimateCanvasGroupAlpha(::GlobalNamespace::LevelCollectionNavigationController_AlphaAnimationType animationType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "AnimateCanvasGroupAlpha", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCollectionNavigationController_AlphaAnimationType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, animationType);
}
inline void GlobalNamespace::LevelCollectionNavigationController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::LevelCollectionNavigationController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::LevelCollectionNavigationController::SetDataForPack(::GlobalNamespace::BeatmapLevelPack* levelPack, bool showPackHeader, bool showPracticeButton,
                                                                                 ::StringW actionButtonText, bool sortBeatmapLevels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "SetDataForPack", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelPack, showPackHeader, showPracticeButton, actionButtonText, sortBeatmapLevels);
}
inline void GlobalNamespace::LevelCollectionNavigationController::SetDataForLevelCollection(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, bool showPracticeButton, ::StringW actionButtonText,
                                                                                            ::UnityEngine::GameObject* noDataInfoPrefab, bool sortBeatmapLevels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "SetDataForLevelCollection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevelPack, showPracticeButton, actionButtonText, noDataInfoPrefab, sortBeatmapLevels);
}
inline void GlobalNamespace::LevelCollectionNavigationController::RefreshDetail() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             "RefreshDetail", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionNavigationController::ClearSelected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             "ClearSelected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionNavigationController::ShowLoading() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             "ShowLoading", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionNavigationController::PresentViewControllersForPack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             "PresentViewControllersForPack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionNavigationController::PresentViewControllersForLevelCollection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                               "PresentViewControllersForLevelCollection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionNavigationController::HideLoading() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             "HideLoading", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionNavigationController::HideDetailViewController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             "HideDetailViewController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionNavigationController::HandleLevelCollectionViewControllerDidSelectLevel(::GlobalNamespace::LevelCollectionViewController* viewController,
                                                                                                                    ::GlobalNamespace::BeatmapLevel* level) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                               "HandleLevelCollectionViewControllerDidSelectLevel", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCollectionViewController*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, level);
}
inline void GlobalNamespace::LevelCollectionNavigationController::HandleLevelCollectionViewControllerDidSelectPack(::GlobalNamespace::LevelCollectionViewController* viewController) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                               "HandleLevelCollectionViewControllerDidSelectPack", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCollectionViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::LevelCollectionNavigationController::PresentDetailViewController(::HMUI::ViewController* viewController, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             "PresentDetailViewController", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, immediately);
}
inline void GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPressActionButton(::GlobalNamespace::StandardLevelDetailViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                  "HandleLevelDetailViewControllerDidPressActionButton", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPressPracticeButton(::GlobalNamespace::StandardLevelDetailViewController* viewController,
                                                                                                                        ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                               "HandleLevelDetailViewControllerDidPressPracticeButton", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, beatmapLevel);
}
inline void GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidChangeDifficultyBeatmap(::GlobalNamespace::StandardLevelDetailViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                  "HandleLevelDetailViewControllerDidChangeDifficultyBeatmap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPresentContent(::GlobalNamespace::StandardLevelDetailViewController* viewController,
                                                                                                                   ::GlobalNamespace::StandardLevelDetailViewController_ContentType contentType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "HandleLevelDetailViewControllerDidPresentContent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController_ContentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, contentType);
}
inline void GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPressOpenLevelPackButton(::GlobalNamespace::StandardLevelDetailViewController* viewController,
                                                                                                                             ::GlobalNamespace::BeatmapLevelPack* levelPack) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                               "HandleLevelDetailViewControllerDidPressOpenLevelPackButton", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, levelPack);
}
inline void GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerLevelFavoriteStatusDidChange(::GlobalNamespace::StandardLevelDetailViewController* viewController,
                                                                                                                              bool favoriteStatus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                               "HandleLevelDetailViewControllerLevelFavoriteStatusDidChange", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, favoriteStatus);
}
inline void GlobalNamespace::LevelCollectionNavigationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionNavigationController::_AnimateCanvasGroupAlpha_b__39_0(float_t f) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "<AnimateCanvasGroupAlpha>b__39_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, f);
}
inline void GlobalNamespace::LevelCollectionNavigationController::_AnimateCanvasGroupAlpha_b__39_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             "<AnimateCanvasGroupAlpha>b__39_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelCollectionNavigationController* GlobalNamespace::LevelCollectionNavigationController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LevelCollectionNavigationController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelCollectionNavigationController::LevelCollectionNavigationController() {}
