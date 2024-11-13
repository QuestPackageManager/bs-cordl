#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InitializeLocalInstruction_Reference.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InitializeLocalInstruction_Reference_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__IBoxableInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40876b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference::Run)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x40876dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference.BoxIfIndexMatches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Linq::Expressions::Interpreter::Instruction* (::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference::*)(int32_t)>(
        &::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference::BoxIfIndexMatches)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4087718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference*>::get(), "BoxIfIndexMatches",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference.get_InstructionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference::*)()>(
    &::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference::get_InstructionName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4087790;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference*>::get(), 9));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
constexpr System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference::operator ::System::Linq::Expressions::Interpreter::IBoxableInstruction*() noexcept {
  return static_cast<::System::Linq::Expressions::Interpreter::IBoxableInstruction*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::Expressions::Interpreter::IBoxableInstruction"
constexpr ::System::Linq::Expressions::Interpreter::IBoxableInstruction*
System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference::i___System__Linq__Expressions__Interpreter__IBoxableInstruction() noexcept {
  return static_cast<::System::Linq::Expressions::Interpreter::IBoxableInstruction*>(static_cast<void*>(this));
}
inline ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference* System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference::New_ctor(int32_t index) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference*>(index));
}
inline void System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference::_ctor(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline int32_t System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference::BoxIfIndexMatches(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference*>::get(), "BoxIfIndexMatches",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*, false>(this, ___internal_method, index);
}
inline ::StringW System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference::get_InstructionName() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::__InitializeLocalInstruction__Reference::__InitializeLocalInstruction__Reference() {}
