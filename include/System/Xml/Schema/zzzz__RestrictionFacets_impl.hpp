#pragma once
#include "System/Xml/Schema/zzzz__RestrictionFlags_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaWhiteSpace_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__RestrictionFacets_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
constexpr int32_t& System::Xml::Schema::RestrictionFacets::__get_Length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Length;
}
constexpr int32_t const& System::Xml::Schema::RestrictionFacets::__get_Length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Length;
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_Length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Length = value;
}
constexpr int32_t& System::Xml::Schema::RestrictionFacets::__get_MinLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MinLength;
}
constexpr int32_t const& System::Xml::Schema::RestrictionFacets::__get_MinLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MinLength;
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_MinLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MinLength = value;
}
constexpr int32_t& System::Xml::Schema::RestrictionFacets::__get_MaxLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxLength;
}
constexpr int32_t const& System::Xml::Schema::RestrictionFacets::__get_MaxLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxLength;
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_MaxLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MaxLength = value;
}
constexpr ::System::Collections::ArrayList*& System::Xml::Schema::RestrictionFacets::__get_Patterns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Patterns;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Xml::Schema::RestrictionFacets::__get_Patterns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Patterns;
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_Patterns(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Patterns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Xml::Schema::RestrictionFacets::__get_Enumeration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Enumeration;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Xml::Schema::RestrictionFacets::__get_Enumeration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Enumeration;
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_Enumeration(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Enumeration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaWhiteSpace& System::Xml::Schema::RestrictionFacets::__get_WhiteSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WhiteSpace;
}
constexpr ::System::Xml::Schema::XmlSchemaWhiteSpace const& System::Xml::Schema::RestrictionFacets::__get_WhiteSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WhiteSpace;
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_WhiteSpace(::System::Xml::Schema::XmlSchemaWhiteSpace value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___WhiteSpace = value;
}
constexpr ::System::Object*& System::Xml::Schema::RestrictionFacets::__get_MaxInclusive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxInclusive;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Xml::Schema::RestrictionFacets::__get_MaxInclusive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxInclusive;
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_MaxInclusive(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MaxInclusive)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Xml::Schema::RestrictionFacets::__get_MaxExclusive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxExclusive;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Xml::Schema::RestrictionFacets::__get_MaxExclusive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxExclusive;
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_MaxExclusive(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MaxExclusive)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Xml::Schema::RestrictionFacets::__get_MinInclusive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MinInclusive;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Xml::Schema::RestrictionFacets::__get_MinInclusive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MinInclusive;
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_MinInclusive(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MinInclusive)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Xml::Schema::RestrictionFacets::__get_MinExclusive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MinExclusive;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Xml::Schema::RestrictionFacets::__get_MinExclusive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MinExclusive;
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_MinExclusive(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MinExclusive)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Schema::RestrictionFacets::__get_TotalDigits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalDigits;
}
constexpr int32_t const& System::Xml::Schema::RestrictionFacets::__get_TotalDigits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalDigits;
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_TotalDigits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TotalDigits = value;
}
constexpr int32_t& System::Xml::Schema::RestrictionFacets::__get_FractionDigits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FractionDigits;
}
constexpr int32_t const& System::Xml::Schema::RestrictionFacets::__get_FractionDigits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FractionDigits;
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_FractionDigits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FractionDigits = value;
}
constexpr ::System::Xml::Schema::RestrictionFlags& System::Xml::Schema::RestrictionFacets::__get_Flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Flags;
}
constexpr ::System::Xml::Schema::RestrictionFlags const& System::Xml::Schema::RestrictionFacets::__get_Flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Flags;
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_Flags(::System::Xml::Schema::RestrictionFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Flags = value;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::RestrictionFacets::RestrictionFacets() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
