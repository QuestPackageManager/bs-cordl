#pragma once
// IWYU pragma private; include "System\Linq\Expressions\InstanceMethodCallExpression0.hpp"
#include "System/Linq/Expressions/zzzz__InstanceMethodCallExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__InstanceMethodCallExpression0_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__IArgumentProvider_def.hpp"
#include "System/Linq/Expressions/zzzz__MethodCallExpression_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::InstanceMethodCallExpression0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::InstanceMethodCallExpression0::*)(
    ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::InstanceMethodCallExpression0::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f883e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpression0*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InstanceMethodCallExpression0.GetArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::InstanceMethodCallExpression0::*)(int32_t)>(
    &::System::Linq::Expressions::InstanceMethodCallExpression0::GetArgument)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f88404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpression0*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpression0*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InstanceMethodCallExpression0.get_ArgumentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::InstanceMethodCallExpression0::*)()>(
    &::System::Linq::Expressions::InstanceMethodCallExpression0::get_ArgumentCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f88450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpression0*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpression0*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::InstanceMethodCallExpression0.Rewrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::MethodCallExpression* (
    ::System::Linq::Expressions::InstanceMethodCallExpression0::*)(::System::Linq::Expressions::Expression*,
                                                                   ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*)>(
    &::System::Linq::Expressions::InstanceMethodCallExpression0::Rewrite)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f88458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpression0*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpression0*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::InstanceMethodCallExpression0::_ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* instance) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpression0*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, instance);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::InstanceMethodCallExpression0::GetArgument(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpression0*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::InstanceMethodCallExpression0::get_ArgumentCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpression0*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Linq::Expressions::MethodCallExpression*
System::Linq::Expressions::InstanceMethodCallExpression0::Rewrite(::System::Linq::Expressions::Expression* instance,
                                                                  ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::InstanceMethodCallExpression0*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::MethodCallExpression*>(this, ___internal_method, instance, args);
}
inline ::System::Linq::Expressions::InstanceMethodCallExpression0* System::Linq::Expressions::InstanceMethodCallExpression0::New_ctor(::System::Reflection::MethodInfo* method,
                                                                                                                                      ::System::Linq::Expressions::Expression* instance) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::InstanceMethodCallExpression0*>(method, instance));
}
/// @brief Convert operator to "::System::Linq::Expressions::IArgumentProvider"
constexpr System::Linq::Expressions::InstanceMethodCallExpression0::operator ::System::Linq::Expressions::IArgumentProvider*() noexcept {
  return static_cast<::System::Linq::Expressions::IArgumentProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::Expressions::IArgumentProvider"
constexpr ::System::Linq::Expressions::IArgumentProvider* System::Linq::Expressions::InstanceMethodCallExpression0::i___System__Linq__Expressions__IArgumentProvider() noexcept {
  return static_cast<::System::Linq::Expressions::IArgumentProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::InstanceMethodCallExpression0::InstanceMethodCallExpression0() {}
