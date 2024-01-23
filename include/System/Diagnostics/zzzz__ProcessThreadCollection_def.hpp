#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ReadOnlyCollectionBase_def.hpp"
CORDL_MODULE_EXPORT(ProcessThreadCollection)
// Forward declare root types
namespace System::Diagnostics {
class ProcessThreadCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::ProcessThreadCollection);
// Type: System.Diagnostics::ProcessThreadCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3777))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8956))
// CS Name: ::System.Diagnostics::ProcessThreadCollection*
class CORDL_TYPE ProcessThreadCollection : public ::System::Collections::ReadOnlyCollectionBase {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "ProcessThreadCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProcessThreadCollection(ProcessThreadCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProcessThreadCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProcessThreadCollection(ProcessThreadCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessThreadCollection();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::ProcessThreadCollection, 0x18>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::ProcessThreadCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::ProcessThreadCollection*, "System.Diagnostics", "ProcessThreadCollection");
