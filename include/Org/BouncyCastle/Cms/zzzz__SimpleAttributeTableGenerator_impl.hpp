#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__SimpleAttributeTableGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableGenerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::*)(::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(
    &::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x127ebb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator.GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (
    ::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::GetAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x127ebdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator*>::get(), 5));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator"
constexpr Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::operator ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator"
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::i___Org__BouncyCastle__Cms__CmsAttributeTableGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::__cordl_internal_get_attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> const& Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::__cordl_internal_get_attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr void Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::__cordl_internal_set_attributes(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator* Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::New_ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable* attributes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator*>(attributes));
}
inline void Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::_ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable* attributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributes);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::GetAttributes(::System::Collections::IDictionary* parameters) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, false>(this, ___internal_method, parameters);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::SimpleAttributeTableGenerator::SimpleAttributeTableGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
