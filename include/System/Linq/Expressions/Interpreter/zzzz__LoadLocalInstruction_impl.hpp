#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LoadLocalInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalAccessInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LoadLocalInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__IBoxableInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LoadLocalInstruction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LoadLocalInstruction::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::LoadLocalInstruction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dfd578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LoadLocalInstruction.get_ProducedStack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::LoadLocalInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::LoadLocalInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dfd580;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LoadLocalInstruction.get_InstructionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::LoadLocalInstruction::*)()>(
    &::System::Linq::Expressions::Interpreter::LoadLocalInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dfd588;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LoadLocalInstruction.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::LoadLocalInstruction::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::LoadLocalInstruction::Run)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5dfd5cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LoadLocalInstruction.BoxIfIndexMatches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (
    ::System::Linq::Expressions::Interpreter::LoadLocalInstruction::*)(int32_t)>(&::System::Linq::Expressions::Interpreter::LoadLocalInstruction::BoxIfIndexMatches)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5dfd654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>::get(), "BoxIfIndexMatches",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::LoadLocalInstruction::_ctor(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::Interpreter::LoadLocalInstruction::get_ProducedStack() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::LoadLocalInstruction::get_InstructionName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::LoadLocalInstruction::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::LoadLocalInstruction::BoxIfIndexMatches(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>::get(), "BoxIfIndexMatches",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*, false>(this, ___internal_method, index);
}
inline ::System::Linq::Expressions::Interpreter::LoadLocalInstruction* System::Linq::Expressions::Interpreter::LoadLocalInstruction::New_ctor(int32_t index) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::LoadLocalInstruction*>(index));
}
/// @brief Convert operator to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
constexpr System::Linq::Expressions::Interpreter::LoadLocalInstruction::operator ::System::Linq::Expressions::Interpreter::IBoxableInstruction*() noexcept {
  return static_cast<::System::Linq::Expressions::Interpreter::IBoxableInstruction*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
constexpr ::System::Linq::Expressions::Interpreter::IBoxableInstruction*
System::Linq::Expressions::Interpreter::LoadLocalInstruction::i___System__Linq__Expressions__Interpreter__IBoxableInstruction() noexcept {
  return static_cast<::System::Linq::Expressions::Interpreter::IBoxableInstruction*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LoadLocalInstruction::LoadLocalInstruction() {}
