#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/FxTrace.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__FxTrace_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EtwDiagnosticTrace_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EventDescriptor_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::FxTrace.get_Trace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Diagnostics::EtwDiagnosticTrace* (*)()>(&::System::Runtime::Serialization::FxTrace::get_Trace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5fca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FxTrace*>::get(), "get_Trace",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FxTrace.IsEventEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::System::Runtime::Serialization::FxTrace::IsEventEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5fcb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FxTrace*>::get(), "IsEventEnabled",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FxTrace.UpdateEventDefinitions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<::System::Runtime::Diagnostics::EventDescriptor, ::Array<::System::Runtime::Diagnostics::EventDescriptor>*>, ::ArrayW<uint16_t, ::Array<uint16_t>*>)>(
        &::System::Runtime::Serialization::FxTrace::UpdateEventDefinitions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f5fcb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FxTrace*>::get(), "UpdateEventDefinitions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Runtime::Diagnostics::EventDescriptor, ::Array<::System::Runtime::Diagnostics::EventDescriptor>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::FxTrace::setStaticF_ShouldTraceError(bool value) {
  ::cordl_internals::setStaticField<bool, "ShouldTraceError", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FxTrace*>::get>(std::forward<bool>(value));
}
inline bool System::Runtime::Serialization::FxTrace::getStaticF_ShouldTraceError() {
  return ::cordl_internals::getStaticField<bool, "ShouldTraceError", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FxTrace*>::get>();
}
inline void System::Runtime::Serialization::FxTrace::setStaticF_ShouldTraceVerbose(bool value) {
  ::cordl_internals::setStaticField<bool, "ShouldTraceVerbose", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FxTrace*>::get>(std::forward<bool>(value));
}
inline bool System::Runtime::Serialization::FxTrace::getStaticF_ShouldTraceVerbose() {
  return ::cordl_internals::getStaticField<bool, "ShouldTraceVerbose", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FxTrace*>::get>();
}
inline ::System::Runtime::Diagnostics::EtwDiagnosticTrace* System::Runtime::Serialization::FxTrace::get_Trace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FxTrace*>::get(), "get_Trace",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Diagnostics::EtwDiagnosticTrace*, false>(nullptr, ___internal_method);
}
inline bool System::Runtime::Serialization::FxTrace::IsEventEnabled(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FxTrace*>::get(), "IsEventEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, index);
}
inline void System::Runtime::Serialization::FxTrace::UpdateEventDefinitions(::ArrayW<::System::Runtime::Diagnostics::EventDescriptor, ::Array<::System::Runtime::Diagnostics::EventDescriptor>*> ed,
                                                                            ::ArrayW<uint16_t, ::Array<uint16_t>*> events) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FxTrace*>::get(), "UpdateEventDefinitions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Runtime::Diagnostics::EventDescriptor, ::Array<::System::Runtime::Diagnostics::EventDescriptor>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ed, events);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::FxTrace::FxTrace() {}
