#pragma once
// IWYU pragma private; include "System\Linq\Expressions\MethodCallExpression.hpp"
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
#include "System/Linq/Expressions/zzzz__MethodCallExpression_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__IArgumentProvider_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::MethodCallExpression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::MethodCallExpression::*)(::System::Reflection::MethodInfo*)>(
    &::System::Linq::Expressions::MethodCallExpression::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f86e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MethodCallExpression.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::MethodCallExpression::*)()>(
    &::System::Linq::Expressions::MethodCallExpression::GetInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), { ::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MethodCallExpression.get_NodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::ExpressionType (::System::Linq::Expressions::MethodCallExpression::*)()>(
    &::System::Linq::Expressions::MethodCallExpression::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), { "get_NodeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MethodCallExpression.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Linq::Expressions::MethodCallExpression::*)()>(&::System::Linq::Expressions::MethodCallExpression::get_Type)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f86ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MethodCallExpression.get_Method
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Linq::Expressions::MethodCallExpression::*)()>(
    &::System::Linq::Expressions::MethodCallExpression::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), { "get_Method", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MethodCallExpression.get_Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::MethodCallExpression::*)()>(
    &::System::Linq::Expressions::MethodCallExpression::get_Object)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f82e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), { "get_Object", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MethodCallExpression.Accept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::MethodCallExpression::*)(::System::Linq::Expressions::ExpressionVisitor*)>(&::System::Linq::Expressions::MethodCallExpression::Accept)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f86f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), { ::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MethodCallExpression.Rewrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::MethodCallExpression* (
    ::System::Linq::Expressions::MethodCallExpression::*)(::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*)>(
    &::System::Linq::Expressions::MethodCallExpression::Rewrite)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f86f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), { ::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MethodCallExpression.GetArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::MethodCallExpression::*)(int32_t)>(
    &::System::Linq::Expressions::MethodCallExpression::GetArgument)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f86f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), { ::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MethodCallExpression.get_ArgumentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::MethodCallExpression::*)()>(&::System::Linq::Expressions::MethodCallExpression::get_ArgumentCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f86f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), { ::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), 15 }));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MethodInfo*& System::Linq::Expressions::MethodCallExpression::__cordl_internal_get__Method_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Method_k__BackingField;
}
constexpr ::System::Reflection::MethodInfo* const& System::Linq::Expressions::MethodCallExpression::__cordl_internal_get__Method_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Method_k__BackingField;
}
constexpr void System::Linq::Expressions::MethodCallExpression::__cordl_internal_set__Method_k__BackingField(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Method_k__BackingField = value;
}
inline void System::Linq::Expressions::MethodCallExpression::_ctor(::System::Reflection::MethodInfo* method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::MethodCallExpression::GetInstance() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::ExpressionType System::Linq::Expressions::MethodCallExpression::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), { "get_NodeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ExpressionType>(this, ___internal_method);
}
inline ::System::Type* System::Linq::Expressions::MethodCallExpression::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Linq::Expressions::MethodCallExpression::get_Method() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), { "get_Method", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::MethodCallExpression::get_Object() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), { "get_Object", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::MethodCallExpression::Accept(::System::Linq::Expressions::ExpressionVisitor* visitor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, visitor);
}
inline ::System::Linq::Expressions::MethodCallExpression*
System::Linq::Expressions::MethodCallExpression::Rewrite(::System::Linq::Expressions::Expression* instance,
                                                         ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::MethodCallExpression*>(this, ___internal_method, instance, args);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::MethodCallExpression::GetArgument(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::MethodCallExpression::get_ArgumentCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::MethodCallExpression*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Linq::Expressions::MethodCallExpression* System::Linq::Expressions::MethodCallExpression::New_ctor(::System::Reflection::MethodInfo* method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::MethodCallExpression*>(method));
}
/// @brief Convert operator to "::System::Linq::Expressions::IArgumentProvider"
constexpr System::Linq::Expressions::MethodCallExpression::operator ::System::Linq::Expressions::IArgumentProvider*() noexcept {
  return static_cast<::System::Linq::Expressions::IArgumentProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::Expressions::IArgumentProvider"
constexpr ::System::Linq::Expressions::IArgumentProvider* System::Linq::Expressions::MethodCallExpression::i___System__Linq__Expressions__IArgumentProvider() noexcept {
  return static_cast<::System::Linq::Expressions::IArgumentProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::MethodCallExpression::MethodCallExpression() {}
