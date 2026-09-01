#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\ExclusiveOrInstruction_ExclusiveOrInt64.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ExclusiveOrInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ExclusiveOrInstruction_ExclusiveOrInt64_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64::Run)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5f94960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64::*)()>(&::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f94764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64* GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrInt64::ExclusiveOrInstruction_ExclusiveOrInt64() {}
