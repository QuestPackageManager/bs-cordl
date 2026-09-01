#pragma once
// IWYU pragma private; include "System\Xml\Schema\RangeContentValidator.hpp"
#include "System/Xml/Schema/zzzz__BitSet_impl.hpp"
#include "System/Xml/Schema/zzzz__ContentValidator_impl.hpp"
#include "System/Xml/Schema/zzzz__RangeContentValidator_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/Xml/Schema/zzzz__Positions_def.hpp"
#include "System/Xml/Schema/zzzz__SymbolsDictionary_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationState_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::RangeContentValidator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::RangeContentValidator::*)(
    ::System::Xml::Schema::BitSet*, ::ArrayW<::System::Xml::Schema::BitSet*>, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*, int32_t,
    ::System::Xml::Schema::XmlSchemaContentType, bool, ::System::Xml::Schema::BitSet*, int32_t)>(&::System::Xml::Schema::RangeContentValidator::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x61ba83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::RangeContentValidator*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::BitSet*>(), ::i2c::type_of<::ArrayW<::System::Xml::Schema::BitSet*>>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::SymbolsDictionary*>(), ::i2c::type_of<::System::Xml::Schema::Positions*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaContentType>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::BitSet*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::RangeContentValidator.InitValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::RangeContentValidator::*)(::System::Xml::Schema::ValidationState*)>(
    &::System::Xml::Schema::RangeContentValidator::InitValidation)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x61ba8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::RangeContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::RangeContentValidator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::RangeContentValidator.ValidateElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Xml::Schema::RangeContentValidator::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::ValidationState*, ::by_ref<int32_t>)>(
        &::System::Xml::Schema::RangeContentValidator::ValidateElement)> {
  constexpr static std::size_t size = 0x864;
  constexpr static std::size_t addrs = 0x61baab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::RangeContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::RangeContentValidator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::RangeContentValidator.CompleteValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::RangeContentValidator::*)(::System::Xml::Schema::ValidationState*)>(
    &::System::Xml::Schema::RangeContentValidator::CompleteValidation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x61bb318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::RangeContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::RangeContentValidator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::RangeContentValidator.ExpectedElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Xml::Schema::RangeContentValidator::*)(::System::Xml::Schema::ValidationState*, bool)>(
    &::System::Xml::Schema::RangeContentValidator::ExpectedElements)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x61bb32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::RangeContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::RangeContentValidator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::RangeContentValidator.ExpectedParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::ArrayList* (::System::Xml::Schema::RangeContentValidator::*)(::System::Xml::Schema::ValidationState*, bool, ::System::Xml::Schema::XmlSchemaSet*)>(
        &::System::Xml::Schema::RangeContentValidator::ExpectedParticles)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x61bb5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::RangeContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::RangeContentValidator*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::BitSet*& System::Xml::Schema::RangeContentValidator::__cordl_internal_get_firstpos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstpos;
}
constexpr ::System::Xml::Schema::BitSet* const& System::Xml::Schema::RangeContentValidator::__cordl_internal_get_firstpos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstpos;
}
constexpr void System::Xml::Schema::RangeContentValidator::__cordl_internal_set_firstpos(::System::Xml::Schema::BitSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstpos = value;
}
constexpr ::ArrayW<::System::Xml::Schema::BitSet*>& System::Xml::Schema::RangeContentValidator::__cordl_internal_get_followpos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followpos;
}
constexpr ::ArrayW<::System::Xml::Schema::BitSet*> const& System::Xml::Schema::RangeContentValidator::__cordl_internal_get_followpos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followpos;
}
constexpr void System::Xml::Schema::RangeContentValidator::__cordl_internal_set_followpos(::ArrayW<::System::Xml::Schema::BitSet*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___followpos = value;
}
constexpr ::System::Xml::Schema::BitSet*& System::Xml::Schema::RangeContentValidator::__cordl_internal_get_positionsWithRangeTerminals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionsWithRangeTerminals;
}
constexpr ::System::Xml::Schema::BitSet* const& System::Xml::Schema::RangeContentValidator::__cordl_internal_get_positionsWithRangeTerminals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionsWithRangeTerminals;
}
constexpr void System::Xml::Schema::RangeContentValidator::__cordl_internal_set_positionsWithRangeTerminals(::System::Xml::Schema::BitSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positionsWithRangeTerminals = value;
}
constexpr ::System::Xml::Schema::SymbolsDictionary*& System::Xml::Schema::RangeContentValidator::__cordl_internal_get_symbols() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___symbols;
}
constexpr ::System::Xml::Schema::SymbolsDictionary* const& System::Xml::Schema::RangeContentValidator::__cordl_internal_get_symbols() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___symbols;
}
constexpr void System::Xml::Schema::RangeContentValidator::__cordl_internal_set_symbols(::System::Xml::Schema::SymbolsDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___symbols = value;
}
constexpr ::System::Xml::Schema::Positions*& System::Xml::Schema::RangeContentValidator::__cordl_internal_get_positions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positions;
}
constexpr ::System::Xml::Schema::Positions* const& System::Xml::Schema::RangeContentValidator::__cordl_internal_get_positions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positions;
}
constexpr void System::Xml::Schema::RangeContentValidator::__cordl_internal_set_positions(::System::Xml::Schema::Positions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positions = value;
}
constexpr int32_t& System::Xml::Schema::RangeContentValidator::__cordl_internal_get_minMaxNodesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minMaxNodesCount;
}
constexpr int32_t const& System::Xml::Schema::RangeContentValidator::__cordl_internal_get_minMaxNodesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minMaxNodesCount;
}
constexpr void System::Xml::Schema::RangeContentValidator::__cordl_internal_set_minMaxNodesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minMaxNodesCount = value;
}
constexpr int32_t& System::Xml::Schema::RangeContentValidator::__cordl_internal_get_endMarkerPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endMarkerPos;
}
constexpr int32_t const& System::Xml::Schema::RangeContentValidator::__cordl_internal_get_endMarkerPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endMarkerPos;
}
constexpr void System::Xml::Schema::RangeContentValidator::__cordl_internal_set_endMarkerPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endMarkerPos = value;
}
inline void System::Xml::Schema::RangeContentValidator::_ctor(::System::Xml::Schema::BitSet* firstpos, ::ArrayW<::System::Xml::Schema::BitSet*> followpos,
                                                              ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions, int32_t endMarkerPos,
                                                              ::System::Xml::Schema::XmlSchemaContentType contentType, bool isEmptiable, ::System::Xml::Schema::BitSet* positionsWithRangeTerminals,
                                                              int32_t minmaxNodesCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::RangeContentValidator*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::System::Xml::Schema::BitSet*>(), ::i2c::type_of<::ArrayW<::System::Xml::Schema::BitSet*>>(), ::i2c::type_of<::System::Xml::Schema::SymbolsDictionary*>(),
                              ::i2c::type_of<::System::Xml::Schema::Positions*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaContentType>(), ::i2c::type_of<bool>(),
                              ::i2c::type_of<::System::Xml::Schema::BitSet*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstpos, followpos, symbols, positions, endMarkerPos, contentType, isEmptiable, positionsWithRangeTerminals,
                                                   minmaxNodesCount);
}
inline void System::Xml::Schema::RangeContentValidator::InitValidation(::System::Xml::Schema::ValidationState* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::RangeContentValidator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::System::Object* System::Xml::Schema::RangeContentValidator::ValidateElement(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context,
                                                                                     ::by_ref<int32_t> errorCode) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::RangeContentValidator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, context, errorCode);
}
inline bool System::Xml::Schema::RangeContentValidator::CompleteValidation(::System::Xml::Schema::ValidationState* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::RangeContentValidator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline ::System::Collections::ArrayList* System::Xml::Schema::RangeContentValidator::ExpectedElements(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::RangeContentValidator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method, context, isRequiredOnly);
}
inline ::System::Collections::ArrayList* System::Xml::Schema::RangeContentValidator::ExpectedParticles(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly,
                                                                                                       ::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::RangeContentValidator*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method, context, isRequiredOnly, schemaSet);
}
inline ::System::Xml::Schema::RangeContentValidator* System::Xml::Schema::RangeContentValidator::New_ctor(::System::Xml::Schema::BitSet* firstpos, ::ArrayW<::System::Xml::Schema::BitSet*> followpos,
                                                                                                          ::System::Xml::Schema::SymbolsDictionary* symbols,
                                                                                                          ::System::Xml::Schema::Positions* positions, int32_t endMarkerPos,
                                                                                                          ::System::Xml::Schema::XmlSchemaContentType contentType, bool isEmptiable,
                                                                                                          ::System::Xml::Schema::BitSet* positionsWithRangeTerminals, int32_t minmaxNodesCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::RangeContentValidator*>(firstpos, followpos, symbols, positions, endMarkerPos, contentType, isEmptiable,
                                                                                                         positionsWithRangeTerminals, minmaxNodesCount));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::RangeContentValidator::RangeContentValidator() {}
