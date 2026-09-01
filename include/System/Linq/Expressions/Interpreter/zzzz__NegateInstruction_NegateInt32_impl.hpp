#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\NegateInstruction_NegateInt32.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NegateInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NegateInstruction_NegateInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NegateInstruction_NegateInt32.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NegateInstruction_NegateInt32::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::NegateInstruction_NegateInt32::Run)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fb6a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NegateInstruction_NegateInt32*>(), { ::i2c::class_of<::GlobalNamespace::NegateInstruction_NegateInt32*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NegateInstruction_NegateInt32._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NegateInstruction_NegateInt32::*)()>(&::GlobalNamespace::NegateInstruction_NegateInt32::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fb69ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NegateInstruction_NegateInt32*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::NegateInstruction_NegateInt32::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NegateInstruction_NegateInt32*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::NegateInstruction_NegateInt32::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NegateInstruction_NegateInt32*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NegateInstruction_NegateInt32* GlobalNamespace::NegateInstruction_NegateInt32::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NegateInstruction_NegateInt32*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NegateInstruction_NegateInt32::NegateInstruction_NegateInt32() {}
