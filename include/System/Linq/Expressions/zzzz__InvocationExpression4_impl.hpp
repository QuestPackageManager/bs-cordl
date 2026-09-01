#pragma once
// IWYU pragma private; include "System\Linq\Expressions\InvocationExpression4.hpp"
#include "System/Linq/Expressions/zzzz__InvocationExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__InvocationExpression4_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__InvocationExpression_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression4._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::InvocationExpression4::*)(
    ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*,
    ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::InvocationExpression4::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f86368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InvocationExpression4*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Type*>(),
                                                                 ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                                 ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression4.GetArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::InvocationExpression4::*)(int32_t)>(
    &::System::Linq::Expressions::InvocationExpression4::GetArgument)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f863a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InvocationExpression4*>(), { ::i2c::class_of<::System::Linq::Expressions::InvocationExpression4*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression4.get_ArgumentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::InvocationExpression4::*)()>(&::System::Linq::Expressions::InvocationExpression4::get_ArgumentCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8648c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InvocationExpression4*>(), { ::i2c::class_of<::System::Linq::Expressions::InvocationExpression4*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression4.Rewrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::InvocationExpression* (
    ::System::Linq::Expressions::InvocationExpression4::*)(::System::Linq::Expressions::Expression*, ::ArrayW<::System::Linq::Expressions::Expression*>)>(
    &::System::Linq::Expressions::InvocationExpression4::Rewrite)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5f86494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InvocationExpression4*>(), { ::i2c::class_of<::System::Linq::Expressions::InvocationExpression4*>(), 14 }));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Linq::Expressions::InvocationExpression4::__cordl_internal_get__arg0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg0;
}
constexpr ::System::Object* const& System::Linq::Expressions::InvocationExpression4::__cordl_internal_get__arg0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg0;
}
constexpr void System::Linq::Expressions::InvocationExpression4::__cordl_internal_set__arg0(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arg0 = value;
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::InvocationExpression4::__cordl_internal_get__arg1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg1;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::InvocationExpression4::__cordl_internal_get__arg1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg1;
}
constexpr void System::Linq::Expressions::InvocationExpression4::__cordl_internal_set__arg1(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arg1 = value;
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::InvocationExpression4::__cordl_internal_get__arg2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg2;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::InvocationExpression4::__cordl_internal_get__arg2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg2;
}
constexpr void System::Linq::Expressions::InvocationExpression4::__cordl_internal_set__arg2(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arg2 = value;
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::InvocationExpression4::__cordl_internal_get__arg3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg3;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::InvocationExpression4::__cordl_internal_get__arg3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg3;
}
constexpr void System::Linq::Expressions::InvocationExpression4::__cordl_internal_set__arg3(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arg3 = value;
}
inline void System::Linq::Expressions::InvocationExpression4::_ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType, ::System::Linq::Expressions::Expression* arg0,
                                                                    ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2,
                                                                    ::System::Linq::Expressions::Expression* arg3) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InvocationExpression4*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Type*>(),
                                                               ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                               ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lambda, returnType, arg0, arg1, arg2, arg3);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::InvocationExpression4::GetArgument(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::InvocationExpression4*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::InvocationExpression4::get_ArgumentCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::InvocationExpression4*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Linq::Expressions::InvocationExpression* System::Linq::Expressions::InvocationExpression4::Rewrite(::System::Linq::Expressions::Expression* lambda,
                                                                                                                    ::ArrayW<::System::Linq::Expressions::Expression*> arguments) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::InvocationExpression4*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::InvocationExpression*>(this, ___internal_method, lambda, arguments);
}
inline ::System::Linq::Expressions::InvocationExpression4* System::Linq::Expressions::InvocationExpression4::New_ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType,
                                                                                                                      ::System::Linq::Expressions::Expression* arg0,
                                                                                                                      ::System::Linq::Expressions::Expression* arg1,
                                                                                                                      ::System::Linq::Expressions::Expression* arg2,
                                                                                                                      ::System::Linq::Expressions::Expression* arg3) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::InvocationExpression4*>(lambda, returnType, arg0, arg1, arg2, arg3));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::InvocationExpression4::InvocationExpression4() {}
