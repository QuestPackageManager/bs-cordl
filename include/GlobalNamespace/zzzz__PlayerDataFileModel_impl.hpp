#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerDataFileModel.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerDataFileModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemesSettings_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataFileManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataFileModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveDataV1_0_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13::*)()>(
    &::GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x14efb2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x14efdc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlayerData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::PlayerDataFileModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers:
// "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13::__PlayerDataFileModel___LoadAsync_d__13(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlayerData*> __t__builder, ::GlobalNamespace::PlayerDataFileModel* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerDataFileModel___LoadAsync_d__13::__PlayerDataFileModel___LoadAsync_d__13() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerDataFileModel::*)(
    ::GlobalNamespace::PlayerDataFileManagerSO*, ::GlobalNamespace::IFileStorage*, ::GlobalNamespace::BeatmapCharacteristicCollection*, ::GlobalNamespace::ColorSchemesSettings*,
    ::GlobalNamespace::EnvironmentsListModel*)>(&::GlobalNamespace::PlayerDataFileModel::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x14eb838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataFileManagerSO*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentsListModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.Save
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerDataFileModel::*)(::GlobalNamespace::PlayerData*)>(
    &::GlobalNamespace::PlayerDataFileModel::Save)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x14eb888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "Save", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.SaveAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::PlayerDataFileModel::*)(::GlobalNamespace::PlayerData*)>(
    &::GlobalNamespace::PlayerDataFileModel::SaveAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x14ec988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "SaveAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.GetPlayerSaveData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSaveData* (::GlobalNamespace::PlayerDataFileModel::*)(::GlobalNamespace::PlayerData*)>(
    &::GlobalNamespace::PlayerDataFileModel::GetPlayerSaveData)> {
  constexpr static std::size_t size = 0x1090;
  constexpr static std::size_t addrs = 0x14eb8f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "GetPlayerSaveData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerData* (::GlobalNamespace::PlayerDataFileModel::*)()>(
    &::GlobalNamespace::PlayerDataFileModel::Load)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x14ecd58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "Load",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.LoadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::PlayerData*>* (::GlobalNamespace::PlayerDataFileModel::*)()>(
    &::GlobalNamespace::PlayerDataFileModel::LoadAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x14ecdd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "LoadAsync",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.LoadOrCreateFromJsonString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerData* (::GlobalNamespace::PlayerDataFileModel::*)(::StringW)>(
    &::GlobalNamespace::PlayerDataFileModel::LoadOrCreateFromJsonString)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x14ecdb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "LoadOrCreateFromJsonString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.LoadFromJSONString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerData* (::GlobalNamespace::PlayerDataFileModel::*)(::StringW)>(
    &::GlobalNamespace::PlayerDataFileModel::LoadFromJSONString)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x14ecec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "LoadFromJSONString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.LoadFromCurrentVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerData* (::GlobalNamespace::PlayerDataFileModel::*)(::GlobalNamespace::PlayerSaveData*)>(
    &::GlobalNamespace::PlayerDataFileModel::LoadFromCurrentVersion)> {
  constexpr static std::size_t size = 0x10e0;
  constexpr static std::size_t addrs = 0x14edc70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "LoadFromCurrentVersion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.LoadFromVersionV1_0_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerData* (::GlobalNamespace::PlayerDataFileModel::*)(::GlobalNamespace::PlayerSaveDataV1_0_1*)>(
    &::GlobalNamespace::PlayerDataFileModel::LoadFromVersionV1_0_1)> {
  constexpr static std::size_t size = 0xb30;
  constexpr static std::size_t addrs = 0x14ed140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "LoadFromVersionV1_0_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveDataV1_0_1*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.CreateDefaultPlayerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerData* (::GlobalNamespace::PlayerDataFileModel::*)()>(
    &::GlobalNamespace::PlayerDataFileModel::CreateDefaultPlayerData)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x14ed084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(),
                                                                               "CreateDefaultPlayerData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.GetLevelIdFromV_1_0_1LevelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::GlobalNamespace::BeatmapCharacteristicSO*)>(
    &::GlobalNamespace::PlayerDataFileModel::GetLevelIdFromV_1_0_1LevelId)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x14ef9dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "GetLevelIdFromV_1_0_1LevelId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.GetBeatmapCharacteristicFromV_1_0_1LevelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> (*)(
    ::GlobalNamespace::BeatmapCharacteristicCollection*, ::StringW)>(&::GlobalNamespace::PlayerDataFileModel::GetBeatmapCharacteristicFromV_1_0_1LevelId)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x14ef63c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "GetBeatmapCharacteristicFromV_1_0_1LevelId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.CreateDefaultOverrideEnvironmentSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OverrideEnvironmentSettings* (::GlobalNamespace::PlayerDataFileModel::*)()>(
    &::GlobalNamespace::PlayerDataFileModel::CreateDefaultOverrideEnvironmentSettings)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x14ef044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "CreateDefaultOverrideEnvironmentSettings",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.GetEnvironmentInfoBySerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::EnvironmentInfoSO> (::GlobalNamespace::PlayerDataFileModel::*)(::StringW)>(
    &::GlobalNamespace::PlayerDataFileModel::GetEnvironmentInfoBySerializedName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x14efa44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "GetEnvironmentInfoBySerializedName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.LoadCorrectedSongPackMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlayerDataFileModel::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::GlobalNamespace::PlayerDataFileModel::LoadCorrectedSongPackMask)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x14ef0ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "LoadCorrectedSongPackMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerDataFileManagerSO>& GlobalNamespace::PlayerDataFileModel::__cordl_internal_get__playerDataFileManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataFileManager;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataFileManagerSO> const& GlobalNamespace::PlayerDataFileModel::__cordl_internal_get__playerDataFileManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataFileManager;
}
constexpr void GlobalNamespace::PlayerDataFileModel::__cordl_internal_set__playerDataFileManager(::UnityW<::GlobalNamespace::PlayerDataFileManagerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataFileManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IFileStorage*& GlobalNamespace::PlayerDataFileModel::__cordl_internal_get__fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& GlobalNamespace::PlayerDataFileModel::__cordl_internal_get__fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr void GlobalNamespace::PlayerDataFileModel::__cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fileStorage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& GlobalNamespace::PlayerDataFileModel::__cordl_internal_get__beatmapCharacteristicCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollection*> const&
GlobalNamespace::PlayerDataFileModel::__cordl_internal_get__beatmapCharacteristicCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr void GlobalNamespace::PlayerDataFileModel::__cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristicCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorSchemesSettings*& GlobalNamespace::PlayerDataFileModel::__cordl_internal_get__colorSchemesSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemesSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemesSettings*> const& GlobalNamespace::PlayerDataFileModel::__cordl_internal_get__colorSchemesSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemesSettings;
}
constexpr void GlobalNamespace::PlayerDataFileModel::__cordl_internal_set__colorSchemesSettings(::GlobalNamespace::ColorSchemesSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorSchemesSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentsListModel*& GlobalNamespace::PlayerDataFileModel::__cordl_internal_get__environmentsListModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsListModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentsListModel*> const& GlobalNamespace::PlayerDataFileModel::__cordl_internal_get__environmentsListModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsListModel;
}
constexpr void GlobalNamespace::PlayerDataFileModel::__cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentsListModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayerDataFileModel::setStaticF__eulaUpdateVersion(::System::Version* value) {
  ::cordl_internals::setStaticField<::System::Version*, "_eulaUpdateVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get>(
      std::forward<::System::Version*>(value));
}
inline ::System::Version* GlobalNamespace::PlayerDataFileModel::getStaticF__eulaUpdateVersion() {
  return ::cordl_internals::getStaticField<::System::Version*, "_eulaUpdateVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get>();
}
inline void GlobalNamespace::PlayerDataFileModel::setStaticF__lastVersionWithoutArcsOptions(::System::Version* value) {
  ::cordl_internals::setStaticField<::System::Version*, "_lastVersionWithoutArcsOptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get>(
      std::forward<::System::Version*>(value));
}
inline ::System::Version* GlobalNamespace::PlayerDataFileModel::getStaticF__lastVersionWithoutArcsOptions() {
  return ::cordl_internals::getStaticField<::System::Version*, "_lastVersionWithoutArcsOptions",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get>();
}
inline ::GlobalNamespace::PlayerDataFileModel* GlobalNamespace::PlayerDataFileModel::New_ctor(::GlobalNamespace::PlayerDataFileManagerSO* playerDataFileManager,
                                                                                              ::GlobalNamespace::IFileStorage* fileStorage,
                                                                                              ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection,
                                                                                              ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings,
                                                                                              ::GlobalNamespace::EnvironmentsListModel* environmentsListModel) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerDataFileModel*>(playerDataFileManager, fileStorage, beatmapCharacteristicCollection, colorSchemesSettings, environmentsListModel));
}
inline void GlobalNamespace::PlayerDataFileModel::_ctor(::GlobalNamespace::PlayerDataFileManagerSO* playerDataFileManager, ::GlobalNamespace::IFileStorage* fileStorage,
                                                        ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection,
                                                        ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataFileManagerSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentsListModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerDataFileManager, fileStorage, beatmapCharacteristicCollection, colorSchemesSettings, environmentsListModel);
}
inline void GlobalNamespace::PlayerDataFileModel::Save(::GlobalNamespace::PlayerData* playerData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "Save", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerData);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PlayerDataFileModel::SaveAsync(::GlobalNamespace::PlayerData* playerData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "SaveAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, playerData);
}
inline ::GlobalNamespace::PlayerSaveData* GlobalNamespace::PlayerDataFileModel::GetPlayerSaveData(::GlobalNamespace::PlayerData* playerData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "GetPlayerSaveData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSaveData*, false>(this, ___internal_method, playerData);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerDataFileModel::Load() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "Load",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::PlayerData*>* GlobalNamespace::PlayerDataFileModel::LoadAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "LoadAsync",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::PlayerData*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerDataFileModel::LoadOrCreateFromJsonString(::StringW jsonString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "LoadOrCreateFromJsonString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData*, false>(this, ___internal_method, jsonString);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerDataFileModel::LoadFromJSONString(::StringW jsonString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "LoadFromJSONString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData*, false>(this, ___internal_method, jsonString);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerDataFileModel::LoadFromCurrentVersion(::GlobalNamespace::PlayerSaveData* playerSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "LoadFromCurrentVersion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData*, false>(this, ___internal_method, playerSaveData);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerDataFileModel::LoadFromVersionV1_0_1(::GlobalNamespace::PlayerSaveDataV1_0_1* playerDataModelSaveData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "LoadFromVersionV1_0_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveDataV1_0_1*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData*, false>(this, ___internal_method, playerDataModelSaveData);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerDataFileModel::CreateDefaultPlayerData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(),
                                                                             "CreateDefaultPlayerData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData*, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PlayerDataFileModel::GetLevelIdFromV_1_0_1LevelId(::StringW oldLevelId, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "GetLevelIdFromV_1_0_1LevelId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, oldLevelId, beatmapCharacteristic);
}
inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>
GlobalNamespace::PlayerDataFileModel::GetBeatmapCharacteristicFromV_1_0_1LevelId(::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection, ::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "GetBeatmapCharacteristicFromV_1_0_1LevelId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, false>(nullptr, ___internal_method, beatmapCharacteristicCollection, levelId);
}
inline ::GlobalNamespace::OverrideEnvironmentSettings* GlobalNamespace::PlayerDataFileModel::CreateDefaultOverrideEnvironmentSettings() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "CreateDefaultOverrideEnvironmentSettings",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OverrideEnvironmentSettings*, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GlobalNamespace::PlayerDataFileModel::GetEnvironmentInfoBySerializedName(::StringW environmentName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "GetEnvironmentInfoBySerializedName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, false>(this, ___internal_method, environmentName);
}
inline ::StringW GlobalNamespace::PlayerDataFileModel::LoadCorrectedSongPackMask(::ArrayW<uint8_t, ::Array<uint8_t>*> songMaskPackBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerDataFileModel*>::get(), "LoadCorrectedSongPackMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, songMaskPackBytes);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerDataFileModel::PlayerDataFileModel() {}
