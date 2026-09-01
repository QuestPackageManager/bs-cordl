#pragma once
// IWYU pragma private; include "System\Linq\Expressions\IndexExpression.hpp"
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
#include "System/Linq/Expressions/zzzz__IndexExpression_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__IArgumentProvider_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::IndexExpression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::IndexExpression::*)(
    ::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*)>(
    &::System::Linq::Expressions::IndexExpression::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f85944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IndexExpression*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Reflection::PropertyInfo*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::IndexExpression.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::ExpressionType (::System::Linq::Expressions::IndexExpression::*)()>(
    &::System::Linq::Expressions::IndexExpression::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f859bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IndexExpression*>(), { "get_NodeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::IndexExpression.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Linq::Expressions::IndexExpression::*)()>(&::System::Linq::Expressions::IndexExpression::get_Type)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f859c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IndexExpression*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::IndexExpression.get_Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::IndexExpression::*)()>(
    &::System::Linq::Expressions::IndexExpression::get_Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f85a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IndexExpression*>(), { "get_Object", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::IndexExpression.get_Indexer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (::System::Linq::Expressions::IndexExpression::*)()>(
    &::System::Linq::Expressions::IndexExpression::get_Indexer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f85a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IndexExpression*>(), { "get_Indexer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::IndexExpression.GetArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::IndexExpression::*)(int32_t)>(
    &::System::Linq::Expressions::IndexExpression::GetArgument)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f840a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IndexExpression*>(), { "GetArgument", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::IndexExpression.get_ArgumentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::IndexExpression::*)()>(&::System::Linq::Expressions::IndexExpression::get_ArgumentCount)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f83ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IndexExpression*>(), { "get_ArgumentCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::IndexExpression.Accept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::IndexExpression::*)(::System::Linq::Expressions::ExpressionVisitor*)>(
    &::System::Linq::Expressions::IndexExpression::Accept)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f85a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IndexExpression*>(), { ::i2c::class_of<::System::Linq::Expressions::IndexExpression*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::IndexExpression.Rewrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::IndexExpression::*)(::System::Linq::Expressions::Expression*,
                                                                                                                                                  ::ArrayW<::System::Linq::Expressions::Expression*>)>(
    &::System::Linq::Expressions::IndexExpression::Rewrite)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f84edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IndexExpression*>(),
                                         { "Rewrite", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Expression*>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*& System::Linq::Expressions::IndexExpression::__cordl_internal_get__arguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* const& System::Linq::Expressions::IndexExpression::__cordl_internal_get__arguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr void System::Linq::Expressions::IndexExpression::__cordl_internal_set__arguments(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arguments = value;
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::IndexExpression::__cordl_internal_get__Object_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Object_k__BackingField;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::IndexExpression::__cordl_internal_get__Object_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Object_k__BackingField;
}
constexpr void System::Linq::Expressions::IndexExpression::__cordl_internal_set__Object_k__BackingField(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Object_k__BackingField = value;
}
constexpr ::System::Reflection::PropertyInfo*& System::Linq::Expressions::IndexExpression::__cordl_internal_get__Indexer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Indexer_k__BackingField;
}
constexpr ::System::Reflection::PropertyInfo* const& System::Linq::Expressions::IndexExpression::__cordl_internal_get__Indexer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Indexer_k__BackingField;
}
constexpr void System::Linq::Expressions::IndexExpression::__cordl_internal_set__Indexer_k__BackingField(::System::Reflection::PropertyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Indexer_k__BackingField = value;
}
inline void System::Linq::Expressions::IndexExpression::_ctor(::System::Linq::Expressions::Expression* instance, ::System::Reflection::PropertyInfo* indexer,
                                                              ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* arguments) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IndexExpression*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Reflection::PropertyInfo*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, indexer, arguments);
}
inline ::System::Linq::Expressions::ExpressionType System::Linq::Expressions::IndexExpression::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IndexExpression*>(), { "get_NodeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ExpressionType>(this, ___internal_method);
}
inline ::System::Type* System::Linq::Expressions::IndexExpression::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IndexExpression*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::IndexExpression::get_Object() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IndexExpression*>(), { "get_Object", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Reflection::PropertyInfo* System::Linq::Expressions::IndexExpression::get_Indexer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IndexExpression*>(), { "get_Indexer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::IndexExpression::GetArgument(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IndexExpression*>(), { "GetArgument", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::IndexExpression::get_ArgumentCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IndexExpression*>(), { "get_ArgumentCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::IndexExpression::Accept(::System::Linq::Expressions::ExpressionVisitor* visitor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::IndexExpression*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, visitor);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::IndexExpression::Rewrite(::System::Linq::Expressions::Expression* instance,
                                                                                                    ::ArrayW<::System::Linq::Expressions::Expression*> arguments) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IndexExpression*>(),
                                       { "Rewrite", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Expression*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, instance, arguments);
}
inline ::System::Linq::Expressions::IndexExpression*
System::Linq::Expressions::IndexExpression::New_ctor(::System::Linq::Expressions::Expression* instance, ::System::Reflection::PropertyInfo* indexer,
                                                     ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* arguments) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::IndexExpression*>(instance, indexer, arguments));
}
/// @brief Convert operator to "::System::Linq::Expressions::IArgumentProvider"
constexpr System::Linq::Expressions::IndexExpression::operator ::System::Linq::Expressions::IArgumentProvider*() noexcept {
  return static_cast<::System::Linq::Expressions::IArgumentProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::Expressions::IArgumentProvider"
constexpr ::System::Linq::Expressions::IArgumentProvider* System::Linq::Expressions::IndexExpression::i___System__Linq__Expressions__IArgumentProvider() noexcept {
  return static_cast<::System::Linq::Expressions::IArgumentProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::IndexExpression::IndexExpression() {}
