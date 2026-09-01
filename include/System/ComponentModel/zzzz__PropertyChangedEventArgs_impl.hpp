#pragma once
// IWYU pragma private; include "System\ComponentModel\PropertyChangedEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventArgs_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::PropertyChangedEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyChangedEventArgs::*)(::StringW)>(&::System::ComponentModel::PropertyChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x63ca14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyChangedEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::PropertyChangedEventArgs::__cordl_internal_get__propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr ::StringW const& System::ComponentModel::PropertyChangedEventArgs::__cordl_internal_get__propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr void System::ComponentModel::PropertyChangedEventArgs::__cordl_internal_set__propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyName = value;
}
inline void System::ComponentModel::PropertyChangedEventArgs::_ctor(::StringW propertyName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyChangedEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName);
}
inline ::System::ComponentModel::PropertyChangedEventArgs* System::ComponentModel::PropertyChangedEventArgs::New_ctor(::StringW propertyName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::PropertyChangedEventArgs*>(propertyName));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::PropertyChangedEventArgs::PropertyChangedEventArgs() {}
