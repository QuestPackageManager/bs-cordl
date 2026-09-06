#pragma once
// IWYU pragma private; include "UnityEngine/UI/IMaterialModifier.hpp"
#include "UnityEngine/UI/zzzz__IMaterialModifier_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::IMaterialModifier.GetModifiedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::UI::IMaterialModifier::*)(::UnityEngine::Material*)>(
    &::UnityEngine::UI::IMaterialModifier::GetModifiedMaterial)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::IMaterialModifier*>(), { ::i2c::class_of<::UnityEngine::UI::IMaterialModifier*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Material> UnityEngine::UI::IMaterialModifier::GetModifiedMaterial(::UnityEngine::Material* baseMaterial) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::IMaterialModifier*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, baseMaterial);
}
