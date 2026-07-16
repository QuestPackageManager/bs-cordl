#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/TupleElementNamesAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TupleElementNamesAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::TupleElementNamesAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::TupleElementNamesAttribute::*)(::ArrayW<::StringW>)>(
    &::System::Runtime::CompilerServices::TupleElementNamesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b6e500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TupleElementNamesAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& System::Runtime::CompilerServices::TupleElementNamesAttribute::__cordl_internal_get__transformNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformNames;
}
constexpr ::ArrayW<::StringW> const& System::Runtime::CompilerServices::TupleElementNamesAttribute::__cordl_internal_get__transformNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transformNames;
}
constexpr void System::Runtime::CompilerServices::TupleElementNamesAttribute::__cordl_internal_set__transformNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transformNames = value;
}
inline void System::Runtime::CompilerServices::TupleElementNamesAttribute::_ctor(::ArrayW<::StringW> transformNames) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TupleElementNamesAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformNames);
}
inline ::System::Runtime::CompilerServices::TupleElementNamesAttribute* System::Runtime::CompilerServices::TupleElementNamesAttribute::New_ctor(::ArrayW<::StringW> transformNames) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::TupleElementNamesAttribute*>(transformNames));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::TupleElementNamesAttribute::TupleElementNamesAttribute() {}
