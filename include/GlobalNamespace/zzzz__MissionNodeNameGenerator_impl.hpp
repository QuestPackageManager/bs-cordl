#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionNodeNameGenerator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionNodeNameGenerator_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodesManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionNodeNameGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionNodeNameGenerator::*)()>(&::GlobalNamespace::MissionNodeNameGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x593bf70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodeNameGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MissionNodesManager>& GlobalNamespace::MissionNodeNameGenerator::__cordl_internal_get__missionNodesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodesManager;
}
constexpr ::UnityW<::GlobalNamespace::MissionNodesManager> const& GlobalNamespace::MissionNodeNameGenerator::__cordl_internal_get__missionNodesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodesManager;
}
constexpr void GlobalNamespace::MissionNodeNameGenerator::__cordl_internal_set__missionNodesManager(::UnityW<::GlobalNamespace::MissionNodesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionNodesManager = value;
}
inline void GlobalNamespace::MissionNodeNameGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodeNameGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionNodeNameGenerator* GlobalNamespace::MissionNodeNameGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionNodeNameGenerator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionNodeNameGenerator::MissionNodeNameGenerator() {}
