#pragma once
// IWYU pragma private; include "System/Runtime/TraceLevelHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/zzzz__TraceLevelHelper_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
#include "System/Runtime/zzzz__TraceEventLevel_def.hpp"
#include "System/Runtime/zzzz__TraceEventOpcode_def.hpp"
//  Writing Method size for method: ::System::Runtime::TraceLevelHelper.GetTraceEventType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceEventType (*)(::System::Runtime::TraceEventLevel)>(
    &::System::Runtime::TraceLevelHelper::GetTraceEventType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f6b2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceLevelHelper*>::get(), "GetTraceEventType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::TraceEventLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceLevelHelper.LookupSeverity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Runtime::TraceEventLevel, ::System::Runtime::TraceEventOpcode)>(
    &::System::Runtime::TraceLevelHelper::LookupSeverity)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5f6b36c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceLevelHelper*>::get(), "LookupSeverity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::TraceEventLevel>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::TraceEventOpcode>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::TraceLevelHelper::setStaticF_EtwLevelToTraceEventType(::ArrayW<::System::Diagnostics::TraceEventType, ::Array<::System::Diagnostics::TraceEventType>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Diagnostics::TraceEventType, ::Array<::System::Diagnostics::TraceEventType>*>, "EtwLevelToTraceEventType",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceLevelHelper*>::get>(
      std::forward<::ArrayW<::System::Diagnostics::TraceEventType, ::Array<::System::Diagnostics::TraceEventType>*>>(value));
}
inline ::ArrayW<::System::Diagnostics::TraceEventType, ::Array<::System::Diagnostics::TraceEventType>*> System::Runtime::TraceLevelHelper::getStaticF_EtwLevelToTraceEventType() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Diagnostics::TraceEventType, ::Array<::System::Diagnostics::TraceEventType>*>, "EtwLevelToTraceEventType",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceLevelHelper*>::get>();
}
inline ::System::Diagnostics::TraceEventType System::Runtime::TraceLevelHelper::GetTraceEventType(::System::Runtime::TraceEventLevel level) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceLevelHelper*>::get(), "GetTraceEventType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::TraceEventLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceEventType, false>(nullptr, ___internal_method, level);
}
inline ::StringW System::Runtime::TraceLevelHelper::LookupSeverity(::System::Runtime::TraceEventLevel level, ::System::Runtime::TraceEventOpcode opcode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceLevelHelper*>::get(), "LookupSeverity", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::TraceEventLevel>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::TraceEventOpcode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, level, opcode);
}
// Ctor Parameters []
constexpr ::System::Runtime::TraceLevelHelper::TraceLevelHelper() {}
