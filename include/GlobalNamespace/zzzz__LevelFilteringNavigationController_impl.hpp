#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelFilteringNavigationController.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_impl.hpp"
#include "HMUI/zzzz__NavigationController_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelFilteringNavigationController_def.hpp"
#include "GlobalNamespace/zzzz__AnnotatedBeatmapLevelCollectionsViewController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsRepository_def.hpp"
#include "GlobalNamespace/zzzz__LevelFilteringNavigationController_def.hpp"
#include "GlobalNamespace/zzzz__LevelSearchViewController_def.hpp"
#include "GlobalNamespace/zzzz__LevelSelectionOptions_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__SelectLevelCategoryViewController_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LevelFilteringNavigationController____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelFilteringNavigationController____c::*)()>(
    &::GlobalNamespace::__LevelFilteringNavigationController____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b01ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelFilteringNavigationController____c._SelectAnnotatedBeatmapLevelCollection_b__53_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__LevelFilteringNavigationController____c::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::__LevelFilteringNavigationController____c::_SelectAnnotatedBeatmapLevelCollection_b__53_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3b01cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c*>::get(), "<SelectAnnotatedBeatmapLevelCollection>b__53_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__LevelFilteringNavigationController____c::setStaticF___9(::GlobalNamespace::__LevelFilteringNavigationController____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__LevelFilteringNavigationController____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c*>::get>(
      std::forward<::GlobalNamespace::__LevelFilteringNavigationController____c*>(value));
}
inline ::GlobalNamespace::__LevelFilteringNavigationController____c* GlobalNamespace::__LevelFilteringNavigationController____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__LevelFilteringNavigationController____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c*>::get>();
}
inline void GlobalNamespace::__LevelFilteringNavigationController____c::setStaticF___9__53_0(::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>*, "<>9__53_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>* GlobalNamespace::__LevelFilteringNavigationController____c::getStaticF___9__53_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>*, "<>9__53_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c*>::get>();
}
inline ::GlobalNamespace::__LevelFilteringNavigationController____c* GlobalNamespace::__LevelFilteringNavigationController____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LevelFilteringNavigationController____c*>());
}
inline void GlobalNamespace::__LevelFilteringNavigationController____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__LevelFilteringNavigationController____c::_SelectAnnotatedBeatmapLevelCollection_b__53_0(::GlobalNamespace::BeatmapLevelPack* pack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c*>::get(), "<SelectAnnotatedBeatmapLevelCollection>b__53_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, pack);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LevelFilteringNavigationController____c::__LevelFilteringNavigationController____c() {}
//  Writing Method size for method: ::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::*)()>(
    &::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b01b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0._SelectAnnotatedBeatmapLevelCollection_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::*)(::StringW)>(
    &::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::_SelectAnnotatedBeatmapLevelCollection_b__1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3b01cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0*>::get(), "<SelectAnnotatedBeatmapLevelCollection>b__1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelPack*& GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::__cordl_internal_get_levelPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelPack;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPack*> const&
GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::__cordl_internal_get_levelPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelPack;
}
constexpr void GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::__cordl_internal_set_levelPack(::GlobalNamespace::BeatmapLevelPack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelPack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0* GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0*>());
}
inline void GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::_SelectAnnotatedBeatmapLevelCollection_b__1(::StringW packID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0*>::get(), "<SelectAnnotatedBeatmapLevelCollection>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, packID);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0::__LevelFilteringNavigationController____c__DisplayClass53_0() {}
//  Writing Method size for method: ::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::*)()>(
    &::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::MoveNext)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x3b01cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3b021d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::LevelFilteringNavigationController>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_cancellationToken_5__2", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelsRepository*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__LevelFilteringNavigationController___UpdateCustomSongs_d__54(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::LevelFilteringNavigationController> __4__this,
    ::System::Threading::CancellationToken _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelsRepository*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_cancellationToken_5__2 = _cancellationToken_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54::__LevelFilteringNavigationController___UpdateCustomSongs_d__54() {}
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.add_didSelectBeatmapLevelPackEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(
    ::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*, ::UnityW<::UnityEngine::GameObject>,
                       ::GlobalNamespace::LevelSelectionOptions>*)>(&::GlobalNamespace::LevelFilteringNavigationController::add_didSelectBeatmapLevelPackEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3aff9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "add_didSelectBeatmapLevelPackEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*,
                                                                                     ::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::LevelSelectionOptions>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.remove_didSelectBeatmapLevelPackEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(
    ::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*, ::UnityW<::UnityEngine::GameObject>,
                       ::GlobalNamespace::LevelSelectionOptions>*)>(&::GlobalNamespace::LevelFilteringNavigationController::remove_didSelectBeatmapLevelPackEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3affa70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "remove_didSelectBeatmapLevelPackEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*,
                                                                                     ::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::LevelSelectionOptions>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.add_didStartLoadingEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*)>(&::GlobalNamespace::LevelFilteringNavigationController::add_didStartLoadingEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3affb20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "add_didStartLoadingEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.remove_didStartLoadingEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*)>(&::GlobalNamespace::LevelFilteringNavigationController::remove_didStartLoadingEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3affbd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "remove_didStartLoadingEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.add_didPressAllSongsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*)>(&::GlobalNamespace::LevelFilteringNavigationController::add_didPressAllSongsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3affc80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "add_didPressAllSongsEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.remove_didPressAllSongsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*)>(&::GlobalNamespace::LevelFilteringNavigationController::remove_didPressAllSongsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3affd30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "remove_didPressAllSongsEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.add_didOpenBeatmapLevelCollectionsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::System::Action*)>(
    &::GlobalNamespace::LevelFilteringNavigationController::add_didOpenBeatmapLevelCollectionsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3affde0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "add_didOpenBeatmapLevelCollectionsEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.remove_didOpenBeatmapLevelCollectionsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::System::Action*)>(
    &::GlobalNamespace::LevelFilteringNavigationController::remove_didOpenBeatmapLevelCollectionsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3affe7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "remove_didOpenBeatmapLevelCollectionsEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.add_didCloseBeatmapLevelCollectionsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::System::Action*)>(
    &::GlobalNamespace::LevelFilteringNavigationController::add_didCloseBeatmapLevelCollectionsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3afff18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "add_didCloseBeatmapLevelCollectionsEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.remove_didCloseBeatmapLevelCollectionsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::System::Action*)>(
    &::GlobalNamespace::LevelFilteringNavigationController::remove_didCloseBeatmapLevelCollectionsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3afffb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                                               "remove_didCloseBeatmapLevelCollectionsEvent", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.get_selectedBeatmapLevelPack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelPack* (::GlobalNamespace::LevelFilteringNavigationController::*)()>(
    &::GlobalNamespace::LevelFilteringNavigationController::get_selectedBeatmapLevelPack)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3b00050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                                               "get_selectedBeatmapLevelPack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.get_selectedLevelCategory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory (
    ::GlobalNamespace::LevelFilteringNavigationController::*)()>(&::GlobalNamespace::LevelFilteringNavigationController::get_selectedLevelCategory)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3b00068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                                               "get_selectedLevelCategory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(
    ::GlobalNamespace::SongPackMask, ::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, bool, bool)>(
    &::GlobalNamespace::LevelFilteringNavigationController::Setup)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3b000d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.SetupBeatmapLevelPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(
    &::GlobalNamespace::LevelFilteringNavigationController::SetupBeatmapLevelPacks)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x3b00180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                                               "SetupBeatmapLevelPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(bool, bool, bool)>(
    &::GlobalNamespace::LevelFilteringNavigationController::DidActivate)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x3b00840;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandleLevelSearchViewControllerDidStartLoading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::LevelSearchViewController*)>(
    &::GlobalNamespace::LevelFilteringNavigationController::HandleLevelSearchViewControllerDidStartLoading)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3b00f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "HandleLevelSearchViewControllerDidStartLoading",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelSearchViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(bool, bool)>(
    &::GlobalNamespace::LevelFilteringNavigationController::DidDeactivate)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x3b00fa8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandleLevelSearchViewControllerDidFilterBeatmapLevelCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions)>(
        &::GlobalNamespace::LevelFilteringNavigationController::HandleLevelSearchViewControllerDidFilterBeatmapLevelCollection)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3b014d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                 "HandleLevelSearchViewControllerDidFilterBeatmapLevelCollection", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelSelectionOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandleSelectLevelCategoryViewControllerDidSelectLevelCategory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(
    ::GlobalNamespace::SelectLevelCategoryViewController*, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory)>(
    &::GlobalNamespace::LevelFilteringNavigationController::HandleSelectLevelCategoryViewControllerDidSelectLevelCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b01538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "HandleSelectLevelCategoryViewControllerDidSelectLevelCategory",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.UpdateSecondChildControllerContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(
    ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory)>(&::GlobalNamespace::LevelFilteringNavigationController::UpdateSecondChildControllerContent)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3b00e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "UpdateSecondChildControllerContent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.ShowPacksInSecondChildController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*)>(&::GlobalNamespace::LevelFilteringNavigationController::ShowPacksInSecondChildController)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x3b01540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "ShowPacksInSecondChildController",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.ReplaceSecondViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::LevelFilteringNavigationController::ReplaceSecondViewController)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3b01738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "ReplaceSecondViewController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandlePlayerDataFavoriteLevelsSetDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(
    &::GlobalNamespace::LevelFilteringNavigationController::HandlePlayerDataFavoriteLevelsSetDidChange)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3b01864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                 "HandlePlayerDataFavoriteLevelsSetDidChange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandleIncreaseNumberOfGameplays
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(
    &::GlobalNamespace::LevelFilteringNavigationController::HandleIncreaseNumberOfGameplays)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3b018a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                 "HandleIncreaseNumberOfGameplays", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(
    &::GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3b01900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                                               "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(
    &::GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3b0191c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                                               "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3b01938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                 "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.SelectAnnotatedBeatmapLevelCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::LevelFilteringNavigationController::SelectAnnotatedBeatmapLevelCollection)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x3b019a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "SelectAnnotatedBeatmapLevelCollection",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.UpdateCustomSongs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(
    &::GlobalNamespace::LevelFilteringNavigationController::UpdateCustomSongs)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3b017d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                                               "UpdateCustomSongs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(
    &::GlobalNamespace::LevelFilteringNavigationController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b01ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController._SetupBeatmapLevelPacks_b__39_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::LevelFilteringNavigationController::_SetupBeatmapLevelPacks_b__39_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3b01ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "<SetupBeatmapLevelPacks>b__39_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController._SetupBeatmapLevelPacks_b__39_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::LevelFilteringNavigationController::_SetupBeatmapLevelPacks_b__39_1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3b01bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "<SetupBeatmapLevelPacks>b__39_1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__emptyFavoritesListInfoPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyFavoritesListInfoPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__emptyFavoritesListInfoPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyFavoritesListInfoPrefab;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__emptyFavoritesListInfoPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____emptyFavoritesListInfoPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__emptyCustomSongListInfoPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyCustomSongListInfoPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__emptyCustomSongListInfoPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyCustomSongListInfoPrefab;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__emptyCustomSongListInfoPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____emptyCustomSongListInfoPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__selectLevelCategoryViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectLevelCategoryViewController;
}
constexpr ::UnityW<::GlobalNamespace::SelectLevelCategoryViewController> const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__selectLevelCategoryViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectLevelCategoryViewController;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__selectLevelCategoryViewController(::UnityW<::GlobalNamespace::SelectLevelCategoryViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectLevelCategoryViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController>&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__annotatedBeatmapLevelCollectionsViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____annotatedBeatmapLevelCollectionsViewController;
}
constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController> const&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__annotatedBeatmapLevelCollectionsViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____annotatedBeatmapLevelCollectionsViewController;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__annotatedBeatmapLevelCollectionsViewController(
    ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____annotatedBeatmapLevelCollectionsViewController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LevelSearchViewController>& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__levelSearchViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelSearchViewController;
}
constexpr ::UnityW<::GlobalNamespace::LevelSearchViewController> const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__levelSearchViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelSearchViewController;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__levelSearchViewController(::UnityW<::GlobalNamespace::LevelSearchViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelSearchViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*, ::UnityW<::UnityEngine::GameObject>,
                             ::GlobalNamespace::LevelSelectionOptions>*&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get_didSelectBeatmapLevelPackEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectBeatmapLevelPackEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*,
                                                                 ::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::LevelSelectionOptions>*> const&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get_didSelectBeatmapLevelPackEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectBeatmapLevelPackEvent;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set_didSelectBeatmapLevelPackEvent(
    ::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*, ::UnityW<::UnityEngine::GameObject>,
                       ::GlobalNamespace::LevelSelectionOptions>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didSelectBeatmapLevelPackEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get_didStartLoadingEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didStartLoadingEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*> const&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get_didStartLoadingEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didStartLoadingEvent;
}
constexpr void
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didStartLoadingEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get_didPressAllSongsEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressAllSongsEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*> const&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get_didPressAllSongsEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressAllSongsEvent;
}
constexpr void
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set_didPressAllSongsEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressAllSongsEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get_didOpenBeatmapLevelCollectionsEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didOpenBeatmapLevelCollectionsEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get_didOpenBeatmapLevelCollectionsEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didOpenBeatmapLevelCollectionsEvent;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set_didOpenBeatmapLevelCollectionsEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didOpenBeatmapLevelCollectionsEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get_didCloseBeatmapLevelCollectionsEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didCloseBeatmapLevelCollectionsEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get_didCloseBeatmapLevelCollectionsEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didCloseBeatmapLevelCollectionsEvent;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set_didCloseBeatmapLevelCollectionsEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didCloseBeatmapLevelCollectionsEvent)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__currentNoDataInfoPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentNoDataInfoPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__currentNoDataInfoPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentNoDataInfoPrefab;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__currentNoDataInfoPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentNoDataInfoPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__levelPackIdToBeSelectedAfterPresent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackIdToBeSelectedAfterPresent;
}
constexpr ::StringW const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__levelPackIdToBeSelectedAfterPresent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelPackIdToBeSelectedAfterPresent;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__levelPackIdToBeSelectedAfterPresent(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelPackIdToBeSelectedAfterPresent)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__hidePacksIfOneOrNone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hidePacksIfOneOrNone;
}
constexpr bool const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__hidePacksIfOneOrNone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hidePacksIfOneOrNone;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__hidePacksIfOneOrNone(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hidePacksIfOneOrNone = value;
}
constexpr bool& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__enableCustomLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableCustomLevels;
}
constexpr bool const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__enableCustomLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableCustomLevels;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__enableCustomLevels(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableCustomLevels = value;
}
constexpr ::GlobalNamespace::SongPackMask& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__songPackMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMask;
}
constexpr ::GlobalNamespace::SongPackMask const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__songPackMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMask;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__songPackMask(::GlobalNamespace::SongPackMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songPackMask = value;
}
constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__enabledLevelCategories() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledLevelCategories;
}
constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> const&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__enabledLevelCategories() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledLevelCategories;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__enabledLevelCategories(
    ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____enabledLevelCategories)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__ostBeatmapLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ostBeatmapLevelPacks;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> const&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__ostBeatmapLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ostBeatmapLevelPacks;
}
constexpr void
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__ostBeatmapLevelPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ostBeatmapLevelPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__musicPacksBeatmapLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicPacksBeatmapLevelPacks;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> const&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__musicPacksBeatmapLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicPacksBeatmapLevelPacks;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__musicPacksBeatmapLevelPacks(
    ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____musicPacksBeatmapLevelPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__customLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLevelPacks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*> const&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__customLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLevelPacks;
}
constexpr void
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__customLevelPacks(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____customLevelPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__allOfficialBeatmapLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allOfficialBeatmapLevelPacks;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> const&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__allOfficialBeatmapLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allOfficialBeatmapLevelPacks;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__allOfficialBeatmapLevelPacks(
    ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allOfficialBeatmapLevelPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__allBeatmapLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allBeatmapLevelPacks;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> const&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__allBeatmapLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allBeatmapLevelPacks;
}
constexpr void
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__allBeatmapLevelPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allBeatmapLevelPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LevelFilteringNavigationController::add_didSelectBeatmapLevelPackEvent(
    ::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*, ::UnityW<::UnityEngine::GameObject>,
                       ::GlobalNamespace::LevelSelectionOptions>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "add_didSelectBeatmapLevelPackEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*,
                                                                                   ::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::LevelSelectionOptions>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::remove_didSelectBeatmapLevelPackEvent(
    ::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*, ::UnityW<::UnityEngine::GameObject>,
                       ::GlobalNamespace::LevelSelectionOptions>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "remove_didSelectBeatmapLevelPackEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*,
                                                                                   ::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::LevelSelectionOptions>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::add_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "add_didStartLoadingEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::remove_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "remove_didStartLoadingEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::add_didPressAllSongsEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "add_didPressAllSongsEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::remove_didPressAllSongsEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "remove_didPressAllSongsEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::add_didOpenBeatmapLevelCollectionsEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "add_didOpenBeatmapLevelCollectionsEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::remove_didOpenBeatmapLevelCollectionsEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "remove_didOpenBeatmapLevelCollectionsEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::add_didCloseBeatmapLevelCollectionsEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "add_didCloseBeatmapLevelCollectionsEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::remove_didCloseBeatmapLevelCollectionsEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "remove_didCloseBeatmapLevelCollectionsEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapLevelPack* GlobalNamespace::LevelFilteringNavigationController::get_selectedBeatmapLevelPack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                                             "get_selectedBeatmapLevelPack", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPack*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory GlobalNamespace::LevelFilteringNavigationController::get_selectedLevelCategory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                                             "get_selectedLevelCategory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelFilteringNavigationController::Setup(::GlobalNamespace::SongPackMask songPackMask, ::GlobalNamespace::BeatmapLevelPack* levelPackToBeSelectedAfterPresent,
                                                                       ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory startLevelCategory, bool hidePacksIfOneOrNone,
                                                                       bool enableCustomLevels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songPackMask, levelPackToBeSelectedAfterPresent, startLevelCategory, hidePacksIfOneOrNone, enableCustomLevels);
}
inline void GlobalNamespace::LevelFilteringNavigationController::SetupBeatmapLevelPacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                                             "SetupBeatmapLevelPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelFilteringNavigationController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::LevelFilteringNavigationController::HandleLevelSearchViewControllerDidStartLoading(::GlobalNamespace::LevelSearchViewController* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "HandleLevelSearchViewControllerDidStartLoading",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelSearchViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void GlobalNamespace::LevelFilteringNavigationController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::LevelFilteringNavigationController::HandleLevelSearchViewControllerDidFilterBeatmapLevelCollection(::GlobalNamespace::BeatmapLevelPack* annotatedBeatmapLevelCollection,
                                                                                                                                ::GlobalNamespace::LevelSelectionOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                               "HandleLevelSearchViewControllerDidFilterBeatmapLevelCollection", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelSelectionOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, annotatedBeatmapLevelCollection, options);
}
inline void GlobalNamespace::LevelFilteringNavigationController::HandleSelectLevelCategoryViewControllerDidSelectLevelCategory(
    ::GlobalNamespace::SelectLevelCategoryViewController* viewController, ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory levelCategory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "HandleSelectLevelCategoryViewControllerDidSelectLevelCategory",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectLevelCategoryViewController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, levelCategory);
}
inline void GlobalNamespace::LevelFilteringNavigationController::UpdateSecondChildControllerContent(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory levelCategory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "UpdateSecondChildControllerContent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelCategory);
}
inline void
GlobalNamespace::LevelFilteringNavigationController::ShowPacksInSecondChildController(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* beatmapLevelPacks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "ShowPacksInSecondChildController",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevelPacks);
}
inline void GlobalNamespace::LevelFilteringNavigationController::ReplaceSecondViewController(::HMUI::ViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "ReplaceSecondViewController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::LevelFilteringNavigationController::HandlePlayerDataFavoriteLevelsSetDidChange() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                               "HandlePlayerDataFavoriteLevelsSetDidChange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelFilteringNavigationController::HandleIncreaseNumberOfGameplays() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                                             "HandleIncreaseNumberOfGameplays", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                                             "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                                             "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection(
    ::GlobalNamespace::BeatmapLevelPack* annotatedBeatmapLevelCollection) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                               "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, annotatedBeatmapLevelCollection);
}
inline void GlobalNamespace::LevelFilteringNavigationController::SelectAnnotatedBeatmapLevelCollection(::GlobalNamespace::BeatmapLevelPack* levelPack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "SelectAnnotatedBeatmapLevelCollection",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelPack);
}
inline void GlobalNamespace::LevelFilteringNavigationController::UpdateCustomSongs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                                             "UpdateCustomSongs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelFilteringNavigationController* GlobalNamespace::LevelFilteringNavigationController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LevelFilteringNavigationController*>());
}
inline void GlobalNamespace::LevelFilteringNavigationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LevelFilteringNavigationController::_SetupBeatmapLevelPacks_b__39_0(::GlobalNamespace::BeatmapLevelPack* pack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "<SetupBeatmapLevelPacks>b__39_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pack);
}
inline bool GlobalNamespace::LevelFilteringNavigationController::_SetupBeatmapLevelPacks_b__39_1(::GlobalNamespace::BeatmapLevelPack* pack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilteringNavigationController*>::get(), "<SetupBeatmapLevelPacks>b__39_1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pack);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFilteringNavigationController::LevelFilteringNavigationController() {}
