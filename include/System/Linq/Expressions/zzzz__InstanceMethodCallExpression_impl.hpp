#pragma once
// IWYU pragma private; include "System\Linq\Expressions\InstanceMethodCallExpression.hpp"
#include "System/Linq/Expressions/zzzz__MethodCallExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__InstanceMethodCallExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__IArgumentProvider_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::InstanceMethodCallExpression._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::InstanceMethodCallExpression::*)(
    ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::InstanceMethodCallExpression::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f86fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpression*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InstanceMethodCallExpression.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::InstanceMethodCallExpression::*)()>(
    &::System::Linq::Expressions::InstanceMethodCallExpression::GetInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f86fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpression*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpression*>(), 12 }));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::InstanceMethodCallExpression::__cordl_internal_get__instance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instance;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::InstanceMethodCallExpression::__cordl_internal_get__instance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instance;
}
constexpr void System::Linq::Expressions::InstanceMethodCallExpression::__cordl_internal_set__instance(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instance = value;
}
inline void System::Linq::Expressions::InstanceMethodCallExpression::_ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpression*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, instance);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::InstanceMethodCallExpression::GetInstance() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpression*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method);
}
inline ::System::Linq::Expressions::InstanceMethodCallExpression* System::Linq::Expressions::InstanceMethodCallExpression::New_ctor(::System::Reflection::MethodInfo* method,
                                                                                                                                    ::System::Linq::Expressions::Expression* instance) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::InstanceMethodCallExpression*>(method, instance));
}
/// @brief Convert operator to "::System::Linq::Expressions::IArgumentProvider"
constexpr System::Linq::Expressions::InstanceMethodCallExpression::operator ::System::Linq::Expressions::IArgumentProvider*() noexcept {
  return static_cast<::System::Linq::Expressions::IArgumentProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::Expressions::IArgumentProvider"
constexpr ::System::Linq::Expressions::IArgumentProvider* System::Linq::Expressions::InstanceMethodCallExpression::i___System__Linq__Expressions__IArgumentProvider() noexcept {
  return static_cast<::System::Linq::Expressions::IArgumentProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::InstanceMethodCallExpression::InstanceMethodCallExpression() {}
