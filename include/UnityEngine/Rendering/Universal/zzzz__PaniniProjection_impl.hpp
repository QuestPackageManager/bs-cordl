#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PaniniProjection.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PaniniProjection_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedFloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__IPostProcessComponent_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PaniniProjection.IsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::PaniniProjection::*)()>(
    &::UnityEngine::Rendering::Universal::PaniniProjection::IsActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x66c6e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PaniniProjection*>::get(),
                                                                               "IsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PaniniProjection.IsTileCompatible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::PaniniProjection::*)()>(
    &::UnityEngine::Rendering::Universal::PaniniProjection::IsTileCompatible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c6eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PaniniProjection*>::get(),
                                                                               "IsTileCompatible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PaniniProjection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::PaniniProjection::*)()>(
    &::UnityEngine::Rendering::Universal::PaniniProjection::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x66c6eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PaniniProjection*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::PaniniProjection::__cordl_internal_get_distance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distance;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::PaniniProjection::__cordl_internal_get_distance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distance;
}
constexpr void UnityEngine::Rendering::Universal::PaniniProjection::__cordl_internal_set_distance(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___distance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::PaniniProjection::__cordl_internal_get_cropToFit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cropToFit;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::PaniniProjection::__cordl_internal_get_cropToFit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cropToFit;
}
constexpr void UnityEngine::Rendering::Universal::PaniniProjection::__cordl_internal_set_cropToFit(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cropToFit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::Rendering::Universal::PaniniProjection::IsActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PaniniProjection*>::get(),
                                                                             "IsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::PaniniProjection::IsTileCompatible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PaniniProjection*>::get(),
                                                                             "IsTileCompatible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PaniniProjection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::PaniniProjection*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PaniniProjection* UnityEngine::Rendering::Universal::PaniniProjection::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::PaniniProjection*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr UnityEngine::Rendering::Universal::PaniniProjection::operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr ::UnityEngine::Rendering::IPostProcessComponent* UnityEngine::Rendering::Universal::PaniniProjection::i___UnityEngine__Rendering__IPostProcessComponent() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PaniniProjection::PaniniProjection() {}
