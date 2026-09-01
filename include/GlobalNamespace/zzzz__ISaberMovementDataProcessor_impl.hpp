#pragma once
// IWYU pragma private; include "GlobalNamespace\ISaberMovementDataProcessor.hpp"
#include "GlobalNamespace/zzzz__ISaberMovementDataProcessor_def.hpp"
#include "GlobalNamespace/zzzz__BladeMovementDataElement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ISaberMovementDataProcessor.ProcessNewData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ISaberMovementDataProcessor::*)(
    ::GlobalNamespace::BladeMovementDataElement, ::GlobalNamespace::BladeMovementDataElement, bool)>(&::GlobalNamespace::ISaberMovementDataProcessor::ProcessNewData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ISaberMovementDataProcessor*>(), { ::i2c::class_of<::GlobalNamespace::ISaberMovementDataProcessor*>(), 0 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ISaberMovementDataProcessor::ProcessNewData(::GlobalNamespace::BladeMovementDataElement newData, ::GlobalNamespace::BladeMovementDataElement prevData,
                                                                         bool prevDataAreValid) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISaberMovementDataProcessor*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newData, prevData, prevDataAreValid);
}
