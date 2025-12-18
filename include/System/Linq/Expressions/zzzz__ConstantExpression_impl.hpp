#pragma once
// IWYU pragma private; include "System/Linq/Expressions/ConstantExpression.hpp"
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
#include "System/Linq/Expressions/zzzz__ConstantExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::ConstantExpression._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::ConstantExpression::*)(::System::Object*)>(
    &::System::Linq::Expressions::ConstantExpression::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5dc6058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ConstantExpression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ConstantExpression.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Linq::Expressions::ConstantExpression::*)()>(
    &::System::Linq::Expressions::ConstantExpression::get_Type)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dc60bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ConstantExpression*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ConstantExpression*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ConstantExpression.get_NodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::ExpressionType (::System::Linq::Expressions::ConstantExpression::*)()>(
    &::System::Linq::Expressions::ConstantExpression::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dc6100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ConstantExpression*>::get(),
                                                                               "get_NodeType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ConstantExpression.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Linq::Expressions::ConstantExpression::*)()>(
    &::System::Linq::Expressions::ConstantExpression::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dc6108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ConstantExpression*>::get(),
                                                                               "get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ConstantExpression.Accept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (
    ::System::Linq::Expressions::ConstantExpression::*)(::System::Linq::Expressions::ExpressionVisitor*)>(&::System::Linq::Expressions::ConstantExpression::Accept)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5dc6110;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ConstantExpression*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ConstantExpression*>::get(), 9));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Linq::Expressions::ConstantExpression::__cordl_internal_get__Value_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
constexpr ::System::Object* const& System::Linq::Expressions::ConstantExpression::__cordl_internal_get__Value_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
constexpr void System::Linq::Expressions::ConstantExpression::__cordl_internal_set__Value_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Value_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::ConstantExpression::_ctor(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ConstantExpression*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Type* System::Linq::Expressions::ConstantExpression::get_Type() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ConstantExpression*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::ExpressionType System::Linq::Expressions::ConstantExpression::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ConstantExpression*>::get(),
                                                                             "get_NodeType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ExpressionType, false>(this, ___internal_method);
}
inline ::System::Object* System::Linq::Expressions::ConstantExpression::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ConstantExpression*>::get(),
                                                                             "get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::ConstantExpression::Accept(::System::Linq::Expressions::ExpressionVisitor* visitor) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ConstantExpression*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, visitor);
}
inline ::System::Linq::Expressions::ConstantExpression* System::Linq::Expressions::ConstantExpression::New_ctor(::System::Object* value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::ConstantExpression*>(value));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::ConstantExpression::ConstantExpression() {}
