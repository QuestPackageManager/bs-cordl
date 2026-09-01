#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\InitializeLocalInstruction_ParameterBox.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_ParameterBox_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_ParameterBox._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitializeLocalInstruction_ParameterBox::*)(int32_t)>(
    &::GlobalNamespace::InitializeLocalInstruction_ParameterBox::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb32e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_ParameterBox*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_ParameterBox.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::InitializeLocalInstruction_ParameterBox::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::InitializeLocalInstruction_ParameterBox::Run)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5fb32f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_ParameterBox*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_ParameterBox*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_ParameterBox.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::InitializeLocalInstruction_ParameterBox::*)()>(
    &::GlobalNamespace::InitializeLocalInstruction_ParameterBox::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fb33c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_ParameterBox*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_ParameterBox*>(), 9 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitializeLocalInstruction_ParameterBox::_ctor(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_ParameterBox*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline int32_t GlobalNamespace::InitializeLocalInstruction_ParameterBox::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_ParameterBox*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::StringW GlobalNamespace::InitializeLocalInstruction_ParameterBox::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_ParameterBox*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::InitializeLocalInstruction_ParameterBox* GlobalNamespace::InitializeLocalInstruction_ParameterBox::New_ctor(int32_t index) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InitializeLocalInstruction_ParameterBox*>(index));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitializeLocalInstruction_ParameterBox::InitializeLocalInstruction_ParameterBox() {}
