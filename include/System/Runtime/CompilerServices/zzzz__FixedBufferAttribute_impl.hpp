#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/FixedBufferAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__FixedBufferAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::FixedBufferAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::FixedBufferAttribute::*)(::System::Type*, int32_t)>(
    &::System::Runtime::CompilerServices::FixedBufferAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b6e0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::FixedBufferAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::FixedBufferAttribute.get_ElementType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::CompilerServices::FixedBufferAttribute::*)()>(
    &::System::Runtime::CompilerServices::FixedBufferAttribute::get_ElementType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6e0f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::FixedBufferAttribute*>(), { "get_ElementType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::FixedBufferAttribute.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::CompilerServices::FixedBufferAttribute::*)()>(
    &::System::Runtime::CompilerServices::FixedBufferAttribute::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6e100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::FixedBufferAttribute*>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::CompilerServices::FixedBufferAttribute::__cordl_internal_get__ElementType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ElementType_k__BackingField;
}
constexpr ::System::Type* const& System::Runtime::CompilerServices::FixedBufferAttribute::__cordl_internal_get__ElementType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ElementType_k__BackingField;
}
constexpr void System::Runtime::CompilerServices::FixedBufferAttribute::__cordl_internal_set__ElementType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ElementType_k__BackingField = value;
}
constexpr int32_t& System::Runtime::CompilerServices::FixedBufferAttribute::__cordl_internal_get__Length_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Length_k__BackingField;
}
constexpr int32_t const& System::Runtime::CompilerServices::FixedBufferAttribute::__cordl_internal_get__Length_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Length_k__BackingField;
}
constexpr void System::Runtime::CompilerServices::FixedBufferAttribute::__cordl_internal_set__Length_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Length_k__BackingField = value;
}
inline void System::Runtime::CompilerServices::FixedBufferAttribute::_ctor(::System::Type* elementType, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::FixedBufferAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementType, length);
}
inline ::System::Type* System::Runtime::CompilerServices::FixedBufferAttribute::get_ElementType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::FixedBufferAttribute*>(), { "get_ElementType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline int32_t System::Runtime::CompilerServices::FixedBufferAttribute::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::FixedBufferAttribute*>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::FixedBufferAttribute* System::Runtime::CompilerServices::FixedBufferAttribute::New_ctor(::System::Type* elementType, int32_t length) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::FixedBufferAttribute*>(elementType, length));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::FixedBufferAttribute::FixedBufferAttribute() {}
