#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Block5.hpp"
#include "System/Linq/Expressions/zzzz__BlockExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__Block5_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__BlockExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Block5._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Linq::Expressions::Block5::*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*,
                                                              ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Block5::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f79468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Block5*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                                 ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                                 ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Block5.GetExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::Block5::*)(int32_t)>(
    &::System::Linq::Expressions::Block5::GetExpression)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5f794b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Block5*>(), { ::i2c::class_of<::System::Linq::Expressions::Block5*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Block5.get_ExpressionCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Block5::*)()>(&::System::Linq::Expressions::Block5::get_ExpressionCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f79590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Block5*>(), { ::i2c::class_of<::System::Linq::Expressions::Block5*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Block5.GetOrMakeExpressions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* (::System::Linq::Expressions::Block5::*)()>(
    &::System::Linq::Expressions::Block5::GetOrMakeExpressions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f79598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Block5*>(), { ::i2c::class_of<::System::Linq::Expressions::Block5*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Block5.Rewrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::BlockExpression* (
    ::System::Linq::Expressions::Block5::*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*,
                                            ::ArrayW<::System::Linq::Expressions::Expression*>)>(&::System::Linq::Expressions::Block5::Rewrite)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f795a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Block5*>(), { ::i2c::class_of<::System::Linq::Expressions::Block5*>(), 14 }));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Linq::Expressions::Block5::__cordl_internal_get__arg0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg0;
}
constexpr ::System::Object* const& System::Linq::Expressions::Block5::__cordl_internal_get__arg0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg0;
}
constexpr void System::Linq::Expressions::Block5::__cordl_internal_set__arg0(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arg0 = value;
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::Block5::__cordl_internal_get__arg1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg1;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::Block5::__cordl_internal_get__arg1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg1;
}
constexpr void System::Linq::Expressions::Block5::__cordl_internal_set__arg1(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arg1 = value;
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::Block5::__cordl_internal_get__arg2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg2;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::Block5::__cordl_internal_get__arg2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg2;
}
constexpr void System::Linq::Expressions::Block5::__cordl_internal_set__arg2(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arg2 = value;
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::Block5::__cordl_internal_get__arg3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg3;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::Block5::__cordl_internal_get__arg3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg3;
}
constexpr void System::Linq::Expressions::Block5::__cordl_internal_set__arg3(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arg3 = value;
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::Block5::__cordl_internal_get__arg4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg4;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::Block5::__cordl_internal_get__arg4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg4;
}
constexpr void System::Linq::Expressions::Block5::__cordl_internal_set__arg4(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arg4 = value;
}
inline void System::Linq::Expressions::Block5::_ctor(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2,
                                                     ::System::Linq::Expressions::Expression* arg3, ::System::Linq::Expressions::Expression* arg4) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Block5*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                               ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                               ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg0, arg1, arg2, arg3, arg4);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::Block5::GetExpression(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Block5*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::Block5::get_ExpressionCount() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Block5*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* System::Linq::Expressions::Block5::GetOrMakeExpressions() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Block5*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::BlockExpression*
System::Linq::Expressions::Block5::Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                           ::ArrayW<::System::Linq::Expressions::Expression*> args) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Block5*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::BlockExpression*>(this, ___internal_method, variables, args);
}
inline ::System::Linq::Expressions::Block5* System::Linq::Expressions::Block5::New_ctor(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1,
                                                                                        ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3,
                                                                                        ::System::Linq::Expressions::Expression* arg4) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Block5*>(arg0, arg1, arg2, arg3, arg4));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Block5::Block5() {}
