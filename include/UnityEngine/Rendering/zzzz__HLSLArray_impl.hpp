#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/HLSLArray.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__HLSLArray_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::HLSLArray._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::HLSLArray::*)(int32_t, ::System::Type*)>(&::UnityEngine::Rendering::HLSLArray::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x679db34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::HLSLArray*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::HLSLArray::__cordl_internal_get_arraySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arraySize;
}
constexpr int32_t const& UnityEngine::Rendering::HLSLArray::__cordl_internal_get_arraySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arraySize;
}
constexpr void UnityEngine::Rendering::HLSLArray::__cordl_internal_set_arraySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arraySize = value;
}
constexpr ::System::Type*& UnityEngine::Rendering::HLSLArray::__cordl_internal_get_elementType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementType;
}
constexpr ::System::Type* const& UnityEngine::Rendering::HLSLArray::__cordl_internal_get_elementType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementType;
}
constexpr void UnityEngine::Rendering::HLSLArray::__cordl_internal_set_elementType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementType = value;
}
inline void UnityEngine::Rendering::HLSLArray::_ctor(int32_t arraySize, ::System::Type* elementType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::HLSLArray*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arraySize, elementType);
}
inline ::UnityEngine::Rendering::HLSLArray* UnityEngine::Rendering::HLSLArray::New_ctor(int32_t arraySize, ::System::Type* elementType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::HLSLArray*>(arraySize, elementType));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::HLSLArray::HLSLArray() {}
