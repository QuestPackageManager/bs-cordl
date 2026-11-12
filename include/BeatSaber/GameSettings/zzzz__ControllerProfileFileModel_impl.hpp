#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/ControllerProfileFileModel.hpp"
#include "GlobalNamespace/zzzz__StoragePreference_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfileFileModel_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfileFileModel_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfilesSaveData_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5::*)()>(
    &::BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x353b66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x353b8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5::SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "__4__this", ty: "::BeatSaber::GameSettings::ControllerProfileFileModel*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5::ControllerProfileFileModel__LoadAsync_d__5(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*> __t__builder,
    ::BeatSaber::GameSettings::ControllerProfileFileModel* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::ControllerProfileFileModel__LoadAsync_d__5::ControllerProfileFileModel__LoadAsync_d__5() {}
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfileFileModel.get_fileStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IFileStorage* (::BeatSaber::GameSettings::ControllerProfileFileModel::*)()>(
    &::BeatSaber::GameSettings::ControllerProfileFileModel::get_fileStorage)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x353b4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfileFileModel*>(), { "get_fileStorage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfileFileModel.LoadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*>* (
    ::BeatSaber::GameSettings::ControllerProfileFileModel::*)()>(&::BeatSaber::GameSettings::ControllerProfileFileModel::LoadAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x353b520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfileFileModel*>(), { "LoadAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfileFileModel.SaveAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::BeatSaber::GameSettings::ControllerProfileFileModel::*)(::BeatSaber::GameSettings::ControllerProfilesSaveData*)>(&::BeatSaber::GameSettings::ControllerProfileFileModel::SaveAsync)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x353b5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfileFileModel*>(),
                                                                                           { "SaveAsync", {}, { ::i2c::type_of<::BeatSaber::GameSettings::ControllerProfilesSaveData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfileFileModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfileFileModel::*)()>(&::BeatSaber::GameSettings::ControllerProfileFileModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x353b668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfileFileModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IFileStorage*& BeatSaber::GameSettings::ControllerProfileFileModel::__cordl_internal_get__fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr ::GlobalNamespace::IFileStorage* const& BeatSaber::GameSettings::ControllerProfileFileModel::__cordl_internal_get__fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr void BeatSaber::GameSettings::ControllerProfileFileModel::__cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fileStorage = value;
}
inline ::GlobalNamespace::IFileStorage* BeatSaber::GameSettings::ControllerProfileFileModel::get_fileStorage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfileFileModel*>(), { "get_fileStorage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IFileStorage*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*>* BeatSaber::GameSettings::ControllerProfileFileModel::LoadAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfileFileModel*>(), { "LoadAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::GameSettings::ControllerProfileFileModel::SaveAsync(::BeatSaber::GameSettings::ControllerProfilesSaveData* profileSaveDataContainer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfileFileModel*>(),
                                                                                         { "SaveAsync", {}, { ::i2c::type_of<::BeatSaber::GameSettings::ControllerProfilesSaveData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, profileSaveDataContainer);
}
inline void BeatSaber::GameSettings::ControllerProfileFileModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfileFileModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::GameSettings::ControllerProfileFileModel* BeatSaber::GameSettings::ControllerProfileFileModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::GameSettings::ControllerProfileFileModel*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::ControllerProfileFileModel::ControllerProfileFileModel() {}
constexpr ::GlobalNamespace::StoragePreference BeatSaber::GameSettings::ControllerProfileFileModel::kStoragePreference{ static_cast<int32_t>(0x0) };
