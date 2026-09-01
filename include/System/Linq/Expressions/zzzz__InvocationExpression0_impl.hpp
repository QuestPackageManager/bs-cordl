#pragma once
// IWYU pragma private; include "System\Linq\Expressions\InvocationExpression0.hpp"
#include "System/Linq/Expressions/zzzz__InvocationExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__InvocationExpression0_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__InvocationExpression_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::InvocationExpression0::*)(::System::Linq::Expressions::Expression*, ::System::Type*)>(
    &::System::Linq::Expressions::InvocationExpression0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f85d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InvocationExpression0*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression0.GetArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::InvocationExpression0::*)(int32_t)>(
    &::System::Linq::Expressions::InvocationExpression0::GetArgument)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f85d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InvocationExpression0*>(), { ::i2c::class_of<::System::Linq::Expressions::InvocationExpression0*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression0.get_ArgumentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::InvocationExpression0::*)()>(&::System::Linq::Expressions::InvocationExpression0::get_ArgumentCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f85db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InvocationExpression0*>(), { ::i2c::class_of<::System::Linq::Expressions::InvocationExpression0*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression0.Rewrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::InvocationExpression* (
    ::System::Linq::Expressions::InvocationExpression0::*)(::System::Linq::Expressions::Expression*, ::ArrayW<::System::Linq::Expressions::Expression*>)>(
    &::System::Linq::Expressions::InvocationExpression0::Rewrite)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f85db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InvocationExpression0*>(), { ::i2c::class_of<::System::Linq::Expressions::InvocationExpression0*>(), 14 }));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::InvocationExpression0::_ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InvocationExpression0*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lambda, returnType);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::InvocationExpression0::GetArgument(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::InvocationExpression0*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::InvocationExpression0::get_ArgumentCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::InvocationExpression0*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Linq::Expressions::InvocationExpression* System::Linq::Expressions::InvocationExpression0::Rewrite(::System::Linq::Expressions::Expression* lambda,
                                                                                                                    ::ArrayW<::System::Linq::Expressions::Expression*> arguments) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::InvocationExpression0*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::InvocationExpression*>(this, ___internal_method, lambda, arguments);
}
inline ::System::Linq::Expressions::InvocationExpression0* System::Linq::Expressions::InvocationExpression0::New_ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::InvocationExpression0*>(lambda, returnType));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::InvocationExpression0::InvocationExpression0() {}
