#pragma once
// IWYU pragma private; include "GlobalNamespace\EditAvatarFlowCoordinatorHelper.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EditAvatarFlowCoordinatorHelper_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystem_def.hpp"
#include "GlobalNamespace/zzzz__AvatarSystemSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__EditAvatarFlowCoordinatorHelper_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction::EditAvatarFlowCoordinatorHelper_FinishAction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction::EditAvatarFlowCoordinatorHelper_FinishAction() {}
constexpr ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction::Continue{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction::Back{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13::*)()>(
    &::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x5a08370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a08814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::EditAvatarFlowCoordinatorHelper*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_avatarSystem_5__2", ty: "::BeatSaber::AvatarCore::IAvatarSystem*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13::EditAvatarFlowCoordinatorHelper__Initialize_d__13(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* __4__this,
    ::BeatSaber::AvatarCore::IAvatarSystem* _avatarSystem_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_avatarSystem_5__2 = _avatarSystem_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13::EditAvatarFlowCoordinatorHelper__Initialize_d__13() {}
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12::*)()>(
    &::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5a0881c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a08bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::EditAvatarFlowCoordinatorHelper*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "parentFlowCoordinator", ty: "::UnityW<::HMUI::FlowCoordinator>", modifiers: "", def_value: Some("{}") }, CppParam { name: "immediately",
// ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "replaceTopViewController", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "backButtonVisible", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12::EditAvatarFlowCoordinatorHelper__Show_d__12(int32_t __1__state,
                                                                                                                      ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                                      ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* __4__this,
                                                                                                                      ::UnityW<::HMUI::FlowCoordinator> parentFlowCoordinator, bool immediately,
                                                                                                                      bool replaceTopViewController, bool backButtonVisible,
                                                                                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->parentFlowCoordinator = parentFlowCoordinator;
  this->immediately = immediately;
  this->replaceTopViewController = replaceTopViewController;
  this->backButtonVisible = backButtonVisible;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12::EditAvatarFlowCoordinatorHelper__Show_d__12() {}
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)(::System::Action_2<::UnityW<::HMUI::FlowCoordinator>, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction>*)>(
        &::GlobalNamespace::EditAvatarFlowCoordinatorHelper::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a07e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(),
                         { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::FlowCoordinator>, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)(::System::Action_2<::UnityW<::HMUI::FlowCoordinator>, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction>*)>(
        &::GlobalNamespace::EditAvatarFlowCoordinatorHelper::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a07ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(),
            { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::FlowCoordinator>, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.get__hasOnlyOneAvatarSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)()>(
    &::GlobalNamespace::EditAvatarFlowCoordinatorHelper::get__hasOnlyOneAvatarSystem)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a07fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(), { "get__hasOnlyOneAvatarSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.Show
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)(::HMUI::FlowCoordinator*, bool, bool, bool)>(
    &::GlobalNamespace::EditAvatarFlowCoordinatorHelper::Show)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a08008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(),
                                                             { "Show", {}, { ::i2c::type_of<::HMUI::FlowCoordinator*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)()>(&::GlobalNamespace::EditAvatarFlowCoordinatorHelper::Initialize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a080e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.PresentAvatarEditorFlowCoordinator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)(
    ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*, ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode, ::HMUI::FlowCoordinator*, bool, bool)>(
    &::GlobalNamespace::EditAvatarFlowCoordinatorHelper::PresentAvatarEditorFlowCoordinator)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a08184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(),
                                         { "PresentAvatarEditorFlowCoordinator",
                                           {},
                                           { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>(), ::i2c::type_of<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode>(),
                                             ::i2c::type_of<::HMUI::FlowCoordinator*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.HandleAvatarEditorFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)(
    ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*, ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction)>(
    &::GlobalNamespace::EditAvatarFlowCoordinatorHelper::HandleAvatarEditorFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5a08274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(),
                                                { "HandleAvatarEditorFlowCoordinatorDidFinish",
                                                  {},
                                                  { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>(), ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>(),
                                                    ::i2c::type_of<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper.HandleAvatarSystemSelectionFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*,
                                                                                                                    ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction)>(
    &::GlobalNamespace::EditAvatarFlowCoordinatorHelper::HandleAvatarSystemSelectionFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a08344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(),
                                                                                           { "HandleAvatarSystemSelectionFlowCoordinatorDidFinish",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditAvatarFlowCoordinatorHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditAvatarFlowCoordinatorHelper::*)()>(&::GlobalNamespace::EditAvatarFlowCoordinatorHelper::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a0836c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_get__avatarSystemSelectionFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemSelectionFlowCoordinator;
}
constexpr ::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator> const&
GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_get__avatarSystemSelectionFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemSelectionFlowCoordinator;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_set__avatarSystemSelectionFlowCoordinator(::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarSystemSelectionFlowCoordinator = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_get__avatarSystemCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* const& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_get__avatarSystemCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarSystemCollection;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarSystemCollection = value;
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::System::Action_2<::UnityW<::HMUI::FlowCoordinator>, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction>*&
GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_2<::UnityW<::HMUI::FlowCoordinator>, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction>* const&
GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_set_didFinishEvent(
    ::System::Action_2<::UnityW<::HMUI::FlowCoordinator>, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_get__parentFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentFlowCoordinator;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_get__parentFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentFlowCoordinator;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_set__parentFlowCoordinator(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentFlowCoordinator = value;
}
constexpr ::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_get__singleAvatarEditorFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singleAvatarEditorFlowCoordinator;
}
constexpr ::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator> const& GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_get__singleAvatarEditorFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singleAvatarEditorFlowCoordinator;
}
constexpr void GlobalNamespace::EditAvatarFlowCoordinatorHelper::__cordl_internal_set__singleAvatarEditorFlowCoordinator(::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____singleAvatarEditorFlowCoordinator = value;
}
inline void
GlobalNamespace::EditAvatarFlowCoordinatorHelper::add_didFinishEvent(::System::Action_2<::UnityW<::HMUI::FlowCoordinator>, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(),
                       { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::FlowCoordinator>, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::EditAvatarFlowCoordinatorHelper::remove_didFinishEvent(::System::Action_2<::UnityW<::HMUI::FlowCoordinator>, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(),
          { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::FlowCoordinator>, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::EditAvatarFlowCoordinatorHelper::get__hasOnlyOneAvatarSystem() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(), { "get__hasOnlyOneAvatarSystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper::Show(::HMUI::FlowCoordinator* parentFlowCoordinator, bool backButtonVisible, bool immediately, bool replaceTopViewController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(),
                                                           { "Show", {}, { ::i2c::type_of<::HMUI::FlowCoordinator*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentFlowCoordinator, backButtonVisible, immediately, replaceTopViewController);
}
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper::PresentAvatarEditorFlowCoordinator(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* flowCoordinator,
                                                                                                 ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode editMode,
                                                                                                 ::HMUI::FlowCoordinator* parentFlowCoordinator, bool immediately, bool replaceTopViewController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(),
                                       { "PresentAvatarEditorFlowCoordinator",
                                         {},
                                         { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>(), ::i2c::type_of<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode>(),
                                           ::i2c::type_of<::HMUI::FlowCoordinator*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flowCoordinator, editMode, parentFlowCoordinator, immediately, replaceTopViewController);
}
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper::HandleAvatarEditorFlowCoordinatorDidFinish(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* flowCoordinator,
                                                                                                         ::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem,
                                                                                                         ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction finishAction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(),
                                              { "HandleAvatarEditorFlowCoordinatorDidFinish",
                                                {},
                                                { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>(), ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>(),
                                                  ::i2c::type_of<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flowCoordinator, avatarSystem, finishAction);
}
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper::HandleAvatarSystemSelectionFlowCoordinatorDidFinish(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator* flowCoordinator,
                                                                                                                  ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction finishAction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(),
                          { "HandleAvatarSystemSelectionFlowCoordinatorDidFinish",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*>(), ::i2c::type_of<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flowCoordinator, finishAction);
}
inline void GlobalNamespace::EditAvatarFlowCoordinatorHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* GlobalNamespace::EditAvatarFlowCoordinatorHelper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EditAvatarFlowCoordinatorHelper::EditAvatarFlowCoordinatorHelper() {}
