#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NegateCheckedInstruction_NegateCheckedInt32.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NegateCheckedInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NegateCheckedInstruction_NegateCheckedInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt32.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt32::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt32::Run)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5fb1674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt32*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt32*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt32._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt32::*)()>(
    &::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt32::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fb166c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt32*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt32::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt32*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt32::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt32*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt32* GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt32::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt32*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NegateCheckedInstruction_NegateCheckedInt32::NegateCheckedInstruction_NegateCheckedInt32() {}
