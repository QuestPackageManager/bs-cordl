#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\MulInstruction_MulDouble.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__MulInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__MulInstruction_MulDouble_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MulInstruction_MulDouble.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MulInstruction_MulDouble::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::MulInstruction_MulDouble::Run)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5fb5b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MulInstruction_MulDouble*>(), { ::i2c::class_of<::GlobalNamespace::MulInstruction_MulDouble*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MulInstruction_MulDouble._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MulInstruction_MulDouble::*)()>(&::GlobalNamespace::MulInstruction_MulDouble::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fb53d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MulInstruction_MulDouble*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::MulInstruction_MulDouble::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MulInstruction_MulDouble*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::MulInstruction_MulDouble::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MulInstruction_MulDouble*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MulInstruction_MulDouble* GlobalNamespace::MulInstruction_MulDouble::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MulInstruction_MulDouble*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MulInstruction_MulDouble::MulInstruction_MulDouble() {}
