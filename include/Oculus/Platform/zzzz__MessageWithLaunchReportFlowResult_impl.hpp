#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithLaunchReportFlowResult.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithLaunchReportFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchReportFlowResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithLaunchReportFlowResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithLaunchReportFlowResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithLaunchReportFlowResult::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3f1d760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLaunchReportFlowResult*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLaunchReportFlowResult.GetLaunchReportFlowResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LaunchReportFlowResult* (::Oculus::Platform::MessageWithLaunchReportFlowResult::*)()>(
    &::Oculus::Platform::MessageWithLaunchReportFlowResult::GetLaunchReportFlowResult)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3f1d7b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLaunchReportFlowResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLaunchReportFlowResult*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLaunchReportFlowResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LaunchReportFlowResult* (
    ::Oculus::Platform::MessageWithLaunchReportFlowResult::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithLaunchReportFlowResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3f1d7f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLaunchReportFlowResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLaunchReportFlowResult*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithLaunchReportFlowResult* Oculus::Platform::MessageWithLaunchReportFlowResult::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithLaunchReportFlowResult*>(c_message));
}
inline void Oculus::Platform::MessageWithLaunchReportFlowResult::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLaunchReportFlowResult*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::LaunchReportFlowResult* Oculus::Platform::MessageWithLaunchReportFlowResult::GetLaunchReportFlowResult() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLaunchReportFlowResult*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchReportFlowResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LaunchReportFlowResult* Oculus::Platform::MessageWithLaunchReportFlowResult::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLaunchReportFlowResult*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchReportFlowResult*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithLaunchReportFlowResult::MessageWithLaunchReportFlowResult() {}
