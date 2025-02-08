#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LocalVariable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalVariable_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariable.get_IsBoxed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Expressions::Interpreter::LocalVariable::*)()>(
    &::System::Linq::Expressions::Interpreter::LocalVariable::get_IsBoxed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x40ea270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariable*>::get(),
                                                                               "get_IsBoxed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariable.set_IsBoxed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LocalVariable::*)(bool)>(
    &::System::Linq::Expressions::Interpreter::LocalVariable::set_IsBoxed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x40ef580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariable*>::get(), "set_IsBoxed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariable.get_InClosure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Expressions::Interpreter::LocalVariable::*)()>(
    &::System::Linq::Expressions::Interpreter::LocalVariable::get_InClosure)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x40ea264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariable*>::get(),
                                                                               "get_InClosure", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LocalVariable::*)(int32_t, bool)>(
    &::System::Linq::Expressions::Interpreter::LocalVariable::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x40ef590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LocalVariable.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::LocalVariable::*)()>(
    &::System::Linq::Expressions::Interpreter::LocalVariable::ToString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x40ef5c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariable*>::get(), 3));
    return ___internal_method;
  }
};
constexpr int32_t& System::Linq::Expressions::Interpreter::LocalVariable::__cordl_internal_get_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Index;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::LocalVariable::__cordl_internal_get_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Index;
}
constexpr void System::Linq::Expressions::Interpreter::LocalVariable::__cordl_internal_set_Index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Index = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::LocalVariable::__cordl_internal_get__flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::LocalVariable::__cordl_internal_get__flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags;
}
constexpr void System::Linq::Expressions::Interpreter::LocalVariable::__cordl_internal_set__flags(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flags = value;
}
inline bool System::Linq::Expressions::Interpreter::LocalVariable::get_IsBoxed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariable*>::get(),
                                                                             "get_IsBoxed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::LocalVariable::set_IsBoxed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariable*>::get(), "set_IsBoxed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Linq::Expressions::Interpreter::LocalVariable::get_InClosure() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariable*>::get(),
                                                                             "get_InClosure", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::LocalVariable::_ctor(int32_t index, bool closure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, closure);
}
inline ::StringW System::Linq::Expressions::Interpreter::LocalVariable::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LocalVariable*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::LocalVariable* System::Linq::Expressions::Interpreter::LocalVariable::New_ctor(int32_t index, bool closure) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::LocalVariable*>(index, closure));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LocalVariable::LocalVariable() {}
