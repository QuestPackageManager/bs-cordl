#pragma once
// IWYU pragma private; include "System\Linq\Expressions\IArgumentProvider.hpp"
#include "System/Linq/Expressions/zzzz__IArgumentProvider_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::IArgumentProvider.GetArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::IArgumentProvider::*)(int32_t)>(
    &::System::Linq::Expressions::IArgumentProvider::GetArgument)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IArgumentProvider*>(), { ::i2c::class_of<::System::Linq::Expressions::IArgumentProvider*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::IArgumentProvider.get_ArgumentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::IArgumentProvider::*)()>(&::System::Linq::Expressions::IArgumentProvider::get_ArgumentCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::IArgumentProvider*>(), { ::i2c::class_of<::System::Linq::Expressions::IArgumentProvider*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::IArgumentProvider::GetArgument(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::IArgumentProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::IArgumentProvider::get_ArgumentCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::IArgumentProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
