#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\NotInstruction_NotByte.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NotInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NotInstruction_NotByte_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NotInstruction_NotByte.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NotInstruction_NotByte::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::NotInstruction_NotByte::Run)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fb97b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NotInstruction_NotByte*>(), { ::i2c::class_of<::GlobalNamespace::NotInstruction_NotByte*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NotInstruction_NotByte._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NotInstruction_NotByte::*)()>(&::GlobalNamespace::NotInstruction_NotByte::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fb9434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NotInstruction_NotByte*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::NotInstruction_NotByte::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NotInstruction_NotByte*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::NotInstruction_NotByte::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NotInstruction_NotByte*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NotInstruction_NotByte* GlobalNamespace::NotInstruction_NotByte::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NotInstruction_NotByte*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NotInstruction_NotByte::NotInstruction_NotByte() {}
