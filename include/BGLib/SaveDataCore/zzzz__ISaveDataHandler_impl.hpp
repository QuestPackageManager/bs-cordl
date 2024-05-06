#pragma once
#include "BGLib/SaveDataCore/zzzz__ISaveDataHandler_def.hpp"
#include "BGLib/SaveDataCore/zzzz__LoaderState_def.hpp"
#include "BGLib/SaveDataCore/zzzz__SaveDataResult_def.hpp"
#include "BGLib/SaveDataCore/zzzz__VersionableSaveData_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::BGLib::SaveDataCore::ISaveDataHandler.get_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::SaveDataCore::VersionableSaveData* (::BGLib::SaveDataCore::ISaveDataHandler::*)()>(
    &::BGLib::SaveDataCore::ISaveDataHandler::get_instance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::ISaveDataHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::ISaveDataHandler*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::SaveDataCore::ISaveDataHandler.GetState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::SaveDataCore::LoaderState (::BGLib::SaveDataCore::ISaveDataHandler::*)()>(
    &::BGLib::SaveDataCore::ISaveDataHandler::GetState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::ISaveDataHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::ISaveDataHandler*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::SaveDataCore::ISaveDataHandler.SaveAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* (::BGLib::SaveDataCore::ISaveDataHandler::*)(bool)>(&::BGLib::SaveDataCore::ISaveDataHandler::SaveAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::ISaveDataHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::ISaveDataHandler*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::SaveDataCore::ISaveDataHandler.ResetChangesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* (
    ::BGLib::SaveDataCore::ISaveDataHandler::*)()>(&::BGLib::SaveDataCore::ISaveDataHandler::ResetChangesAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::ISaveDataHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::ISaveDataHandler*>::get(), 3));
    return ___internal_method;
  }
};
inline ::BGLib::SaveDataCore::VersionableSaveData* BGLib::SaveDataCore::ISaveDataHandler::get_instance() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::ISaveDataHandler*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::BGLib::SaveDataCore::VersionableSaveData*, false>(this, ___internal_method);
}
inline ::BGLib::SaveDataCore::LoaderState BGLib::SaveDataCore::ISaveDataHandler::GetState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::ISaveDataHandler*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::BGLib::SaveDataCore::LoaderState, false>(this, ___internal_method);
}
/// @param force: bool (default: false)
inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* BGLib::SaveDataCore::ISaveDataHandler::SaveAsync(bool force) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::ISaveDataHandler*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>*, false>(this, ___internal_method, force);
}
inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* BGLib::SaveDataCore::ISaveDataHandler::ResetChangesAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::ISaveDataHandler*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>*, false>(this, ___internal_method);
}
