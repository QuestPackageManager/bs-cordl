#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\IncrementInstruction_IncrementDouble.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__IncrementInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__IncrementInstruction_IncrementDouble_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IncrementInstruction_IncrementDouble.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::IncrementInstruction_IncrementDouble::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::IncrementInstruction_IncrementDouble::Run)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f97c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IncrementInstruction_IncrementDouble*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::IncrementInstruction_IncrementDouble*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IncrementInstruction_IncrementDouble._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IncrementInstruction_IncrementDouble::*)()>(&::GlobalNamespace::IncrementInstruction_IncrementDouble::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f977fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IncrementInstruction_IncrementDouble*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::IncrementInstruction_IncrementDouble::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IncrementInstruction_IncrementDouble*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::IncrementInstruction_IncrementDouble::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IncrementInstruction_IncrementDouble*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::IncrementInstruction_IncrementDouble* GlobalNamespace::IncrementInstruction_IncrementDouble::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::IncrementInstruction_IncrementDouble*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IncrementInstruction_IncrementDouble::IncrementInstruction_IncrementDouble() {}
