#pragma once
// IWYU pragma private; include "GlobalNamespace\IPlayerDataModel.hpp"
#include "GlobalNamespace/zzzz__IPlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IPlayerDataModel.get_playerData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerData* (::GlobalNamespace::IPlayerDataModel::*)()>(&::GlobalNamespace::IPlayerDataModel::get_playerData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IPlayerDataModel*>(), { ::i2c::class_of<::GlobalNamespace::IPlayerDataModel*>(), 0 }));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::PlayerData* GlobalNamespace::IPlayerDataModel::get_playerData() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IPlayerDataModel*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerData*>(this, ___internal_method);
}
