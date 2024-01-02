#pragma once
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
// Type: System.Threading::Mutex
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2740))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2743))
// CS Name: ::System.Threading::Mutex*
class CORDL_TYPE Mutex : public ::System::Threading::WaitHandle {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "Mutex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Mutex(Mutex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Mutex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Mutex(Mutex const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Mutex();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Mutex, 0x30>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::Mutex);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Mutex*, "System.Threading", "Mutex");
