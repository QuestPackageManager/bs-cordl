#pragma once
// IWYU pragma private; include "UnityEngine\InspectorNameAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__InspectorNameAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::InspectorNameAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InspectorNameAttribute::*)(::StringW)>(&::UnityEngine::InspectorNameAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ad8008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InspectorNameAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InspectorNameAttribute::__cordl_internal_get_displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr ::StringW const& UnityEngine::InspectorNameAttribute::__cordl_internal_get_displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayName;
}
constexpr void UnityEngine::InspectorNameAttribute::__cordl_internal_set_displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___displayName = value;
}
inline void UnityEngine::InspectorNameAttribute::_ctor(::StringW displayName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InspectorNameAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayName);
}
inline ::UnityEngine::InspectorNameAttribute* UnityEngine::InspectorNameAttribute::New_ctor(::StringW displayName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InspectorNameAttribute*>(displayName));
}
// Ctor Parameters []
constexpr ::UnityEngine::InspectorNameAttribute::InspectorNameAttribute() {}
