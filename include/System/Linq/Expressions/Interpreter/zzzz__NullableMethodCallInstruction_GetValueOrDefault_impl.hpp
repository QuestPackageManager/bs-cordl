#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NullableMethodCallInstruction_GetValueOrDefault.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_GetValueOrDefault_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault::*)(
    ::System::Reflection::MethodInfo*)>(&::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4095ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault::Run)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x4096048;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault*>::get(), 8));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault::__cordl_internal_get__defaultValueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValueType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const&
System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault::__cordl_internal_get__defaultValueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValueType;
}
constexpr void System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault::__cordl_internal_set__defaultValueType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultValueType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault*
System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault::New_ctor(::System::Reflection::MethodInfo* mi) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault*>(mi));
}
inline void System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault::_ctor(::System::Reflection::MethodInfo* mi) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mi);
}
inline int32_t System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__GetValueOrDefault::__NullableMethodCallInstruction__GetValueOrDefault() {}
