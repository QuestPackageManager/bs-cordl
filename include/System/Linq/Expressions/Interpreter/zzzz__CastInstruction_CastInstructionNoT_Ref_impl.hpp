#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/CastInstruction_CastInstructionNoT_Ref.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_CastInstructionNoT_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_CastInstructionNoT_Ref_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref::*)(::System::Type*)>(
    &::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40f9740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref.ConvertNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref::ConvertNull)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x40f98b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref*>::get(), 11));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CastInstructionNoT_CastInstruction_Ref::_ctor(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline void GlobalNamespace::CastInstructionNoT_CastInstruction_Ref::ConvertNull(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frame);
}
inline ::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref* GlobalNamespace::CastInstructionNoT_CastInstruction_Ref::New_ctor(::System::Type* t) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref*>(t));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CastInstructionNoT_CastInstruction_Ref::CastInstructionNoT_CastInstruction_Ref() {}
