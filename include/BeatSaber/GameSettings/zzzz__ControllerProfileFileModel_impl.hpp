#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/ControllerProfileFileModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfileFileModel_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfilesSaveData_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfileFileModel.get_fileStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IFileStorage* (::BeatSaber::GameSettings::ControllerProfileFileModel::*)()>(
    &::BeatSaber::GameSettings::ControllerProfileFileModel::get_fileStorage)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x226e908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfileFileModel*>::get(),
                                                                               "get_fileStorage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfileFileModel.LoadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*>* (
    ::BeatSaber::GameSettings::ControllerProfileFileModel::*)()>(&::BeatSaber::GameSettings::ControllerProfileFileModel::LoadAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x226e964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfileFileModel*>::get(),
                                                                               "LoadAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfileFileModel.SaveAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::BeatSaber::GameSettings::ControllerProfileFileModel::*)(::BeatSaber::GameSettings::ControllerProfilesSaveData*)>(&::BeatSaber::GameSettings::ControllerProfileFileModel::SaveAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x226e9d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfileFileModel*>::get(), "SaveAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::ControllerProfilesSaveData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfileFileModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::ControllerProfileFileModel::*)()>(
    &::BeatSaber::GameSettings::ControllerProfileFileModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226ea3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfileFileModel*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fileStorage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::IFileStorage* BeatSaber::GameSettings::ControllerProfileFileModel::get_fileStorage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfileFileModel*>::get(),
                                                                             "get_fileStorage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IFileStorage*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*>* BeatSaber::GameSettings::ControllerProfileFileModel::LoadAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfileFileModel*>::get(),
                                                                             "LoadAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::GameSettings::ControllerProfileFileModel::SaveAsync(::BeatSaber::GameSettings::ControllerProfilesSaveData* profileSaveDataContainer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfileFileModel*>::get(), "SaveAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::ControllerProfilesSaveData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, profileSaveDataContainer);
}
inline void BeatSaber::GameSettings::ControllerProfileFileModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfileFileModel*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::GameSettings::ControllerProfileFileModel* BeatSaber::GameSettings::ControllerProfileFileModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::GameSettings::ControllerProfileFileModel*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::ControllerProfileFileModel::ControllerProfileFileModel() {}
