#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\LensFlareDataSRP.hpp"
#include "UnityEngine/Rendering/zzzz__LensFlareDataElementSRP_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LensFlareDataSRP_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareDataSRP._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LensFlareDataSRP::*)()>(&::UnityEngine::Rendering::LensFlareDataSRP::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67a26ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LensFlareDataSRP*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareDataSRP.HasAModulateByLightColorElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::LensFlareDataSRP::*)()>(&::UnityEngine::Rendering::LensFlareDataSRP::HasAModulateByLightColorElement)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x67a26c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LensFlareDataSRP*>(), { "HasAModulateByLightColorElement", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*>& UnityEngine::Rendering::LensFlareDataSRP::__cordl_internal_get_elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr ::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*> const& UnityEngine::Rendering::LensFlareDataSRP::__cordl_internal_get_elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr void UnityEngine::Rendering::LensFlareDataSRP::__cordl_internal_set_elements(::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elements = value;
}
inline void UnityEngine::Rendering::LensFlareDataSRP::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LensFlareDataSRP*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::LensFlareDataSRP::HasAModulateByLightColorElement() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LensFlareDataSRP*>(), { "HasAModulateByLightColorElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::LensFlareDataSRP* UnityEngine::Rendering::LensFlareDataSRP::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::LensFlareDataSRP*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LensFlareDataSRP::LensFlareDataSRP() {}
