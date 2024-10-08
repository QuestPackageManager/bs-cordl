#pragma once
// IWYU pragma private; include "System/Diagnostics/ProcessModuleCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ReadOnlyCollectionBase_def.hpp"
CORDL_MODULE_EXPORT(ProcessModuleCollection)
// Forward declare root types
namespace System::Diagnostics {
class ProcessModuleCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::ProcessModuleCollection);
// Type: System.Diagnostics::ProcessModuleCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// CS Name: ::System.Diagnostics::ProcessModuleCollection*
class CORDL_TYPE ProcessModuleCollection : public ::System::Collections::ReadOnlyCollectionBase {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessModuleCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProcessModuleCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProcessModuleCollection(ProcessModuleCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProcessModuleCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProcessModuleCollection(ProcessModuleCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9240 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::ProcessModuleCollection, 0x18>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::ProcessModuleCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::ProcessModuleCollection*, "System.Diagnostics", "ProcessModuleCollection");
