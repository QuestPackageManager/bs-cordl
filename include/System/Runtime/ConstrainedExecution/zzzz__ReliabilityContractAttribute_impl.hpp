#pragma once
// IWYU pragma private; include "System/Runtime/ConstrainedExecution/ReliabilityContractAttribute.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__Cer_impl.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__Consistency_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__ReliabilityContractAttribute_def.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__Cer_def.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__Consistency_def.hpp"
//  Writing Method size for method: ::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::*)(
    ::System::Runtime::ConstrainedExecution::Consistency, ::System::Runtime::ConstrainedExecution::Cer)>(&::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28895f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ConstrainedExecution::Consistency>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ConstrainedExecution::Cer>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::ConstrainedExecution::Consistency& System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::__cordl_internal_get__ConsistencyGuarantee_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConsistencyGuarantee_k__BackingField;
}
constexpr ::System::Runtime::ConstrainedExecution::Consistency const&
System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::__cordl_internal_get__ConsistencyGuarantee_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConsistencyGuarantee_k__BackingField;
}
constexpr void
System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::__cordl_internal_set__ConsistencyGuarantee_k__BackingField(::System::Runtime::ConstrainedExecution::Consistency value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ConsistencyGuarantee_k__BackingField = value;
}
constexpr ::System::Runtime::ConstrainedExecution::Cer& System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::__cordl_internal_get__Cer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Cer_k__BackingField;
}
constexpr ::System::Runtime::ConstrainedExecution::Cer const& System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::__cordl_internal_get__Cer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Cer_k__BackingField;
}
constexpr void System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::__cordl_internal_set__Cer_k__BackingField(::System::Runtime::ConstrainedExecution::Cer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Cer_k__BackingField = value;
}
inline ::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute*
System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::New_ctor(::System::Runtime::ConstrainedExecution::Consistency consistencyGuarantee,
                                                                              ::System::Runtime::ConstrainedExecution::Cer cer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute*>(consistencyGuarantee, cer));
}
inline void System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::_ctor(::System::Runtime::ConstrainedExecution::Consistency consistencyGuarantee,
                                                                                       ::System::Runtime::ConstrainedExecution::Cer cer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ConstrainedExecution::Consistency>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ConstrainedExecution::Cer>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, consistencyGuarantee, cer);
}
// Ctor Parameters []
constexpr ::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::ReliabilityContractAttribute() {}
