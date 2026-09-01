#pragma once
// IWYU pragma private; include "System\Threading\Monitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Monitor)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class Monitor;
}
// Write type traits
MARK_REF_T(::System::Threading::Monitor*);
DEFINE_IL2CPP_CLASS(::System::Threading::Monitor*, "System.Threading", "Monitor");
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.Monitor
class CORDL_TYPE Monitor : public ::System::Object {
public:
  // Declarations
  /// @brief Method Enter, addr 0x5cad964, size 0x4, virtual false, abstract: false, final false
  static inline void Enter(::System::Object* obj);

  /// @brief Method Enter, addr 0x5caa6e4, size 0x1c, virtual false, abstract: false, final false
  static inline void Enter(::System::Object* obj, ::by_ref<bool> lockTaken);

  /// @brief Method Exit, addr 0x5cad968, size 0x4, virtual false, abstract: false, final false
  static inline void Exit(::System::Object* obj);

  /// @brief Method Monitor_pulse, addr 0x5cb1f14, size 0x4, virtual false, abstract: false, final false
  static inline void Monitor_pulse(::System::Object* obj);

  /// @brief Method Monitor_pulse_all, addr 0x5cb1f18, size 0x4, virtual false, abstract: false, final false
  static inline void Monitor_pulse_all(::System::Object* obj);

  /// @brief Method Monitor_test_synchronised, addr 0x5cb1f10, size 0x4, virtual false, abstract: false, final false
  static inline bool Monitor_test_synchronised(::System::Object* obj);

  /// @brief Method Monitor_wait, addr 0x5cb1f1c, size 0x4, virtual false, abstract: false, final false
  static inline bool Monitor_wait(::System::Object* obj, int32_t ms);

  /// @brief Method ObjPulse, addr 0x5cb1e50, size 0x60, virtual false, abstract: false, final false
  static inline void ObjPulse(::System::Object* obj);

  /// @brief Method ObjPulseAll, addr 0x5cb1eb0, size 0x60, virtual false, abstract: false, final false
  static inline void ObjPulseAll(::System::Object* obj);

  /// @brief Method ObjWait, addr 0x5cb1da0, size 0xb0, virtual false, abstract: false, final false
  static inline bool ObjWait(bool exitContext, int32_t millisecondsTimeout, ::System::Object* obj);

  /// @brief Method Pulse, addr 0x5caea10, size 0x54, virtual false, abstract: false, final false
  static inline void Pulse(::System::Object* obj);

  /// @brief Method PulseAll, addr 0x5caa904, size 0x54, virtual false, abstract: false, final false
  static inline void PulseAll(::System::Object* obj);

  /// @brief Method ReliableEnter, addr 0x5cb1c88, size 0xc, virtual false, abstract: false, final false
  static inline void ReliableEnter(::System::Object* obj, ::by_ref<bool> lockTaken);

  /// @brief Method ReliableEnterTimeout, addr 0x5cb1cb0, size 0x94, virtual false, abstract: false, final false
  static inline void ReliableEnterTimeout(::System::Object* obj, int32_t timeout, ::by_ref<bool> lockTaken);

  /// @brief Method ThrowLockTakenException, addr 0x5cb1c24, size 0x64, virtual false, abstract: false, final false
  static inline void ThrowLockTakenException();

  /// @brief Method TryEnter, addr 0x5cb1c94, size 0x1c, virtual false, abstract: false, final false
  static inline void TryEnter(::System::Object* obj, ::by_ref<bool> lockTaken);

  /// @brief Method Wait, addr 0x5cab018, size 0x8, virtual false, abstract: false, final false
  static inline bool Wait(::System::Object* obj, int32_t millisecondsTimeout);

  /// @brief Method Wait, addr 0x5cb1d44, size 0x5c, virtual false, abstract: false, final false
  static inline bool Wait(::System::Object* obj, int32_t millisecondsTimeout, bool exitContext);

  /// @brief Method try_enter_with_atomic_var, addr 0x5cb1f20, size 0x4, virtual false, abstract: false, final false
  static inline void try_enter_with_atomic_var(::System::Object* obj, int32_t millisecondsTimeout, ::by_ref<bool> lockTaken);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Monitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Monitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Monitor(Monitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Monitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Monitor(Monitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2728 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Threading::Monitor) == 0x10, "Size mismatch!");

} // namespace System::Threading
