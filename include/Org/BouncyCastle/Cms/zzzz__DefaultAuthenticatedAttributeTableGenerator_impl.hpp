#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultAuthenticatedAttributeTableGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableGenerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::*)()>(
    &::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1200298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::*)(
    ::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(&::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1200300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator.CreateStandardAttributeTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IDictionary* (::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::*)(::System::Collections::IDictionary*)>(
        &::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::CreateStandardAttributeTable)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x1200380;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator.GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::*)(::System::Collections::IDictionary*)>(
        &::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::GetAttributes)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x12008a8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>::get(), 6));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator"
constexpr Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::operator ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator"
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::i___Org__BouncyCastle__Cms__CmsAttributeTableGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(static_cast<void*>(this));
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::__get_table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___table;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::__get_table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___table;
}
constexpr void Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::__set_table(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___table)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator* Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>());
}
inline void Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*
Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::New_ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable* attributeTable) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>(attributeTable));
}
inline void Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::_ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable* attributeTable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeTable);
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::CreateStandardAttributeTable(::System::Collections::IDictionary* parameters) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(this, ___internal_method, parameters);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::GetAttributes(::System::Collections::IDictionary* parameters) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, false>(this, ___internal_method, parameters);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::DefaultAuthenticatedAttributeTableGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
