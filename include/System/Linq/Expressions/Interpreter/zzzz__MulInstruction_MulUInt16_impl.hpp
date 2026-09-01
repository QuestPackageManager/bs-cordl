#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\MulInstruction_MulUInt16.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__MulInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__MulInstruction_MulUInt16_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MulInstruction_MulUInt16.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MulInstruction_MulUInt16::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::MulInstruction_MulUInt16::Run)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5fb56f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MulInstruction_MulUInt16*>(), { ::i2c::class_of<::GlobalNamespace::MulInstruction_MulUInt16*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MulInstruction_MulUInt16._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MulInstruction_MulUInt16::*)()>(&::GlobalNamespace::MulInstruction_MulUInt16::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fb53c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MulInstruction_MulUInt16*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::MulInstruction_MulUInt16::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MulInstruction_MulUInt16*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::MulInstruction_MulUInt16::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MulInstruction_MulUInt16*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MulInstruction_MulUInt16* GlobalNamespace::MulInstruction_MulUInt16::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MulInstruction_MulUInt16*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MulInstruction_MulUInt16::MulInstruction_MulUInt16() {}
