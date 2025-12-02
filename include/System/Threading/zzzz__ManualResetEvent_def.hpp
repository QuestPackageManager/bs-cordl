#pragma once
// IWYU pragma private; include "System/Threading/ManualResetEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__EventWaitHandle_def.hpp"
CORDL_MODULE_EXPORT(ManualResetEvent)
// Forward declare root types
namespace System::Threading {
class ManualResetEvent;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::ManualResetEvent);
// Dependencies System.Threading.EventWaitHandle
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.ManualResetEvent
class CORDL_TYPE ManualResetEvent : public ::System::Threading::EventWaitHandle {
public:
  // Declarations
  static inline ::System::Threading::ManualResetEvent* New_ctor(bool initialState);

  /// @brief Method .ctor, addr 0x5a924f8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool initialState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ManualResetEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ManualResetEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ManualResetEvent(ManualResetEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ManualResetEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ManualResetEvent(ManualResetEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2677 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ManualResetEvent, 0x30>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ManualResetEvent);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ManualResetEvent*, "System.Threading", "ManualResetEvent");
