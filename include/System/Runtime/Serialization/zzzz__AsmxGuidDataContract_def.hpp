#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/AsmxGuidDataContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__GuidDataContract_def.hpp"
CORDL_MODULE_EXPORT(AsmxGuidDataContract)
// Forward declare root types
namespace System::Runtime::Serialization {
class AsmxGuidDataContract;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::AsmxGuidDataContract);
// Dependencies System.Runtime.Serialization.GuidDataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.AsmxGuidDataContract
class CORDL_TYPE AsmxGuidDataContract : public ::System::Runtime::Serialization::GuidDataContract {
public:
  // Declarations
  static inline ::System::Runtime::Serialization::AsmxGuidDataContract* New_ctor();

  /// @brief Method .ctor, addr 0x5f42524, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsmxGuidDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsmxGuidDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsmxGuidDataContract(AsmxGuidDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsmxGuidDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsmxGuidDataContract(AsmxGuidDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17061 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::AsmxGuidDataContract, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::AsmxGuidDataContract);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::AsmxGuidDataContract*, "System.Runtime.Serialization", "AsmxGuidDataContract");
