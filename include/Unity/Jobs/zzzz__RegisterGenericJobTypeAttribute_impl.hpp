#pragma once
// IWYU pragma private; include "Unity/Jobs/RegisterGenericJobTypeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Jobs/zzzz__RegisterGenericJobTypeAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::RegisterGenericJobTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Jobs::RegisterGenericJobTypeAttribute::*)(::System::Type*)>(&::Unity::Jobs::RegisterGenericJobTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a2310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::RegisterGenericJobTypeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Unity::Jobs::RegisterGenericJobTypeAttribute::__cordl_internal_get_ConcreteType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConcreteType;
}
constexpr ::System::Type* const& Unity::Jobs::RegisterGenericJobTypeAttribute::__cordl_internal_get_ConcreteType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConcreteType;
}
constexpr void Unity::Jobs::RegisterGenericJobTypeAttribute::__cordl_internal_set_ConcreteType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConcreteType = value;
}
inline void Unity::Jobs::RegisterGenericJobTypeAttribute::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::RegisterGenericJobTypeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::Unity::Jobs::RegisterGenericJobTypeAttribute* Unity::Jobs::RegisterGenericJobTypeAttribute::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Jobs::RegisterGenericJobTypeAttribute*>(type));
}
// Ctor Parameters []
constexpr ::Unity::Jobs::RegisterGenericJobTypeAttribute::RegisterGenericJobTypeAttribute() {}
