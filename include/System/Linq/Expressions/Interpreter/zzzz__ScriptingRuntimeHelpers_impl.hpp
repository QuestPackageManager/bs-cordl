#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\ScriptingRuntimeHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ScriptingRuntimeHelpers_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers.Int32ToObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(int32_t)>(&::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers::Int32ToObject)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5fb4884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers*>(), { "Int32ToObject", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers.GetPrimitiveDefaultValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers::GetPrimitiveDefaultValue)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5fc09d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers*>(),
                                                                                           { "GetPrimitiveDefaultValue", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline ::System::Object* System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers::Int32ToObject(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers*>(), { "Int32ToObject", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, i);
}
inline ::System::Object* System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers::GetPrimitiveDefaultValue(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers*>(),
                                                                                         { "GetPrimitiveDefaultValue", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers::ScriptingRuntimeHelpers() {}
