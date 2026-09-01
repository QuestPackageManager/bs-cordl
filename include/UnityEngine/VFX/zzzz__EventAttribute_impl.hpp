#pragma once
// IWYU pragma private; include "UnityEngine\VFX\EventAttribute.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/VFX/zzzz__EventAttribute_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXEventAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::EventAttribute.ApplyToVFX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::EventAttribute::*)(::UnityEngine::VFX::VFXEventAttribute*)>(&::UnityEngine::VFX::EventAttribute::ApplyToVFX)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttribute*>(), { ::i2c::class_of<::UnityEngine::VFX::EventAttribute*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::EventAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::EventAttribute::*)()>(&::UnityEngine::VFX::EventAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69d2c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::EventAttribute::__cordl_internal_get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::EventAttribute::__cordl_internal_get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void UnityEngine::VFX::EventAttribute::__cordl_internal_set_id(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___id = value;
}
inline bool UnityEngine::VFX::EventAttribute::ApplyToVFX(::UnityEngine::VFX::VFXEventAttribute* eventAttribute) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::EventAttribute*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventAttribute);
}
inline void UnityEngine::VFX::EventAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::EventAttribute* UnityEngine::VFX::EventAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::EventAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::EventAttribute::EventAttribute() {}
