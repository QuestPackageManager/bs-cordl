#pragma once
// IWYU pragma private; include "System/Linq/Expressions/InvocationExpressionN.hpp"
#include "System/Linq/Expressions/zzzz__InvocationExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__InvocationExpressionN_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__InvocationExpression_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpressionN._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::InvocationExpressionN::*)(
    ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*, ::System::Type*)>(
    &::System::Linq::Expressions::InvocationExpressionN::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f80350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InvocationExpressionN*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                             ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpressionN.GetArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::InvocationExpressionN::*)(int32_t)>(
    &::System::Linq::Expressions::InvocationExpressionN::GetArgument)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f80378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InvocationExpressionN*>(), { ::i2c::class_of<::System::Linq::Expressions::InvocationExpressionN*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpressionN.get_ArgumentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::InvocationExpressionN::*)()>(&::System::Linq::Expressions::InvocationExpressionN::get_ArgumentCount)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f8042c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InvocationExpressionN*>(), { ::i2c::class_of<::System::Linq::Expressions::InvocationExpressionN*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpressionN.Rewrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::InvocationExpression* (
    ::System::Linq::Expressions::InvocationExpressionN::*)(::System::Linq::Expressions::Expression*, ::ArrayW<::System::Linq::Expressions::Expression*>)>(
    &::System::Linq::Expressions::InvocationExpressionN::Rewrite)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f804d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InvocationExpressionN*>(), { ::i2c::class_of<::System::Linq::Expressions::InvocationExpressionN*>(), 14 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*& System::Linq::Expressions::InvocationExpressionN::__cordl_internal_get__arguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* const& System::Linq::Expressions::InvocationExpressionN::__cordl_internal_get__arguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr void System::Linq::Expressions::InvocationExpressionN::__cordl_internal_set__arguments(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arguments = value;
}
inline void System::Linq::Expressions::InvocationExpressionN::_ctor(::System::Linq::Expressions::Expression* lambda,
                                                                    ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* arguments, ::System::Type* returnType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InvocationExpressionN*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                           ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lambda, arguments, returnType);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::InvocationExpressionN::GetArgument(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::InvocationExpressionN*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::InvocationExpressionN::get_ArgumentCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::InvocationExpressionN*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Linq::Expressions::InvocationExpression* System::Linq::Expressions::InvocationExpressionN::Rewrite(::System::Linq::Expressions::Expression* lambda,
                                                                                                                    ::ArrayW<::System::Linq::Expressions::Expression*> arguments) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::InvocationExpressionN*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::InvocationExpression*>(this, ___internal_method, lambda, arguments);
}
inline ::System::Linq::Expressions::InvocationExpressionN*
System::Linq::Expressions::InvocationExpressionN::New_ctor(::System::Linq::Expressions::Expression* lambda,
                                                           ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* arguments, ::System::Type* returnType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::InvocationExpressionN*>(lambda, arguments, returnType));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::InvocationExpressionN::InvocationExpressionN() {}
