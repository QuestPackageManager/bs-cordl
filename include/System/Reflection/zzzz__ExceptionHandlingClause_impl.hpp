#pragma once
#include "System/Reflection/zzzz__ExceptionHandlingClauseOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__ExceptionHandlingClause_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::ExceptionHandlingClause._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::ExceptionHandlingClause::*)()>(&::System::Reflection::ExceptionHandlingClause::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2871c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ExceptionHandlingClause*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ExceptionHandlingClause.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::ExceptionHandlingClause::*)()>(
    &::System::Reflection::ExceptionHandlingClause::ToString)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x2871c68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ExceptionHandlingClause*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ExceptionHandlingClause*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Reflection::ExceptionHandlingClause::__cordl_internal_get_catch_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___catch_type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Reflection::ExceptionHandlingClause::__cordl_internal_get_catch_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___catch_type;
}
constexpr void System::Reflection::ExceptionHandlingClause::__cordl_internal_set_catch_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___catch_type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Reflection::ExceptionHandlingClause::__cordl_internal_get_filter_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filter_offset;
}
constexpr int32_t const& System::Reflection::ExceptionHandlingClause::__cordl_internal_get_filter_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___filter_offset;
}
constexpr void System::Reflection::ExceptionHandlingClause::__cordl_internal_set_filter_offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___filter_offset = value;
}
constexpr ::System::Reflection::ExceptionHandlingClauseOptions& System::Reflection::ExceptionHandlingClause::__cordl_internal_get_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr ::System::Reflection::ExceptionHandlingClauseOptions const& System::Reflection::ExceptionHandlingClause::__cordl_internal_get_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr void System::Reflection::ExceptionHandlingClause::__cordl_internal_set_flags(::System::Reflection::ExceptionHandlingClauseOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flags = value;
}
constexpr int32_t& System::Reflection::ExceptionHandlingClause::__cordl_internal_get_try_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___try_offset;
}
constexpr int32_t const& System::Reflection::ExceptionHandlingClause::__cordl_internal_get_try_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___try_offset;
}
constexpr void System::Reflection::ExceptionHandlingClause::__cordl_internal_set_try_offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___try_offset = value;
}
constexpr int32_t& System::Reflection::ExceptionHandlingClause::__cordl_internal_get_try_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___try_length;
}
constexpr int32_t const& System::Reflection::ExceptionHandlingClause::__cordl_internal_get_try_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___try_length;
}
constexpr void System::Reflection::ExceptionHandlingClause::__cordl_internal_set_try_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___try_length = value;
}
constexpr int32_t& System::Reflection::ExceptionHandlingClause::__cordl_internal_get_handler_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handler_offset;
}
constexpr int32_t const& System::Reflection::ExceptionHandlingClause::__cordl_internal_get_handler_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handler_offset;
}
constexpr void System::Reflection::ExceptionHandlingClause::__cordl_internal_set_handler_offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handler_offset = value;
}
constexpr int32_t& System::Reflection::ExceptionHandlingClause::__cordl_internal_get_handler_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handler_length;
}
constexpr int32_t const& System::Reflection::ExceptionHandlingClause::__cordl_internal_get_handler_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handler_length;
}
constexpr void System::Reflection::ExceptionHandlingClause::__cordl_internal_set_handler_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handler_length = value;
}
inline ::System::Reflection::ExceptionHandlingClause* System::Reflection::ExceptionHandlingClause::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::ExceptionHandlingClause*>());
}
inline void System::Reflection::ExceptionHandlingClause::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ExceptionHandlingClause*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Reflection::ExceptionHandlingClause::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ExceptionHandlingClause*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Reflection::ExceptionHandlingClause::ExceptionHandlingClause() {}
