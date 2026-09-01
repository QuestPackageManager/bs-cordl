#pragma once
// IWYU pragma private; include "System\Linq\Expressions\MethodCallExpression5.hpp"
#include "System/Linq/Expressions/zzzz__MethodCallExpression_impl.hpp"
#include "System/Linq/Expressions/zzzz__MethodCallExpression5_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__IArgumentProvider_def.hpp"
#include "System/Linq/Expressions/zzzz__MethodCallExpression_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::MethodCallExpression5._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::MethodCallExpression5::*)(
    ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*,
    ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::MethodCallExpression5::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f87fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MethodCallExpression5*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                                 ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                                 ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MethodCallExpression5.GetArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::MethodCallExpression5::*)(int32_t)>(
    &::System::Linq::Expressions::MethodCallExpression5::GetArgument)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5f87ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MethodCallExpression5*>(), { ::i2c::class_of<::System::Linq::Expressions::MethodCallExpression5*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MethodCallExpression5.get_ArgumentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::MethodCallExpression5::*)()>(&::System::Linq::Expressions::MethodCallExpression5::get_ArgumentCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f880ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MethodCallExpression5*>(), { ::i2c::class_of<::System::Linq::Expressions::MethodCallExpression5*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::MethodCallExpression5.Rewrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::MethodCallExpression* (
    ::System::Linq::Expressions::MethodCallExpression5::*)(::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*)>(
    &::System::Linq::Expressions::MethodCallExpression5::Rewrite)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x5f880f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MethodCallExpression5*>(), { ::i2c::class_of<::System::Linq::Expressions::MethodCallExpression5*>(), 13 }));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Linq::Expressions::MethodCallExpression5::__cordl_internal_get__arg0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg0;
}
constexpr ::System::Object* const& System::Linq::Expressions::MethodCallExpression5::__cordl_internal_get__arg0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg0;
}
constexpr void System::Linq::Expressions::MethodCallExpression5::__cordl_internal_set__arg0(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arg0 = value;
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::MethodCallExpression5::__cordl_internal_get__arg1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg1;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::MethodCallExpression5::__cordl_internal_get__arg1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg1;
}
constexpr void System::Linq::Expressions::MethodCallExpression5::__cordl_internal_set__arg1(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arg1 = value;
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::MethodCallExpression5::__cordl_internal_get__arg2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg2;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::MethodCallExpression5::__cordl_internal_get__arg2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg2;
}
constexpr void System::Linq::Expressions::MethodCallExpression5::__cordl_internal_set__arg2(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arg2 = value;
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::MethodCallExpression5::__cordl_internal_get__arg3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg3;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::MethodCallExpression5::__cordl_internal_get__arg3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg3;
}
constexpr void System::Linq::Expressions::MethodCallExpression5::__cordl_internal_set__arg3(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arg3 = value;
}
constexpr ::System::Linq::Expressions::Expression*& System::Linq::Expressions::MethodCallExpression5::__cordl_internal_get__arg4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg4;
}
constexpr ::System::Linq::Expressions::Expression* const& System::Linq::Expressions::MethodCallExpression5::__cordl_internal_get__arg4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arg4;
}
constexpr void System::Linq::Expressions::MethodCallExpression5::__cordl_internal_set__arg4(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arg4 = value;
}
inline void System::Linq::Expressions::MethodCallExpression5::_ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0,
                                                                    ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2,
                                                                    ::System::Linq::Expressions::Expression* arg3, ::System::Linq::Expressions::Expression* arg4) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::MethodCallExpression5*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                               ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>(),
                                                               ::i2c::type_of<::System::Linq::Expressions::Expression*>(), ::i2c::type_of<::System::Linq::Expressions::Expression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, arg0, arg1, arg2, arg3, arg4);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::MethodCallExpression5::GetArgument(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::MethodCallExpression5*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::MethodCallExpression5::get_ArgumentCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::MethodCallExpression5*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Linq::Expressions::MethodCallExpression*
System::Linq::Expressions::MethodCallExpression5::Rewrite(::System::Linq::Expressions::Expression* instance,
                                                          ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::MethodCallExpression5*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::MethodCallExpression*>(this, ___internal_method, instance, args);
}
inline ::System::Linq::Expressions::MethodCallExpression5*
System::Linq::Expressions::MethodCallExpression5::New_ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1,
                                                           ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3,
                                                           ::System::Linq::Expressions::Expression* arg4) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::MethodCallExpression5*>(method, arg0, arg1, arg2, arg3, arg4));
}
/// @brief Convert operator to "::System::Linq::Expressions::IArgumentProvider"
constexpr System::Linq::Expressions::MethodCallExpression5::operator ::System::Linq::Expressions::IArgumentProvider*() noexcept {
  return static_cast<::System::Linq::Expressions::IArgumentProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::Expressions::IArgumentProvider"
constexpr ::System::Linq::Expressions::IArgumentProvider* System::Linq::Expressions::MethodCallExpression5::i___System__Linq__Expressions__IArgumentProvider() noexcept {
  return static_cast<::System::Linq::Expressions::IArgumentProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::MethodCallExpression5::MethodCallExpression5() {}
