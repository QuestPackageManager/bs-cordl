#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/TryFaultHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__TryFaultHandler_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::TryFaultHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::TryFaultHandler::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::System::Linq::Expressions::Interpreter::TryFaultHandler::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2c49380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::TryFaultHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_get_TryStartIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TryStartIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_get_TryStartIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TryStartIndex;
}
constexpr void System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_set_TryStartIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TryStartIndex = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_get_TryEndIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TryEndIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_get_TryEndIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TryEndIndex;
}
constexpr void System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_set_TryEndIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TryEndIndex = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_get_FinallyStartIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FinallyStartIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_get_FinallyStartIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FinallyStartIndex;
}
constexpr void System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_set_FinallyStartIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FinallyStartIndex = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_get_FinallyEndIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FinallyEndIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_get_FinallyEndIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FinallyEndIndex;
}
constexpr void System::Linq::Expressions::Interpreter::TryFaultHandler::__cordl_internal_set_FinallyEndIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FinallyEndIndex = value;
}
inline ::System::Linq::Expressions::Interpreter::TryFaultHandler* System::Linq::Expressions::Interpreter::TryFaultHandler::New_ctor(int32_t tryStart, int32_t tryEnd, int32_t finallyStart,
                                                                                                                                    int32_t finallyEnd) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::TryFaultHandler*>(tryStart, tryEnd, finallyStart, finallyEnd));
}
inline void System::Linq::Expressions::Interpreter::TryFaultHandler::_ctor(int32_t tryStart, int32_t tryEnd, int32_t finallyStart, int32_t finallyEnd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::TryFaultHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tryStart, tryEnd, finallyStart, finallyEnd);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::TryFaultHandler::TryFaultHandler() {}
