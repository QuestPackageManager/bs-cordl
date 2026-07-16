#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/ObjectProgress.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalMemberTypeE_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalMemberValueE_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalObjectTypeE_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectProgress_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ParseRecord_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectProgress::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectProgress::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b5803c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectProgress::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectProgress::Init)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b58094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress.ArrayCountIncrement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectProgress::*)(int32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::ObjectProgress::ArrayCountIncrement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b58128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>(), { "ArrayCountIncrement", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress.GetNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::Formatters::Binary::ObjectProgress::*)(
    ::by_ref<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>, ::by_ref<::System::Object*>)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectProgress::GetNext)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5b58138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>(),
                            { "GetNext", {}, { ::i2c::type_of<::by_ref<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_isInitial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInitial;
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_isInitial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInitial;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_set_isInitial(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isInitial = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_expectedType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expectedType;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_expectedType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expectedType;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_set_expectedType(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___expectedType = value;
}
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_expectedTypeInformation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expectedTypeInformation;
}
constexpr ::System::Object* const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_expectedTypeInformation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expectedTypeInformation;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_set_expectedTypeInformation(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___expectedTypeInformation = value;
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_objectTypeEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectTypeEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE const&
System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_objectTypeEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectTypeEnum;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_set_objectTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectTypeEnum = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_memberTypeEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberTypeEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE const&
System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_memberTypeEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberTypeEnum;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_set_memberTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberTypeEnum = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_memberValueEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberValueEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const&
System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_memberValueEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberValueEnum;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_set_memberValueEnum(::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberValueEnum = value;
}
constexpr ::System::Type*& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_dtType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dtType;
}
constexpr ::System::Type* const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_dtType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dtType;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_set_dtType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dtType = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_numItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numItems;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_numItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numItems;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_set_numItems(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___numItems = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_binaryTypeEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryTypeEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_binaryTypeEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryTypeEnum;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_set_binaryTypeEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryTypeEnum = value;
}
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_typeInformation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeInformation;
}
constexpr ::System::Object* const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_typeInformation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeInformation;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_set_typeInformation(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeInformation = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_nullCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nullCount;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_nullCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nullCount;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_set_nullCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nullCount = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_memberLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberLength;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_memberLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberLength;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_set_memberLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberLength = value;
}
constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_binaryTypeEnumA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryTypeEnumA;
}
constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> const&
System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_binaryTypeEnumA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryTypeEnumA;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_set_binaryTypeEnumA(::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryTypeEnumA = value;
}
constexpr ::ArrayW<::System::Object*>& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_typeInformationA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeInformationA;
}
constexpr ::ArrayW<::System::Object*> const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_typeInformationA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeInformationA;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_set_typeInformationA(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeInformationA = value;
}
constexpr ::ArrayW<::StringW>& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_memberNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNames;
}
constexpr ::ArrayW<::StringW> const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_memberNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNames;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_set_memberNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberNames = value;
}
constexpr ::ArrayW<::System::Type*>& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_memberTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberTypes;
}
constexpr ::ArrayW<::System::Type*> const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_memberTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberTypes;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_set_memberTypes(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberTypes = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_pr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pr;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_get_pr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pr;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__cordl_internal_set_pr(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pr = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::setStaticF_opRecordIdCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "opRecordIdCount", ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>(std::forward<int32_t>(value));
}
inline int32_t System::Runtime::Serialization::Formatters::Binary::ObjectProgress::getStaticF_opRecordIdCount() {
  return ::cordl_internals::getStaticField<int32_t, "opRecordIdCount", ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>();
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::Init() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::ArrayCountIncrement(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>(), { "ArrayCountIncrement", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Runtime::Serialization::Formatters::Binary::ObjectProgress::GetNext(::by_ref<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> outBinaryTypeEnum,
                                                                                        ::by_ref<::System::Object*> outTypeInformation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>(),
                          { "GetNext", {}, { ::i2c::type_of<::by_ref<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, outBinaryTypeEnum, outTypeInformation);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress* System::Runtime::Serialization::Formatters::Binary::ObjectProgress::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress::ObjectProgress() {}
