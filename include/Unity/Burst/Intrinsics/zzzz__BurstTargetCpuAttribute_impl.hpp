#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/BurstTargetCpuAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Burst/zzzz__BurstTargetCpu_impl.hpp"
#include "Unity/Burst/Intrinsics/zzzz__BurstTargetCpuAttribute_def.hpp"
#include "Unity/Burst/zzzz__BurstTargetCpu_def.hpp"
//  Writing Method size for method: ::Unity::Burst::Intrinsics::BurstTargetCpuAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::Intrinsics::BurstTargetCpuAttribute::*)(::Unity::Burst::BurstTargetCpu)>(
    &::Unity::Burst::Intrinsics::BurstTargetCpuAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x648e078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Intrinsics::BurstTargetCpuAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Burst::BurstTargetCpu>() } })));
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
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::Intrinsics::BurstTargetCpuAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Burst::BurstTargetCpu>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, TargetCpu);
}
inline ::Unity::Burst::Intrinsics::BurstTargetCpuAttribute* Unity::Burst::Intrinsics::BurstTargetCpuAttribute::New_ctor(::Unity::Burst::BurstTargetCpu TargetCpu) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::Intrinsics::BurstTargetCpuAttribute*>(TargetCpu));
}
// Ctor Parameters []
constexpr ::Unity::Burst::Intrinsics::BurstTargetCpuAttribute::BurstTargetCpuAttribute() {}
