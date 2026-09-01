#pragma once
// IWYU pragma private; include "UnityEngine\HumanTrait.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__HumanTrait_def.hpp"
//  Writing Method size for method: ::UnityEngine::HumanTrait.GetBoneIndexFromMono
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::HumanTrait::GetBoneIndexFromMono)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a3f5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HumanTrait*>(), { "GetBoneIndexFromMono", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::HumanTrait::GetBoneIndexFromMono(int32_t humanId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HumanTrait*>(), { "GetBoneIndexFromMono", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, humanId);
}
// Ctor Parameters []
constexpr ::UnityEngine::HumanTrait::HumanTrait() {}
