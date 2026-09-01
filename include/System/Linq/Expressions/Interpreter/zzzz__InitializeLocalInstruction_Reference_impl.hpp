#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\InitializeLocalInstruction_Reference.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_Reference_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__IBoxableInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_Reference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InitializeLocalInstruction_Reference::*)(int32_t)>(&::GlobalNamespace::InitializeLocalInstruction_Reference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb2e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_Reference*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_Reference.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::InitializeLocalInstruction_Reference::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::InitializeLocalInstruction_Reference::Run)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5fb2e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_Reference*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_Reference*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_Reference.BoxIfIndexMatches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (::GlobalNamespace::InitializeLocalInstruction_Reference::*)(int32_t)>(
    &::GlobalNamespace::InitializeLocalInstruction_Reference::BoxIfIndexMatches)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fb2ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_Reference*>(), { "BoxIfIndexMatches", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_Reference.get_InstructionName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::InitializeLocalInstruction_Reference::*)()>(
    &::GlobalNamespace::InitializeLocalInstruction_Reference::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fb2f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_Reference*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_Reference*>(), 9 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitializeLocalInstruction_Reference::_ctor(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_Reference*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline int32_t GlobalNamespace::InitializeLocalInstruction_Reference::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_Reference*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* GlobalNamespace::InitializeLocalInstruction_Reference::BoxIfIndexMatches(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_Reference*>(), { "BoxIfIndexMatches", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*>(this, ___internal_method, index);
}
inline ::StringW GlobalNamespace::InitializeLocalInstruction_Reference::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::InitializeLocalInstruction_Reference*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::InitializeLocalInstruction_Reference* GlobalNamespace::InitializeLocalInstruction_Reference::New_ctor(int32_t index) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InitializeLocalInstruction_Reference*>(index));
}
/// @brief Convert operator to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
constexpr GlobalNamespace::InitializeLocalInstruction_Reference::operator ::System::Linq::Expressions::Interpreter::IBoxableInstruction*() noexcept {
  return static_cast<::System::Linq::Expressions::Interpreter::IBoxableInstruction*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
constexpr ::System::Linq::Expressions::Interpreter::IBoxableInstruction*
GlobalNamespace::InitializeLocalInstruction_Reference::i___System__Linq__Expressions__Interpreter__IBoxableInstruction() noexcept {
  return static_cast<::System::Linq::Expressions::Interpreter::IBoxableInstruction*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitializeLocalInstruction_Reference::InitializeLocalInstruction_Reference() {}
