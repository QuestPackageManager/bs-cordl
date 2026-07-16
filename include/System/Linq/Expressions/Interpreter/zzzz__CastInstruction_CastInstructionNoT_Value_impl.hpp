#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/CastInstruction_CastInstructionNoT_Value.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_CastInstructionNoT_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_CastInstructionNoT_Value_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CastInstructionNoT_CastInstruction_Value._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CastInstructionNoT_CastInstruction_Value::*)(::System::Type*)>(
    &::GlobalNamespace::CastInstructionNoT_CastInstruction_Value::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fba3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CastInstructionNoT_CastInstruction_Value*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CastInstructionNoT_CastInstruction_Value.ConvertNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CastInstructionNoT_CastInstruction_Value::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::CastInstructionNoT_CastInstruction_Value::ConvertNull)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fba574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CastInstructionNoT_CastInstruction_Value*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::CastInstructionNoT_CastInstruction_Value*>(), 11 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CastInstructionNoT_CastInstruction_Value::_ctor(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CastInstructionNoT_CastInstruction_Value*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GlobalNamespace::CastInstructionNoT_CastInstruction_Value::ConvertNull(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CastInstructionNoT_CastInstruction_Value*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline ::GlobalNamespace::CastInstructionNoT_CastInstruction_Value* GlobalNamespace::CastInstructionNoT_CastInstruction_Value::New_ctor(::System::Type* t) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CastInstructionNoT_CastInstruction_Value*>(t));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CastInstructionNoT_CastInstruction_Value::CastInstructionNoT_CastInstruction_Value() {}
