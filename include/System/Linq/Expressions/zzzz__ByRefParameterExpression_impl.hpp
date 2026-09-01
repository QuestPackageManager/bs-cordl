#pragma once
// IWYU pragma private; include "System\Linq\Expressions\ByRefParameterExpression.hpp"
#include "System/Linq/Expressions/zzzz__TypedParameterExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__ByRefParameterExpression_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::ByRefParameterExpression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::ByRefParameterExpression::*)(::System::Type*, ::StringW)>(
    &::System::Linq::Expressions::ByRefParameterExpression::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f89458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ByRefParameterExpression*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::ByRefParameterExpression.GetIsByRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::ByRefParameterExpression::*)()>(&::System::Linq::Expressions::ByRefParameterExpression::GetIsByRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f89518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ByRefParameterExpression*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::ByRefParameterExpression*>(), 10 }));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::ByRefParameterExpression::_ctor(::System::Type* type, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::ByRefParameterExpression*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, name);
}
inline bool System::Linq::Expressions::ByRefParameterExpression::GetIsByRef() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::ByRefParameterExpression*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Linq::Expressions::ByRefParameterExpression* System::Linq::Expressions::ByRefParameterExpression::New_ctor(::System::Type* type, ::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::ByRefParameterExpression*>(type, name));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::ByRefParameterExpression::ByRefParameterExpression() {}
