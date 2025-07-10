#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/ExceptionHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ExceptionHandler_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ExceptionFilter_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ExceptionHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::ExceptionHandler::*)(
    int32_t, int32_t, int32_t, ::System::Type*, ::System::Linq::Expressions::Interpreter::ExceptionFilter*)>(&::System::Linq::Expressions::Interpreter::ExceptionHandler::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x40d7890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ExceptionHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::ExceptionFilter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ExceptionHandler.Matches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Expressions::Interpreter::ExceptionHandler::*)(::System::Type*)>(
    &::System::Linq::Expressions::Interpreter::ExceptionHandler::Matches)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40d78e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ExceptionHandler*>::get(), "Matches",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ExceptionHandler.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::ExceptionHandler::*)()>(
    &::System::Linq::Expressions::Interpreter::ExceptionHandler::ToString)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x40d7908;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ExceptionHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ExceptionHandler*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Linq::Expressions::Interpreter::ExceptionHandler::__cordl_internal_get__exceptionType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exceptionType;
}
constexpr ::System::Type* const& System::Linq::Expressions::Interpreter::ExceptionHandler::__cordl_internal_get__exceptionType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exceptionType;
}
constexpr void System::Linq::Expressions::Interpreter::ExceptionHandler::__cordl_internal_set__exceptionType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exceptionType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Linq::Expressions::Interpreter::ExceptionHandler::__cordl_internal_get_LabelIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LabelIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::ExceptionHandler::__cordl_internal_get_LabelIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LabelIndex;
}
constexpr void System::Linq::Expressions::Interpreter::ExceptionHandler::__cordl_internal_set_LabelIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LabelIndex = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::ExceptionHandler::__cordl_internal_get_HandlerStartIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HandlerStartIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::ExceptionHandler::__cordl_internal_get_HandlerStartIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HandlerStartIndex;
}
constexpr void System::Linq::Expressions::Interpreter::ExceptionHandler::__cordl_internal_set_HandlerStartIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HandlerStartIndex = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::ExceptionHandler::__cordl_internal_get_HandlerEndIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HandlerEndIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::ExceptionHandler::__cordl_internal_get_HandlerEndIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HandlerEndIndex;
}
constexpr void System::Linq::Expressions::Interpreter::ExceptionHandler::__cordl_internal_set_HandlerEndIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HandlerEndIndex = value;
}
constexpr ::System::Linq::Expressions::Interpreter::ExceptionFilter*& System::Linq::Expressions::Interpreter::ExceptionHandler::__cordl_internal_get_Filter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Filter;
}
constexpr ::System::Linq::Expressions::Interpreter::ExceptionFilter* const& System::Linq::Expressions::Interpreter::ExceptionHandler::__cordl_internal_get_Filter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Filter;
}
constexpr void System::Linq::Expressions::Interpreter::ExceptionHandler::__cordl_internal_set_Filter(::System::Linq::Expressions::Interpreter::ExceptionFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Filter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::Interpreter::ExceptionHandler::_ctor(int32_t labelIndex, int32_t handlerStartIndex, int32_t handlerEndIndex, ::System::Type* exceptionType,
                                                                            ::System::Linq::Expressions::Interpreter::ExceptionFilter* filter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ExceptionHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::ExceptionFilter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, labelIndex, handlerStartIndex, handlerEndIndex, exceptionType, filter);
}
inline bool System::Linq::Expressions::Interpreter::ExceptionHandler::Matches(::System::Type* exceptionType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ExceptionHandler*>::get(), "Matches",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, exceptionType);
}
inline ::StringW System::Linq::Expressions::Interpreter::ExceptionHandler::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::ExceptionHandler*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::ExceptionHandler*
System::Linq::Expressions::Interpreter::ExceptionHandler::New_ctor(int32_t labelIndex, int32_t handlerStartIndex, int32_t handlerEndIndex, ::System::Type* exceptionType,
                                                                   ::System::Linq::Expressions::Interpreter::ExceptionFilter* filter) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::ExceptionHandler*>(labelIndex, handlerStartIndex, handlerEndIndex, exceptionType, filter));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::ExceptionHandler::ExceptionHandler() {}
