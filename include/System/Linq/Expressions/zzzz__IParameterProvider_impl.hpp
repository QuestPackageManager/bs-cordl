#pragma once
// IWYU pragma private; include "System/Linq/Expressions/IParameterProvider.hpp"
#include "System/Linq/Expressions/zzzz__IParameterProvider_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::IParameterProvider.GetParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::ParameterExpression* (::System::Linq::Expressions::IParameterProvider::*)(int32_t)>(
    &::System::Linq::Expressions::IParameterProvider::GetParameter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IParameterProvider*>(), { ::i2c::class_of<::System::Linq::Expressions::IParameterProvider*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::IParameterProvider.get_ParameterCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::IParameterProvider::*)()>(&::System::Linq::Expressions::IParameterProvider::get_ParameterCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IParameterProvider*>(), { ::i2c::class_of<::System::Linq::Expressions::IParameterProvider*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Linq::Expressions::ParameterExpression* System::Linq::Expressions::IParameterProvider::GetParameter(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::IParameterProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::ParameterExpression*>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::IParameterProvider::get_ParameterCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::IParameterProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
