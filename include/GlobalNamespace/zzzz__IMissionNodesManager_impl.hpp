#pragma once
// IWYU pragma private; include "GlobalNamespace\IMissionNodesManager.hpp"
#include "GlobalNamespace/zzzz__IMissionNodesManager_def.hpp"
#include "GlobalNamespace/zzzz__IMissionNode_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IMissionNodesManager.get_finalMissionNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IMissionNode* (::GlobalNamespace::IMissionNodesManager::*)()>(
    &::GlobalNamespace::IMissionNodesManager::get_finalMissionNode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IMissionNodesManager*>(), { ::i2c::class_of<::GlobalNamespace::IMissionNodesManager*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IMissionNodesManager.get_allMissionNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::IMissionNode*>* (::GlobalNamespace::IMissionNodesManager::*)()>(
    &::GlobalNamespace::IMissionNodesManager::get_allMissionNodes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IMissionNodesManager*>(), { ::i2c::class_of<::GlobalNamespace::IMissionNodesManager*>(), 1 }));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IMissionNode* GlobalNamespace::IMissionNodesManager::get_finalMissionNode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMissionNodesManager*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IMissionNode*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::IMissionNode*>* GlobalNamespace::IMissionNodesManager::get_allMissionNodes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMissionNodesManager*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::IMissionNode*>*>(this, ___internal_method);
}
