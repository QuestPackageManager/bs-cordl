#pragma once
// IWYU pragma private; include "System\Diagnostics\DebuggerTypeProxyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/zzzz__DebuggerTypeProxyAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::DebuggerTypeProxyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::DebuggerTypeProxyAttribute::*)(::System::Type*)>(&::System::Diagnostics::DebuggerTypeProxyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5be0b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DebuggerTypeProxyAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Diagnostics::DebuggerTypeProxyAttribute::__cordl_internal_get_typeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr ::StringW const& System::Diagnostics::DebuggerTypeProxyAttribute::__cordl_internal_get_typeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr void System::Diagnostics::DebuggerTypeProxyAttribute::__cordl_internal_set_typeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeName = value;
}
inline void System::Diagnostics::DebuggerTypeProxyAttribute::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DebuggerTypeProxyAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::System::Diagnostics::DebuggerTypeProxyAttribute* System::Diagnostics::DebuggerTypeProxyAttribute::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::DebuggerTypeProxyAttribute*>(type));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::DebuggerTypeProxyAttribute::DebuggerTypeProxyAttribute() {}
