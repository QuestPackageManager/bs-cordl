#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\ModuloInstruction_ModuloInt16.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ModuloInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ModuloInstruction_ModuloInt16_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModuloInstruction_ModuloInt16.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ModuloInstruction_ModuloInt16::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::ModuloInstruction_ModuloInt16::Run)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5fb4670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ModuloInstruction_ModuloInt16*>(), { ::i2c::class_of<::GlobalNamespace::ModuloInstruction_ModuloInt16*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModuloInstruction_ModuloInt16._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModuloInstruction_ModuloInt16::*)()>(&::GlobalNamespace::ModuloInstruction_ModuloInt16::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fb4650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ModuloInstruction_ModuloInt16*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::ModuloInstruction_ModuloInt16::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ModuloInstruction_ModuloInt16*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::ModuloInstruction_ModuloInt16::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ModuloInstruction_ModuloInt16*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ModuloInstruction_ModuloInt16* GlobalNamespace::ModuloInstruction_ModuloInt16::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ModuloInstruction_ModuloInt16*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModuloInstruction_ModuloInt16::ModuloInstruction_ModuloInt16() {}
