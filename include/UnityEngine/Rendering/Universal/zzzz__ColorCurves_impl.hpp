#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ColorCurves.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ColorCurves_def.hpp"
#include "UnityEngine/Rendering/zzzz__IPostProcessComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureCurveParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ColorCurves.IsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ColorCurves::*)()>(
    &::UnityEngine::Rendering::Universal::ColorCurves::IsActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c5ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ColorCurves*>::get(),
                                                                               "IsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ColorCurves.IsTileCompatible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ColorCurves::*)()>(
    &::UnityEngine::Rendering::Universal::ColorCurves::IsTileCompatible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c5bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ColorCurves*>::get(),
                                                                               "IsTileCompatible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ColorCurves._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ColorCurves::*)()>(
    &::UnityEngine::Rendering::Universal::ColorCurves::_ctor)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x66c5bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ColorCurves*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::TextureCurveParameter*& UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_get_master() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___master;
}
constexpr ::UnityEngine::Rendering::TextureCurveParameter* const& UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_get_master() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___master;
}
constexpr void UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_set_master(::UnityEngine::Rendering::TextureCurveParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___master)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::TextureCurveParameter*& UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_get_red() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___red;
}
constexpr ::UnityEngine::Rendering::TextureCurveParameter* const& UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_get_red() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___red;
}
constexpr void UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_set_red(::UnityEngine::Rendering::TextureCurveParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___red)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::TextureCurveParameter*& UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_get_green() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___green;
}
constexpr ::UnityEngine::Rendering::TextureCurveParameter* const& UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_get_green() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___green;
}
constexpr void UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_set_green(::UnityEngine::Rendering::TextureCurveParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___green)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::TextureCurveParameter*& UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_get_blue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blue;
}
constexpr ::UnityEngine::Rendering::TextureCurveParameter* const& UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_get_blue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blue;
}
constexpr void UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_set_blue(::UnityEngine::Rendering::TextureCurveParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___blue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::TextureCurveParameter*& UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_get_hueVsHue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hueVsHue;
}
constexpr ::UnityEngine::Rendering::TextureCurveParameter* const& UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_get_hueVsHue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hueVsHue;
}
constexpr void UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_set_hueVsHue(::UnityEngine::Rendering::TextureCurveParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hueVsHue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::TextureCurveParameter*& UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_get_hueVsSat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hueVsSat;
}
constexpr ::UnityEngine::Rendering::TextureCurveParameter* const& UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_get_hueVsSat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hueVsSat;
}
constexpr void UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_set_hueVsSat(::UnityEngine::Rendering::TextureCurveParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hueVsSat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::TextureCurveParameter*& UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_get_satVsSat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___satVsSat;
}
constexpr ::UnityEngine::Rendering::TextureCurveParameter* const& UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_get_satVsSat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___satVsSat;
}
constexpr void UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_set_satVsSat(::UnityEngine::Rendering::TextureCurveParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___satVsSat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::TextureCurveParameter*& UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_get_lumVsSat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lumVsSat;
}
constexpr ::UnityEngine::Rendering::TextureCurveParameter* const& UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_get_lumVsSat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lumVsSat;
}
constexpr void UnityEngine::Rendering::Universal::ColorCurves::__cordl_internal_set_lumVsSat(::UnityEngine::Rendering::TextureCurveParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lumVsSat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::Rendering::Universal::ColorCurves::IsActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ColorCurves*>::get(),
                                                                             "IsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ColorCurves::IsTileCompatible() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ColorCurves*>::get(),
                                                                             "IsTileCompatible", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ColorCurves::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ColorCurves*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ColorCurves* UnityEngine::Rendering::Universal::ColorCurves::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::ColorCurves*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr UnityEngine::Rendering::Universal::ColorCurves::operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr ::UnityEngine::Rendering::IPostProcessComponent* UnityEngine::Rendering::Universal::ColorCurves::i___UnityEngine__Rendering__IPostProcessComponent() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ColorCurves::ColorCurves() {}
