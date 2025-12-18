#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InitializeLocalInstruction_ParameterBox.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_ParameterBox_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_ParameterBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitializeLocalInstruction_ParameterBox::*)(int32_t)>(
    &::GlobalNamespace::InitializeLocalInstruction_ParameterBox::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dfe790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_ParameterBox*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_ParameterBox.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::InitializeLocalInstruction_ParameterBox::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::InitializeLocalInstruction_ParameterBox::Run)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5dfe798;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_ParameterBox*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_ParameterBox*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_ParameterBox.get_InstructionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::InitializeLocalInstruction_ParameterBox::*)()>(
    &::GlobalNamespace::InitializeLocalInstruction_ParameterBox::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dfe868;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_ParameterBox*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_ParameterBox*>::get(), 9));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitializeLocalInstruction_ParameterBox::_ctor(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_ParameterBox*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline int32_t GlobalNamespace::InitializeLocalInstruction_ParameterBox::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_ParameterBox*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline ::StringW GlobalNamespace::InitializeLocalInstruction_ParameterBox::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_ParameterBox*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::InitializeLocalInstruction_ParameterBox* GlobalNamespace::InitializeLocalInstruction_ParameterBox::New_ctor(int32_t index) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::InitializeLocalInstruction_ParameterBox*>(index));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitializeLocalInstruction_ParameterBox::InitializeLocalInstruction_ParameterBox() {}
