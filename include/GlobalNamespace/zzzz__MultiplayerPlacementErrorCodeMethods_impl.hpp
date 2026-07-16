#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerPlacementErrorCodeMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlacementErrorCodeMethods_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlacementErrorCode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPlacementErrorCodeMethods.ToConnectionFailedReason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ConnectionFailedReason (*)(::GlobalNamespace::MultiplayerPlacementErrorCode)>(
    &::GlobalNamespace::MultiplayerPlacementErrorCodeMethods::ToConnectionFailedReason)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32ad224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPlacementErrorCodeMethods*>(),
                                                             { "ToConnectionFailedReason", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerPlacementErrorCode>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ConnectionFailedReason GlobalNamespace::MultiplayerPlacementErrorCodeMethods::ToConnectionFailedReason(::GlobalNamespace::MultiplayerPlacementErrorCode errorCode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPlacementErrorCodeMethods*>(),
                                                                                         { "ToConnectionFailedReason", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerPlacementErrorCode>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectionFailedReason>(nullptr, ___internal_method, errorCode);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerPlacementErrorCodeMethods::MultiplayerPlacementErrorCodeMethods() {}
