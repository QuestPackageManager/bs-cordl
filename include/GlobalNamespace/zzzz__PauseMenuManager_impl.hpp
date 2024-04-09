#pragma once
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PauseMenuManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSpawnRotation_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
#include "GlobalNamespace/zzzz__PauseAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__PauseMenuManager_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PauseMenuManager__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PauseMenuManager__InitData::*)(
    ::StringW, ByRef<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::BeatmapLevel*, bool, bool)>(&::GlobalNamespace::__PauseMenuManager__InitData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x25e17b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PauseMenuManager__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__PauseMenuManager__InitData::__cordl_internal_get_backButtonText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backButtonText;
}
constexpr ::StringW const& GlobalNamespace::__PauseMenuManager__InitData::__cordl_internal_get_backButtonText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backButtonText;
}
constexpr void GlobalNamespace::__PauseMenuManager__InitData::__cordl_internal_set_backButtonText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___backButtonText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::__PauseMenuManager__InitData::__cordl_internal_get_beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::__PauseMenuManager__InitData::__cordl_internal_get_beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr void GlobalNamespace::__PauseMenuManager__InitData::__cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapKey = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::__PauseMenuManager__InitData::__cordl_internal_get_beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& GlobalNamespace::__PauseMenuManager__InitData::__cordl_internal_get_beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevel;
}
constexpr void GlobalNamespace::__PauseMenuManager__InitData::__cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__PauseMenuManager__InitData::__cordl_internal_get_showRestartButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showRestartButton;
}
constexpr bool const& GlobalNamespace::__PauseMenuManager__InitData::__cordl_internal_get_showRestartButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showRestartButton;
}
constexpr void GlobalNamespace::__PauseMenuManager__InitData::__cordl_internal_set_showRestartButton(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showRestartButton = value;
}
constexpr bool& GlobalNamespace::__PauseMenuManager__InitData::__cordl_internal_get_showLevelBar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showLevelBar;
}
constexpr bool const& GlobalNamespace::__PauseMenuManager__InitData::__cordl_internal_get_showLevelBar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showLevelBar;
}
constexpr void GlobalNamespace::__PauseMenuManager__InitData::__cordl_internal_set_showLevelBar(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showLevelBar = value;
}
inline ::GlobalNamespace::__PauseMenuManager__InitData* GlobalNamespace::__PauseMenuManager__InitData::New_ctor(::StringW backButtonText, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey,
                                                                                                                ::GlobalNamespace::BeatmapLevel* beatmapLevel, bool showRestartButton,
                                                                                                                bool showLevelBar) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PauseMenuManager__InitData*>(backButtonText, beatmapKey, beatmapLevel, showRestartButton, showLevelBar));
}
inline void GlobalNamespace::__PauseMenuManager__InitData::_ctor(::StringW backButtonText, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                 bool showRestartButton, bool showLevelBar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PauseMenuManager__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, backButtonText, beatmapKey, beatmapLevel, showRestartButton, showLevelBar);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PauseMenuManager__InitData::__PauseMenuManager__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.add_didPressContinueButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)(::System::Action*)>(
    &::GlobalNamespace::PauseMenuManager::add_didPressContinueButtonEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25e0304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "add_didPressContinueButtonEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.remove_didPressContinueButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)(::System::Action*)>(
    &::GlobalNamespace::PauseMenuManager::remove_didPressContinueButtonEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25e0bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "remove_didPressContinueButtonEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.add_didPressMenuButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)(::System::Action*)>(
    &::GlobalNamespace::PauseMenuManager::add_didPressMenuButtonEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25e043c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "add_didPressMenuButtonEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.remove_didPressMenuButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)(::System::Action*)>(
    &::GlobalNamespace::PauseMenuManager::remove_didPressMenuButtonEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25e0cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "remove_didPressMenuButtonEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.add_didPressRestartButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)(::System::Action*)>(
    &::GlobalNamespace::PauseMenuManager::add_didPressRestartButtonEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25e03a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "add_didPressRestartButtonEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.remove_didPressRestartButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)(::System::Action*)>(
    &::GlobalNamespace::PauseMenuManager::remove_didPressRestartButtonEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25e0c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "remove_didPressRestartButtonEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.add_didFinishResumeAnimationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)(::System::Action*)>(
    &::GlobalNamespace::PauseMenuManager::add_didFinishResumeAnimationEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25e0268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "add_didFinishResumeAnimationEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.remove_didFinishResumeAnimationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)(::System::Action*)>(
    &::GlobalNamespace::PauseMenuManager::remove_didFinishResumeAnimationEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25e0b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "remove_didFinishResumeAnimationEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::Awake)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x25e11dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::Start)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x25e13a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::OnDestroy)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x25e14c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::Update)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x25e15a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.ShowMenu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::ShowMenu)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25e0d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "ShowMenu",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.StartResumeAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::StartResumeAnimation)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25e101c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                                                                               "StartResumeAnimation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.HandleResumeFromPauseAnimationDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(
    &::GlobalNamespace::PauseMenuManager::HandleResumeFromPauseAnimationDidFinish)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25e1794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "HandleResumeFromPauseAnimationDidFinish",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.MenuButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::MenuButtonPressed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x25e175c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "MenuButtonPressed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.RestartButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::RestartButtonPressed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x25e1710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                                                                               "RestartButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager.ContinueButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::ContinueButtonPressed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x25e16d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                                                                               "ContinueButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PauseMenuManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PauseMenuManager::*)()>(&::GlobalNamespace::PauseMenuManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e17b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PauseAnimationController>& GlobalNamespace::PauseMenuManager::__cordl_internal_get__pauseAnimationController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseAnimationController;
}
constexpr ::UnityW<::GlobalNamespace::PauseAnimationController> const& GlobalNamespace::PauseMenuManager::__cordl_internal_get__pauseAnimationController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseAnimationController;
}
constexpr void GlobalNamespace::PauseMenuManager::__cordl_internal_set__pauseAnimationController(::UnityW<::GlobalNamespace::PauseAnimationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pauseAnimationController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LevelBar>& GlobalNamespace::PauseMenuManager::__cordl_internal_get__levelBar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelBar;
}
constexpr ::UnityW<::GlobalNamespace::LevelBar> const& GlobalNamespace::PauseMenuManager::__cordl_internal_get__levelBar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelBar;
}
constexpr void GlobalNamespace::PauseMenuManager::__cordl_internal_set__levelBar(::UnityW<::GlobalNamespace::LevelBar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelBar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::PauseMenuManager::__cordl_internal_get__continueButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continueButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::PauseMenuManager::__cordl_internal_get__continueButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continueButton;
}
constexpr void GlobalNamespace::PauseMenuManager::__cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____continueButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::PauseMenuManager::__cordl_internal_get__restartButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____restartButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::PauseMenuManager::__cordl_internal_get__restartButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____restartButton;
}
constexpr void GlobalNamespace::PauseMenuManager::__cordl_internal_set__restartButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____restartButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::PauseMenuManager::__cordl_internal_get__backButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::PauseMenuManager::__cordl_internal_get__backButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backButton;
}
constexpr void GlobalNamespace::PauseMenuManager::__cordl_internal_set__backButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::PauseMenuManager::__cordl_internal_get__backButtonText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backButtonText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::PauseMenuManager::__cordl_internal_get__backButtonText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backButtonText;
}
constexpr void GlobalNamespace::PauseMenuManager::__cordl_internal_set__backButtonText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backButtonText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PauseMenuManager::__cordl_internal_get__pauseContainerTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseContainerTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PauseMenuManager::__cordl_internal_get__pauseContainerTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseContainerTransform;
}
constexpr void GlobalNamespace::PauseMenuManager::__cordl_internal_set__pauseContainerTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pauseContainerTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PauseMenuManager__InitData*& GlobalNamespace::PauseMenuManager::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PauseMenuManager__InitData*> const& GlobalNamespace::PauseMenuManager::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::PauseMenuManager::__cordl_internal_set__initData(::GlobalNamespace::__PauseMenuManager__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::PauseMenuManager::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& GlobalNamespace::PauseMenuManager::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void GlobalNamespace::PauseMenuManager::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPlatformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentSpawnRotation>& GlobalNamespace::PauseMenuManager::__cordl_internal_get__environmentSpawnRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentSpawnRotation;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentSpawnRotation> const& GlobalNamespace::PauseMenuManager::__cordl_internal_get__environmentSpawnRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentSpawnRotation;
}
constexpr void GlobalNamespace::PauseMenuManager::__cordl_internal_set__environmentSpawnRotation(::UnityW<::GlobalNamespace::EnvironmentSpawnRotation> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentSpawnRotation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::PauseMenuManager::__cordl_internal_get_didPressContinueButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressContinueButtonEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::PauseMenuManager::__cordl_internal_get_didPressContinueButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressContinueButtonEvent;
}
constexpr void GlobalNamespace::PauseMenuManager::__cordl_internal_set_didPressContinueButtonEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressContinueButtonEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::PauseMenuManager::__cordl_internal_get_didPressMenuButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressMenuButtonEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::PauseMenuManager::__cordl_internal_get_didPressMenuButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressMenuButtonEvent;
}
constexpr void GlobalNamespace::PauseMenuManager::__cordl_internal_set_didPressMenuButtonEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressMenuButtonEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::PauseMenuManager::__cordl_internal_get_didPressRestartButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressRestartButtonEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::PauseMenuManager::__cordl_internal_get_didPressRestartButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressRestartButtonEvent;
}
constexpr void GlobalNamespace::PauseMenuManager::__cordl_internal_set_didPressRestartButtonEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressRestartButtonEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::PauseMenuManager::__cordl_internal_get_didFinishResumeAnimationEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishResumeAnimationEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::PauseMenuManager::__cordl_internal_get_didFinishResumeAnimationEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishResumeAnimationEvent;
}
constexpr void GlobalNamespace::PauseMenuManager::__cordl_internal_set_didFinishResumeAnimationEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishResumeAnimationEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ButtonBinder*& GlobalNamespace::PauseMenuManager::__cordl_internal_get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& GlobalNamespace::PauseMenuManager::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void GlobalNamespace::PauseMenuManager::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::PauseMenuManager::__cordl_internal_get__disabledInteractionRemainingTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledInteractionRemainingTime;
}
constexpr float_t const& GlobalNamespace::PauseMenuManager::__cordl_internal_get__disabledInteractionRemainingTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledInteractionRemainingTime;
}
constexpr void GlobalNamespace::PauseMenuManager::__cordl_internal_set__disabledInteractionRemainingTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disabledInteractionRemainingTime = value;
}
inline void GlobalNamespace::PauseMenuManager::add_didPressContinueButtonEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "add_didPressContinueButtonEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseMenuManager::remove_didPressContinueButtonEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "remove_didPressContinueButtonEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseMenuManager::add_didPressMenuButtonEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "add_didPressMenuButtonEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseMenuManager::remove_didPressMenuButtonEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "remove_didPressMenuButtonEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseMenuManager::add_didPressRestartButtonEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "add_didPressRestartButtonEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseMenuManager::remove_didPressRestartButtonEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "remove_didPressRestartButtonEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseMenuManager::add_didFinishResumeAnimationEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "add_didFinishResumeAnimationEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseMenuManager::remove_didFinishResumeAnimationEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "remove_didFinishResumeAnimationEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PauseMenuManager::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseMenuManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseMenuManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseMenuManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseMenuManager::ShowMenu() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "ShowMenu",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseMenuManager::StartResumeAnimation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                                                                             "StartResumeAnimation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseMenuManager::HandleResumeFromPauseAnimationDidFinish() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "HandleResumeFromPauseAnimationDidFinish",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseMenuManager::MenuButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), "MenuButtonPressed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseMenuManager::RestartButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                                                                             "RestartButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PauseMenuManager::ContinueButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(),
                                                                             "ContinueButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PauseMenuManager* GlobalNamespace::PauseMenuManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PauseMenuManager*>());
}
inline void GlobalNamespace::PauseMenuManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PauseMenuManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PauseMenuManager::PauseMenuManager() {}
