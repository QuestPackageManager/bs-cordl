#pragma once
// IWYU pragma private; include "System\Threading\TimerCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(TimerCallback)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class TimerCallback;
}
// Write type traits
MARK_REF_T(::System::Threading::TimerCallback*);
DEFINE_IL2CPP_CLASS(::System::Threading::TimerCallback*, "System.Threading", "TimerCallback");
// Dependencies System.MulticastDelegate
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.TimerCallback
class CORDL_TYPE TimerCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x5cbb0f4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* state);

  static inline ::System::Threading::TimerCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5cbafb0, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimerCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimerCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimerCallback(TimerCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimerCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimerCallback(TimerCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2765 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Threading::TimerCallback) == 0x80, "Size mismatch!");

} // namespace System::Threading
