#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanOrEqualInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte::*)(::System::Object*)>(
    &::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f96cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte::Run)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f96d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte*>(), 8 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte::_ctor(::System::Object* nullValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nullValue);
}
inline int32_t GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte* GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte::New_ctor(::System::Object* nullValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte*>(nullValue));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte::GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte() {}
