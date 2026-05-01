#pragma once
// IWYU pragma private; include "System/Threading/Mutex.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__WaitHandle_def.hpp"
CORDL_MODULE_EXPORT(Mutex)
// Forward declare root types
namespace System::Threading {
class Mutex;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Mutex);
// Dependencies System.Threading.WaitHandle
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.Mutex
class CORDL_TYPE Mutex : public ::System::Threading::WaitHandle {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Mutex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Mutex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Mutex(Mutex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Mutex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Mutex(Mutex const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2757 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Mutex, 0x30>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::Mutex);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Mutex*, "System.Threading", "Mutex");
