#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\InitializeLocalInstruction_ImmutableRefBox.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_ImmutableRefBox_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox::*)(int32_t)>(
    &::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb31d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox::Run)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5fb31e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox::*)()>(
    &::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fb32a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox*>(), 9 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox::_ctor(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline int32_t GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::StringW GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox* GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox::New_ctor(int32_t index) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox*>(index));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitializeLocalInstruction_ImmutableRefBox::InitializeLocalInstruction_ImmutableRefBox() {}
