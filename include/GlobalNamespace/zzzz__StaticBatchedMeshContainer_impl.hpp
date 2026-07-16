#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticBatchedMeshContainer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StaticBatchedMeshContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StaticBatchedMeshContainer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StaticBatchedMeshContainer::*)()>(&::GlobalNamespace::StaticBatchedMeshContainer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3309be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticBatchedMeshContainer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StaticBatchedMeshContainer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticBatchedMeshContainer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StaticBatchedMeshContainer* GlobalNamespace::StaticBatchedMeshContainer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StaticBatchedMeshContainer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StaticBatchedMeshContainer::StaticBatchedMeshContainer() {}
