#pragma once
// IWYU pragma private; include "GlobalNamespace/DuplicateMirrorForReflectionProbe.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DuplicateMirrorForReflectionProbe_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DuplicateMirrorForReflectionProbe._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DuplicateMirrorForReflectionProbe::*)()>(&::GlobalNamespace::DuplicateMirrorForReflectionProbe::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e2924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DuplicateMirrorForReflectionProbe*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DuplicateMirrorForReflectionProbe::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DuplicateMirrorForReflectionProbe*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DuplicateMirrorForReflectionProbe* GlobalNamespace::DuplicateMirrorForReflectionProbe::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DuplicateMirrorForReflectionProbe*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DuplicateMirrorForReflectionProbe::DuplicateMirrorForReflectionProbe() {}
