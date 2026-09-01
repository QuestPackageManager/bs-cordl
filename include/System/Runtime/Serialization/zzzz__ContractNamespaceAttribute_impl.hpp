#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\ContractNamespaceAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ContractNamespaceAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ContractNamespaceAttribute.get_ClrNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::ContractNamespaceAttribute::*)()>(
    &::System::Runtime::Serialization::ContractNamespaceAttribute::get_ClrNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613f21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ContractNamespaceAttribute*>(), { "get_ClrNamespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ContractNamespaceAttribute.get_ContractNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::ContractNamespaceAttribute::*)()>(
    &::System::Runtime::Serialization::ContractNamespaceAttribute::get_ContractNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613f224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ContractNamespaceAttribute*>(), { "get_ContractNamespace", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::ContractNamespaceAttribute::__cordl_internal_get_clrNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clrNamespace;
}
constexpr ::StringW const& System::Runtime::Serialization::ContractNamespaceAttribute::__cordl_internal_get_clrNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clrNamespace;
}
constexpr void System::Runtime::Serialization::ContractNamespaceAttribute::__cordl_internal_set_clrNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clrNamespace = value;
}
constexpr ::StringW& System::Runtime::Serialization::ContractNamespaceAttribute::__cordl_internal_get_contractNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contractNamespace;
}
constexpr ::StringW const& System::Runtime::Serialization::ContractNamespaceAttribute::__cordl_internal_get_contractNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contractNamespace;
}
constexpr void System::Runtime::Serialization::ContractNamespaceAttribute::__cordl_internal_set_contractNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contractNamespace = value;
}
inline ::StringW System::Runtime::Serialization::ContractNamespaceAttribute::get_ClrNamespace() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ContractNamespaceAttribute*>(), { "get_ClrNamespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::ContractNamespaceAttribute::get_ContractNamespace() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ContractNamespaceAttribute*>(), { "get_ContractNamespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ContractNamespaceAttribute::ContractNamespaceAttribute() {}
