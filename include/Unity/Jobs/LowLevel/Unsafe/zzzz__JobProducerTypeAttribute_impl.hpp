#pragma once
// IWYU pragma private; include "Unity/Jobs/LowLevel/Unsafe/JobProducerTypeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobProducerTypeAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::*)(::System::Type*)>(
    &::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a564a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::__cordl_internal_get__ProducerType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProducerType_k__BackingField;
}
constexpr ::System::Type* const& Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::__cordl_internal_get__ProducerType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ProducerType_k__BackingField;
}
constexpr void Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::__cordl_internal_set__ProducerType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ProducerType_k__BackingField = value;
}
inline void Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::_ctor(::System::Type* producerType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, producerType);
}
inline ::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute* Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::New_ctor(::System::Type* producerType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute*>(producerType));
}
// Ctor Parameters []
constexpr ::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute::JobProducerTypeAttribute() {}
