#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\EqualInstruction_EqualInt64LiftedToNull.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EqualInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EqualInstruction_EqualInt64LiftedToNull_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull::Run)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f93e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull::*)()>(&::GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f932a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull* GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EqualInstruction_EqualInt64LiftedToNull::EqualInstruction_EqualInt64LiftedToNull() {}
