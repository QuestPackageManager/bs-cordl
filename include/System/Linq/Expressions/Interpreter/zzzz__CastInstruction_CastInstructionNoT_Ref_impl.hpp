#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\CastInstruction_CastInstructionNoT_Ref.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_CastInstructionNoT_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_CastInstructionNoT_Ref_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref::*)(::System::Type*)>(
    &::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fbfc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref.ConvertNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref::ConvertNull)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fbfd70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref*>(), 11 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CastInstructionNoT_CastInstruction_Ref::_ctor(::System::Type* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GlobalNamespace::CastInstructionNoT_CastInstruction_Ref::ConvertNull(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline ::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref* GlobalNamespace::CastInstructionNoT_CastInstruction_Ref::New_ctor(::System::Type* t) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref*>(t));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref::CastInstructionNoT_CastInstruction_Ref() {}
