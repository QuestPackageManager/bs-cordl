#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\EqualInstruction_EqualByteLiftedToNull.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EqualInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EqualInstruction_EqualByteLiftedToNull_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EqualInstruction_EqualByteLiftedToNull.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::EqualInstruction_EqualByteLiftedToNull::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::EqualInstruction_EqualByteLiftedToNull::Run)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f93f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EqualInstruction_EqualByteLiftedToNull*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::EqualInstruction_EqualByteLiftedToNull*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EqualInstruction_EqualByteLiftedToNull._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EqualInstruction_EqualByteLiftedToNull::*)()>(&::GlobalNamespace::EqualInstruction_EqualByteLiftedToNull::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f932ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EqualInstruction_EqualByteLiftedToNull*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::EqualInstruction_EqualByteLiftedToNull::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EqualInstruction_EqualByteLiftedToNull*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::EqualInstruction_EqualByteLiftedToNull::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EqualInstruction_EqualByteLiftedToNull*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EqualInstruction_EqualByteLiftedToNull* GlobalNamespace::EqualInstruction_EqualByteLiftedToNull::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EqualInstruction_EqualByteLiftedToNull*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EqualInstruction_EqualByteLiftedToNull::EqualInstruction_EqualByteLiftedToNull() {}
