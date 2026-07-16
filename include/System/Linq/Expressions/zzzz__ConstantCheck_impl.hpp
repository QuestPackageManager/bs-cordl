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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::AnalyzeTypeIsResult (*)(::System::Linq::Expressions::TypeBinaryExpression*)>(
    &::System::Linq::Expressions::ConstantCheck::AnalyzeTypeIs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f74da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ConstantCheck*>(),
                                                                                           { "AnalyzeTypeIs", {}, { ::i2c::type_of<::System::Linq::Expressions::TypeBinaryExpression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ConstantCheck.AnalyzeTypeIs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::AnalyzeTypeIsResult (*)(::System::Linq::Expressions::Expression*, ::System::Type*)>(
    &::System::Linq::Expressions::ConstantCheck::AnalyzeTypeIs)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5f74dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ConstantCheck*>(),
                                                             { "AnalyzeTypeIs", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline ::System::Linq::Expressions::AnalyzeTypeIsResult System::Linq::Expressions::ConstantCheck::AnalyzeTypeIs(::System::Linq::Expressions::TypeBinaryExpression* typeIs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ConstantCheck*>(),
                                                                                         { "AnalyzeTypeIs", {}, { ::i2c::type_of<::System::Linq::Expressions::TypeBinaryExpression*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::AnalyzeTypeIsResult>(nullptr, ___internal_method, typeIs);
}
inline ::System::Linq::Expressions::AnalyzeTypeIsResult System::Linq::Expressions::ConstantCheck::AnalyzeTypeIs(::System::Linq::Expressions::Expression* operand, ::System::Type* testType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ConstantCheck*>(),
                                                           { "AnalyzeTypeIs", {}, { ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::AnalyzeTypeIsResult>(nullptr, ___internal_method, operand, testType);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::ConstantCheck::ConstantCheck() {}
