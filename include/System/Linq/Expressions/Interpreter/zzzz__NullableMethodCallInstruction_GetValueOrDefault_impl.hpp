#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NullableMethodCallInstruction_GetValueOrDefault.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_GetValueOrDefault_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault::*)(::System::Reflection::MethodInfo*)>(
    &::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5fb993c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault::Run)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fb9a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::System::Type*& GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault::__cordl_internal_get__defaultValueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValueType;
}
constexpr ::System::Type* const& GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault::__cordl_internal_get__defaultValueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValueType;
}
constexpr void GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault::__cordl_internal_set__defaultValueType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultValueType = value;
}
inline void GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault::_ctor(::System::Reflection::MethodInfo* mi) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mi);
}
inline int32_t GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault* GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault::New_ctor(::System::Reflection::MethodInfo* mi) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault*>(mi));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault::NullableMethodCallInstruction_GetValueOrDefault() {}
