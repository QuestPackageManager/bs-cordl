#pragma once
// IWYU pragma private; include "System\ComponentModel\PropertyChangingEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__PropertyChangingEventArgs_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::PropertyChangingEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyChangingEventArgs::*)(::StringW)>(&::System::ComponentModel::PropertyChangingEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x63ca30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyChangingEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::PropertyChangingEventArgs::__cordl_internal_get__propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr ::StringW const& System::ComponentModel::PropertyChangingEventArgs::__cordl_internal_get__propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr void System::ComponentModel::PropertyChangingEventArgs::__cordl_internal_set__propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyName = value;
}
inline void System::ComponentModel::PropertyChangingEventArgs::_ctor(::StringW propertyName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::PropertyChangingEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName);
}
inline ::System::ComponentModel::PropertyChangingEventArgs* System::ComponentModel::PropertyChangingEventArgs::New_ctor(::StringW propertyName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::PropertyChangingEventArgs*>(propertyName));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::PropertyChangingEventArgs::PropertyChangingEventArgs() {}
