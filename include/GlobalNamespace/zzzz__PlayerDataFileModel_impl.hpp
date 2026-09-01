#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayerDataFileModel.hpp"
#include "GlobalNamespace/zzzz__StoragePreference_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerDataFileModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
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
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDataFileModel___c::*)()>(&::GlobalNamespace::PlayerDataFileModel___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x374cf6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel___c._GetPlayerSaveData_b__19_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerSaveData_PromoCounterData* (
    ::GlobalNamespace::PlayerDataFileModel___c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW, int32_t>)>(&::GlobalNamespace::PlayerDataFileModel___c::_GetPlayerSaveData_b__19_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x374cf70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel___c*>(),
                                                             { "<GetPlayerSaveData>b__19_0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel___c._LoadFromCurrentVersion_b__24_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::StringW, int32_t> (::GlobalNamespace::PlayerDataFileModel___c::*)(::GlobalNamespace::PlayerSaveData_PromoCounterData*)>(
    &::GlobalNamespace::PlayerDataFileModel___c::_LoadFromCurrentVersion_b__24_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x374d010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel___c*>(),
                                                             { "<LoadFromCurrentVersion>b__24_0", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSaveData_PromoCounterData*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayerDataFileModel___c::setStaticF___9(::GlobalNamespace::PlayerDataFileModel___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::PlayerDataFileModel___c*, "<>9", ::GlobalNamespace::PlayerDataFileModel___c*>(std::forward<::GlobalNamespace::PlayerDataFileModel___c*>(value));
}
inline ::GlobalNamespace::PlayerDataFileModel___c* GlobalNamespace::PlayerDataFileModel___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::PlayerDataFileModel___c*, "<>9", ::GlobalNamespace::PlayerDataFileModel___c*>();
}
inline void GlobalNamespace::PlayerDataFileModel___c::setStaticF___9__19_0(
    ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, int32_t>, ::GlobalNamespace::PlayerSaveData_PromoCounterData*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, int32_t>, ::GlobalNamespace::PlayerSaveData_PromoCounterData*>*, "<>9__19_0",
                                    ::GlobalNamespace::PlayerDataFileModel___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, int32_t>, ::GlobalNamespace::PlayerSaveData_PromoCounterData*>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, int32_t>, ::GlobalNamespace::PlayerSaveData_PromoCounterData*>*
GlobalNamespace::PlayerDataFileModel___c::getStaticF___9__19_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, int32_t>, ::GlobalNamespace::PlayerSaveData_PromoCounterData*>*, "<>9__19_0",
                                           ::GlobalNamespace::PlayerDataFileModel___c*>();
}
inline void GlobalNamespace::PlayerDataFileModel___c::setStaticF___9__24_0(::System::Func_2<::GlobalNamespace::PlayerSaveData_PromoCounterData*, ::System::ValueTuple_2<::StringW, int32_t>>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::PlayerSaveData_PromoCounterData*, ::System::ValueTuple_2<::StringW, int32_t>>*, "<>9__24_0",
                                    ::GlobalNamespace::PlayerDataFileModel___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::PlayerSaveData_PromoCounterData*, ::System::ValueTuple_2<::StringW, int32_t>>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::PlayerSaveData_PromoCounterData*, ::System::ValueTuple_2<::StringW, int32_t>>* GlobalNamespace::PlayerDataFileModel___c::getStaticF___9__24_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::PlayerSaveData_PromoCounterData*, ::System::ValueTuple_2<::StringW, int32_t>>*, "<>9__24_0",
                                           ::GlobalNamespace::PlayerDataFileModel___c*>();
}
inline void GlobalNamespace::PlayerDataFileModel___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSaveData_PromoCounterData*
GlobalNamespace::PlayerDataFileModel___c::_GetPlayerSaveData_b__19_0(::System::Collections::Generic::KeyValuePair_2<::StringW, int32_t> pair) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel___c*>(),
                                                           { "<GetPlayerSaveData>b__19_0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSaveData_PromoCounterData*>(this, ___internal_method, pair);
}
inline ::System::ValueTuple_2<::StringW, int32_t> GlobalNamespace::PlayerDataFileModel___c::_LoadFromCurrentVersion_b__24_0(::GlobalNamespace::PlayerSaveData_PromoCounterData* pc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel___c*>(),
                                                           { "<LoadFromCurrentVersion>b__24_0", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSaveData_PromoCounterData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::StringW, int32_t>>(this, ___internal_method, pc);
}
inline ::GlobalNamespace::PlayerDataFileModel___c* GlobalNamespace::PlayerDataFileModel___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerDataFileModel___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerDataFileModel___c::PlayerDataFileModel___c() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35::*)()>(
    &::GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x374d060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x374d42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "fileStorage", ty: "::GlobalNamespace::IFileStorage*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35::PlayerDataFileModel__LoadAsStringAsync_d__35(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::GlobalNamespace::IFileStorage* fileStorage,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->fileStorage = fileStorage;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerDataFileModel__LoadAsStringAsync_d__35::PlayerDataFileModel__LoadAsStringAsync_d__35() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21::*)()>(&::GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x374d4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x374d748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlayerData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::PlayerDataFileModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21::PlayerDataFileModel__LoadAsync_d__21(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlayerData*> __t__builder, ::GlobalNamespace::PlayerDataFileModel* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerDataFileModel__LoadAsync_d__21::PlayerDataFileModel__LoadAsync_d__21() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.get_PlayerDataFileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::PlayerDataFileModel::get_PlayerDataFileName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3748b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "get_PlayerDataFileName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.set_PlayerDataFileName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::PlayerDataFileModel::set_PlayerDataFileName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3748b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "set_PlayerDataFileName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::PlayerDataFileModel::Init)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3748c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDataFileModel::*)(::GlobalNamespace::PlayerDataFileManagerSO*, ::GlobalNamespace::IFileStorage*,
                                                                                                        ::GlobalNamespace::BeatmapCharacteristicCollection*, ::GlobalNamespace::ColorSchemesSettings*,
                                                                                                        ::GlobalNamespace::EnvironmentsListModel*)>(&::GlobalNamespace::PlayerDataFileModel::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3748c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::PlayerDataFileManagerSO*>(), ::i2c::type_of<::GlobalNamespace::IFileStorage*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicCollection*>(), ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.Save
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDataFileModel::*)(::GlobalNamespace::PlayerData*)>(&::GlobalNamespace::PlayerDataFileModel::Save)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3748ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "Save", {}, { ::i2c::type_of<::GlobalNamespace::PlayerData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.SaveAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::PlayerDataFileModel::*)(::GlobalNamespace::PlayerData*)>(
    &::GlobalNamespace::PlayerDataFileModel::SaveAsync)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3749db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "SaveAsync", {}, { ::i2c::type_of<::GlobalNamespace::PlayerData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.GetPlayerSaveData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerSaveData* (::GlobalNamespace::PlayerDataFileModel::*)(::GlobalNamespace::PlayerData*)>(
    &::GlobalNamespace::PlayerDataFileModel::GetPlayerSaveData)> {
  constexpr static std::size_t size = 0xfc4;
  constexpr static std::size_t addrs = 0x3748dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "GetPlayerSaveData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerData* (::GlobalNamespace::PlayerDataFileModel::*)()>(&::GlobalNamespace::PlayerDataFileModel::Load)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x374a16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "Load", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.LoadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::PlayerData*>* (::GlobalNamespace::PlayerDataFileModel::*)()>(
    &::GlobalNamespace::PlayerDataFileModel::LoadAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x374a320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "LoadAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.LoadOrCreateFromJsonString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerData* (::GlobalNamespace::PlayerDataFileModel::*)(::StringW)>(
    &::GlobalNamespace::PlayerDataFileModel::LoadOrCreateFromJsonString)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x374a2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "LoadOrCreateFromJsonString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.LoadFromJSONString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerData* (::GlobalNamespace::PlayerDataFileModel::*)(::StringW)>(
    &::GlobalNamespace::PlayerDataFileModel::LoadFromJSONString)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x374a3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "LoadFromJSONString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.LoadFromCurrentVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerData* (::GlobalNamespace::PlayerDataFileModel::*)(::GlobalNamespace::PlayerSaveData*)>(
    &::GlobalNamespace::PlayerDataFileModel::LoadFromCurrentVersion)> {
  constexpr static std::size_t size = 0x1008;
  constexpr static std::size_t addrs = 0x374b03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "LoadFromCurrentVersion", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSaveData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.LoadFromVersionV1_0_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerData* (::GlobalNamespace::PlayerDataFileModel::*)(::GlobalNamespace::PlayerSaveDataV1_0_1*)>(
    &::GlobalNamespace::PlayerDataFileModel::LoadFromVersionV1_0_1)> {
  constexpr static std::size_t size = 0x9b8;
  constexpr static std::size_t addrs = 0x374a684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "LoadFromVersionV1_0_1", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSaveDataV1_0_1*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.CreateDefaultPlayerData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerData* (::GlobalNamespace::PlayerDataFileModel::*)()>(
    &::GlobalNamespace::PlayerDataFileModel::CreateDefaultPlayerData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x374a5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "CreateDefaultPlayerData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.GetLevelIdFromV_1_0_1LevelId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::GlobalNamespace::BeatmapCharacteristic)>(&::GlobalNamespace::PlayerDataFileModel::GetLevelIdFromV_1_0_1LevelId)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x374cbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(),
                                                             { "GetLevelIdFromV_1_0_1LevelId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.GetBeatmapCharacteristicFromV_1_0_1LevelId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::BeatmapCharacteristic> (*)(::GlobalNamespace::BeatmapCharacteristicCollection*, ::StringW)>(
    &::GlobalNamespace::PlayerDataFileModel::GetBeatmapCharacteristicFromV_1_0_1LevelId)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x374c7ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(),
                            { "GetBeatmapCharacteristicFromV_1_0_1LevelId", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicCollection*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.CreateDefaultOverrideEnvironmentSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OverrideEnvironmentSettings* (::GlobalNamespace::PlayerDataFileModel::*)()>(
    &::GlobalNamespace::PlayerDataFileModel::CreateDefaultOverrideEnvironmentSettings)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x374c1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "CreateDefaultOverrideEnvironmentSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.GetEnvironmentInfoBySerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::EnvironmentInfoSO> (::GlobalNamespace::PlayerDataFileModel::*)(::StringW)>(
    &::GlobalNamespace::PlayerDataFileModel::GetEnvironmentInfoBySerializedName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x374ccb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "GetEnvironmentInfoBySerializedName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.LoadCorrectedSongPackMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerDataFileModel::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::PlayerDataFileModel::LoadCorrectedSongPackMask)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x374c29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "LoadCorrectedSongPackMask", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.ColorOverrideTypeFromSaveData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorSchemesSettings_ColorOverrideType (::GlobalNamespace::PlayerDataFileModel::*)(
    ::GlobalNamespace::PlayerSaveData_ColorOverrideType)>(&::GlobalNamespace::PlayerDataFileModel::ColorOverrideTypeFromSaveData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x374c1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(),
                                                             { "ColorOverrideTypeFromSaveData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSaveData_ColorOverrideType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.ColorOverrideTypeToSaveData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerSaveData_ColorOverrideType (::GlobalNamespace::PlayerDataFileModel::*)(
    ::GlobalNamespace::ColorSchemesSettings_ColorOverrideType)>(&::GlobalNamespace::PlayerDataFileModel::ColorOverrideTypeToSaveData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x374a0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(),
                                                             { "ColorOverrideTypeToSaveData", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings_ColorOverrideType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.LoadAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::IFileStorage*)>(&::GlobalNamespace::PlayerDataFileModel::LoadAsString)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x374a1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "LoadAsString", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.LoadAsStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (*)(::GlobalNamespace::IFileStorage*)>(
    &::GlobalNamespace::PlayerDataFileModel::LoadAsStringAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x374ccc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "LoadAsStringAsync", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataFileModel.WipePlayerDataFiles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::PlayerDataFileModel::WipePlayerDataFiles)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x374cda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "WipePlayerDataFiles", {}, {} })));
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
  this->____playerDataFileManager = value;
}
constexpr ::GlobalNamespace::IFileStorage*& GlobalNamespace::PlayerDataFileModel::__cordl_internal_get__fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr ::GlobalNamespace::IFileStorage* const& GlobalNamespace::PlayerDataFileModel::__cordl_internal_get__fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr void GlobalNamespace::PlayerDataFileModel::__cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fileStorage = value;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& GlobalNamespace::PlayerDataFileModel::__cordl_internal_get__beatmapCharacteristicCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& GlobalNamespace::PlayerDataFileModel::__cordl_internal_get__beatmapCharacteristicCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr void GlobalNamespace::PlayerDataFileModel::__cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristicCollection = value;
}
constexpr ::GlobalNamespace::ColorSchemesSettings*& GlobalNamespace::PlayerDataFileModel::__cordl_internal_get__colorSchemesSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemesSettings;
}
constexpr ::GlobalNamespace::ColorSchemesSettings* const& GlobalNamespace::PlayerDataFileModel::__cordl_internal_get__colorSchemesSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemesSettings;
}
constexpr void GlobalNamespace::PlayerDataFileModel::__cordl_internal_set__colorSchemesSettings(::GlobalNamespace::ColorSchemesSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorSchemesSettings = value;
}
constexpr ::GlobalNamespace::EnvironmentsListModel*& GlobalNamespace::PlayerDataFileModel::__cordl_internal_get__environmentsListModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsListModel;
}
constexpr ::GlobalNamespace::EnvironmentsListModel* const& GlobalNamespace::PlayerDataFileModel::__cordl_internal_get__environmentsListModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsListModel;
}
constexpr void GlobalNamespace::PlayerDataFileModel::__cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentsListModel = value;
}
inline void GlobalNamespace::PlayerDataFileModel::setStaticF__playerDataFileName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_playerDataFileName", ::GlobalNamespace::PlayerDataFileModel*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PlayerDataFileModel::getStaticF__playerDataFileName() {
  return ::cordl_internals::getStaticField<::StringW, "_playerDataFileName", ::GlobalNamespace::PlayerDataFileModel*>();
}
inline void GlobalNamespace::PlayerDataFileModel::setStaticF__eulaUpdateVersion(::System::Version* value) {
  ::cordl_internals::setStaticField<::System::Version*, "_eulaUpdateVersion", ::GlobalNamespace::PlayerDataFileModel*>(std::forward<::System::Version*>(value));
}
inline ::System::Version* GlobalNamespace::PlayerDataFileModel::getStaticF__eulaUpdateVersion() {
  return ::cordl_internals::getStaticField<::System::Version*, "_eulaUpdateVersion", ::GlobalNamespace::PlayerDataFileModel*>();
}
inline void GlobalNamespace::PlayerDataFileModel::setStaticF__lastVersionWithoutArcsOptions(::System::Version* value) {
  ::cordl_internals::setStaticField<::System::Version*, "_lastVersionWithoutArcsOptions", ::GlobalNamespace::PlayerDataFileModel*>(std::forward<::System::Version*>(value));
}
inline ::System::Version* GlobalNamespace::PlayerDataFileModel::getStaticF__lastVersionWithoutArcsOptions() {
  return ::cordl_internals::getStaticField<::System::Version*, "_lastVersionWithoutArcsOptions", ::GlobalNamespace::PlayerDataFileModel*>();
}
inline ::StringW GlobalNamespace::PlayerDataFileModel::get_PlayerDataFileName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "get_PlayerDataFileName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerDataFileModel::set_PlayerDataFileName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "set_PlayerDataFileName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::PlayerDataFileModel::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerDataFileModel::_ctor(::GlobalNamespace::PlayerDataFileManagerSO* playerDataFileManager, ::GlobalNamespace::IFileStorage* fileStorage,
                                                        ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection,
                                                        ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::PlayerDataFileManagerSO*>(), ::i2c::type_of<::GlobalNamespace::IFileStorage*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicCollection*>(), ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings*>(),
                                                               ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerDataFileManager, fileStorage, beatmapCharacteristicCollection, colorSchemesSettings, environmentsListModel);
}
inline void GlobalNamespace::PlayerDataFileModel::Save(::GlobalNamespace::PlayerData* playerData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "Save", {}, { ::i2c::type_of<::GlobalNamespace::PlayerData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerData);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PlayerDataFileModel::SaveAsync(::GlobalNamespace::PlayerData* playerData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "SaveAsync", {}, { ::i2c::type_of<::GlobalNamespace::PlayerData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, playerData);
}
inline ::GlobalNamespace::PlayerSaveData* GlobalNamespace::PlayerDataFileModel::GetPlayerSaveData(::GlobalNamespace::PlayerData* playerData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "GetPlayerSaveData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSaveData*>(this, ___internal_method, playerData);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerDataFileModel::Load() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "Load", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::PlayerData*>* GlobalNamespace::PlayerDataFileModel::LoadAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "LoadAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::PlayerData*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerDataFileModel::LoadOrCreateFromJsonString(::StringW jsonString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "LoadOrCreateFromJsonString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData*>(this, ___internal_method, jsonString);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerDataFileModel::LoadFromJSONString(::StringW jsonString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "LoadFromJSONString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData*>(this, ___internal_method, jsonString);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerDataFileModel::LoadFromCurrentVersion(::GlobalNamespace::PlayerSaveData* playerSaveData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "LoadFromCurrentVersion", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSaveData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData*>(this, ___internal_method, playerSaveData);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerDataFileModel::LoadFromVersionV1_0_1(::GlobalNamespace::PlayerSaveDataV1_0_1* playerDataModelSaveData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "LoadFromVersionV1_0_1", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSaveDataV1_0_1*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData*>(this, ___internal_method, playerDataModelSaveData);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerDataFileModel::CreateDefaultPlayerData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "CreateDefaultPlayerData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData*>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PlayerDataFileModel::GetLevelIdFromV_1_0_1LevelId(::StringW oldLevelId, ::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(),
                                                           { "GetLevelIdFromV_1_0_1LevelId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, oldLevelId, beatmapCharacteristic);
}
inline ::System::Nullable_1<::GlobalNamespace::BeatmapCharacteristic>
GlobalNamespace::PlayerDataFileModel::GetBeatmapCharacteristicFromV_1_0_1LevelId(::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection, ::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(),
                                       { "GetBeatmapCharacteristicFromV_1_0_1LevelId", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicCollection*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::BeatmapCharacteristic>>(nullptr, ___internal_method, beatmapCharacteristicCollection, levelId);
}
inline ::GlobalNamespace::OverrideEnvironmentSettings* GlobalNamespace::PlayerDataFileModel::CreateDefaultOverrideEnvironmentSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "CreateDefaultOverrideEnvironmentSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OverrideEnvironmentSettings*>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GlobalNamespace::PlayerDataFileModel::GetEnvironmentInfoBySerializedName(::StringW environmentName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "GetEnvironmentInfoBySerializedName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>(this, ___internal_method, environmentName);
}
inline ::StringW GlobalNamespace::PlayerDataFileModel::LoadCorrectedSongPackMask(::ArrayW<uint8_t> songMaskPackBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "LoadCorrectedSongPackMask", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, songMaskPackBytes);
}
inline ::GlobalNamespace::ColorSchemesSettings_ColorOverrideType GlobalNamespace::PlayerDataFileModel::ColorOverrideTypeFromSaveData(::GlobalNamespace::PlayerSaveData_ColorOverrideType c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(),
                                                           { "ColorOverrideTypeFromSaveData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSaveData_ColorOverrideType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorSchemesSettings_ColorOverrideType>(this, ___internal_method, c);
}
inline ::GlobalNamespace::PlayerSaveData_ColorOverrideType GlobalNamespace::PlayerDataFileModel::ColorOverrideTypeToSaveData(::GlobalNamespace::ColorSchemesSettings_ColorOverrideType c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(),
                                                           { "ColorOverrideTypeToSaveData", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings_ColorOverrideType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSaveData_ColorOverrideType>(this, ___internal_method, c);
}
inline ::StringW GlobalNamespace::PlayerDataFileModel::LoadAsString(::GlobalNamespace::IFileStorage* fileStorage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "LoadAsString", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, fileStorage);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::PlayerDataFileModel::LoadAsStringAsync(::GlobalNamespace::IFileStorage* fileStorage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "LoadAsStringAsync", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(nullptr, ___internal_method, fileStorage);
}
inline void GlobalNamespace::PlayerDataFileModel::WipePlayerDataFiles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataFileModel*>(), { "WipePlayerDataFiles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::PlayerDataFileModel* GlobalNamespace::PlayerDataFileModel::New_ctor(::GlobalNamespace::PlayerDataFileManagerSO* playerDataFileManager,
                                                                                              ::GlobalNamespace::IFileStorage* fileStorage,
                                                                                              ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection,
                                                                                              ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings,
                                                                                              ::GlobalNamespace::EnvironmentsListModel* environmentsListModel) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::PlayerDataFileModel*>(playerDataFileManager, fileStorage, beatmapCharacteristicCollection, colorSchemesSettings, environmentsListModel));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerDataFileModel::PlayerDataFileModel() {}
constexpr ::GlobalNamespace::StoragePreference GlobalNamespace::PlayerDataFileModel::kStorageLoadPreference{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::StoragePreference GlobalNamespace::PlayerDataFileModel::kOverrideStoragePreference{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::StoragePreference GlobalNamespace::PlayerDataFileModel::kStorageSavePreference{ static_cast<int32_t>(0x0) };
