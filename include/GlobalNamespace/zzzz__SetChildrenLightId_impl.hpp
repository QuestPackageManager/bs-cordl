#pragma once
// IWYU pragma private; include "GlobalNamespace\SetChildrenLightId.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetChildrenLightId_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetChildrenLightId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetChildrenLightId::*)()>(&::GlobalNamespace::SetChildrenLightId::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5870c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetChildrenLightId*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SetChildrenLightId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetChildrenLightId*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SetChildrenLightId* GlobalNamespace::SetChildrenLightId::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetChildrenLightId*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetChildrenLightId::SetChildrenLightId() {}
