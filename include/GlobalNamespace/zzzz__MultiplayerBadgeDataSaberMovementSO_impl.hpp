#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerBadgeDataSaberMovementSO.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxFloatSO_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSaberMovementSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO::*)(::GlobalNamespace::MultiplayerPlayerResultsData*)>(
    &::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO::GetValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x37351ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO::*)()>(&::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3735218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::MultiplayerBadgeDataSaberMovementSO::GetValue(::GlobalNamespace::MultiplayerPlayerResultsData* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, result);
}
inline void GlobalNamespace::MultiplayerBadgeDataSaberMovementSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO* GlobalNamespace::MultiplayerBadgeDataSaberMovementSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO::MultiplayerBadgeDataSaberMovementSO() {}
