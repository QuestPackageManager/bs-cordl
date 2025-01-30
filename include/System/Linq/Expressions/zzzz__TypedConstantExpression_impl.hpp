#pragma once
// IWYU pragma private; include "System/Linq/Expressions/TypedConstantExpression.hpp"
#include "System/Linq/Expressions/zzzz__ConstantExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__TypedConstantExpression_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::TypedConstantExpression._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::TypedConstantExpression::*)(::System::Object*, ::System::Type*)>(
    &::System::Linq::Expressions::TypedConstantExpression::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40b0cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::TypedConstantExpression*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::TypedConstantExpression.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Linq::Expressions::TypedConstantExpression::*)()>(
    &::System::Linq::Expressions::TypedConstantExpression::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40b0cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::TypedConstantExpression*>::get(),
                                                                               "get_Type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Linq::Expressions::TypedConstantExpression::__cordl_internal_get__Type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr ::System::Type* const& System::Linq::Expressions::TypedConstantExpression::__cordl_internal_get__Type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr void System::Linq::Expressions::TypedConstantExpression::__cordl_internal_set__Type_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Type_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::TypedConstantExpression::_ctor(::System::Object* value, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::TypedConstantExpression*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, type);
}
inline ::System::Type* System::Linq::Expressions::TypedConstantExpression::get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::TypedConstantExpression*>::get(),
                                                                             "get_Type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::TypedConstantExpression* System::Linq::Expressions::TypedConstantExpression::New_ctor(::System::Object* value, ::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::TypedConstantExpression*>(value, type));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::TypedConstantExpression::TypedConstantExpression() {}
