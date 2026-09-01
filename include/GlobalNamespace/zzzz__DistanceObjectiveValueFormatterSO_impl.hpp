#pragma once
// IWYU pragma private; include "GlobalNamespace\DistanceObjectiveValueFormatterSO.hpp"
#include "GlobalNamespace/zzzz__ObjectiveValueFormatterSO_impl.hpp"
#include "GlobalNamespace/zzzz__DistanceObjectiveValueFormatterSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DistanceObjectiveValueFormatterSO.FormatValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DistanceObjectiveValueFormatterSO::*)(int32_t)>(
    &::GlobalNamespace::DistanceObjectiveValueFormatterSO::FormatValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x37561b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DistanceObjectiveValueFormatterSO*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::DistanceObjectiveValueFormatterSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DistanceObjectiveValueFormatterSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DistanceObjectiveValueFormatterSO::*)()>(&::GlobalNamespace::DistanceObjectiveValueFormatterSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375624c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DistanceObjectiveValueFormatterSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::DistanceObjectiveValueFormatterSO::FormatValue(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DistanceObjectiveValueFormatterSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline void GlobalNamespace::DistanceObjectiveValueFormatterSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DistanceObjectiveValueFormatterSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DistanceObjectiveValueFormatterSO* GlobalNamespace::DistanceObjectiveValueFormatterSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DistanceObjectiveValueFormatterSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DistanceObjectiveValueFormatterSO::DistanceObjectiveValueFormatterSO() {}
