#pragma once
// IWYU pragma private; include "System/Linq/Expressions/ConstantCheck.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/zzzz__ConstantCheck_def.hpp"
#include "System/Linq/Expressions/zzzz__AnalyzeTypeIsResult_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__TypeBinaryExpression_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::ConstantCheck.AnalyzeTypeIs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::AnalyzeTypeIsResult (*)(::System::Linq::Expressions::TypeBinaryExpression*)>(
    &::System::Linq::Expressions::ConstantCheck::AnalyzeTypeIs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d5dedc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ConstantCheck*>::get(), "AnalyzeTypeIs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::TypeBinaryExpression*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ConstantCheck.AnalyzeTypeIs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::AnalyzeTypeIsResult (*)(::System::Linq::Expressions::Expression*, ::System::Type*)>(
    &::System::Linq::Expressions::ConstantCheck::AnalyzeTypeIs)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5d5def4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ConstantCheck*>::get(), "AnalyzeTypeIs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Linq::Expressions::AnalyzeTypeIsResult System::Linq::Expressions::ConstantCheck::AnalyzeTypeIs(::System::Linq::Expressions::TypeBinaryExpression* typeIs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ConstantCheck*>::get(), "AnalyzeTypeIs", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::TypeBinaryExpression*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::AnalyzeTypeIsResult, false>(nullptr, ___internal_method, typeIs);
}
inline ::System::Linq::Expressions::AnalyzeTypeIsResult System::Linq::Expressions::ConstantCheck::AnalyzeTypeIs(::System::Linq::Expressions::Expression* operand, ::System::Type* testType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::ConstantCheck*>::get(), "AnalyzeTypeIs", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::AnalyzeTypeIsResult, false>(nullptr, ___internal_method, operand, testType);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::ConstantCheck::ConstantCheck() {}
