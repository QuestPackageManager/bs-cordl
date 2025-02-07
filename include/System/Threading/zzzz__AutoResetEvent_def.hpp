#pragma once
// IWYU pragma private; include "System/Threading/AutoResetEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__EventWaitHandle_def.hpp"
CORDL_MODULE_EXPORT(AutoResetEvent)
// Forward declare root types
namespace System::Threading {
class AutoResetEvent;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::AutoResetEvent);
// Dependencies System.Threading.EventWaitHandle
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.AutoResetEvent
class CORDL_TYPE AutoResetEvent : public ::System::Threading::EventWaitHandle {
public:
  // Declarations
  static inline ::System::Threading::AutoResetEvent* New_ctor(bool initialState);

  /// @brief Method .ctor, addr 0x3e5193c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool initialState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoResetEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutoResetEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoResetEvent(AutoResetEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoResetEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoResetEvent(AutoResetEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2664 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::AutoResetEvent, 0x30>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::AutoResetEvent);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::AutoResetEvent*, "System.Threading", "AutoResetEvent");
