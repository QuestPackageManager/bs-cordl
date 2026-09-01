#pragma once
// IWYU pragma private; include "GlobalNamespace\DisableOnNonQuest.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisableOnNonQuest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisableOnNonQuest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DisableOnNonQuest::*)()>(&::GlobalNamespace::DisableOnNonQuest::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5851df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableOnNonQuest*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DisableOnNonQuest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DisableOnNonQuest*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DisableOnNonQuest* GlobalNamespace::DisableOnNonQuest::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DisableOnNonQuest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisableOnNonQuest::DisableOnNonQuest() {}
