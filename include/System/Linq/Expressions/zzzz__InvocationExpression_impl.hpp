#pragma once
// IWYU pragma private; include "System/Linq/Expressions/InvocationExpression.hpp"
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
#include "System/Linq/Expressions/zzzz__IArgumentProvider_impl.hpp"
#include "System/Linq/Expressions/zzzz__InvocationExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Linq::Expressions::InvocationExpression::*)(::System::Linq::Expressions::Expression*, ::System::Type*)>(&::System::Linq::Expressions::InvocationExpression::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x40c6a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Linq::Expressions::InvocationExpression::*)()>(
    &::System::Linq::Expressions::InvocationExpression::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40c6af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression*>::get(),
                                                                               "get_Type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression.get_NodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::ExpressionType (::System::Linq::Expressions::InvocationExpression::*)()>(
    &::System::Linq::Expressions::InvocationExpression::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40c6b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression*>::get(),
                                                                               "get_NodeType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression.get_Expression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::InvocationExpression::*)()>(
    &::System::Linq::Expressions::InvocationExpression::get_Expression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40c6b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression*>::get(),
                                                                               "get_Expression", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression.GetArgument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::InvocationExpression::*)(int32_t)>(
    &::System::Linq::Expressions::InvocationExpression::GetArgument)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40c6b10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression.get_ArgumentCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::InvocationExpression::*)()>(
    &::System::Linq::Expressions::InvocationExpression::get_ArgumentCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40c6b38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression.Accept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::InvocationExpression::*)(::System::Linq::Expressions::ExpressionVisitor*)>(&::System::Linq::Expressions::InvocationExpression::Accept)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40c6b60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InvocationExpression.Rewrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::InvocationExpression* (
    ::System::Linq::Expressions::InvocationExpression::*)(::System::Linq::Expressions::Expression*,
                                                          ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*>)>(
    &::System::Linq::Expressions::InvocationExpression::Rewrite)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40c6b88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression*>::get(), 14));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Linq::Expressions::InvocationExpression::__cordl_internal_get__Type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr ::System::Type* const& System::Linq::Expressions::InvocationExpression::__cordl_internal_get__Type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr void System::Linq::Expressions::InvocationExpression::__cordl_internal_set__Type_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Type_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::InvocationExpression::__cordl_internal_get__Expression_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Expression_k__BackingField;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::InvocationExpression::__cordl_internal_get__Expression_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Expression_k__BackingField;
}
constexpr void System::Linq::Expressions::InvocationExpression::__cordl_internal_set__Expression_k__BackingField(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Expression_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::InvocationExpression::_ctor(::System::Linq::Expressions::Expression* expression, ::System::Type* returnType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expression, returnType);
}
inline ::System::Type* System::Linq::Expressions::InvocationExpression::get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression*>::get(),
                                                                             "get_Type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::ExpressionType System::Linq::Expressions::InvocationExpression::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression*>::get(),
                                                                             "get_NodeType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ExpressionType, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::InvocationExpression::get_Expression() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression*>::get(),
                                                                             "get_Expression", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::InvocationExpression::GetArgument(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::InvocationExpression::get_ArgumentCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::InvocationExpression::Accept(::System::Linq::Expressions::ExpressionVisitor* visitor) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, visitor);
}
inline ::System::Linq::Expressions::InvocationExpression*
System::Linq::Expressions::InvocationExpression::Rewrite(::System::Linq::Expressions::Expression* lambda,
                                                         ::ArrayW<::System::Linq::Expressions::Expression*, ::Array<::System::Linq::Expressions::Expression*>*> arguments) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::InvocationExpression*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::InvocationExpression*, false>(this, ___internal_method, lambda, arguments);
}
inline ::System::Linq::Expressions::InvocationExpression* System::Linq::Expressions::InvocationExpression::New_ctor(::System::Linq::Expressions::Expression* expression, ::System::Type* returnType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::InvocationExpression*>(expression, returnType));
}
/// @brief Convert operator to "::System::Linq::Expressions::IArgumentProvider"
constexpr System::Linq::Expressions::InvocationExpression::operator ::System::Linq::Expressions::IArgumentProvider*() noexcept {
  return static_cast<::System::Linq::Expressions::IArgumentProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::Expressions::IArgumentProvider"
constexpr ::System::Linq::Expressions::IArgumentProvider* System::Linq::Expressions::InvocationExpression::i___System__Linq__Expressions__IArgumentProvider() noexcept {
  return static_cast<::System::Linq::Expressions::IArgumentProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::InvocationExpression::InvocationExpression() {}
