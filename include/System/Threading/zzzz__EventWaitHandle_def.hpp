#pragma once
// IWYU pragma private; include "System/Threading/EventWaitHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EventWaitHandle)
namespace System::Threading {
struct EventResetMode;
}
// Forward declare root types
namespace System::Threading {
class EventWaitHandle;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::EventWaitHandle);
// Dependencies System.Threading.WaitHandle
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.EventWaitHandle
class CORDL_TYPE EventWaitHandle : public ::System::Threading::WaitHandle {
public:
  // Declarations
  static inline ::System::Threading::EventWaitHandle* New_ctor(bool initialState, ::System::Threading::EventResetMode mode);

  static inline ::System::Threading::EventWaitHandle* New_ctor(bool initialState, ::System::Threading::EventResetMode mode, ::StringW name);

  /// @brief Method Reset, addr 0x3e4d83c, size 0x5c, virtual false, abstract: false, final false
  inline bool Reset();

  /// @brief Method Set, addr 0x3e49e04, size 0x5c, virtual false, abstract: false, final false
  inline bool Set();

  /// @brief Method .ctor, addr 0x3e4834c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool initialState, ::System::Threading::EventResetMode mode);

  /// @brief Method .ctor, addr 0x3e4f764, size 0x2ac, virtual false, abstract: false, final false
  inline void _ctor(bool initialState, ::System::Threading::EventResetMode mode, ::StringW name);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventWaitHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventWaitHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventWaitHandle(EventWaitHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventWaitHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventWaitHandle(EventWaitHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2711 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::EventWaitHandle, 0x30>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::EventWaitHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::EventWaitHandle*, "System.Threading", "EventWaitHandle");
