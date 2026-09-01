#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\AddInstruction_AddDouble.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__AddInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__AddInstruction_AddDouble_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AddInstruction_AddDouble.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AddInstruction_AddDouble::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::AddInstruction_AddDouble::Run)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5f8bb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::AddInstruction_AddDouble*>(), { ::i2c::class_of<::GlobalNamespace::AddInstruction_AddDouble*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddInstruction_AddDouble._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AddInstruction_AddDouble::*)()>(&::GlobalNamespace::AddInstruction_AddDouble::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f8b414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AddInstruction_AddDouble*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::AddInstruction_AddDouble::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AddInstruction_AddDouble*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::AddInstruction_AddDouble::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AddInstruction_AddDouble*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AddInstruction_AddDouble* GlobalNamespace::AddInstruction_AddDouble::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AddInstruction_AddDouble*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AddInstruction_AddDouble::AddInstruction_AddDouble() {}
