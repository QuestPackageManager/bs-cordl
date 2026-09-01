#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\LessThanOrEqualInstruction_LessThanOrEqualSingle.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LessThanOrEqualInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LessThanOrEqualInstruction_LessThanOrEqualSingle_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSingle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSingle::*)(::System::Object*)>(
    &::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSingle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa0644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSingle*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSingle.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSingle::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSingle::Run)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5fa0c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSingle*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSingle*>(), 8 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSingle::_ctor(::System::Object* nullValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSingle*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nullValue);
}
inline int32_t GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSingle::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSingle*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSingle* GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSingle::New_ctor(::System::Object* nullValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSingle*>(nullValue));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSingle::LessThanOrEqualInstruction_LessThanOrEqualSingle() {}
