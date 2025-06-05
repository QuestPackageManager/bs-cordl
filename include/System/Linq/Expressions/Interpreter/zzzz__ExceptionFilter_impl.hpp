#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ExceptionFilter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ExceptionFilter_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ExceptionFilter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::ExceptionFilter::*)(int32_t, int32_t, int32_t)>(
    &::System::Linq::Expressions::Interpreter::ExceptionFilter::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x40d7bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ExceptionFilter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Linq::Expressions::Interpreter::ExceptionFilter::__cordl_internal_get_LabelIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LabelIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::ExceptionFilter::__cordl_internal_get_LabelIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LabelIndex;
}
constexpr void System::Linq::Expressions::Interpreter::ExceptionFilter::__cordl_internal_set_LabelIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LabelIndex = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::ExceptionFilter::__cordl_internal_get_StartIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StartIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::ExceptionFilter::__cordl_internal_get_StartIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StartIndex;
}
constexpr void System::Linq::Expressions::Interpreter::ExceptionFilter::__cordl_internal_set_StartIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StartIndex = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::ExceptionFilter::__cordl_internal_get_EndIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::ExceptionFilter::__cordl_internal_get_EndIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndIndex;
}
constexpr void System::Linq::Expressions::Interpreter::ExceptionFilter::__cordl_internal_set_EndIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EndIndex = value;
}
inline void System::Linq::Expressions::Interpreter::ExceptionFilter::_ctor(int32_t labelIndex, int32_t start, int32_t end) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ExceptionFilter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, labelIndex, start, end);
}
inline ::System::Linq::Expressions::Interpreter::ExceptionFilter* System::Linq::Expressions::Interpreter::ExceptionFilter::New_ctor(int32_t labelIndex, int32_t start, int32_t end) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::ExceptionFilter*>(labelIndex, start, end));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::ExceptionFilter::ExceptionFilter() {}
