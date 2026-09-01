#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\GreaterThanInstruction_GreaterThanDouble.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanInstruction_GreaterThanDouble_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GreaterThanInstruction_GreaterThanDouble._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreaterThanInstruction_GreaterThanDouble::*)(::System::Object*)>(
    &::GlobalNamespace::GreaterThanInstruction_GreaterThanDouble::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f95cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GreaterThanInstruction_GreaterThanDouble*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreaterThanInstruction_GreaterThanDouble.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GreaterThanInstruction_GreaterThanDouble::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::GreaterThanInstruction_GreaterThanDouble::Run)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f9631c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GreaterThanInstruction_GreaterThanDouble*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GreaterThanInstruction_GreaterThanDouble*>(), 8 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GreaterThanInstruction_GreaterThanDouble::_ctor(::System::Object* nullValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GreaterThanInstruction_GreaterThanDouble*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nullValue);
}
inline int32_t GlobalNamespace::GreaterThanInstruction_GreaterThanDouble::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GreaterThanInstruction_GreaterThanDouble*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::GlobalNamespace::GreaterThanInstruction_GreaterThanDouble* GlobalNamespace::GreaterThanInstruction_GreaterThanDouble::New_ctor(::System::Object* nullValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GreaterThanInstruction_GreaterThanDouble*>(nullValue));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GreaterThanInstruction_GreaterThanDouble::GreaterThanInstruction_GreaterThanDouble() {}
