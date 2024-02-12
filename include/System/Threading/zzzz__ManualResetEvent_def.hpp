#pragma once
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
// Type: System.Threading::ManualResetEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2708))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2665))
// CS Name: ::System.Threading::ManualResetEvent*
class CORDL_TYPE ManualResetEvent : public ::System::Threading::EventWaitHandle {
public:
  // Declarations
  static inline ::System::Threading::ManualResetEvent* New_ctor(bool initialState);

  /// @brief Method .ctor, addr 0x2634cd8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool initialState);

  // Ctor Parameters [CppParam { name: "", ty: "ManualResetEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ManualResetEvent(ManualResetEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ManualResetEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ManualResetEvent(ManualResetEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ManualResetEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::ManualResetEvent, 0x30>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::ManualResetEvent);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ManualResetEvent*, "System.Threading", "ManualResetEvent");
