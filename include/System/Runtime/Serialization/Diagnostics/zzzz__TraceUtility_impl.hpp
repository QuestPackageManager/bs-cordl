#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Diagnostics/TraceUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Diagnostics/zzzz__TraceUtility_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__TraceRecord_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Diagnostics::TraceUtility.Trace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Diagnostics::TraceEventType, int32_t, ::StringW)>(
    &::System::Runtime::Serialization::Diagnostics::TraceUtility::Trace)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fcf038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Diagnostics::TraceUtility*>::get(), "Trace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Diagnostics::TraceUtility.Trace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Diagnostics::TraceEventType, int32_t, ::StringW, ::System::Runtime::Diagnostics::TraceRecord*)>(
    &::System::Runtime::Serialization::Diagnostics::TraceUtility::Trace)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fcf0ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Diagnostics::TraceUtility*>::get(), "Trace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::TraceRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Diagnostics::TraceUtility.Trace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Diagnostics::TraceEventType, int32_t, ::StringW, ::System::Runtime::Diagnostics::TraceRecord*,
                                                                                           ::System::Exception*)>(&::System::Runtime::Serialization::Diagnostics::TraceUtility::Trace)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5fcf130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Diagnostics::TraceUtility*>::get(), "Trace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::TraceRecord*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::Diagnostics::TraceUtility::setStaticF_traceCodes(::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*, "traceCodes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Diagnostics::TraceUtility*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* System::Runtime::Serialization::Diagnostics::TraceUtility::getStaticF_traceCodes() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*, "traceCodes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Diagnostics::TraceUtility*>::get>();
}
inline void System::Runtime::Serialization::Diagnostics::TraceUtility::Trace(::System::Diagnostics::TraceEventType severity, int32_t traceCode, ::StringW traceDescription) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Diagnostics::TraceUtility*>::get(), "Trace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, severity, traceCode, traceDescription);
}
inline void System::Runtime::Serialization::Diagnostics::TraceUtility::Trace(::System::Diagnostics::TraceEventType severity, int32_t traceCode, ::StringW traceDescription,
                                                                             ::System::Runtime::Diagnostics::TraceRecord* record) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Diagnostics::TraceUtility*>::get(), "Trace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::TraceRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, severity, traceCode, traceDescription, record);
}
inline void System::Runtime::Serialization::Diagnostics::TraceUtility::Trace(::System::Diagnostics::TraceEventType severity, int32_t traceCode, ::StringW traceDescription,
                                                                             ::System::Runtime::Diagnostics::TraceRecord* record, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Diagnostics::TraceUtility*>::get(), "Trace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::TraceRecord*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, severity, traceCode, traceDescription, record, exception);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Diagnostics::TraceUtility::TraceUtility() {}
