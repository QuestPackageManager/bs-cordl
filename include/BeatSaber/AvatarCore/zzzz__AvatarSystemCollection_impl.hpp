#pragma once
// IWYU pragma private; include "BeatSaber\AvatarCore\AvatarSystemCollection.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemIdentifier_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystemMetadata_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarSystem_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IOptionalAvatarDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarSystemCollection___c::*)()>(&::BeatSaber::AvatarCore::AvatarSystemCollection___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x326d96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection___c._get_anyAvatarCreated_b__18_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::AvatarCore::AvatarSystemCollection___c::*)(::BeatSaber::AvatarCore::IAvatarSystem*)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection___c::_get_anyAvatarCreated_b__18_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x326d970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection___c*>(),
                                                                                           { "<get_anyAvatarCreated>b__18_0", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystem*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::AvatarCore::AvatarSystemCollection___c::setStaticF___9(::BeatSaber::AvatarCore::AvatarSystemCollection___c* value) {
  ::cordl_internals::setStaticField<::BeatSaber::AvatarCore::AvatarSystemCollection___c*, "<>9", ::BeatSaber::AvatarCore::AvatarSystemCollection___c*>(
      std::forward<::BeatSaber::AvatarCore::AvatarSystemCollection___c*>(value));
}
inline ::BeatSaber::AvatarCore::AvatarSystemCollection___c* BeatSaber::AvatarCore::AvatarSystemCollection___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BeatSaber::AvatarCore::AvatarSystemCollection___c*, "<>9", ::BeatSaber::AvatarCore::AvatarSystemCollection___c*>();
}
inline void BeatSaber::AvatarCore::AvatarSystemCollection___c::setStaticF___9__18_0(::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>*, "<>9__18_0",
                                    ::BeatSaber::AvatarCore::AvatarSystemCollection___c*>(
      std::forward<::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>*>(value));
}
inline ::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>* BeatSaber::AvatarCore::AvatarSystemCollection___c::getStaticF___9__18_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>*, "<>9__18_0",
                                           ::BeatSaber::AvatarCore::AvatarSystemCollection___c*>();
}
inline void BeatSaber::AvatarCore::AvatarSystemCollection___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::AvatarCore::AvatarSystemCollection___c::_get_anyAvatarCreated_b__18_0(::BeatSaber::AvatarCore::IAvatarSystem* avatarSystem) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection___c*>(),
                                                                                         { "<get_anyAvatarCreated>b__18_0", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, avatarSystem);
}
inline ::BeatSaber::AvatarCore::AvatarSystemCollection___c* BeatSaber::AvatarCore::AvatarSystemCollection___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AvatarCore::AvatarSystemCollection___c*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection___c::AvatarSystemCollection___c() {}
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__22.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__22::*)()>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x326da14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__22>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__22.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__22::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__22::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x326de48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__22>(),
                                                { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__22::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__22>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__22::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__22>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__22::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__22::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::AvatarCore::AvatarSystemCollection*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "::System::Collections::Generic::List_1_Enumerator<::BeatSaber::AvatarCore::IAvatarSystem*>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__22::
    AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__22(
        int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::AvatarCore::AvatarSystemCollection* __4__this,
        ::System::Collections::Generic::List_1_Enumerator<::BeatSaber::AvatarCore::IAvatarSystem*> __7__wrap1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__22::
    AvatarSystemCollection__CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync_d__22() {}
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__20.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__20::*)()>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x8fc;
  constexpr static std::size_t addrs = 0x326deb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__20>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__20.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__20::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x326e7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__20>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__20::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__20>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__20>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__20::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BeatSaber::AvatarCore::AvatarSystemCollection*", modifiers: "", def_value: Some("{}") }, CppParam { name: "selectedAvatarTypeIdentifier", ty: "::StringW", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData>>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__20::AvatarSystemCollection__GetMultiplayerAvatarsData_d__20(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData> __t__builder,
    ::BeatSaber::AvatarCore::AvatarSystemCollection* __4__this, ::StringW selectedAvatarTypeIdentifier,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->selectedAvatarTypeIdentifier = selectedAvatarTypeIdentifier;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection__GetMultiplayerAvatarsData_d__20::AvatarSystemCollection__GetMultiplayerAvatarsData_d__20() {}
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.add_avatarDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::System::Action*)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::add_avatarDidChangeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x326c698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "add_avatarDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.remove_avatarDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::System::Action*)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::remove_avatarDidChangeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x326c744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "remove_avatarDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.get_selectableAvatarSystems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* (
    ::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(&::BeatSaber::AvatarCore::AvatarSystemCollection::get_selectableAvatarSystems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x326c7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "get_selectableAvatarSystems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.get_availableAvatarSystems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* (
    ::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(&::BeatSaber::AvatarCore::AvatarSystemCollection::get_availableAvatarSystems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x326c7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "get_availableAvatarSystems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.get_supportedOptionalAvatarDataType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::get_supportedOptionalAvatarDataType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x326c800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "get_supportedOptionalAvatarDataType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::_ctor)> {
  constexpr static std::size_t size = 0xb40;
  constexpr static std::size_t addrs = 0x326c808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.AvatarSystemBySelectionSortOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::BeatSaber::AvatarCore::IAvatarSystem*, ::BeatSaber::AvatarCore::IAvatarSystem*)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::AvatarSystemBySelectionSortOrder)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x326d348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(),
                            { "AvatarSystemBySelectionSortOrder", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystem*>(), ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.HandleAvatarDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(&::BeatSaber::AvatarCore::AvatarSystemCollection::HandleAvatarDidChange)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x326d46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "HandleAvatarDidChange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.get_anyAvatarCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::get_anyAvatarCreated)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x326d488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "get_anyAvatarCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.HasAvatarSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(uint32_t)>(&::BeatSaber::AvatarCore::AvatarSystemCollection::HasAvatarSystem)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x326ab7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "HasAvatarSystem", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetMultiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::StringW)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::GetMultiplayerAvatarsData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x326d5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "GetMultiplayerAvatarsData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetMultiplayerAvatarOptionalDataProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::StringW)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::GetMultiplayerAvatarOptionalDataProvider)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x326d6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "GetMultiplayerAvatarOptionalDataProvider", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x326d7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetAvatarSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::AvatarCore::IAvatarSystem* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x326d854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(),
                                                                                           { "GetAvatarSystem", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetAvatarSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::AvatarCore::IAvatarSystem* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::BeatSaber::AvatarCore::AvatarSystemIdentifier)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x326d908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(),
                                                                                           { "GetAvatarSystem", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetAvatarSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::AvatarCore::IAvatarSystem* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::StringW)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x326d770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "GetAvatarSystem", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetAvatarSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::AvatarCore::IAvatarSystem* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(uint32_t)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x326abf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "GetAvatarSystem", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get_avatarDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarDidChangeEvent;
}
constexpr ::System::Action* const& BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get_avatarDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarDidChangeEvent;
}
constexpr void BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_set_avatarDidChangeEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___avatarDidChangeEvent = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::IAvatarSystem*>*&
BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get__availableAvatarSystems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableAvatarSystems;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::IAvatarSystem*>* const&
BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get__availableAvatarSystems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableAvatarSystems;
}
constexpr void
BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_set__availableAvatarSystems(::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::IAvatarSystem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____availableAvatarSystems = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*&
BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get__availableUserSelectableAvatarSystems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableUserSelectableAvatarSystems;
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* const&
BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get__availableUserSelectableAvatarSystems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableUserSelectableAvatarSystems;
}
constexpr void
BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_set__availableUserSelectableAvatarSystems(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____availableUserSelectableAvatarSystems = value;
}
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*& BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get__supportedOptionalAvatarDataTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____supportedOptionalAvatarDataTypes;
}
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* const& BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get__supportedOptionalAvatarDataTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____supportedOptionalAvatarDataTypes;
}
constexpr void BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_set__supportedOptionalAvatarDataTypes(::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____supportedOptionalAvatarDataTypes = value;
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystem*& BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get__fallbackAvatarSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackAvatarSystem;
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystem* const& BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get__fallbackAvatarSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackAvatarSystem;
}
constexpr void BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_set__fallbackAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fallbackAvatarSystem = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>*& BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get__availableAvatarSystemList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableAvatarSystemList;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>* const&
BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_get__availableAvatarSystemList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableAvatarSystemList;
}
constexpr void
BeatSaber::AvatarCore::AvatarSystemCollection::__cordl_internal_set__availableAvatarSystemList(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____availableAvatarSystemList = value;
}
inline void BeatSaber::AvatarCore::AvatarSystemCollection::add_avatarDidChangeEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "add_avatarDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::AvatarSystemCollection::remove_avatarDidChangeEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "remove_avatarDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* BeatSaber::AvatarCore::AvatarSystemCollection::get_selectableAvatarSystems() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "get_selectableAvatarSystems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* BeatSaber::AvatarCore::AvatarSystemCollection::get_availableAvatarSystems() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "get_availableAvatarSystems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* BeatSaber::AvatarCore::AvatarSystemCollection::get_supportedOptionalAvatarDataType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "get_supportedOptionalAvatarDataType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarSystemCollection::_ctor(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* boundAvatarSystems) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boundAvatarSystems);
}
inline int32_t BeatSaber::AvatarCore::AvatarSystemCollection::AvatarSystemBySelectionSortOrder(::BeatSaber::AvatarCore::IAvatarSystem* system1, ::BeatSaber::AvatarCore::IAvatarSystem* system2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(),
                          { "AvatarSystemBySelectionSortOrder", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystem*>(), ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, system1, system2);
}
inline void BeatSaber::AvatarCore::AvatarSystemCollection::HandleAvatarDidChange() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "HandleAvatarDidChange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::AvatarCore::AvatarSystemCollection::get_anyAvatarCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "get_anyAvatarCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline bool BeatSaber::AvatarCore::AvatarSystemCollection::HasAvatarSystem(uint32_t avatarTypeIdentifierHash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "HasAvatarSystem", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, avatarTypeIdentifierHash);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* BeatSaber::AvatarCore::AvatarSystemCollection::GetMultiplayerAvatarsData(::StringW selectedAvatarTypeIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "GetMultiplayerAvatarsData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*>(this, ___internal_method, selectedAvatarTypeIdentifier);
}
inline ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* BeatSaber::AvatarCore::AvatarSystemCollection::GetMultiplayerAvatarOptionalDataProvider(::StringW selectedAvatarTypeIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "GetMultiplayerAvatarOptionalDataProvider", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>(this, ___internal_method, selectedAvatarTypeIdentifier);
}
inline ::System::Threading::Tasks::Task* BeatSaber::AvatarCore::AvatarSystemCollection::CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatarAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::IAvatarSystem* BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystemMetadata) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(),
                                                                                         { "GetAvatarSystem", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IAvatarSystem*>(this, ___internal_method, avatarSystemMetadata);
}
inline ::BeatSaber::AvatarCore::IAvatarSystem* BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem(::BeatSaber::AvatarCore::AvatarSystemIdentifier avatarSystemIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(),
                                                                                         { "GetAvatarSystem", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::AvatarSystemIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IAvatarSystem*>(this, ___internal_method, avatarSystemIdentifier);
}
inline ::BeatSaber::AvatarCore::IAvatarSystem* BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem(::StringW avatarTypeIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "GetAvatarSystem", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IAvatarSystem*>(this, ___internal_method, avatarTypeIdentifier);
}
inline ::BeatSaber::AvatarCore::IAvatarSystem* BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem(uint32_t avatarTypeIdentifierHash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarSystemCollection*>(), { "GetAvatarSystem", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IAvatarSystem*>(this, ___internal_method, avatarTypeIdentifierHash);
}
inline ::BeatSaber::AvatarCore::AvatarSystemCollection*
BeatSaber::AvatarCore::AvatarSystemCollection::New_ctor(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* boundAvatarSystems) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AvatarCore::AvatarSystemCollection*>(boundAvatarSystems));
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection::AvatarSystemCollection() {}
