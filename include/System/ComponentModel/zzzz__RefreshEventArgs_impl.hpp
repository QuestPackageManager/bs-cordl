#pragma once
// IWYU pragma private; include "System/ComponentModel/RefreshEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__RefreshEventArgs_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::RefreshEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::RefreshEventArgs::*)(::System::Type*)>(&::System::ComponentModel::RefreshEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x63c2da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::RefreshEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::ComponentModel::RefreshEventArgs::__cordl_internal_get__TypeChanged_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TypeChanged_k__BackingField;
}
constexpr ::System::Type* const& System::ComponentModel::RefreshEventArgs::__cordl_internal_get__TypeChanged_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TypeChanged_k__BackingField;
}
constexpr void System::ComponentModel::RefreshEventArgs::__cordl_internal_set__TypeChanged_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TypeChanged_k__BackingField = value;
}
inline void System::ComponentModel::RefreshEventArgs::_ctor(::System::Type* typeChanged) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ComponentModel::RefreshEventArgs*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeChanged);
}
inline ::System::ComponentModel::RefreshEventArgs* System::ComponentModel::RefreshEventArgs::New_ctor(::System::Type* typeChanged) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::RefreshEventArgs*>(typeChanged));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::RefreshEventArgs::RefreshEventArgs() {}
