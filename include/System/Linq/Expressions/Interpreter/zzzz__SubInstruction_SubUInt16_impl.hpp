#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\SubInstruction_SubUInt16.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__SubInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__SubInstruction_SubUInt16_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SubInstruction_SubUInt16.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SubInstruction_SubUInt16::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::SubInstruction_SubUInt16::Run)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5fbd828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SubInstruction_SubUInt16*>(), { ::i2c::class_of<::GlobalNamespace::SubInstruction_SubUInt16*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SubInstruction_SubUInt16._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SubInstruction_SubUInt16::*)()>(&::GlobalNamespace::SubInstruction_SubUInt16::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fbd4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SubInstruction_SubUInt16*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::SubInstruction_SubUInt16::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SubInstruction_SubUInt16*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::SubInstruction_SubUInt16::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SubInstruction_SubUInt16*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SubInstruction_SubUInt16* GlobalNamespace::SubInstruction_SubUInt16::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SubInstruction_SubUInt16*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SubInstruction_SubUInt16::SubInstruction_SubUInt16() {}
