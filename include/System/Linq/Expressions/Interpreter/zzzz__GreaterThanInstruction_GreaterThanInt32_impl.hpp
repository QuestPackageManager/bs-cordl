#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\GreaterThanInstruction_GreaterThanInt32.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanInstruction_GreaterThanInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GreaterThanInstruction_GreaterThanInt32._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GreaterThanInstruction_GreaterThanInt32::*)(::System::Object*)>(
    &::GlobalNamespace::GreaterThanInstruction_GreaterThanInt32::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f95c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GreaterThanInstruction_GreaterThanInt32*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GreaterThanInstruction_GreaterThanInt32.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GreaterThanInstruction_GreaterThanInt32::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::GreaterThanInstruction_GreaterThanInt32::Run)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f95ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GreaterThanInstruction_GreaterThanInt32*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::GreaterThanInstruction_GreaterThanInt32*>(), 8 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GreaterThanInstruction_GreaterThanInt32::_ctor(::System::Object* nullValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GreaterThanInstruction_GreaterThanInt32*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nullValue);
}
inline int32_t GlobalNamespace::GreaterThanInstruction_GreaterThanInt32::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GreaterThanInstruction_GreaterThanInt32*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::GlobalNamespace::GreaterThanInstruction_GreaterThanInt32* GlobalNamespace::GreaterThanInstruction_GreaterThanInt32::New_ctor(::System::Object* nullValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GreaterThanInstruction_GreaterThanInt32*>(nullValue));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GreaterThanInstruction_GreaterThanInt32::GreaterThanInstruction_GreaterThanInt32() {}
