#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Contract)
namespace System {
template <typename T> class Predicate_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace System::Diagnostics::Contracts {
class Contract;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::Contracts::Contract);
// Type: System.Diagnostics.Contracts::Contract
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Diagnostics::Contracts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3730))
// CS Name: ::System.Diagnostics.Contracts::Contract*
class CORDL_TYPE Contract : public ::System::Object {
public:
  // Declarations
  /// @brief Method ForAll addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool ForAll(::System::Collections::Generic::IEnumerable_1<T>* collection, ::System::Predicate_1<T>* predicate);

  // Ctor Parameters [CppParam { name: "", ty: "Contract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Contract(Contract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Contract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Contract(Contract const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Contract();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Contracts::Contract, 0x10>, "Size mismatch!");

} // namespace System::Diagnostics::Contracts
NEED_NO_BOX(::System::Diagnostics::Contracts::Contract);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Contracts::Contract*, "System.Diagnostics.Contracts", "Contract");
