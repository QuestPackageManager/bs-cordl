#pragma once
// IWYU pragma private; include "UnityEngine/MakeSerializableAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__MakeSerializableAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::MakeSerializableAttribute.GetSerializableType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::MakeSerializableAttribute::*)()>(&::UnityEngine::MakeSerializableAttribute::GetSerializableType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f470e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MakeSerializableAttribute*>(), { "GetSerializableType", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& UnityEngine::MakeSerializableAttribute::__cordl_internal_get_serializableType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializableType;
}
constexpr ::System::Type* const& UnityEngine::MakeSerializableAttribute::__cordl_internal_get_serializableType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializableType;
}
constexpr void UnityEngine::MakeSerializableAttribute::__cordl_internal_set_serializableType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serializableType = value;
}
inline ::System::Type* UnityEngine::MakeSerializableAttribute::GetSerializableType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MakeSerializableAttribute*>(), { "GetSerializableType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::MakeSerializableAttribute::MakeSerializableAttribute() {}
