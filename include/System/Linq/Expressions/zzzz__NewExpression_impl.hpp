#pragma once
// IWYU pragma private; include "System/Linq/Expressions/NewExpression.hpp"
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
#include "System/Linq/Expressions/zzzz__NewExpression_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::NewExpression.get_Constructor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (::System::Linq::Expressions::NewExpression::*)()>(
    &::System::Linq::Expressions::NewExpression::get_Constructor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c2c590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::NewExpression*>::get(),
                                                                               "get_Constructor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::NewExpression.GetArgument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::NewExpression::*)(int32_t)>(
    &::System::Linq::Expressions::NewExpression::GetArgument)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2c2c598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::NewExpression*>::get(), "GetArgument", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*& System::Linq::Expressions::NewExpression::__cordl_internal_get__arguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*> const&
System::Linq::Expressions::NewExpression::__cordl_internal_get__arguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr void System::Linq::Expressions::NewExpression::__cordl_internal_set__arguments(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arguments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::ConstructorInfo*& System::Linq::Expressions::NewExpression::__cordl_internal_get__Constructor_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Constructor_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ConstructorInfo*> const& System::Linq::Expressions::NewExpression::__cordl_internal_get__Constructor_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Constructor_k__BackingField;
}
constexpr void System::Linq::Expressions::NewExpression::__cordl_internal_set__Constructor_k__BackingField(::System::Reflection::ConstructorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Constructor_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Reflection::ConstructorInfo* System::Linq::Expressions::NewExpression::get_Constructor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::NewExpression*>::get(),
                                                                             "get_Constructor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::NewExpression::GetArgument(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::NewExpression*>::get(), "GetArgument",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::NewExpression::NewExpression() {}
