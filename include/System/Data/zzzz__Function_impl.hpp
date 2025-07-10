#pragma once
// IWYU pragma private; include "System/Data/Function.hpp"
#include "System/Data/zzzz__FunctionId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__Function_def.hpp"
#include "System/Data/zzzz__FunctionId_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::Function._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::Function::*)(
    ::StringW, ::System::Data::FunctionId, ::System::Type*, bool, bool, int32_t, ::System::Type*, ::System::Type*, ::System::Type*)>(&::System::Data::Function::_ctor)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x4152920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Function*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::FunctionId>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& System::Data::Function::__cordl_internal_get__parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameters;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& System::Data::Function::__cordl_internal_get__parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameters;
}
constexpr void System::Data::Function::__cordl_internal_set__parameters(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Data::Function::setStaticF_s_functionName(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_functionName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Function*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Data::Function::getStaticF_s_functionName() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "s_functionName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Function*>::get>();
}
inline void System::Data::Function::_ctor(::StringW name, ::System::Data::FunctionId id, ::System::Type* result, bool IsValidateArguments, bool IsVariantArgumentList, int32_t argumentCount,
                                          ::System::Type* a1, ::System::Type* a2, ::System::Type* a3) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::Function*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 9>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::FunctionId>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, id, result, IsValidateArguments, IsVariantArgumentList, argumentCount, a1, a2, a3);
}
inline ::System::Data::Function* System::Data::Function::New_ctor(::StringW name, ::System::Data::FunctionId id, ::System::Type* result, bool IsValidateArguments, bool IsVariantArgumentList,
                                                                  int32_t argumentCount, ::System::Type* a1, ::System::Type* a2, ::System::Type* a3) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::Function*>(name, id, result, IsValidateArguments, IsVariantArgumentList, argumentCount, a1, a2, a3));
}
// Ctor Parameters []
constexpr ::System::Data::Function::Function() {}
