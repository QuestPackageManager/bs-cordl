#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Scope1.hpp"
#include "System/Linq/Expressions/zzzz__ScopeExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__Scope1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__BlockExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Scope1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Scope1::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Scope1::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f7999c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Scope1*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*>(),
                                                                 ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Scope1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Scope1::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Object*)>(&::System::Linq::Expressions::Scope1::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f799c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Linq::Expressions::Scope1*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Scope1.GetExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::Scope1::*)(int32_t)>(
    &::System::Linq::Expressions::Scope1::GetExpression)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f799ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Scope1*>(), { ::i2c::class_of<::System::Linq::Expressions::Scope1*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Scope1.get_ExpressionCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Scope1::*)()>(&::System::Linq::Expressions::Scope1::get_ExpressionCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f79a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Scope1*>(), { ::i2c::class_of<::System::Linq::Expressions::Scope1*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Scope1.GetOrMakeExpressions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* (::System::Linq::Expressions::Scope1::*)()>(
    &::System::Linq::Expressions::Scope1::GetOrMakeExpressions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f79a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Scope1*>(), { ::i2c::class_of<::System::Linq::Expressions::Scope1*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Scope1.Rewrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::BlockExpression* (
    ::System::Linq::Expressions::Scope1::*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*,
                                            ::ArrayW<::System::Linq::Expressions::Expression*>)>(&::System::Linq::Expressions::Scope1::Rewrite)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f79a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Scope1*>(), { ::i2c::class_of<::System::Linq::Expressions::Scope1*>(), 14 }));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Linq::Expressions::Scope1::__cordl_internal_get__body() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____body;
}
constexpr ::System::Object* const& System::Linq::Expressions::Scope1::__cordl_internal_get__body() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____body;
}
constexpr void System::Linq::Expressions::Scope1::__cordl_internal_set__body(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____body = value;
}
inline void System::Linq::Expressions::Scope1::_ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                     ::System::Linq::Expressions::Expression* body) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Scope1*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*>(),
                                                               ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, variables, body);
}
inline void System::Linq::Expressions::Scope1::_ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* variables, ::System::Object* body) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Linq::Expressions::Scope1*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, variables, body);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::Scope1::GetExpression(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Scope1*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::Scope1::get_ExpressionCount() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Scope1*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* System::Linq::Expressions::Scope1::GetOrMakeExpressions() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Scope1*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::BlockExpression*
System::Linq::Expressions::Scope1::Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                           ::ArrayW<::System::Linq::Expressions::Expression*> args) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Scope1*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::BlockExpression*>(this, ___internal_method, variables, args);
}
inline ::System::Linq::Expressions::Scope1* System::Linq::Expressions::Scope1::New_ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                                                        ::System::Linq::Expressions::Expression* body) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Scope1*>(variables, body));
}
inline ::System::Linq::Expressions::Scope1* System::Linq::Expressions::Scope1::New_ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                                                                        ::System::Object* body) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Scope1*>(variables, body));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Scope1::Scope1() {}
