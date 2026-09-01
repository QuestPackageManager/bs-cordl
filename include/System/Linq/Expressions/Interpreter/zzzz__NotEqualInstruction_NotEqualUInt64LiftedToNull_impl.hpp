#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\NotEqualInstruction_NotEqualUInt64LiftedToNull.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NotEqualInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NotEqualInstruction_NotEqualUInt64LiftedToNull_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NotEqualInstruction_NotEqualUInt64LiftedToNull.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NotEqualInstruction_NotEqualUInt64LiftedToNull::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::NotEqualInstruction_NotEqualUInt64LiftedToNull::Run)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5fb8e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NotEqualInstruction_NotEqualUInt64LiftedToNull*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::NotEqualInstruction_NotEqualUInt64LiftedToNull*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NotEqualInstruction_NotEqualUInt64LiftedToNull._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NotEqualInstruction_NotEqualUInt64LiftedToNull::*)()>(
    &::GlobalNamespace::NotEqualInstruction_NotEqualUInt64LiftedToNull::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fb7ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NotEqualInstruction_NotEqualUInt64LiftedToNull*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::NotEqualInstruction_NotEqualUInt64LiftedToNull::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NotEqualInstruction_NotEqualUInt64LiftedToNull*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::NotEqualInstruction_NotEqualUInt64LiftedToNull::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NotEqualInstruction_NotEqualUInt64LiftedToNull*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NotEqualInstruction_NotEqualUInt64LiftedToNull* GlobalNamespace::NotEqualInstruction_NotEqualUInt64LiftedToNull::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NotEqualInstruction_NotEqualUInt64LiftedToNull*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NotEqualInstruction_NotEqualUInt64LiftedToNull::NotEqualInstruction_NotEqualUInt64LiftedToNull() {}
