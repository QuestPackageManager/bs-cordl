#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerBadgeDataHandMovementSO.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxFloatSO_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataHandMovementSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataHandMovementSO.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MultiplayerBadgeDataHandMovementSO::*)(::GlobalNamespace::MultiplayerPlayerResultsData*)>(
    &::GlobalNamespace::MultiplayerBadgeDataHandMovementSO::GetValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3733624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataHandMovementSO*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataHandMovementSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataHandMovementSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerBadgeDataHandMovementSO::*)()>(&::GlobalNamespace::MultiplayerBadgeDataHandMovementSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3733650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataHandMovementSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::MultiplayerBadgeDataHandMovementSO::GetValue(::GlobalNamespace::MultiplayerPlayerResultsData* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataHandMovementSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, result);
}
inline void GlobalNamespace::MultiplayerBadgeDataHandMovementSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataHandMovementSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerBadgeDataHandMovementSO* GlobalNamespace::MultiplayerBadgeDataHandMovementSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerBadgeDataHandMovementSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerBadgeDataHandMovementSO::MultiplayerBadgeDataHandMovementSO() {}
