#pragma once
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_CastInstructionNoT_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__CastInstruction_CastInstructionNoT_Ref_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref::*)(::System::Type*)>(
    &::GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b4ba98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref.ConvertNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref::ConvertNull)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2b4bc18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref*>::get(), 11));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref* GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref::New_ctor(::System::Type* t) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref*>(t));
}
inline void GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref::_ctor(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline void GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref::ConvertNull(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frame);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CastInstruction__CastInstructionNoT__Ref::__CastInstruction__CastInstructionNoT__Ref() {}
