#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Block3.hpp"
#include "System/Linq/Expressions/zzzz__BlockExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__Block3_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__BlockExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Block3._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Block3::*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*,
                                                                                                     ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Block3::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f79114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Block3*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                                 ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Block3.GetExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::Block3::*)(int32_t)>(
    &::System::Linq::Expressions::Block3::GetExpression)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f7914c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Block3*>(), { ::i2c::class_of<::System::Linq::Expressions::Block3*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Block3.get_ExpressionCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Block3::*)()>(&::System::Linq::Expressions::Block3::get_ExpressionCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f79200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Block3*>(), { ::i2c::class_of<::System::Linq::Expressions::Block3*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Block3.GetOrMakeExpressions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* (::System::Linq::Expressions::Block3::*)()>(
    &::System::Linq::Expressions::Block3::GetOrMakeExpressions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f79208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Block3*>(), { ::i2c::class_of<::System::Linq::Expressions::Block3*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Block3.Rewrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::BlockExpression* (
    ::System::Linq::Expressions::Block3::*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*,
                                            ::ArrayW<::System::Linq::Expressions::Expression*>)>(&::System::Linq::Expressions::Block3::Rewrite)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f79210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Block3*>(), { ::i2c::class_of<::System::Linq::Expressions::Block3*>(), 14 }));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Linq::Expressions::Block3::__cordl_internal_get__arg0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg0;
}
constexpr ::System::Object* const& System::Linq::Expressions::Block3::__cordl_internal_get__arg0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg0;
}
constexpr void System::Linq::Expressions::Block3::__cordl_internal_set__arg0(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arg0 = value;
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::Block3::__cordl_internal_get__arg1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg1;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::Block3::__cordl_internal_get__arg1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg1;
}
constexpr void System::Linq::Expressions::Block3::__cordl_internal_set__arg1(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arg1 = value;
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::Block3::__cordl_internal_get__arg2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg2;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::Block3::__cordl_internal_get__arg2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg2;
}
constexpr void System::Linq::Expressions::Block3::__cordl_internal_set__arg2(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arg2 = value;
}
inline void System::Linq::Expressions::Block3::_ctor(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Block3*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                               ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg0, arg1, arg2);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::Block3::GetExpression(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Block3*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::Block3::get_ExpressionCount() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Block3*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* System::Linq::Expressions::Block3::GetOrMakeExpressions() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Block3*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::BlockExpression*
System::Linq::Expressions::Block3::Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                           ::ArrayW<::System::Linq::Expressions::Expression*> args) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Block3*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::BlockExpression*>(this, ___internal_method, variables, args);
}
inline ::System::Linq::Expressions::Block3* System::Linq::Expressions::Block3::New_ctor(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1,
                                                                                        ::System::Linq::Expressions::Expression* arg2) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Block3*>(arg0, arg1, arg2));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Block3::Block3() {}
