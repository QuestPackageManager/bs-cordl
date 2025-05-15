#pragma once
// IWYU pragma private; include "System/Threading/ExecutionContextSwitcher.hpp"
#include "System/Threading/zzzz__ExecutionContext_impl.hpp"
#include "System/Threading/zzzz__ExecutionContextSwitcher_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::ExecutionContextSwitcher.UndoNoThrow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ExecutionContextSwitcher::*)()>(
    &::System::Threading::ExecutionContextSwitcher::UndoNoThrow)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3e54998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContextSwitcher>::get(),
                                                                               "UndoNoThrow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContextSwitcher.Undo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ExecutionContextSwitcher::*)()>(&::System::Threading::ExecutionContextSwitcher::Undo)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3e54a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContextSwitcher>::get(), "Undo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool System::Threading::ExecutionContextSwitcher::UndoNoThrow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContextSwitcher>::get(),
                                                                             "UndoNoThrow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Threading::ExecutionContextSwitcher::Undo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ExecutionContextSwitcher>::get(), "Undo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "outerEC", ty: "::System::Threading::ExecutionContext_Reader", modifiers: "", def_value: Some("{}") }, CppParam { name: "outerECBelongsToScope", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "hecsw", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "thread", ty: "::System::Threading::Thread*",
// modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::ExecutionContextSwitcher::ExecutionContextSwitcher(::System::Threading::ExecutionContext_Reader outerEC, bool outerECBelongsToScope, ::System::Object* hecsw,
                                                                                  ::System::Threading::Thread* thread) noexcept {
  this->outerEC = outerEC;
  this->outerECBelongsToScope = outerECBelongsToScope;
  this->hecsw = hecsw;
  this->thread = thread;
}
// Ctor Parameters []
constexpr ::System::Threading::ExecutionContextSwitcher::ExecutionContextSwitcher() {}
