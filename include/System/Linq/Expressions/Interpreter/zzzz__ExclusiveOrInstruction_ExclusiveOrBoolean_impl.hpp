#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\ExclusiveOrInstruction_ExclusiveOrBoolean.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ExclusiveOrInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ExclusiveOrInstruction_ExclusiveOrBoolean_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean::Run)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f94e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean::*)()>(
    &::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f94fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean* GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExclusiveOrInstruction_ExclusiveOrBoolean::ExclusiveOrInstruction_ExclusiveOrBoolean() {}
