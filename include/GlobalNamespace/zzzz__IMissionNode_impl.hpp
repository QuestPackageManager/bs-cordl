#pragma once
// IWYU pragma private; include "GlobalNamespace/IMissionNode.hpp"
#include "GlobalNamespace/zzzz__IMissionNode_def.hpp"
#include "GlobalNamespace/zzzz__MissionDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IMissionNode.get_missionId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::IMissionNode::*)()>(&::GlobalNamespace::IMissionNode::get_missionId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IMissionNode*>(), { ::i2c::class_of<::GlobalNamespace::IMissionNode*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IMissionNode.get_missionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MissionDataSO> (::GlobalNamespace::IMissionNode::*)()>(&::GlobalNamespace::IMissionNode::get_missionData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IMissionNode*>(), { ::i2c::class_of<::GlobalNamespace::IMissionNode*>(), 1 }));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::IMissionNode::get_missionId() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMissionNode*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MissionDataSO> GlobalNamespace::IMissionNode::get_missionData() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMissionNode*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionDataSO>>(this, ___internal_method);
}
