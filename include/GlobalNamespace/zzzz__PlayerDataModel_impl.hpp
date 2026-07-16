#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerDataModel.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__IPlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataFileModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__12::*)()>(
    &::GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x3749360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__12>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__12::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x37495a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__12>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__12::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__12>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__12>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlayerDataModel>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlayerData*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__12::PlayerDataModel__UndoUnsavedChangesAsync_d__12(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::PlayerDataModel> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlayerData*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerDataModel__UndoUnsavedChangesAsync_d__12::PlayerDataModel__UndoUnsavedChangesAsync_d__12() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerDataModel.get_playerDataFileModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerDataFileModel* (::GlobalNamespace::PlayerDataModel::*)()>(
    &::GlobalNamespace::PlayerDataModel::get_playerDataFileModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37490b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { "get_playerDataFileModel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataModel.get_playerData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerData* (::GlobalNamespace::PlayerDataModel::*)()>(&::GlobalNamespace::PlayerDataModel::get_playerData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37490c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { "get_playerData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataModel.Inject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDataModel::*)(::StringW, ::GlobalNamespace::PlayerDataFileModel*)>(&::GlobalNamespace::PlayerDataModel::Inject)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x37490c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { "Inject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayerDataFileModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataModel.OnApplicationPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDataModel::*)(bool)>(&::GlobalNamespace::PlayerDataModel::OnApplicationPause)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x37490f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { "OnApplicationPause", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataModel.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDataModel::*)()>(&::GlobalNamespace::PlayerDataModel::OnDisable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3749120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataModel.ResetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDataModel::*)()>(&::GlobalNamespace::PlayerDataModel::ResetData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x37491e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { "ResetData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataModel.UndoUnsavedChangesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::PlayerDataModel::*)()>(&::GlobalNamespace::PlayerDataModel::UndoUnsavedChangesAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3749208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { "UndoUnsavedChangesAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataModel.Save
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDataModel::*)()>(&::GlobalNamespace::PlayerDataModel::Save)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3749104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { "Save", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataModel.SaveAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::PlayerDataModel::*)()>(&::GlobalNamespace::PlayerDataModel::SaveAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x37492b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { "SaveAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataModel.FireAsyncSaveAndForget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDataModel::*)()>(&::GlobalNamespace::PlayerDataModel::FireAsyncSaveAndForget)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x37492d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { "FireAsyncSaveAndForget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerDataModel::*)()>(&::GlobalNamespace::PlayerDataModel::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3749354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PlayerDataModel::__cordl_internal_get_autoSaveOnDisable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoSaveOnDisable;
}
constexpr bool const& GlobalNamespace::PlayerDataModel::__cordl_internal_get_autoSaveOnDisable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoSaveOnDisable;
}
constexpr void GlobalNamespace::PlayerDataModel::__cordl_internal_set_autoSaveOnDisable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoSaveOnDisable = value;
}
constexpr ::GlobalNamespace::PlayerData*& GlobalNamespace::PlayerDataModel::__cordl_internal_get__playerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerData;
}
constexpr ::GlobalNamespace::PlayerData* const& GlobalNamespace::PlayerDataModel::__cordl_internal_get__playerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerData;
}
constexpr void GlobalNamespace::PlayerDataModel::__cordl_internal_set__playerData(::GlobalNamespace::PlayerData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerData = value;
}
constexpr ::GlobalNamespace::PlayerDataFileModel*& GlobalNamespace::PlayerDataModel::__cordl_internal_get__playerDataFileModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataFileModel;
}
constexpr ::GlobalNamespace::PlayerDataFileModel* const& GlobalNamespace::PlayerDataModel::__cordl_internal_get__playerDataFileModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataFileModel;
}
constexpr void GlobalNamespace::PlayerDataModel::__cordl_internal_set__playerDataFileModel(::GlobalNamespace::PlayerDataFileModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataFileModel = value;
}
inline ::GlobalNamespace::PlayerDataFileModel* GlobalNamespace::PlayerDataModel::get_playerDataFileModel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { "get_playerDataFileModel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerDataFileModel*>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerDataModel::get_playerData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { "get_playerData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerDataModel::Inject(::StringW playerDataJsonString, ::GlobalNamespace::PlayerDataFileModel* playerDataFileModel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { "Inject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayerDataFileModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerDataJsonString, playerDataFileModel);
}
inline void GlobalNamespace::PlayerDataModel::OnApplicationPause(bool pauseStatus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { "OnApplicationPause", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pauseStatus);
}
inline void GlobalNamespace::PlayerDataModel::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerDataModel::ResetData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { "ResetData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PlayerDataModel::UndoUnsavedChangesAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { "UndoUnsavedChangesAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerDataModel::Save() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { "Save", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::PlayerDataModel::SaveAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { "SaveAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerDataModel::FireAsyncSaveAndForget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { "FireAsyncSaveAndForget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerDataModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerDataModel* GlobalNamespace::PlayerDataModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerDataModel*>());
}
/// @brief Convert operator to "::GlobalNamespace::IPlayerDataModel"
constexpr GlobalNamespace::PlayerDataModel::operator ::GlobalNamespace::IPlayerDataModel*() noexcept {
  return static_cast<::GlobalNamespace::IPlayerDataModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPlayerDataModel"
constexpr ::GlobalNamespace::IPlayerDataModel* GlobalNamespace::PlayerDataModel::i___GlobalNamespace__IPlayerDataModel() noexcept {
  return static_cast<::GlobalNamespace::IPlayerDataModel*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerDataModel::PlayerDataModel() {}
