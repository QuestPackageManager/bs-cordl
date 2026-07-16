#pragma once
// IWYU pragma private; include "System/Runtime/Versioning/NonVersionableAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Versioning/zzzz__NonVersionableAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Versioning::NonVersionableAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Versioning::NonVersionableAttribute::*)()>(&::System::Runtime::Versioning::NonVersionableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b49858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Versioning::NonVersionableAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Versioning::NonVersionableAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Versioning::NonVersionableAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Versioning::NonVersionableAttribute* System::Runtime::Versioning::NonVersionableAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Versioning::NonVersionableAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Versioning::NonVersionableAttribute::NonVersionableAttribute() {}
