#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_impl.hpp"
#include "HMUI/zzzz__NavigationController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelCollectionNavigationController_def.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__LoadingControl_def.hpp"
#include "GlobalNamespace/zzzz__LevelCollectionViewController_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__IAnnotatedBeatmapLevelCollection_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelCollection_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelDetailViewController_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__LevelCollectionNavigationController_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__LevelPackDetailViewController_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LevelCollectionNavigationController__AlphaAnimationType::__LevelCollectionNavigationController__AlphaAnimationType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LevelCollectionNavigationController__AlphaAnimationType::__LevelCollectionNavigationController__AlphaAnimationType() {}
constexpr ::GlobalNamespace::__LevelCollectionNavigationController__AlphaAnimationType GlobalNamespace::__LevelCollectionNavigationController__AlphaAnimationType::In{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__LevelCollectionNavigationController__AlphaAnimationType GlobalNamespace::__LevelCollectionNavigationController__AlphaAnimationType::Out{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0::*)()>(
    &::GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bbc98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0._PresentDetailViewController_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0::*)()>(
    &::GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0::_PresentDetailViewController_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22bbe48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0*>::get(),
                                                 "<PresentDetailViewController>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LevelCollectionNavigationController*& GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCollectionNavigationController*> const&
GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0::__set___4__this(::GlobalNamespace::LevelCollectionNavigationController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ViewController*& GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0::__get_viewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewController;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> const& GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0::__get_viewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewController;
}
constexpr void GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0::__set_viewController(::HMUI::ViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___viewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0* GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0*>());
}
inline void GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0::_PresentDetailViewController_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0*>::get(),
                                               "<PresentDetailViewController>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0::__LevelCollectionNavigationController____c__DisplayClass54_0() {}
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.add_didChangeLevelDetailContentEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*)>(
    &::GlobalNamespace::LevelCollectionNavigationController::add_didChangeLevelDetailContentEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b8a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didChangeLevelDetailContentEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.remove_didChangeLevelDetailContentEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*)>(
    &::GlobalNamespace::LevelCollectionNavigationController::remove_didChangeLevelDetailContentEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b8b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didChangeLevelDetailContentEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.add_didSelectLevelPackEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>*)>(
        &::GlobalNamespace::LevelCollectionNavigationController::add_didSelectLevelPackEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b8be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didSelectLevelPackEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.remove_didSelectLevelPackEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>*)>(
        &::GlobalNamespace::LevelCollectionNavigationController::remove_didSelectLevelPackEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b8c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didSelectLevelPackEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.add_didPressActionButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>*)>(&::GlobalNamespace::LevelCollectionNavigationController::add_didPressActionButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b8d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didPressActionButtonEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.remove_didPressActionButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>*)>(&::GlobalNamespace::LevelCollectionNavigationController::remove_didPressActionButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b8df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didPressActionButtonEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.add_didPressOpenPackButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>*)>(
        &::GlobalNamespace::LevelCollectionNavigationController::add_didPressOpenPackButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b8ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didPressOpenPackButtonEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.remove_didPressOpenPackButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>*)>(
        &::GlobalNamespace::LevelCollectionNavigationController::remove_didPressOpenPackButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b8f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didPressOpenPackButtonEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.add_didPressPracticeButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevel*>*)>(
        &::GlobalNamespace::LevelCollectionNavigationController::add_didPressPracticeButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b9000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didPressPracticeButtonEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.remove_didPressPracticeButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevel*>*)>(
        &::GlobalNamespace::LevelCollectionNavigationController::remove_didPressPracticeButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b90b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didPressPracticeButtonEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.add_didChangeDifficultyBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IDifficultyBeatmap*>*)>(
        &::GlobalNamespace::LevelCollectionNavigationController::add_didChangeDifficultyBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b9160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didChangeDifficultyBeatmapEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IDifficultyBeatmap*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.remove_didChangeDifficultyBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IDifficultyBeatmap*>*)>(
        &::GlobalNamespace::LevelCollectionNavigationController::remove_didChangeDifficultyBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b9210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didChangeDifficultyBeatmapEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IDifficultyBeatmap*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.get_selectedDifficultyBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmap* (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::get_selectedDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b92c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               "get_selectedDifficultyBeatmap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.get_selectedBeatmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPreviewBeatmapLevel* (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::get_selectedBeatmapLevel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22b9300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               "get_selectedBeatmapLevel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, bool, bool, ::StringW, bool, ::UnityEngine::GameObject*, ::GlobalNamespace::BeatmapDifficultyMask,
    ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>)>(&::GlobalNamespace::LevelCollectionNavigationController::SetData)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x22b931c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "SetData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.SelectLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(
    &::GlobalNamespace::LevelCollectionNavigationController::SelectLevel)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x22b96f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "SelectLevel", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.AnimateCanvasGroupAlpha
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::GlobalNamespace::__LevelCollectionNavigationController__AlphaAnimationType)>(&::GlobalNamespace::LevelCollectionNavigationController::AnimateCanvasGroupAlpha)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x22b9758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "AnimateCanvasGroupAlpha", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCollectionNavigationController__AlphaAnimationType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(bool, bool, bool)>(
    &::GlobalNamespace::LevelCollectionNavigationController::DidActivate)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x22b9944;

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
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x22ba36c;

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
    ::GlobalNamespace::IBeatmapLevelPack*, bool, bool, ::StringW, bool)>(&::GlobalNamespace::LevelCollectionNavigationController::SetDataForPack)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x22b94b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "SetDataForPack", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.SetDataForLevelCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::GlobalNamespace::IBeatmapLevelCollection*, bool, ::StringW, ::UnityEngine::GameObject*, bool)>(&::GlobalNamespace::LevelCollectionNavigationController::SetDataForLevelCollection)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x22b96ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "SetDataForLevelCollection", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelCollection*>::get(),
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
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22bb470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               "RefreshDetail", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.ClearSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::ClearSelected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22bb4b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               "ClearSelected", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.ShowLoading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::ShowLoading)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x22bb4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               "ShowLoading", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.PresentViewControllersForPack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::PresentViewControllersForPack)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22bb398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               "PresentViewControllersForPack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.PresentViewControllersForLevelCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::PresentViewControllersForLevelCollection)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x22bb410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               "PresentViewControllersForLevelCollection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HideLoading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::HideLoading)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22bb5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               "HideLoading", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HideDetailViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::HideDetailViewController)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22bb7a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               "HideDetailViewController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelCollectionViewControllerDidSelectLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::LevelCollectionViewController*, ::GlobalNamespace::IPreviewBeatmapLevel*)>(
        &::GlobalNamespace::LevelCollectionNavigationController::HandleLevelCollectionViewControllerDidSelectLevel)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22bb7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                 "HandleLevelCollectionViewControllerDidSelectLevel", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCollectionViewController*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelCollectionViewControllerDidSelectPack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::LevelCollectionViewController*)>(
    &::GlobalNamespace::LevelCollectionNavigationController::HandleLevelCollectionViewControllerDidSelectPack)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x22bbc3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "HandleLevelCollectionViewControllerDidSelectPack",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCollectionViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.PresentDetailViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::HMUI::ViewController*, bool)>(
    &::GlobalNamespace::LevelCollectionNavigationController::PresentDetailViewController)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x22bb5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               "PresentDetailViewController", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelDetailViewControllerDidPressActionButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::GlobalNamespace::StandardLevelDetailViewController*)>(&::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPressActionButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22bbca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "HandleLevelDetailViewControllerDidPressActionButton",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelDetailViewControllerDidPressPracticeButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevel*)>(
        &::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPressPracticeButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22bbcc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                 "HandleLevelDetailViewControllerDidPressPracticeButton", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelDetailViewControllerDidChangeDifficultyBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IDifficultyBeatmap*)>(
        &::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidChangeDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22bbce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                 "HandleLevelDetailViewControllerDidChangeDifficultyBeatmap", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelDetailViewControllerDidPresentContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType)>(
    &::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPresentContent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22bbd00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "HandleLevelDetailViewControllerDidPresentContent",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StandardLevelDetailViewController__ContentType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelDetailViewControllerDidPressOpenLevelPackButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(::GlobalNamespace::StandardLevelDetailViewController*, ::GlobalNamespace::IBeatmapLevelPack*)>(
        &::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPressOpenLevelPackButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22bbd20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                 "HandleLevelDetailViewControllerDidPressOpenLevelPackButton", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController.HandleLevelDetailViewControllerLevelFavoriteStatusDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(
    ::GlobalNamespace::StandardLevelDetailViewController*, bool)>(&::GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerLevelFavoriteStatusDidChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22bbd40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                 "HandleLevelDetailViewControllerLevelFavoriteStatusDidChange", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bbd88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController._AnimateCanvasGroupAlpha_b__40_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)(float_t)>(
    &::GlobalNamespace::LevelCollectionNavigationController::_AnimateCanvasGroupAlpha_b__40_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22bbd90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "<AnimateCanvasGroupAlpha>b__40_0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCollectionNavigationController._AnimateCanvasGroupAlpha_b__40_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCollectionNavigationController::*)()>(
    &::GlobalNamespace::LevelCollectionNavigationController::_AnimateCanvasGroupAlpha_b__40_1)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x22bbdc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                               "<AnimateCanvasGroupAlpha>b__40_1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LoadingControl*& GlobalNamespace::LevelCollectionNavigationController::__get__loadingControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingControl;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LoadingControl*> const& GlobalNamespace::LevelCollectionNavigationController::__get__loadingControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingControl;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set__loadingControl(::GlobalNamespace::LoadingControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadingControl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LevelCollectionViewController*& GlobalNamespace::LevelCollectionNavigationController::__get__levelCollectionViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelCollectionViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCollectionViewController*> const&
GlobalNamespace::LevelCollectionNavigationController::__get__levelCollectionViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelCollectionViewController;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set__levelCollectionViewController(::GlobalNamespace::LevelCollectionViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelCollectionViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LevelPackDetailViewController*& GlobalNamespace::LevelCollectionNavigationController::__get__levelPackDetailViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackDetailViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelPackDetailViewController*> const&
GlobalNamespace::LevelCollectionNavigationController::__get__levelPackDetailViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackDetailViewController;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set__levelPackDetailViewController(::GlobalNamespace::LevelPackDetailViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackDetailViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::StandardLevelDetailViewController*& GlobalNamespace::LevelCollectionNavigationController::__get__levelDetailViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelDetailViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelDetailViewController*> const&
GlobalNamespace::LevelCollectionNavigationController::__get__levelDetailViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelDetailViewController;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set__levelDetailViewController(::GlobalNamespace::StandardLevelDetailViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelDetailViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AppStaticSettingsSO*& GlobalNamespace::LevelCollectionNavigationController::__get__appStaticSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appStaticSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppStaticSettingsSO*> const& GlobalNamespace::LevelCollectionNavigationController::__get__appStaticSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appStaticSettings;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appStaticSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::TimeTweeningManager*& GlobalNamespace::LevelCollectionNavigationController::__get__timeTweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeTweeningManager;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& GlobalNamespace::LevelCollectionNavigationController::__get__timeTweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeTweeningManager;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set__timeTweeningManager(::Tweening::TimeTweeningManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timeTweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*&
GlobalNamespace::LevelCollectionNavigationController::__get_didChangeLevelDetailContentEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeLevelDetailContentEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*> const&
GlobalNamespace::LevelCollectionNavigationController::__get_didChangeLevelDetailContentEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeLevelDetailContentEvent;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set_didChangeLevelDetailContentEvent(
    ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didChangeLevelDetailContentEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>*&
GlobalNamespace::LevelCollectionNavigationController::__get_didSelectLevelPackEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectLevelPackEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>*> const&
GlobalNamespace::LevelCollectionNavigationController::__get_didSelectLevelPackEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectLevelPackEvent;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set_didSelectLevelPackEvent(
    ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didSelectLevelPackEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>*& GlobalNamespace::LevelCollectionNavigationController::__get_didPressActionButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressActionButtonEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>*> const&
GlobalNamespace::LevelCollectionNavigationController::__get_didPressActionButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressActionButtonEvent;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressActionButtonEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>*&
GlobalNamespace::LevelCollectionNavigationController::__get_didPressOpenPackButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressOpenPackButtonEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>*> const&
GlobalNamespace::LevelCollectionNavigationController::__get_didPressOpenPackButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressOpenPackButtonEvent;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set_didPressOpenPackButtonEvent(
    ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressOpenPackButtonEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevel*>*&
GlobalNamespace::LevelCollectionNavigationController::__get_didPressPracticeButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressPracticeButtonEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevel*>*> const&
GlobalNamespace::LevelCollectionNavigationController::__get_didPressPracticeButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressPracticeButtonEvent;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set_didPressPracticeButtonEvent(
    ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressPracticeButtonEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IDifficultyBeatmap*>*&
GlobalNamespace::LevelCollectionNavigationController::__get_didChangeDifficultyBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeDifficultyBeatmapEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IDifficultyBeatmap*>*> const&
GlobalNamespace::LevelCollectionNavigationController::__get_didChangeDifficultyBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeDifficultyBeatmapEvent;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set_didChangeDifficultyBeatmapEvent(
    ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IDifficultyBeatmap*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didChangeDifficultyBeatmapEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::LevelCollectionNavigationController::__get__showPracticeButtonInDetailView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showPracticeButtonInDetailView;
}
constexpr bool const& GlobalNamespace::LevelCollectionNavigationController::__get__showPracticeButtonInDetailView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showPracticeButtonInDetailView;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set__showPracticeButtonInDetailView(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showPracticeButtonInDetailView = value;
}
constexpr ::StringW& GlobalNamespace::LevelCollectionNavigationController::__get__actionButtonTextInDetailView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actionButtonTextInDetailView;
}
constexpr ::StringW const& GlobalNamespace::LevelCollectionNavigationController::__get__actionButtonTextInDetailView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____actionButtonTextInDetailView;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set__actionButtonTextInDetailView(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____actionButtonTextInDetailView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatmapLevelPack*& GlobalNamespace::LevelCollectionNavigationController::__get__levelPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPack;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> const& GlobalNamespace::LevelCollectionNavigationController::__get__levelPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPack;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set__levelPack(::GlobalNamespace::IBeatmapLevelPack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask& GlobalNamespace::LevelCollectionNavigationController::__get__allowedBeatmapDifficultyMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowedBeatmapDifficultyMask;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask const& GlobalNamespace::LevelCollectionNavigationController::__get__allowedBeatmapDifficultyMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowedBeatmapDifficultyMask;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set__allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowedBeatmapDifficultyMask = value;
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& GlobalNamespace::LevelCollectionNavigationController::__get__beatmapLevelToBeSelectedAfterPresent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelToBeSelectedAfterPresent;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const&
GlobalNamespace::LevelCollectionNavigationController::__get__beatmapLevelToBeSelectedAfterPresent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelToBeSelectedAfterPresent;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set__beatmapLevelToBeSelectedAfterPresent(::GlobalNamespace::IPreviewBeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelToBeSelectedAfterPresent)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::LevelCollectionNavigationController::__get__loading() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loading;
}
constexpr bool const& GlobalNamespace::LevelCollectionNavigationController::__get__loading() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loading;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set__loading(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loading = value;
}
constexpr bool& GlobalNamespace::LevelCollectionNavigationController::__get__hideDetailViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideDetailViewController;
}
constexpr bool const& GlobalNamespace::LevelCollectionNavigationController::__get__hideDetailViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideDetailViewController;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set__hideDetailViewController(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideDetailViewController = value;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>&
GlobalNamespace::LevelCollectionNavigationController::__get__notAllowedCharacteristics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notAllowedCharacteristics;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> const&
GlobalNamespace::LevelCollectionNavigationController::__get__notAllowedCharacteristics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notAllowedCharacteristics;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set__notAllowedCharacteristics(
    ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____notAllowedCharacteristics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::LevelCollectionNavigationController::__get__floatTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& GlobalNamespace::LevelCollectionNavigationController::__get__floatTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatTween;
}
constexpr void GlobalNamespace::LevelCollectionNavigationController::__set__floatTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floatTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LevelCollectionNavigationController::add_didChangeLevelDetailContentEvent(
    ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didChangeLevelDetailContentEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::remove_didChangeLevelDetailContentEvent(
    ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didChangeLevelDetailContentEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::add_didSelectLevelPackEvent(
    ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didSelectLevelPackEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::remove_didSelectLevelPackEvent(
    ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didSelectLevelPackEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::add_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didPressActionButtonEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::remove_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didPressActionButtonEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::add_didPressOpenPackButtonEvent(
    ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didPressOpenPackButtonEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::remove_didPressOpenPackButtonEvent(
    ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didPressOpenPackButtonEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::add_didPressPracticeButtonEvent(
    ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didPressPracticeButtonEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::remove_didPressPracticeButtonEvent(
    ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didPressPracticeButtonEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::add_didChangeDifficultyBeatmapEvent(
    ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IDifficultyBeatmap*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "add_didChangeDifficultyBeatmapEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IDifficultyBeatmap*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelCollectionNavigationController::remove_didChangeDifficultyBeatmapEvent(
    ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IDifficultyBeatmap*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "remove_didChangeDifficultyBeatmapEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IDifficultyBeatmap*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IDifficultyBeatmap* GlobalNamespace::LevelCollectionNavigationController::get_selectedDifficultyBeatmap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             "get_selectedDifficultyBeatmap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDifficultyBeatmap*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::LevelCollectionNavigationController::get_selectedBeatmapLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             "get_selectedBeatmapLevel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IPreviewBeatmapLevel*, false>(this, ___internal_method);
}
inline void
GlobalNamespace::LevelCollectionNavigationController::SetData(::GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection, bool showPackHeader, bool showPracticeButton,
                                                              ::StringW actionButtonText, bool sortAlphabetically, ::UnityEngine::GameObject* noDataInfoPrefab,
                                                              ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                                                              ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> notAllowedCharacteristics) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "SetData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, annotatedBeatmapLevelCollection, showPackHeader, showPracticeButton, actionButtonText, sortAlphabetically,
                                                          noDataInfoPrefab, allowedBeatmapDifficultyMask, notAllowedCharacteristics);
}
inline void GlobalNamespace::LevelCollectionNavigationController::SelectLevel(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "SelectLevel", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevel);
}
inline void GlobalNamespace::LevelCollectionNavigationController::AnimateCanvasGroupAlpha(::GlobalNamespace::__LevelCollectionNavigationController__AlphaAnimationType animationType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "AnimateCanvasGroupAlpha", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCollectionNavigationController__AlphaAnimationType>::get() })));
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
inline void GlobalNamespace::LevelCollectionNavigationController::SetDataForPack(::GlobalNamespace::IBeatmapLevelPack* levelPack, bool showPackHeader, bool showPracticeButton,
                                                                                 ::StringW actionButtonText, bool sortPreviewBeatmapLevels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "SetDataForPack", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelPack, showPackHeader, showPracticeButton, actionButtonText, sortPreviewBeatmapLevels);
}
inline void GlobalNamespace::LevelCollectionNavigationController::SetDataForLevelCollection(::GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection, bool showPracticeButton,
                                                                                            ::StringW actionButtonText, ::UnityEngine::GameObject* noDataInfoPrefab, bool sortPreviewBeatmapLevels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "SetDataForLevelCollection", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelCollection*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevelCollection, showPracticeButton, actionButtonText, noDataInfoPrefab, sortPreviewBeatmapLevels);
}
inline void GlobalNamespace::LevelCollectionNavigationController::RefreshDetail() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             "RefreshDetail", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionNavigationController::ClearSelected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             "ClearSelected", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionNavigationController::ShowLoading() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             "ShowLoading", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionNavigationController::PresentViewControllersForPack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             "PresentViewControllersForPack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionNavigationController::PresentViewControllersForLevelCollection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             "PresentViewControllersForLevelCollection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionNavigationController::HideLoading() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             "HideLoading", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionNavigationController::HideDetailViewController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             "HideDetailViewController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionNavigationController::HandleLevelCollectionViewControllerDidSelectLevel(::GlobalNamespace::LevelCollectionViewController* viewController,
                                                                                                                    ::GlobalNamespace::IPreviewBeatmapLevel* level) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                               "HandleLevelCollectionViewControllerDidSelectLevel", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCollectionViewController*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, level);
}
inline void GlobalNamespace::LevelCollectionNavigationController::HandleLevelCollectionViewControllerDidSelectPack(::GlobalNamespace::LevelCollectionViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "HandleLevelCollectionViewControllerDidSelectPack",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCollectionViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::LevelCollectionNavigationController::PresentDetailViewController(::HMUI::ViewController* viewController, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "PresentDetailViewController", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, immediately);
}
inline void GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPressActionButton(::GlobalNamespace::StandardLevelDetailViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "HandleLevelDetailViewControllerDidPressActionButton",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPressPracticeButton(::GlobalNamespace::StandardLevelDetailViewController* viewController,
                                                                                                                        ::GlobalNamespace::IBeatmapLevel* level) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                               "HandleLevelDetailViewControllerDidPressPracticeButton", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, level);
}
inline void GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidChangeDifficultyBeatmap(::GlobalNamespace::StandardLevelDetailViewController* viewController,
                                                                                                                            ::GlobalNamespace::IDifficultyBeatmap* beatmap) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                               "HandleLevelDetailViewControllerDidChangeDifficultyBeatmap", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, beatmap);
}
inline void GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPresentContent(::GlobalNamespace::StandardLevelDetailViewController* viewController,
                                                                                                                   ::GlobalNamespace::__StandardLevelDetailViewController__ContentType contentType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "HandleLevelDetailViewControllerDidPresentContent",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__StandardLevelDetailViewController__ContentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, contentType);
}
inline void GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerDidPressOpenLevelPackButton(::GlobalNamespace::StandardLevelDetailViewController* viewController,
                                                                                                                             ::GlobalNamespace::IBeatmapLevelPack* levelPack) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                               "HandleLevelDetailViewControllerDidPressOpenLevelPackButton", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, levelPack);
}
inline void GlobalNamespace::LevelCollectionNavigationController::HandleLevelDetailViewControllerLevelFavoriteStatusDidChange(::GlobalNamespace::StandardLevelDetailViewController* viewController,
                                                                                                                              bool favoriteStatus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                               "HandleLevelDetailViewControllerLevelFavoriteStatusDidChange", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelDetailViewController*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, favoriteStatus);
}
inline ::GlobalNamespace::LevelCollectionNavigationController* GlobalNamespace::LevelCollectionNavigationController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LevelCollectionNavigationController*>());
}
inline void GlobalNamespace::LevelCollectionNavigationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCollectionNavigationController::_AnimateCanvasGroupAlpha_b__40_0(float_t f) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(), "<AnimateCanvasGroupAlpha>b__40_0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, f);
}
inline void GlobalNamespace::LevelCollectionNavigationController::_AnimateCanvasGroupAlpha_b__40_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCollectionNavigationController*>::get(),
                                                                             "<AnimateCanvasGroupAlpha>b__40_1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelCollectionNavigationController::LevelCollectionNavigationController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
