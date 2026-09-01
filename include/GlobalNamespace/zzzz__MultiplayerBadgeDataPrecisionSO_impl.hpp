#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerBadgeDataPrecisionSO.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxFloatSO_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataPrecisionSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataPrecisionSO.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MultiplayerBadgeDataPrecisionSO::*)(::GlobalNamespace::MultiplayerPlayerResultsData*)>(
    &::GlobalNamespace::MultiplayerBadgeDataPrecisionSO::GetValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x37351a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataPrecisionSO*>(), { ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataPrecisionSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataPrecisionSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerBadgeDataPrecisionSO::*)()>(&::GlobalNamespace::MultiplayerBadgeDataPrecisionSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x37351dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataPrecisionSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::MultiplayerBadgeDataPrecisionSO::GetValue(::GlobalNamespace::MultiplayerPlayerResultsData* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataPrecisionSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, result);
}
inline void GlobalNamespace::MultiplayerBadgeDataPrecisionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataPrecisionSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerBadgeDataPrecisionSO* GlobalNamespace::MultiplayerBadgeDataPrecisionSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerBadgeDataPrecisionSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerBadgeDataPrecisionSO::MultiplayerBadgeDataPrecisionSO() {}
