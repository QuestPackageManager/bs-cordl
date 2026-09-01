#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\DefaultAuthenticatedAttributeTableGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultAuthenticatedAttributeTableGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableGenerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::*)()>(
    &::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x36cb36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::*)(::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(
    &::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x36cb3cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator.CreateStandardAttributeTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::IDictionary* (::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::*)(::System::Collections::IDictionary*)>(
        &::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::CreateStandardAttributeTable)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x36cb44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator.GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::*)(::System::Collections::IDictionary*)>(
        &::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::GetAttributes)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x36cb95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::__cordl_internal_get_table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___table;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::__cordl_internal_get_table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___table;
}
constexpr void Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::__cordl_internal_set_table(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___table = value;
}
inline void Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::_ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable* attributeTable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeTable);
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::CreateStandardAttributeTable(::System::Collections::IDictionary* parameters) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method, parameters);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::GetAttributes(::System::Collections::IDictionary* parameters) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(this, ___internal_method, parameters);
}
inline ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator* Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>());
}
inline ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*
Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::New_ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable* attributeTable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator*>(attributeTable));
}
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator"
constexpr Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::operator ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator"
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::i___Org__BouncyCastle__Cms__CmsAttributeTableGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::DefaultAuthenticatedAttributeTableGenerator::DefaultAuthenticatedAttributeTableGenerator() {}
