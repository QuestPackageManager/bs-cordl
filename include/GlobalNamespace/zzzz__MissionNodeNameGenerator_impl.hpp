#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionNodeNameGenerator_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodesManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionNodeNameGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionNodeNameGenerator::*)()>(&::GlobalNamespace::MissionNodeNameGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26285ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodeNameGenerator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionNodesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::MissionNodeNameGenerator* GlobalNamespace::MissionNodeNameGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionNodeNameGenerator*>());
}
inline void GlobalNamespace::MissionNodeNameGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodeNameGenerator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionNodeNameGenerator::MissionNodeNameGenerator() {}
