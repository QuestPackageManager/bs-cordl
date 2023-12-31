#pragma once
#include "GlobalNamespace/zzzz__MultiplayerAvatarData_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
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
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::__AvatarSystemCollection____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::__AvatarSystemCollection____c::*)()>(
    &::BeatSaber::AvatarCore::__AvatarSystemCollection____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0ddf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::__AvatarSystemCollection____c._get_anyAvatarCreated_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::BeatSaber::AvatarCore::__AvatarSystemCollection____c::*)(::BeatSaber::AvatarCore::IAvatarSystem*)>(&::BeatSaber::AvatarCore::__AvatarSystemCollection____c::_get_anyAvatarCreated_b__14_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xe0ddf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*>::get(), "<get_anyAvatarCreated>b__14_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystem*>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::AvatarCore::__AvatarSystemCollection____c::setStaticF___9(::BeatSaber::AvatarCore::__AvatarSystemCollection____c* value) {
  ::cordl_internals::setStaticField<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*>::get>(
      std::forward<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*>(value));
}
inline ::BeatSaber::AvatarCore::__AvatarSystemCollection____c* BeatSaber::AvatarCore::__AvatarSystemCollection____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*>::get>();
}
inline void BeatSaber::AvatarCore::__AvatarSystemCollection____c::setStaticF___9__14_0(::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>*, "<>9__14_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*>::get>(
      std::forward<::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>*>(value));
}
inline ::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>* BeatSaber::AvatarCore::__AvatarSystemCollection____c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatSaber::AvatarCore::IAvatarSystem*, ::System::Threading::Tasks::Task_1<bool>*>*, "<>9__14_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*>::get>();
}
inline ::BeatSaber::AvatarCore::__AvatarSystemCollection____c* BeatSaber::AvatarCore::__AvatarSystemCollection____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*>());
}
inline void BeatSaber::AvatarCore::__AvatarSystemCollection____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::AvatarCore::__AvatarSystemCollection____c::_get_anyAvatarCreated_b__14_0(::BeatSaber::AvatarCore::IAvatarSystem* avatarSystem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection____c*>::get(), "<get_anyAvatarCreated>b__14_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, avatarSystem);
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::__AvatarSystemCollection____c::__AvatarSystemCollection____c() {}
//  Writing Method size for method: ::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::*)()>(
    &::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x89c;
  constexpr static std::size_t addrs = 0xe0de98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe0e734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BeatSaber::AvatarCore::AvatarSystemCollection*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "selectedAvatarTypeIdentifier", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>>", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerAvatarsData> __t__builder,
    ::BeatSaber::AvatarCore::AvatarSystemCollection* __4__this, ::StringW selectedAvatarTypeIdentifier,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::MultiplayerAvatarData, ::Array<::GlobalNamespace::MultiplayerAvatarData>*>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->selectedAvatarTypeIdentifier = selectedAvatarTypeIdentifier;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16::__AvatarSystemCollection___GetMultiplayerAvatarsData_d__16() {}
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.get_selectableAvatarSystems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* (
    ::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(&::BeatSaber::AvatarCore::AvatarSystemCollection::get_selectableAvatarSystems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0cbe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                                                                               "get_selectableAvatarSystems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.get_availableAvatarSystems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* (
    ::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(&::BeatSaber::AvatarCore::AvatarSystemCollection::get_availableAvatarSystems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0cbf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                                                                               "get_availableAvatarSystems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.get_supportedOptionalAvatarDataType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* (
    ::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(&::BeatSaber::AvatarCore::AvatarSystemCollection::get_supportedOptionalAvatarDataType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0cbf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                                                                               "get_supportedOptionalAvatarDataType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(
    ::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*)>(&::BeatSaber::AvatarCore::AvatarSystemCollection::_ctor)> {
  constexpr static std::size_t size = 0xae8;
  constexpr static std::size_t addrs = 0xe0cc00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.AvatarSystemBySelectionSortOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::BeatSaber::AvatarCore::IAvatarSystem*, ::BeatSaber::AvatarCore::IAvatarSystem*)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::AvatarSystemBySelectionSortOrder)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xe0d6e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "AvatarSystemBySelectionSortOrder", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystem*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.get_anyAvatarCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::get_anyAvatarCreated)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xe0d810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                                                                               "get_anyAvatarCreated", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.HasAvatarSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(uint32_t)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::HasAvatarSystem)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe0b40c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "HasAvatarSystem",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetMultiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* (
    ::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::StringW)>(&::BeatSaber::AvatarCore::AvatarSystemCollection::GetMultiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xe0d930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetMultiplayerAvatarsData",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetMultiplayerAvatarOptionalDataProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* (
    ::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::StringW)>(&::BeatSaber::AvatarCore::AvatarSystemCollection::GetMultiplayerAvatarOptionalDataProvider)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xe0da34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetMultiplayerAvatarOptionalDataProvider",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarSystemCollection::*)()>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatar)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xe0db20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                                                 "CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatar", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetAvatarSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::IAvatarSystem* (
    ::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::BeatSaber::AvatarCore::IAvatarSystemMetadata*)>(&::BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xe0dcd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetAvatarSystem", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetAvatarSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::IAvatarSystem* (
    ::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::BeatSaber::AvatarCore::AvatarSystemIdentifier)>(&::BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0dd7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetAvatarSystem", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarSystemIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetAvatarSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::IAvatarSystem* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(::StringW)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xe0daf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetAvatarSystem",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarSystemCollection.GetAvatarSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::IAvatarSystem* (::BeatSaber::AvatarCore::AvatarSystemCollection::*)(uint32_t)>(
    &::BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xe0b464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetAvatarSystem",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::IAvatarSystem*>*& BeatSaber::AvatarCore::AvatarSystemCollection::__get__availableAvatarSystems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableAvatarSystems;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::IAvatarSystem*>*> const&
BeatSaber::AvatarCore::AvatarSystemCollection::__get__availableAvatarSystems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableAvatarSystems;
}
constexpr void BeatSaber::AvatarCore::AvatarSystemCollection::__set__availableAvatarSystems(::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::IAvatarSystem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____availableAvatarSystems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*& BeatSaber::AvatarCore::AvatarSystemCollection::__get__availableUserSelectableAvatarSystems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableUserSelectableAvatarSystems;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*> const&
BeatSaber::AvatarCore::AvatarSystemCollection::__get__availableUserSelectableAvatarSystems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableUserSelectableAvatarSystems;
}
constexpr void BeatSaber::AvatarCore::AvatarSystemCollection::__set__availableUserSelectableAvatarSystems(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____availableUserSelectableAvatarSystems)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*& BeatSaber::AvatarCore::AvatarSystemCollection::__get__supportedOptionalAvatarDataTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____supportedOptionalAvatarDataTypes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*> const&
BeatSaber::AvatarCore::AvatarSystemCollection::__get__supportedOptionalAvatarDataTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____supportedOptionalAvatarDataTypes;
}
constexpr void BeatSaber::AvatarCore::AvatarSystemCollection::__set__supportedOptionalAvatarDataTypes(::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____supportedOptionalAvatarDataTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::IAvatarSystem*& BeatSaber::AvatarCore::AvatarSystemCollection::__get__fallbackAvatarSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackAvatarSystem;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarSystem*> const& BeatSaber::AvatarCore::AvatarSystemCollection::__get__fallbackAvatarSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fallbackAvatarSystem;
}
constexpr void BeatSaber::AvatarCore::AvatarSystemCollection::__set__fallbackAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fallbackAvatarSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>*& BeatSaber::AvatarCore::AvatarSystemCollection::__get__availableAvatarSystemList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableAvatarSystemList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>*> const&
BeatSaber::AvatarCore::AvatarSystemCollection::__get__availableAvatarSystemList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____availableAvatarSystemList;
}
constexpr void BeatSaber::AvatarCore::AvatarSystemCollection::__set__availableAvatarSystemList(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____availableAvatarSystemList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* BeatSaber::AvatarCore::AvatarSystemCollection::get_selectableAvatarSystems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                                                                             "get_selectableAvatarSystems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* BeatSaber::AvatarCore::AvatarSystemCollection::get_availableAvatarSystems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                                                                             "get_availableAvatarSystems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>* BeatSaber::AvatarCore::AvatarSystemCollection::get_supportedOptionalAvatarDataType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                                                                             "get_supportedOptionalAvatarDataType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*, false>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::AvatarSystemCollection*
BeatSaber::AvatarCore::AvatarSystemCollection::New_ctor(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* boundAvatarSystems) {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::AvatarCore::AvatarSystemCollection*>(boundAvatarSystems));
}
inline void BeatSaber::AvatarCore::AvatarSystemCollection::_ctor(::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>* boundAvatarSystems) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatSaber::AvatarCore::IAvatarSystem*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, boundAvatarSystems);
}
inline int32_t BeatSaber::AvatarCore::AvatarSystemCollection::AvatarSystemBySelectionSortOrder(::BeatSaber::AvatarCore::IAvatarSystem* system1, ::BeatSaber::AvatarCore::IAvatarSystem* system2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "AvatarSystemBySelectionSortOrder", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystem*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, system1, system2);
}
inline ::System::Threading::Tasks::Task_1<bool>* BeatSaber::AvatarCore::AvatarSystemCollection::get_anyAvatarCreated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                                                                             "get_anyAvatarCreated", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method);
}
inline bool BeatSaber::AvatarCore::AvatarSystemCollection::HasAvatarSystem(uint32_t avatarTypeIdentifierHash) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "HasAvatarSystem",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, avatarTypeIdentifierHash);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>* BeatSaber::AvatarCore::AvatarSystemCollection::GetMultiplayerAvatarsData(::StringW selectedAvatarTypeIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetMultiplayerAvatarsData",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerAvatarsData>*, false>(this, ___internal_method, selectedAvatarTypeIdentifier);
}
inline ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* BeatSaber::AvatarCore::AvatarSystemCollection::GetMultiplayerAvatarOptionalDataProvider(::StringW selectedAvatarTypeIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetMultiplayerAvatarOptionalDataProvider",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*, false>(this, ___internal_method, selectedAvatarTypeIdentifier);
}
inline void BeatSaber::AvatarCore::AvatarSystemCollection::CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatar() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(),
                                               "CreateDefaultAvatarsForAvatarSystemsWithoutUserCreatedAvatar", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::IAvatarSystem* BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystemMetadata) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetAvatarSystem", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IAvatarSystem*, false>(this, ___internal_method, avatarSystemMetadata);
}
inline ::BeatSaber::AvatarCore::IAvatarSystem* BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem(::BeatSaber::AvatarCore::AvatarSystemIdentifier avatarSystemIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetAvatarSystem", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarSystemIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IAvatarSystem*, false>(this, ___internal_method, avatarSystemIdentifier);
}
inline ::BeatSaber::AvatarCore::IAvatarSystem* BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem(::StringW avatarTypeIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetAvatarSystem",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IAvatarSystem*, false>(this, ___internal_method, avatarTypeIdentifier);
}
inline ::BeatSaber::AvatarCore::IAvatarSystem* BeatSaber::AvatarCore::AvatarSystemCollection::GetAvatarSystem(uint32_t avatarTypeIdentifierHash) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarSystemCollection*>::get(), "GetAvatarSystem",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::IAvatarSystem*, false>(this, ___internal_method, avatarTypeIdentifierHash);
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection::AvatarSystemCollection() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
