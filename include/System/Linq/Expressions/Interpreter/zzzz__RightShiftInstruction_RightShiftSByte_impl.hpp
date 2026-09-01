#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\RightShiftInstruction_RightShiftSByte.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RightShiftInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RightShiftInstruction_RightShiftSByte_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RightShiftInstruction_RightShiftSByte.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RightShiftInstruction_RightShiftSByte::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::RightShiftInstruction_RightShiftSByte::Run)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5fbc594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RightShiftInstruction_RightShiftSByte*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::RightShiftInstruction_RightShiftSByte*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RightShiftInstruction_RightShiftSByte._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RightShiftInstruction_RightShiftSByte::*)()>(&::GlobalNamespace::RightShiftInstruction_RightShiftSByte::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fbc574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RightShiftInstruction_RightShiftSByte*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::RightShiftInstruction_RightShiftSByte::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RightShiftInstruction_RightShiftSByte*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::RightShiftInstruction_RightShiftSByte::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RightShiftInstruction_RightShiftSByte*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RightShiftInstruction_RightShiftSByte* GlobalNamespace::RightShiftInstruction_RightShiftSByte::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RightShiftInstruction_RightShiftSByte*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RightShiftInstruction_RightShiftSByte::RightShiftInstruction_RightShiftSByte() {}
