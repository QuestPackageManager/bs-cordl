#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InitializeLocalInstruction_Parameter.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__IBoxableInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_Parameter_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_Parameter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::InitializeLocalInstruction_Parameter::*)(int32_t)>(
    &::GlobalNamespace::InitializeLocalInstruction_Parameter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40eeea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_Parameter*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_Parameter.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::InitializeLocalInstruction_Parameter::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::GlobalNamespace::InitializeLocalInstruction_Parameter::Run)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40eeecc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_Parameter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_Parameter*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_Parameter.BoxIfIndexMatches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (
    ::GlobalNamespace::InitializeLocalInstruction_Parameter::*)(int32_t)>(&::GlobalNamespace::InitializeLocalInstruction_Parameter::BoxIfIndexMatches)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x40eeed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_Parameter*>::get(), "BoxIfIndexMatches",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InitializeLocalInstruction_Parameter.get_InstructionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::InitializeLocalInstruction_Parameter::*)()>(
    &::GlobalNamespace::InitializeLocalInstruction_Parameter::get_InstructionName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x40eef4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_Parameter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_Parameter*>::get(), 9));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InitializeLocalInstruction_Parameter::_ctor(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_Parameter*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline int32_t GlobalNamespace::InitializeLocalInstruction_Parameter::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_Parameter*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* GlobalNamespace::InitializeLocalInstruction_Parameter::BoxIfIndexMatches(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_Parameter*>::get(), "BoxIfIndexMatches",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*, false>(this, ___internal_method, index);
}
inline ::StringW GlobalNamespace::InitializeLocalInstruction_Parameter::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::InitializeLocalInstruction_Parameter*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::InitializeLocalInstruction_Parameter* GlobalNamespace::InitializeLocalInstruction_Parameter::New_ctor(int32_t index) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::InitializeLocalInstruction_Parameter*>(index));
}
/// @brief Convert operator to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
constexpr GlobalNamespace::InitializeLocalInstruction_Parameter::operator ::System::Linq::Expressions::Interpreter::IBoxableInstruction*() noexcept {
  return static_cast<::System::Linq::Expressions::Interpreter::IBoxableInstruction*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
constexpr ::System::Linq::Expressions::Interpreter::IBoxableInstruction*
GlobalNamespace::InitializeLocalInstruction_Parameter::i___System__Linq__Expressions__Interpreter__IBoxableInstruction() noexcept {
  return static_cast<::System::Linq::Expressions::Interpreter::IBoxableInstruction*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitializeLocalInstruction_Parameter::InitializeLocalInstruction_Parameter() {}
