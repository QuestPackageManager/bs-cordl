#pragma once
// IWYU pragma private; include "System/Linq/Expressions/BlockN.hpp"
#include "System/Linq/Expressions/zzzz__BlockExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__BlockN_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/zzzz__BlockExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::BlockN._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::BlockN::*)(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*)>(
    &::System::Linq::Expressions::BlockN::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f73e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::BlockN*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BlockN.GetExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::BlockN::*)(int32_t)>(
    &::System::Linq::Expressions::BlockN::GetExpression)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f73e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::BlockN*>(), { ::i2c::class_of<::System::Linq::Expressions::BlockN*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BlockN.get_ExpressionCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::BlockN::*)()>(&::System::Linq::Expressions::BlockN::get_ExpressionCount)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f73f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::BlockN*>(), { ::i2c::class_of<::System::Linq::Expressions::BlockN*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BlockN.GetOrMakeExpressions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* (::System::Linq::Expressions::BlockN::*)()>(
    &::System::Linq::Expressions::BlockN::GetOrMakeExpressions)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f73fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::BlockN*>(), { ::i2c::class_of<::System::Linq::Expressions::BlockN*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::BlockN.Rewrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::BlockExpression* (
    ::System::Linq::Expressions::BlockN::*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*,
                                            ::ArrayW<::System::Linq::Expressions::Expression*>)>(&::System::Linq::Expressions::BlockN::Rewrite)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f7400c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::BlockN*>(), { ::i2c::class_of<::System::Linq::Expressions::BlockN*>(), 14 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*& System::Linq::Expressions::BlockN::__cordl_internal_get__expressions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expressions;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* const& System::Linq::Expressions::BlockN::__cordl_internal_get__expressions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expressions;
}
constexpr void System::Linq::Expressions::BlockN::__cordl_internal_set__expressions(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____expressions = value;
}
inline void System::Linq::Expressions::BlockN::_ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* expressions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::BlockN*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expressions);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::BlockN::GetExpression(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::BlockN*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::BlockN::get_ExpressionCount() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::BlockN*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* System::Linq::Expressions::BlockN::GetOrMakeExpressions() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::BlockN*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::BlockExpression*
System::Linq::Expressions::BlockN::Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables,
                                           ::ArrayW<::System::Linq::Expressions::Expression*> args) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::BlockN*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::BlockExpression*>(this, ___internal_method, variables, args);
}
inline ::System::Linq::Expressions::BlockN* System::Linq::Expressions::BlockN::New_ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* expressions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::BlockN*>(expressions));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::BlockN::BlockN() {}
