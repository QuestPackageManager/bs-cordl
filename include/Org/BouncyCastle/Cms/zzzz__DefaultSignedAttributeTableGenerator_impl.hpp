#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\DefaultSignedAttributeTableGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultSignedAttributeTableGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAttributeTableGenerator_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::*)()>(
    &::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x36b54a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::*)(::Org::BouncyCastle::Asn1::Cms::AttributeTable*)>(
    &::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x36b5984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator.createStandardAttributeTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Hashtable* (::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::*)(::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::createStandardAttributeTable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x36cb9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator.DoCreateStandardAttributeTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::*)(
    ::System::Collections::IDictionary*, ::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::DoCreateStandardAttributeTable)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x36cba64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator*>(),
                                         { "DoCreateStandardAttributeTable", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator.GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (
    ::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::*)(::System::Collections::IDictionary*)>(&::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::GetAttributes)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x36cc144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::__cordl_internal_get_table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___table;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::__cordl_internal_get_table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___table;
}
constexpr void Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::__cordl_internal_set_table(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___table = value;
}
inline void Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::_ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable* attributeTable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeTable);
}
inline ::System::Collections::Hashtable* Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::createStandardAttributeTable(::System::Collections::IDictionary* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*>(this, ___internal_method, parameters);
}
inline void Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::DoCreateStandardAttributeTable(::System::Collections::IDictionary* parameters, ::System::Collections::IDictionary* std) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator*>(),
                                       { "DoCreateStandardAttributeTable", {}, { ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters, std);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::GetAttributes(::System::Collections::IDictionary* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*>(this, ___internal_method, parameters);
}
inline ::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator* Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator*>());
}
inline ::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator*
Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::New_ctor(::Org::BouncyCastle::Asn1::Cms::AttributeTable* attributeTable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator*>(attributeTable));
}
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator"
constexpr Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::operator ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator"
constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator* Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::i___Org__BouncyCastle__Cms__CmsAttributeTableGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::DefaultSignedAttributeTableGenerator::DefaultSignedAttributeTableGenerator() {}
