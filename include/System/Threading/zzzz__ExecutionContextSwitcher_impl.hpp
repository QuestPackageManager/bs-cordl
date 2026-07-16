#pragma once
// IWYU pragma private; include "System/Threading/ExecutionContextSwitcher.hpp"
#include "System/Threading/zzzz__ExecutionContext_impl.hpp"
#include "System/Threading/zzzz__ExecutionContextSwitcher_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::ExecutionContextSwitcher.UndoNoThrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::ExecutionContextSwitcher::*)()>(&::System::Threading::ExecutionContextSwitcher::UndoNoThrow)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5cae374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContextSwitcher>(), { "UndoNoThrow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ExecutionContextSwitcher.Undo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ExecutionContextSwitcher::*)()>(&::System::Threading::ExecutionContextSwitcher::Undo)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5cae3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContextSwitcher>(), { "Undo", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::Threading::ExecutionContextSwitcher::UndoNoThrow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContextSwitcher>(), { "UndoNoThrow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void System::Threading::ExecutionContextSwitcher::Undo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ExecutionContextSwitcher>(), { "Undo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
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
