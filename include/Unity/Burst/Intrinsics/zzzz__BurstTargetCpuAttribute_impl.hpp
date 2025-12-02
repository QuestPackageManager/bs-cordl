#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/BurstTargetCpuAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Burst/zzzz__BurstTargetCpu_impl.hpp"
#include "Unity/Burst/Intrinsics/zzzz__BurstTargetCpuAttribute_def.hpp"
#include "Unity/Burst/zzzz__BurstTargetCpu_def.hpp"
//  Writing Method size for method: ::Unity::Burst::Intrinsics::BurstTargetCpuAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::Intrinsics::BurstTargetCpuAttribute::*)(::Unity::Burst::BurstTargetCpu)>(
    &::Unity::Burst::Intrinsics::BurstTargetCpuAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6275688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::Intrinsics::BurstTargetCpuAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::BurstTargetCpu>::get() })));
    return ___internal_method;
  }
};
constexpr ::Unity::Burst::BurstTargetCpu& Unity::Burst::Intrinsics::BurstTargetCpuAttribute::__cordl_internal_get_TargetCpu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetCpu;
}
constexpr ::Unity::Burst::BurstTargetCpu const& Unity::Burst::Intrinsics::BurstTargetCpuAttribute::__cordl_internal_get_TargetCpu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetCpu;
}
constexpr void Unity::Burst::Intrinsics::BurstTargetCpuAttribute::__cordl_internal_set_TargetCpu(::Unity::Burst::BurstTargetCpu value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TargetCpu = value;
}
inline void Unity::Burst::Intrinsics::BurstTargetCpuAttribute::_ctor(::Unity::Burst::BurstTargetCpu TargetCpu) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::Intrinsics::BurstTargetCpuAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::BurstTargetCpu>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, TargetCpu);
}
inline ::Unity::Burst::Intrinsics::BurstTargetCpuAttribute* Unity::Burst::Intrinsics::BurstTargetCpuAttribute::New_ctor(::Unity::Burst::BurstTargetCpu TargetCpu) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Burst::Intrinsics::BurstTargetCpuAttribute*>(TargetCpu));
}
// Ctor Parameters []
constexpr ::Unity::Burst::Intrinsics::BurstTargetCpuAttribute::BurstTargetCpuAttribute() {}
