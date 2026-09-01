#pragma once
// IWYU pragma private; include "System\Runtime\InteropServices\GuidAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GuidAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::GuidAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::GuidAttribute::*)(::StringW)>(&::System::Runtime::InteropServices::GuidAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6c48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GuidAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::InteropServices::GuidAttribute::__cordl_internal_get__val() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr ::StringW const& System::Runtime::InteropServices::GuidAttribute::__cordl_internal_get__val() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr void System::Runtime::InteropServices::GuidAttribute::__cordl_internal_set__val(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____val = value;
}
inline void System::Runtime::InteropServices::GuidAttribute::_ctor(::StringW guid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::GuidAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, guid);
}
inline ::System::Runtime::InteropServices::GuidAttribute* System::Runtime::InteropServices::GuidAttribute::New_ctor(::StringW guid) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::InteropServices::GuidAttribute*>(guid));
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::GuidAttribute::GuidAttribute() {}
