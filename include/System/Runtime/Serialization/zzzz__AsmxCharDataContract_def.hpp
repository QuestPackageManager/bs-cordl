#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/AsmxCharDataContract.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__CharDataContract_def.hpp"
CORDL_MODULE_EXPORT(AsmxCharDataContract)
// Forward declare root types
namespace System::Runtime::Serialization {
class AsmxCharDataContract;
}
// Write type traits
MARK_REF_T(::System::Runtime::Serialization::AsmxCharDataContract*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Serialization::AsmxCharDataContract*, "System.Runtime.Serialization", "AsmxCharDataContract");
// Dependencies System.Runtime.Serialization.CharDataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.AsmxCharDataContract
class CORDL_TYPE AsmxCharDataContract : public ::System::Runtime::Serialization::CharDataContract {
public:
  // Declarations
  static inline ::System::Runtime::Serialization::AsmxCharDataContract* New_ctor();

  /// @brief Method .ctor, addr 0x6155fc8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsmxCharDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsmxCharDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsmxCharDataContract(AsmxCharDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsmxCharDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsmxCharDataContract(AsmxCharDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17032 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Serialization::AsmxCharDataContract) == 0x30, "Size mismatch!");

} // namespace System::Runtime::Serialization
