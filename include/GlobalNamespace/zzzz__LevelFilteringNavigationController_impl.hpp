#pragma once
// IWYU pragma private; include "GlobalNamespace\LevelFilteringNavigationController.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_impl.hpp"
#include "GlobalNamespace/zzzz__SelectLevelCategoryViewController_impl.hpp"
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
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController___c::*)()>(&::GlobalNamespace::LevelFilteringNavigationController___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59540d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController___c._SelectAnnotatedBeatmapLevelCollection_b__53_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LevelFilteringNavigationController___c::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::LevelFilteringNavigationController___c::_SelectAnnotatedBeatmapLevelCollection_b__53_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59540d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController___c*>(),
                                                             { "<SelectAnnotatedBeatmapLevelCollection>b__53_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelFilteringNavigationController___c::setStaticF___9(::GlobalNamespace::LevelFilteringNavigationController___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::LevelFilteringNavigationController___c*, "<>9", ::GlobalNamespace::LevelFilteringNavigationController___c*>(
      std::forward<::GlobalNamespace::LevelFilteringNavigationController___c*>(value));
}
inline ::GlobalNamespace::LevelFilteringNavigationController___c* GlobalNamespace::LevelFilteringNavigationController___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::LevelFilteringNavigationController___c*, "<>9", ::GlobalNamespace::LevelFilteringNavigationController___c*>();
}
inline void GlobalNamespace::LevelFilteringNavigationController___c::setStaticF___9__53_0(::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>*, "<>9__53_0", ::GlobalNamespace::LevelFilteringNavigationController___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>* GlobalNamespace::LevelFilteringNavigationController___c::getStaticF___9__53_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>*, "<>9__53_0", ::GlobalNamespace::LevelFilteringNavigationController___c*>();
}
inline void GlobalNamespace::LevelFilteringNavigationController___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LevelFilteringNavigationController___c::_SelectAnnotatedBeatmapLevelCollection_b__53_0(::GlobalNamespace::BeatmapLevelPack* pack) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController___c*>(),
                                                           { "<SelectAnnotatedBeatmapLevelCollection>b__53_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, pack);
}
inline ::GlobalNamespace::LevelFilteringNavigationController___c* GlobalNamespace::LevelFilteringNavigationController___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelFilteringNavigationController___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFilteringNavigationController___c::LevelFilteringNavigationController___c() {}
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0::*)()>(
    &::GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5953f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0._SelectAnnotatedBeatmapLevelCollection_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0::*)(::StringW)>(
    &::GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0::_SelectAnnotatedBeatmapLevelCollection_b__1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59540ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0*>(),
                                                                                           { "<SelectAnnotatedBeatmapLevelCollection>b__1", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelPack*& GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0::__cordl_internal_get_levelPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelPack;
}
constexpr ::GlobalNamespace::BeatmapLevelPack* const& GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0::__cordl_internal_get_levelPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelPack;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0::__cordl_internal_set_levelPack(::GlobalNamespace::BeatmapLevelPack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelPack = value;
}
inline void GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0::_SelectAnnotatedBeatmapLevelCollection_b__1(::StringW packID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0*>(),
                                                                                         { "<SelectAnnotatedBeatmapLevelCollection>b__1", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, packID);
}
inline ::GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0* GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0::LevelFilteringNavigationController___c__DisplayClass53_0() {}
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54::*)()>(
    &::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54::MoveNext)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x595410c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59546e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::LevelFilteringNavigationController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelsRepository*>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54::LevelFilteringNavigationController__UpdateCustomSongs_d__54(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::LevelFilteringNavigationController> __4__this,
    ::System::Threading::CancellationToken _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelsRepository*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_cancellationToken_5__2 = _cancellationToken_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54::LevelFilteringNavigationController__UpdateCustomSongs_d__54() {}
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.add_didSelectBeatmapLevelPackEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(
    ::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*, ::UnityW<::UnityEngine::GameObject>,
                       ::GlobalNamespace::LevelSelectionOptions>*)>(&::GlobalNamespace::LevelFilteringNavigationController::add_didSelectBeatmapLevelPackEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5951a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                { "add_didSelectBeatmapLevelPackEvent",
                                                  {},
                                                  { ::i2c::type_of<::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*,
                                                                                      ::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::LevelSelectionOptions>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.remove_didSelectBeatmapLevelPackEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(
    ::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*, ::UnityW<::UnityEngine::GameObject>,
                       ::GlobalNamespace::LevelSelectionOptions>*)>(&::GlobalNamespace::LevelFilteringNavigationController::remove_didSelectBeatmapLevelPackEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5951b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                { "remove_didSelectBeatmapLevelPackEvent",
                                                  {},
                                                  { ::i2c::type_of<::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*,
                                                                                      ::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::LevelSelectionOptions>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.add_didStartLoadingEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*)>(&::GlobalNamespace::LevelFilteringNavigationController::add_didStartLoadingEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5951bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                { "add_didStartLoadingEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.remove_didStartLoadingEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*)>(&::GlobalNamespace::LevelFilteringNavigationController::remove_didStartLoadingEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5951cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                { "remove_didStartLoadingEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.add_didPressAllSongsEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*)>(&::GlobalNamespace::LevelFilteringNavigationController::add_didPressAllSongsEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5951d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                { "add_didPressAllSongsEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.remove_didPressAllSongsEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*)>(&::GlobalNamespace::LevelFilteringNavigationController::remove_didPressAllSongsEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5951e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                { "remove_didPressAllSongsEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.add_didOpenBeatmapLevelCollectionsEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::System::Action*)>(
    &::GlobalNamespace::LevelFilteringNavigationController::add_didOpenBeatmapLevelCollectionsEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5951ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                           { "add_didOpenBeatmapLevelCollectionsEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.remove_didOpenBeatmapLevelCollectionsEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::System::Action*)>(
    &::GlobalNamespace::LevelFilteringNavigationController::remove_didOpenBeatmapLevelCollectionsEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5951fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                           { "remove_didOpenBeatmapLevelCollectionsEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.add_didCloseBeatmapLevelCollectionsEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::System::Action*)>(
    &::GlobalNamespace::LevelFilteringNavigationController::add_didCloseBeatmapLevelCollectionsEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5952050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                           { "add_didCloseBeatmapLevelCollectionsEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.remove_didCloseBeatmapLevelCollectionsEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::System::Action*)>(
    &::GlobalNamespace::LevelFilteringNavigationController::remove_didCloseBeatmapLevelCollectionsEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59520fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                           { "remove_didCloseBeatmapLevelCollectionsEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.get_selectedBeatmapLevelPack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelPack* (::GlobalNamespace::LevelFilteringNavigationController::*)()>(
    &::GlobalNamespace::LevelFilteringNavigationController::get_selectedBeatmapLevelPack)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59521a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(), { "get_selectedBeatmapLevelPack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.get_selectedLevelCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory (::GlobalNamespace::LevelFilteringNavigationController::*)()>(
    &::GlobalNamespace::LevelFilteringNavigationController::get_selectedLevelCategory)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59521bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(), { "get_selectedLevelCategory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::SongPackMask, ::GlobalNamespace::BeatmapLevelPack*,
                                                                                                                       ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, bool, bool)>(
    &::GlobalNamespace::LevelFilteringNavigationController::Setup)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x595221c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                { "Setup",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::SongPackMask>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(),
                                                    ::i2c::type_of<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.SetupBeatmapLevelPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(
    &::GlobalNamespace::LevelFilteringNavigationController::SetupBeatmapLevelPacks)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x59522bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(), { "SetupBeatmapLevelPacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(bool, bool, bool)>(
    &::GlobalNamespace::LevelFilteringNavigationController::DidActivate)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x59529f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandleLevelSearchViewControllerDidStartLoading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::LevelSearchViewController*)>(
    &::GlobalNamespace::LevelFilteringNavigationController::HandleLevelSearchViewControllerDidStartLoading)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5953284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                             { "HandleLevelSearchViewControllerDidStartLoading", {}, { ::i2c::type_of<::GlobalNamespace::LevelSearchViewController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(bool, bool)>(
    &::GlobalNamespace::LevelFilteringNavigationController::DidDeactivate)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x59532a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandleLevelSearchViewControllerDidFilterBeatmapLevelCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions)>(
    &::GlobalNamespace::LevelFilteringNavigationController::HandleLevelSearchViewControllerDidFilterBeatmapLevelCollection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59538b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                             { "HandleLevelSearchViewControllerDidFilterBeatmapLevelCollection",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<::GlobalNamespace::LevelSelectionOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandleSelectLevelCategoryViewControllerDidSelectLevelCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::SelectLevelCategoryViewController*,
                                                                                                                       ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory)>(
    &::GlobalNamespace::LevelFilteringNavigationController::HandleSelectLevelCategoryViewControllerDidSelectLevelCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595390c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                            { "HandleSelectLevelCategoryViewControllerDidSelectLevelCategory",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::SelectLevelCategoryViewController*>(), ::i2c::type_of<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.UpdateSecondChildControllerContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory)>(
    &::GlobalNamespace::LevelFilteringNavigationController::UpdateSecondChildControllerContent)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5953090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                             { "UpdateSecondChildControllerContent", {}, { ::i2c::type_of<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.ShowPacksInSecondChildController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*)>(&::GlobalNamespace::LevelFilteringNavigationController::ShowPacksInSecondChildController)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5953914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                         { "ShowPacksInSecondChildController", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.ReplaceSecondViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::LevelFilteringNavigationController::ReplaceSecondViewController)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5953b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                           { "ReplaceSecondViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandlePlayerDataFavoriteLevelsSetDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(
    &::GlobalNamespace::LevelFilteringNavigationController::HandlePlayerDataFavoriteLevelsSetDidChange)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5953c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(), { "HandlePlayerDataFavoriteLevelsSetDidChange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandleIncreaseNumberOfGameplays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(
    &::GlobalNamespace::LevelFilteringNavigationController::HandleIncreaseNumberOfGameplays)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5953c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(), { "HandleIncreaseNumberOfGameplays", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(
    &::GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5953cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                           { "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(
    &::GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5953d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                           { "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5953d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                            { "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.SelectAnnotatedBeatmapLevelCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::LevelFilteringNavigationController::SelectAnnotatedBeatmapLevelCollection)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5953d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                             { "SelectAnnotatedBeatmapLevelCollection", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController.UpdateCustomSongs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(&::GlobalNamespace::LevelFilteringNavigationController::UpdateCustomSongs)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5953bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(), { "UpdateCustomSongs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelFilteringNavigationController::*)()>(&::GlobalNamespace::LevelFilteringNavigationController::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5953f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController._SetupBeatmapLevelPacks_b__39_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::LevelFilteringNavigationController::_SetupBeatmapLevelPacks_b__39_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5953f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                           { "<SetupBeatmapLevelPacks>b__39_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilteringNavigationController._SetupBeatmapLevelPacks_b__39_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LevelFilteringNavigationController::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::LevelFilteringNavigationController::_SetupBeatmapLevelPacks_b__39_1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5954000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                           { "<SetupBeatmapLevelPacks>b__39_1", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
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
  this->____emptyFavoritesListInfoPrefab = value;
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
  this->____emptyCustomSongListInfoPrefab = value;
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
  this->____playerDataModel = value;
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
  this->____selectLevelCategoryViewController = value;
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
  this->____annotatedBeatmapLevelCollectionsViewController = value;
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
  this->____levelSearchViewController = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*, ::UnityW<::UnityEngine::GameObject>,
                             ::GlobalNamespace::LevelSelectionOptions>*&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get_didSelectBeatmapLevelPackEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectBeatmapLevelPackEvent;
}
constexpr ::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*, ::UnityW<::UnityEngine::GameObject>,
                             ::GlobalNamespace::LevelSelectionOptions>* const&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get_didSelectBeatmapLevelPackEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectBeatmapLevelPackEvent;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set_didSelectBeatmapLevelPackEvent(
    ::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*, ::UnityW<::UnityEngine::GameObject>,
                       ::GlobalNamespace::LevelSelectionOptions>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectBeatmapLevelPackEvent = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get_didStartLoadingEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didStartLoadingEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* const&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get_didStartLoadingEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didStartLoadingEvent;
}
constexpr void
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didStartLoadingEvent = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get_didPressAllSongsEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressAllSongsEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* const&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get_didPressAllSongsEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressAllSongsEvent;
}
constexpr void
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set_didPressAllSongsEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didPressAllSongsEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get_didOpenBeatmapLevelCollectionsEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didOpenBeatmapLevelCollectionsEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get_didOpenBeatmapLevelCollectionsEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didOpenBeatmapLevelCollectionsEvent;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set_didOpenBeatmapLevelCollectionsEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didOpenBeatmapLevelCollectionsEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get_didCloseBeatmapLevelCollectionsEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didCloseBeatmapLevelCollectionsEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get_didCloseBeatmapLevelCollectionsEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didCloseBeatmapLevelCollectionsEvent;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set_didCloseBeatmapLevelCollectionsEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didCloseBeatmapLevelCollectionsEvent = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancellationTokenSource = value;
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
  this->____currentNoDataInfoPrefab = value;
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
  this->____levelPackIdToBeSelectedAfterPresent = value;
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
constexpr ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__enabledLevelCategories() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledLevelCategories;
}
constexpr ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory> const&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__enabledLevelCategories() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enabledLevelCategories;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__enabledLevelCategories(::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enabledLevelCategories = value;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*>& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__ostBeatmapLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ostBeatmapLevelPacks;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*> const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__ostBeatmapLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ostBeatmapLevelPacks;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__ostBeatmapLevelPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPack*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ostBeatmapLevelPacks = value;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*>& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__musicPacksBeatmapLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicPacksBeatmapLevelPacks;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*> const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__musicPacksBeatmapLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicPacksBeatmapLevelPacks;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__musicPacksBeatmapLevelPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPack*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____musicPacksBeatmapLevelPacks = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__customLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLevelPacks;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* const&
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__customLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLevelPacks;
}
constexpr void
GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__customLevelPacks(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____customLevelPacks = value;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*>& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__allOfficialBeatmapLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allOfficialBeatmapLevelPacks;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*> const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__allOfficialBeatmapLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allOfficialBeatmapLevelPacks;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__allOfficialBeatmapLevelPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPack*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allOfficialBeatmapLevelPacks = value;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*>& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__allBeatmapLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allBeatmapLevelPacks;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*> const& GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_get__allBeatmapLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allBeatmapLevelPacks;
}
constexpr void GlobalNamespace::LevelFilteringNavigationController::__cordl_internal_set__allBeatmapLevelPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPack*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allBeatmapLevelPacks = value;
}
inline void GlobalNamespace::LevelFilteringNavigationController::add_didSelectBeatmapLevelPackEvent(
    ::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*, ::UnityW<::UnityEngine::GameObject>,
                       ::GlobalNamespace::LevelSelectionOptions>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                           { "add_didSelectBeatmapLevelPackEvent",
                                                             {},
                                                             { ::i2c::type_of<::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*,
                                                                                                 ::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::LevelSelectionOptions>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::remove_didSelectBeatmapLevelPackEvent(
    ::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*, ::UnityW<::UnityEngine::GameObject>,
                       ::GlobalNamespace::LevelSelectionOptions>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                           { "remove_didSelectBeatmapLevelPackEvent",
                                                             {},
                                                             { ::i2c::type_of<::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*,
                                                                                                 ::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::LevelSelectionOptions>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::add_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                              { "add_didStartLoadingEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::remove_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                              { "remove_didStartLoadingEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::add_didPressAllSongsEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                              { "add_didPressAllSongsEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::remove_didPressAllSongsEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                              { "remove_didPressAllSongsEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::add_didOpenBeatmapLevelCollectionsEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                         { "add_didOpenBeatmapLevelCollectionsEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::remove_didOpenBeatmapLevelCollectionsEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                         { "remove_didOpenBeatmapLevelCollectionsEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::add_didCloseBeatmapLevelCollectionsEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                         { "add_didCloseBeatmapLevelCollectionsEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelFilteringNavigationController::remove_didCloseBeatmapLevelCollectionsEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                         { "remove_didCloseBeatmapLevelCollectionsEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapLevelPack* GlobalNamespace::LevelFilteringNavigationController::get_selectedBeatmapLevelPack() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(), { "get_selectedBeatmapLevelPack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPack*>(this, ___internal_method);
}
inline ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory GlobalNamespace::LevelFilteringNavigationController::get_selectedLevelCategory() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(), { "get_selectedLevelCategory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>(this, ___internal_method);
}
inline void GlobalNamespace::LevelFilteringNavigationController::Setup(::GlobalNamespace::SongPackMask songPackMask, ::GlobalNamespace::BeatmapLevelPack* levelPackToBeSelectedAfterPresent,
                                                                       ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory startLevelCategory, bool hidePacksIfOneOrNone,
                                                                       bool enableCustomLevels) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                              { "Setup",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::SongPackMask>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(),
                                                  ::i2c::type_of<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songPackMask, levelPackToBeSelectedAfterPresent, startLevelCategory, hidePacksIfOneOrNone, enableCustomLevels);
}
inline void GlobalNamespace::LevelFilteringNavigationController::SetupBeatmapLevelPacks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(), { "SetupBeatmapLevelPacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelFilteringNavigationController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::LevelFilteringNavigationController::HandleLevelSearchViewControllerDidStartLoading(::GlobalNamespace::LevelSearchViewController* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                           { "HandleLevelSearchViewControllerDidStartLoading", {}, { ::i2c::type_of<::GlobalNamespace::LevelSearchViewController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::LevelFilteringNavigationController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::LevelFilteringNavigationController::HandleLevelSearchViewControllerDidFilterBeatmapLevelCollection(::GlobalNamespace::BeatmapLevelPack* annotatedBeatmapLevelCollection,
                                                                                                                                ::GlobalNamespace::LevelSelectionOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                           { "HandleLevelSearchViewControllerDidFilterBeatmapLevelCollection",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>(), ::i2c::type_of<::GlobalNamespace::LevelSelectionOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, annotatedBeatmapLevelCollection, options);
}
inline void
GlobalNamespace::LevelFilteringNavigationController::HandleSelectLevelCategoryViewControllerDidSelectLevelCategory(::GlobalNamespace::SelectLevelCategoryViewController* viewController,
                                                                                                                   ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory levelCategory) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                          { "HandleSelectLevelCategoryViewControllerDidSelectLevelCategory",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::SelectLevelCategoryViewController*>(), ::i2c::type_of<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController, levelCategory);
}
inline void GlobalNamespace::LevelFilteringNavigationController::UpdateSecondChildControllerContent(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory levelCategory) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                           { "UpdateSecondChildControllerContent", {}, { ::i2c::type_of<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelCategory);
}
inline void
GlobalNamespace::LevelFilteringNavigationController::ShowPacksInSecondChildController(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* beatmapLevelPacks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                       { "ShowPacksInSecondChildController", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapLevelPacks);
}
inline void GlobalNamespace::LevelFilteringNavigationController::ReplaceSecondViewController(::HMUI::ViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                         { "ReplaceSecondViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController);
}
inline void GlobalNamespace::LevelFilteringNavigationController::HandlePlayerDataFavoriteLevelsSetDidChange() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(), { "HandlePlayerDataFavoriteLevelsSetDidChange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelFilteringNavigationController::HandleIncreaseNumberOfGameplays() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(), { "HandleIncreaseNumberOfGameplays", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                         { "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                         { "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelFilteringNavigationController::HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection(
    ::GlobalNamespace::BeatmapLevelPack* annotatedBeatmapLevelCollection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                          { "HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, annotatedBeatmapLevelCollection);
}
inline void GlobalNamespace::LevelFilteringNavigationController::SelectAnnotatedBeatmapLevelCollection(::GlobalNamespace::BeatmapLevelPack* levelPack) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                         { "SelectAnnotatedBeatmapLevelCollection", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelPack);
}
inline void GlobalNamespace::LevelFilteringNavigationController::UpdateCustomSongs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(), { "UpdateCustomSongs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelFilteringNavigationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LevelFilteringNavigationController::_SetupBeatmapLevelPacks_b__39_0(::GlobalNamespace::BeatmapLevelPack* pack) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                         { "<SetupBeatmapLevelPacks>b__39_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pack);
}
inline bool GlobalNamespace::LevelFilteringNavigationController::_SetupBeatmapLevelPacks_b__39_1(::GlobalNamespace::BeatmapLevelPack* pack) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelFilteringNavigationController*>(),
                                                                                         { "<SetupBeatmapLevelPacks>b__39_1", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pack);
}
inline ::GlobalNamespace::LevelFilteringNavigationController* GlobalNamespace::LevelFilteringNavigationController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelFilteringNavigationController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFilteringNavigationController::LevelFilteringNavigationController() {}
