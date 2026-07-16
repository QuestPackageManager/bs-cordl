#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXBinderAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXBinderAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXBinderAttribute::*)(::StringW)>(&::UnityEngine::VFX::Utility::VFXBinderAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69e39ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXBinderAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::VFX::Utility::VFXBinderAttribute::__cordl_internal_get_MenuPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MenuPath;
}
constexpr ::StringW const& UnityEngine::VFX::Utility::VFXBinderAttribute::__cordl_internal_get_MenuPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MenuPath;
}
constexpr void UnityEngine::VFX::Utility::VFXBinderAttribute::__cordl_internal_set_MenuPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MenuPath = value;
}
inline void UnityEngine::VFX::Utility::VFXBinderAttribute::_ctor(::StringW menuPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXBinderAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, menuPath);
}
inline ::UnityEngine::VFX::Utility::VFXBinderAttribute* UnityEngine::VFX::Utility::VFXBinderAttribute::New_ctor(::StringW menuPath) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::Utility::VFXBinderAttribute*>(menuPath));
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXBinderAttribute::VFXBinderAttribute() {}
