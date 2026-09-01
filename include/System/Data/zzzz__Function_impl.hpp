#pragma once
// IWYU pragma private; include "System\Data\Function.hpp"
#include "System/Data/zzzz__FunctionId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Data/zzzz__Function_def.hpp"
#include "System/Data/zzzz__FunctionId_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::Function._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::Function::*)(::StringW, ::System::Data::FunctionId, ::System::Type*, bool, bool, int32_t, ::System::Type*, ::System::Type*,
                                                                                          ::System::Type*)>(&::System::Data::Function::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6019b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Data::Function*>(), { ".ctor",
                                                                                         {},
                                                                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::FunctionId>(), ::i2c::type_of<::System::Type*>(),
                                                                                           ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>(),
                                                                                           ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Data::Function::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& System::Data::Function::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void System::Data::Function::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name = value;
}
constexpr ::System::Data::FunctionId& System::Data::Function::__cordl_internal_get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr ::System::Data::FunctionId const& System::Data::Function::__cordl_internal_get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr void System::Data::Function::__cordl_internal_set__id(::System::Data::FunctionId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id = value;
}
constexpr ::System::Type*& System::Data::Function::__cordl_internal_get__result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____result;
}
constexpr ::System::Type* const& System::Data::Function::__cordl_internal_get__result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____result;
}
constexpr void System::Data::Function::__cordl_internal_set__result(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____result = value;
}
constexpr bool& System::Data::Function::__cordl_internal_get__isValidateArguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isValidateArguments;
}
constexpr bool const& System::Data::Function::__cordl_internal_get__isValidateArguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isValidateArguments;
}
constexpr void System::Data::Function::__cordl_internal_set__isValidateArguments(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isValidateArguments = value;
}
constexpr bool& System::Data::Function::__cordl_internal_get__isVariantArgumentList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isVariantArgumentList;
}
constexpr bool const& System::Data::Function::__cordl_internal_get__isVariantArgumentList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isVariantArgumentList;
}
constexpr void System::Data::Function::__cordl_internal_set__isVariantArgumentList(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isVariantArgumentList = value;
}
constexpr int32_t& System::Data::Function::__cordl_internal_get__argumentCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argumentCount;
}
constexpr int32_t const& System::Data::Function::__cordl_internal_get__argumentCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argumentCount;
}
constexpr void System::Data::Function::__cordl_internal_set__argumentCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____argumentCount = value;
}
constexpr ::ArrayW<::System::Type*>& System::Data::Function::__cordl_internal_get__parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameters;
}
constexpr ::ArrayW<::System::Type*> const& System::Data::Function::__cordl_internal_get__parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameters;
}
constexpr void System::Data::Function::__cordl_internal_set__parameters(::ArrayW<::System::Type*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parameters = value;
}
inline void System::Data::Function::setStaticF_s_functionName(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_functionName", ::System::Data::Function*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Data::Function::getStaticF_s_functionName() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_functionName", ::System::Data::Function*>();
}
inline void System::Data::Function::_ctor(::StringW name, ::System::Data::FunctionId id, ::System::Type* result, bool IsValidateArguments, bool IsVariantArgumentList, int32_t argumentCount,
                                          ::System::Type* a1, ::System::Type* a2, ::System::Type* a3) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Data::Function*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::FunctionId>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, id, result, IsValidateArguments, IsVariantArgumentList, argumentCount, a1, a2, a3);
}
inline ::System::Data::Function* System::Data::Function::New_ctor(::StringW name, ::System::Data::FunctionId id, ::System::Type* result, bool IsValidateArguments, bool IsVariantArgumentList,
                                                                  int32_t argumentCount, ::System::Type* a1, ::System::Type* a2, ::System::Type* a3) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::Function*>(name, id, result, IsValidateArguments, IsVariantArgumentList, argumentCount, a1, a2, a3));
}
// Ctor Parameters []
constexpr ::System::Data::Function::Function() {}
