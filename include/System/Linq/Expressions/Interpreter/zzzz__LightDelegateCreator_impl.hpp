#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LightDelegateCreator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LightDelegateCreator_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Interpreter_def.hpp"
#include "System/Linq/Expressions/zzzz__LambdaExpression_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IStrongBox_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightDelegateCreator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightDelegateCreator::*)(
    ::System::Linq::Expressions::Interpreter::Interpreter*, ::System::Linq::Expressions::LambdaExpression*)>(&::System::Linq::Expressions::Interpreter::LightDelegateCreator::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4083abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::Interpreter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LambdaExpression*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightDelegateCreator.get_Interpreter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Interpreter* (
    ::System::Linq::Expressions::Interpreter::LightDelegateCreator::*)()>(&::System::Linq::Expressions::Interpreter::LightDelegateCreator::get_Interpreter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4083ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>::get(), "get_Interpreter",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightDelegateCreator.CreateDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (::System::Linq::Expressions::Interpreter::LightDelegateCreator::*)()>(
    &::System::Linq::Expressions::Interpreter::LightDelegateCreator::CreateDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4083af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>::get(), "CreateDelegate",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightDelegateCreator.CreateDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (
    ::System::Linq::Expressions::Interpreter::LightDelegateCreator::*)(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*>)>(
    &::System::Linq::Expressions::Interpreter::LightDelegateCreator::CreateDelegate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4083af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>::get(), "CreateDelegate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::LambdaExpression*& System::Linq::Expressions::Interpreter::LightDelegateCreator::__cordl_internal_get__lambda() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lambda;
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::LambdaExpression*> const&
System::Linq::Expressions::Interpreter::LightDelegateCreator::__cordl_internal_get__lambda() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lambda;
}
constexpr void System::Linq::Expressions::Interpreter::LightDelegateCreator::__cordl_internal_set__lambda(::System::Linq::Expressions::LambdaExpression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lambda)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Linq::Expressions::Interpreter::Interpreter*& System::Linq::Expressions::Interpreter::LightDelegateCreator::__cordl_internal_get__Interpreter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Interpreter_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Interpreter::Interpreter*> const&
System::Linq::Expressions::Interpreter::LightDelegateCreator::__cordl_internal_get__Interpreter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Interpreter_k__BackingField;
}
constexpr void System::Linq::Expressions::Interpreter::LightDelegateCreator::__cordl_internal_set__Interpreter_k__BackingField(::System::Linq::Expressions::Interpreter::Interpreter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Interpreter_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Linq::Expressions::Interpreter::LightDelegateCreator*
System::Linq::Expressions::Interpreter::LightDelegateCreator::New_ctor(::System::Linq::Expressions::Interpreter::Interpreter* interpreter, ::System::Linq::Expressions::LambdaExpression* lambda) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>(interpreter, lambda));
}
inline void System::Linq::Expressions::Interpreter::LightDelegateCreator::_ctor(::System::Linq::Expressions::Interpreter::Interpreter* interpreter,
                                                                                ::System::Linq::Expressions::LambdaExpression* lambda) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::Interpreter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LambdaExpression*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interpreter, lambda);
}
inline ::System::Linq::Expressions::Interpreter::Interpreter* System::Linq::Expressions::Interpreter::LightDelegateCreator::get_Interpreter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>::get(), "get_Interpreter",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Interpreter*, false>(this, ___internal_method);
}
inline ::System::Delegate* System::Linq::Expressions::Interpreter::LightDelegateCreator::CreateDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>::get(), "CreateDelegate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(this, ___internal_method);
}
inline ::System::Delegate* System::Linq::Expressions::Interpreter::LightDelegateCreator::CreateDelegate(
    ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*> closure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>::get(), "CreateDelegate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Runtime::CompilerServices::IStrongBox*, ::Array<::System::Runtime::CompilerServices::IStrongBox*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(this, ___internal_method, closure);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LightDelegateCreator::LightDelegateCreator() {}
