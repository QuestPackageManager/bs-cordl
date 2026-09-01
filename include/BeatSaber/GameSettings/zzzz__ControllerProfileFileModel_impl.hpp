#pragma once
// IWYU pragma private; include "BeatSaber\GameSettings\ControllerProfileFileModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfileFileModel_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfilesSaveData_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfileFileModel.get_fileStorage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IFileStorage* (::BeatSaber::GameSettings::ControllerProfileFileModel::*)()>(
    &::BeatSaber::GameSettings::ControllerProfileFileModel::get_fileStorage)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3291c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfileFileModel*>(), { "get_fileStorage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfileFileModel.LoadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*>* (
    ::BeatSaber::GameSettings::ControllerProfileFileModel::*)()>(&::BeatSaber::GameSettings::ControllerProfileFileModel::LoadAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3291ce8;

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
  constexpr static std::size_t addrs = 0x3291d58;

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
  constexpr static std::size_t addrs = 0x3291dc4;

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
