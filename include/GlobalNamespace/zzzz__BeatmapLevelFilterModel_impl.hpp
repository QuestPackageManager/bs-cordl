#pragma once
#include "GlobalNamespace/zzzz__AdditionalContentModel_impl.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelCollection_impl.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelFilterModel_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelFilterModel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__LevelFilterParams_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelCollection_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0::*)()>(
    &::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f6624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0._FilerBeatmapLevelPackCollectionAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0::*)(
    ::GlobalNamespace::IPreviewBeatmapLevel*)>(&::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0::_FilerBeatmapLevelPackCollectionAsync_b__0)> {
  constexpr static std::size_t size = 0x760;
  constexpr static std::size_t addrs = 0x21f662c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0*>::get(), "<FilerBeatmapLevelPackCollectionAsync>b__0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0::__get_searchByText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___searchByText;
}
constexpr bool const& GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0::__get_searchByText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___searchByText;
}
constexpr void GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0::__set_searchByText(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___searchByText = value;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0::__get_searchTexts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___searchTexts;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0::__get_searchTexts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___searchTexts;
}
constexpr void GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0::__set_searchTexts(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___searchTexts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LevelFilterParams*& GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0::__get_levelFilterParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelFilterParams;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelFilterParams*> const& GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0::__get_levelFilterParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelFilterParams;
}
constexpr void GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0::__set_levelFilterParams(::GlobalNamespace::LevelFilterParams* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelFilterParams)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerDataModel*& GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0::__get_playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0::__get_playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDataModel;
}
constexpr void GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0::__set_playerDataModel(::GlobalNamespace::PlayerDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0* GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0*>());
}
inline void GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0::_FilerBeatmapLevelPackCollectionAsync_b__0(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0*>::get(), "<FilerBeatmapLevelPackCollectionAsync>b__0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, beatmapLevel);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0::__BeatmapLevelFilterModel____c__DisplayClass0_0() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::*)()>(
    &::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x21f6d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0>::get(), "MoveNext",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21f7190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelCollection*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelFilterParams", ty:
// "::GlobalNamespace::LevelFilterParams*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "playerDataModel", ty: "::GlobalNamespace::PlayerDataModel*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "beatmapLevelPacks", ty: "::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "additionalContentModel", ty: "::GlobalNamespace::AdditionalContentModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken",
// ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevelCollection*> __t__builder,
    ::GlobalNamespace::LevelFilterParams* levelFilterParams, ::GlobalNamespace::PlayerDataModel* playerDataModel,
    ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> beatmapLevelPacks, ::GlobalNamespace::AdditionalContentModel* additionalContentModel,
    ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::__BeatmapLevelFilterModel____c__DisplayClass0_0* __8__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->levelFilterParams = levelFilterParams;
  this->playerDataModel = playerDataModel;
  this->beatmapLevelPacks = beatmapLevelPacks;
  this->additionalContentModel = additionalContentModel;
  this->cancellationToken = cancellationToken;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0::__BeatmapLevelFilterModel___FilerBeatmapLevelPackCollectionAsync_d__0() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::*)()>(
    &::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x98c;
  constexpr static std::size_t addrs = 0x21f71e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21f7b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "beatmapLevelPacks", ty: "::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "songPackMask", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "onlyOwned", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "additionalContentModel", ty: "::GlobalNamespace::AdditionalContentModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "onlyNotOwned", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_levels_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__7__wrap2", ty:
// "::ArrayW<::GlobalNamespace::IBeatmapLevelPack*,::Array<::GlobalNamespace::IBeatmapLevelPack*>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__7__wrap3", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap4", ty: "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "_beatmapLevel_5__6", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*> __t__builder,
    ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> beatmapLevelPacks, ::GlobalNamespace::SongPackMask songPackMask, bool onlyOwned,
    ::GlobalNamespace::AdditionalContentModel* additionalContentModel, ::System::Threading::CancellationToken cancellationToken, bool onlyNotOwned,
    ::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>* _levels_5__2,
    ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> __7__wrap2, int32_t __7__wrap3,
    ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::IPreviewBeatmapLevel*>* __7__wrap4, ::GlobalNamespace::IPreviewBeatmapLevel* _beatmapLevel_5__6,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__EntitlementStatus> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->beatmapLevelPacks = beatmapLevelPacks;
  this->songPackMask = songPackMask;
  this->onlyOwned = onlyOwned;
  this->additionalContentModel = additionalContentModel;
  this->cancellationToken = cancellationToken;
  this->onlyNotOwned = onlyNotOwned;
  this->_levels_5__2 = _levels_5__2;
  this->__7__wrap2 = __7__wrap2;
  this->__7__wrap3 = __7__wrap3;
  this->__7__wrap4 = __7__wrap4;
  this->_beatmapLevel_5__6 = _beatmapLevel_5__6;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2::__BeatmapLevelFilterModel___GetAllBeatmapLevelsAsync_d__2() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelFilterModel.FilerBeatmapLevelPackCollectionAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<
    ::GlobalNamespace::IBeatmapLevelCollection*>* (*)(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, ::GlobalNamespace::LevelFilterParams*,
                                                      ::GlobalNamespace::PlayerDataModel*, ::GlobalNamespace::AdditionalContentModel*, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::BeatmapLevelFilterModel::FilerBeatmapLevelPackCollectionAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x21f61a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelFilterModel*>::get(), "FilerBeatmapLevelPackCollectionAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelFilterParams*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AdditionalContentModel*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelFilterModel.LevelContainsText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::IPreviewBeatmapLevel*, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::GlobalNamespace::BeatmapLevelFilterModel::LevelContainsText)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x21f62c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelFilterModel*>::get(), "LevelContainsText", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelFilterModel.GetAllBeatmapLevelsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<
    ::GlobalNamespace::IPreviewBeatmapLevel*>*>* (*)(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, ::GlobalNamespace::SongPackMask, bool, bool,
                                                     ::GlobalNamespace::AdditionalContentModel*, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::BeatmapLevelFilterModel::GetAllBeatmapLevelsAsync)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x21f64f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelFilterModel*>::get(), "GetAllBeatmapLevelsAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AdditionalContentModel*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelCollection*>* GlobalNamespace::BeatmapLevelFilterModel::FilerBeatmapLevelPackCollectionAsync(
    ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> beatmapLevelPacks, ::GlobalNamespace::LevelFilterParams* levelFilterParams,
    ::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::AdditionalContentModel* additionalContentModel, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelFilterModel*>::get(), "FilerBeatmapLevelPackCollectionAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelFilterParams*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AdditionalContentModel*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevelCollection*>*, false>(nullptr, ___internal_method, beatmapLevelPacks, levelFilterParams,
                                                                                                                                      playerDataModel, additionalContentModel, cancellationToken);
}
inline bool GlobalNamespace::BeatmapLevelFilterModel::LevelContainsText(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel, ::ArrayW<::StringW, ::Array<::StringW>*> searchTexts) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelFilterModel*>::get(), "LevelContainsText", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, beatmapLevel, searchTexts);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>*
GlobalNamespace::BeatmapLevelFilterModel::GetAllBeatmapLevelsAsync(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> beatmapLevelPacks,
                                                                   ::GlobalNamespace::SongPackMask songPackMask, bool onlyOwned, bool onlyNotOwned,
                                                                   ::GlobalNamespace::AdditionalContentModel* additionalContentModel, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelFilterModel*>::get(), "GetAllBeatmapLevelsAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AdditionalContentModel*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::GlobalNamespace::IPreviewBeatmapLevel*>*>*, false>(
      nullptr, ___internal_method, beatmapLevelPacks, songPackMask, onlyOwned, onlyNotOwned, additionalContentModel, cancellationToken);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelFilterModel::BeatmapLevelFilterModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
