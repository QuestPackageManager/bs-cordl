#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\LessThanOrEqualInstruction_LessThanOrEqualSByte.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LessThanOrEqualInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LessThanOrEqualInstruction_LessThanOrEqualSByte_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte::*)(::System::Object*)>(
    &::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa05fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte::Run)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5fa0654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte*>(), 8 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte::_ctor(::System::Object* nullValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nullValue);
}
inline int32_t GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte* GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte::New_ctor(::System::Object* nullValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte*>(nullValue));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LessThanOrEqualInstruction_LessThanOrEqualSByte::LessThanOrEqualInstruction_LessThanOrEqualSByte() {}
