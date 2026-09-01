#pragma once
// IWYU pragma private; include "System\Linq\Expressions\InstanceMethodCallExpressionN.hpp"
#include "System/Linq/Expressions/zzzz__InstanceMethodCallExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__InstanceMethodCallExpressionN_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__IArgumentProvider_def.hpp"
#include "System/Linq/Expressions/zzzz__MethodCallExpression_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::InstanceMethodCallExpressionN._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::InstanceMethodCallExpressionN::*)(
    ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*)>(
    &::System::Linq::Expressions::InstanceMethodCallExpressionN::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f871c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpressionN*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InstanceMethodCallExpressionN.GetArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::InstanceMethodCallExpressionN::*)(int32_t)>(
    &::System::Linq::Expressions::InstanceMethodCallExpressionN::GetArgument)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f871f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpressionN*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpressionN*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InstanceMethodCallExpressionN.get_ArgumentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::InstanceMethodCallExpressionN::*)()>(
    &::System::Linq::Expressions::InstanceMethodCallExpressionN::get_ArgumentCount)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f872a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpressionN*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpressionN*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InstanceMethodCallExpressionN.Rewrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::MethodCallExpression* (
    ::System::Linq::Expressions::InstanceMethodCallExpressionN::*)(::System::Linq::Expressions::Expression*,
                                                                   ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*)>(
    &::System::Linq::Expressions::InstanceMethodCallExpressionN::Rewrite)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f87348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpressionN*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpressionN*>(), 13 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*& System::Linq::Expressions::InstanceMethodCallExpressionN::__cordl_internal_get__arguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* const&
System::Linq::Expressions::InstanceMethodCallExpressionN::__cordl_internal_get__arguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr void
System::Linq::Expressions::InstanceMethodCallExpressionN::__cordl_internal_set__arguments(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arguments = value;
}
inline void System::Linq::Expressions::InstanceMethodCallExpressionN::_ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* instance,
                                                                            ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpressionN*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, instance, args);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::InstanceMethodCallExpressionN::GetArgument(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpressionN*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::InstanceMethodCallExpressionN::get_ArgumentCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpressionN*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Linq::Expressions::MethodCallExpression*
System::Linq::Expressions::InstanceMethodCallExpressionN::Rewrite(::System::Linq::Expressions::Expression* instance,
                                                                  ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpressionN*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::MethodCallExpression*>(this, ___internal_method, instance, args);
}
inline ::System::Linq::Expressions::InstanceMethodCallExpressionN*
System::Linq::Expressions::InstanceMethodCallExpressionN::New_ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* instance,
                                                                   ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::InstanceMethodCallExpressionN*>(method, instance, args));
}
/// @brief Convert operator to "::System::Linq::Expressions::IArgumentProvider"
constexpr System::Linq::Expressions::InstanceMethodCallExpressionN::operator ::System::Linq::Expressions::IArgumentProvider*() noexcept {
  return static_cast<::System::Linq::Expressions::IArgumentProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::Expressions::IArgumentProvider"
constexpr ::System::Linq::Expressions::IArgumentProvider* System::Linq::Expressions::InstanceMethodCallExpressionN::i___System__Linq__Expressions__IArgumentProvider() noexcept {
  return static_cast<::System::Linq::Expressions::IArgumentProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::InstanceMethodCallExpressionN::InstanceMethodCallExpressionN() {}
