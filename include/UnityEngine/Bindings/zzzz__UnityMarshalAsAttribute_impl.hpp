#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/UnityMarshalAsAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__NativeType_impl.hpp"
#include "UnityEngine/Bindings/zzzz__UnityMarshalAsAttribute_def.hpp"
#include "UnityEngine/Bindings/zzzz__NativeType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::UnityMarshalAsAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::UnityMarshalAsAttribute::*)(::UnityEngine::Bindings::NativeType)>(
    &::UnityEngine::Bindings::UnityMarshalAsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x701509c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::UnityMarshalAsAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Bindings::NativeType>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Bindings::NativeType& UnityEngine::Bindings::UnityMarshalAsAttribute::__cordl_internal_get__NativeType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NativeType_k__BackingField;
}
constexpr ::UnityEngine::Bindings::NativeType const& UnityEngine::Bindings::UnityMarshalAsAttribute::__cordl_internal_get__NativeType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NativeType_k__BackingField;
}
constexpr void UnityEngine::Bindings::UnityMarshalAsAttribute::__cordl_internal_set__NativeType_k__BackingField(::UnityEngine::Bindings::NativeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____NativeType_k__BackingField = value;
}
inline void UnityEngine::Bindings::UnityMarshalAsAttribute::_ctor(::UnityEngine::Bindings::NativeType nativeType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::UnityMarshalAsAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Bindings::NativeType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nativeType);
}
inline ::UnityEngine::Bindings::UnityMarshalAsAttribute* UnityEngine::Bindings::UnityMarshalAsAttribute::New_ctor(::UnityEngine::Bindings::NativeType nativeType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Bindings::UnityMarshalAsAttribute*>(nativeType));
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::UnityMarshalAsAttribute::UnityMarshalAsAttribute() {}
