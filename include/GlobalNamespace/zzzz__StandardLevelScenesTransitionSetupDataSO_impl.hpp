#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelScenesTransitionSetupDataSO.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupDataSO_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__PracticeSettings_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolManager_def.hpp"
#include "GlobalNamespace/zzzz__SceneInfo_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3a620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0._InitEnvironmentInfo_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0::*)(
    ::GlobalNamespace::EnvironmentInfoSO*)>(&::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0::_InitEnvironmentInfo_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3b3a630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0*>::get(), "<InitEnvironmentInfo>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0::__cordl_internal_get_openedLevelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___openedLevelId;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0::__cordl_internal_get_openedLevelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___openedLevelId;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0::__cordl_internal_set_openedLevelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___openedLevelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0::_InitEnvironmentInfo_b__0(::GlobalNamespace::EnvironmentInfoSO* env) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0*>::get(), "<InitEnvironmentInfo>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, env);
}
inline ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0* GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b36f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "add_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b37424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "remove_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.get_gameMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_gameMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b39fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "get_gameMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.set_gameMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(::StringW)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_gameMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b39ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "set_gameMode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.get_beatmapKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapKey (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_beatmapKey)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3b39ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "get_beatmapKey",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.set_beatmapKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::BeatmapKey)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_beatmapKey)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3b3a00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "set_beatmapKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.get_beatmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevel* (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_beatmapLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3a020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "get_beatmapLevel",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.set_beatmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_beatmapLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3a028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "set_beatmapLevel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.get_practiceSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PracticeSettings* (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_practiceSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3a030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "get_practiceSettings",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.set_practiceSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::PracticeSettings*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_practiceSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3a038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "set_practiceSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.get_usingOverrideColorScheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_usingOverrideColorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3a040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(),
                                                 "get_usingOverrideColorScheme", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.set_usingOverrideColorScheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(bool)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_usingOverrideColorScheme)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3b3a048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "set_usingOverrideColorScheme",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.get_colorScheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorScheme* (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_colorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3a054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "get_colorScheme",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.set_colorScheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::ColorScheme*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_colorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3a05c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "set_colorScheme", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.get_usingOverrideEnvironment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_usingOverrideEnvironment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3a064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(),
                                                 "get_usingOverrideEnvironment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.set_usingOverrideEnvironment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(bool)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_usingOverrideEnvironment)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3b3a06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "set_usingOverrideEnvironment",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.get_targetEnvironmentInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::EnvironmentInfoSO> (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_targetEnvironmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3a078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(),
                                                 "get_targetEnvironmentInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.set_targetEnvironmentInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::EnvironmentInfoSO*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_targetEnvironmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3a080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "set_targetEnvironmentInfo",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.get_originalEnvironmentInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::EnvironmentInfoSO> (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_originalEnvironmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3a088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(),
                                                 "get_originalEnvironmentInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.set_originalEnvironmentInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::EnvironmentInfoSO*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_originalEnvironmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3a090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "set_originalEnvironmentInfo",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.get_gameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers* (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3a098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "get_gameplayModifiers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.set_gameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3a0a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "set_gameplayModifiers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(
    ::StringW, ::GlobalNamespace::IBeatmapLevelData*, ::ByRef<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::OverrideEnvironmentSettings*,
    ::GlobalNamespace::ColorScheme*, bool, ::GlobalNamespace::ColorScheme*, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::PracticeSettings*,
    ::GlobalNamespace::EnvironmentsListModel*, ::GlobalNamespace::AudioClipAsyncLoader*, ::GlobalNamespace::SettingsManager*, ::GlobalNamespace::BeatmapDataLoader*,
    ::GlobalNamespace::BeatmapLevelsEntitlementModel*, ::StringW, bool, bool, ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData>)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3b3487c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 20>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentsListModel*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioClipAsyncLoader*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SettingsManager*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataLoader*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsEntitlementModel*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(
    ::StringW, ::ByRef<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::OverrideEnvironmentSettings*, ::GlobalNamespace::ColorScheme*, bool,
    ::GlobalNamespace::ColorScheme*, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::PracticeSettings*, ::GlobalNamespace::EnvironmentsListModel*,
    ::GlobalNamespace::AudioClipAsyncLoader*, ::GlobalNamespace::BeatmapDataLoader*, ::GlobalNamespace::SettingsManager*, ::StringW, ::GlobalNamespace::BeatmapLevelsModel*,
    ::GlobalNamespace::BeatmapLevelsEntitlementModel*, bool, bool, ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData>)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3b37d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 20>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentsListModel*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioClipAsyncLoader*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataLoader*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SettingsManager*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsEntitlementModel*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.Finish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::LevelCompletionResults*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::Finish)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3b3a5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "Finish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.InitEnvironmentInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(
    ::GlobalNamespace::OverrideEnvironmentSettings*, ::GlobalNamespace::EnvironmentsListModel*)>(&::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::InitEnvironmentInfo)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x3b3a0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "InitEnvironmentInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentsListModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.InitColorInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(
    ::GlobalNamespace::ColorScheme*, bool, ::GlobalNamespace::ColorScheme*)>(&::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::InitColorInfo)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3b3a2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "InitColorInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO.InitAndSetupScenes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)(
    ::GlobalNamespace::PlayerSpecificSettings*, ::StringW, bool)>(&::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::InitAndSetupScenes)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x3b3a340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "InitAndSetupScenes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3a628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SceneInfo>& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__standardGameplaySceneInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardGameplaySceneInfo;
}
constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__standardGameplaySceneInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardGameplaySceneInfo;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__standardGameplaySceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____standardGameplaySceneInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SceneInfo>& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__gameCoreSceneInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameCoreSceneInfo;
}
constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__gameCoreSceneInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameCoreSceneInfo;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__gameCoreSceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameCoreSceneInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*&
GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* const&
GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__gameMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameMode_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__gameMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameMode_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__gameMode_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameMode_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__beatmapKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__beatmapKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__beatmapKey_k__BackingField(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapKey_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__beatmapLevel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__beatmapLevel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__beatmapLevel_k__BackingField(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevel_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PracticeSettings*& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__practiceSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____practiceSettings_k__BackingField;
}
constexpr ::GlobalNamespace::PracticeSettings* const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__practiceSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____practiceSettings_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__practiceSettings_k__BackingField(::GlobalNamespace::PracticeSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____practiceSettings_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__usingOverrideColorScheme_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usingOverrideColorScheme_k__BackingField;
}
constexpr bool const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__usingOverrideColorScheme_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usingOverrideColorScheme_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__usingOverrideColorScheme_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____usingOverrideColorScheme_k__BackingField = value;
}
constexpr ::GlobalNamespace::ColorScheme*& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__colorScheme_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorScheme_k__BackingField;
}
constexpr ::GlobalNamespace::ColorScheme* const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__colorScheme_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorScheme_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__colorScheme_k__BackingField(::GlobalNamespace::ColorScheme* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorScheme_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__usingOverrideEnvironment_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usingOverrideEnvironment_k__BackingField;
}
constexpr bool const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__usingOverrideEnvironment_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usingOverrideEnvironment_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__usingOverrideEnvironment_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____usingOverrideEnvironment_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__targetEnvironmentInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetEnvironmentInfo_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__targetEnvironmentInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetEnvironmentInfo_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__targetEnvironmentInfo_k__BackingField(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetEnvironmentInfo_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__originalEnvironmentInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalEnvironmentInfo_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__originalEnvironmentInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalEnvironmentInfo_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__originalEnvironmentInfo_k__BackingField(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____originalEnvironmentInfo_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__gameplayModifiers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers_k__BackingField;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_get__gameplayModifiers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::__cordl_internal_set__gameplayModifiers_k__BackingField(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayModifiers_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::add_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "add_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::remove_didFinishEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "remove_didFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_gameMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "get_gameMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_gameMode(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "set_gameMode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapKey GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_beatmapKey() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "get_beatmapKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "set_beatmapKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapLevel* GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_beatmapLevel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "get_beatmapLevel",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevel*, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "set_beatmapLevel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PracticeSettings* GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_practiceSettings() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "get_practiceSettings",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PracticeSettings*, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_practiceSettings(::GlobalNamespace::PracticeSettings* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "set_practiceSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_usingOverrideColorScheme() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(),
                                               "get_usingOverrideColorScheme", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_usingOverrideColorScheme(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "set_usingOverrideColorScheme",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_colorScheme() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "get_colorScheme",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_colorScheme(::GlobalNamespace::ColorScheme* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "set_colorScheme", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_usingOverrideEnvironment() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(),
                                               "get_usingOverrideEnvironment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_usingOverrideEnvironment(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "set_usingOverrideEnvironment",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_targetEnvironmentInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "get_targetEnvironmentInfo",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_targetEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "set_targetEnvironmentInfo",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_originalEnvironmentInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(),
                                               "get_originalEnvironmentInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_originalEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "set_originalEnvironmentInfo",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::get_gameplayModifiers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "get_gameplayModifiers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "set_gameplayModifiers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::Init(
    ::StringW gameMode, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
    ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, ::GlobalNamespace::ColorScheme* playerOverrideColorScheme, bool playerOverrideLightshowColors,
    ::GlobalNamespace::ColorScheme* beatmapOverrideColorScheme, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
    ::GlobalNamespace::PracticeSettings* practiceSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader,
    ::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel,
    ::StringW backButtonText, bool useTestNoteCutSoundEffects, bool startPaused, ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData> recordingToolData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 20>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentsListModel*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioClipAsyncLoader*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SettingsManager*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataLoader*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsEntitlementModel*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameMode, beatmapLevelData, beatmapKey, beatmapLevel, overrideEnvironmentSettings, playerOverrideColorScheme,
                                                          playerOverrideLightshowColors, beatmapOverrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, environmentsListModel,
                                                          audioClipAsyncLoader, settingsManager, beatmapDataLoader, beatmapLevelsEntitlementModel, backButtonText, useTestNoteCutSoundEffects,
                                                          startPaused, recordingToolData);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::Init(
    ::StringW gameMode, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings,
    ::GlobalNamespace::ColorScheme* playerOverrideColorScheme, bool playerOverrideLightshowColors, ::GlobalNamespace::ColorScheme* beatmapOverrideColorScheme,
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
    ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader,
    ::GlobalNamespace::SettingsManager* settingsManager, ::StringW backButtonText, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
    ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel, bool useTestNoteCutSoundEffects, bool startPaused,
    ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData> recordingToolData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 20>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentsListModel*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioClipAsyncLoader*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataLoader*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SettingsManager*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsEntitlementModel*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameMode, beatmapKey, beatmapLevel, overrideEnvironmentSettings, playerOverrideColorScheme,
                                                          playerOverrideLightshowColors, beatmapOverrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, environmentsListModel,
                                                          audioClipAsyncLoader, beatmapDataLoader, settingsManager, backButtonText, beatmapLevelsModel, beatmapLevelsEntitlementModel,
                                                          useTestNoteCutSoundEffects, startPaused, recordingToolData);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::Finish(::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "Finish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelCompletionResults);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::InitEnvironmentInfo(::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings,
                                                                                           ::GlobalNamespace::EnvironmentsListModel* environmentsListModel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "InitEnvironmentInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentsListModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, overrideEnvironmentSettings, environmentsListModel);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::InitColorInfo(::GlobalNamespace::ColorScheme* playerOverrideColorScheme, bool playerOverrideLightshowColors,
                                                                                     ::GlobalNamespace::ColorScheme* beatmapOverrideColorScheme) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "InitColorInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerOverrideColorScheme, playerOverrideLightshowColors, beatmapOverrideColorScheme);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::InitAndSetupScenes(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::StringW backButtonText,
                                                                                          bool startPaused) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), "InitAndSetupScenes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerSpecificSettings, backButtonText, startPaused);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO::StandardLevelScenesTransitionSetupDataSO() {}
