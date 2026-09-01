#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\MulOvfInstruction_MulOvfUInt32.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__MulOvfInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__MulOvfInstruction_MulOvfUInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MulOvfInstruction_MulOvfUInt32.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MulOvfInstruction_MulOvfUInt32::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::MulOvfInstruction_MulOvfUInt32::Run)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5fb64a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MulOvfInstruction_MulOvfUInt32*>(), { ::i2c::class_of<::GlobalNamespace::MulOvfInstruction_MulOvfUInt32*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MulOvfInstruction_MulOvfUInt32._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MulOvfInstruction_MulOvfUInt32::*)()>(&::GlobalNamespace::MulOvfInstruction_MulOvfUInt32::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fb5f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MulOvfInstruction_MulOvfUInt32*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::MulOvfInstruction_MulOvfUInt32::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MulOvfInstruction_MulOvfUInt32*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::MulOvfInstruction_MulOvfUInt32::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MulOvfInstruction_MulOvfUInt32*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MulOvfInstruction_MulOvfUInt32* GlobalNamespace::MulOvfInstruction_MulOvfUInt32::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MulOvfInstruction_MulOvfUInt32*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MulOvfInstruction_MulOvfUInt32::MulOvfInstruction_MulOvfUInt32() {}
