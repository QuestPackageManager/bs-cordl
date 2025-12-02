#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/NonNegativeIntegerDataContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__LongDataContract_def.hpp"
CORDL_MODULE_EXPORT(NonNegativeIntegerDataContract)
// Forward declare root types
namespace System::Runtime::Serialization {
class NonNegativeIntegerDataContract;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::NonNegativeIntegerDataContract);
// Dependencies System.Runtime.Serialization.LongDataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.NonNegativeIntegerDataContract
class CORDL_TYPE NonNegativeIntegerDataContract : public ::System::Runtime::Serialization::LongDataContract {
public:
  // Declarations
  static inline ::System::Runtime::Serialization::NonNegativeIntegerDataContract* New_ctor();

  /// @brief Method .ctor, addr 0x5f403dc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NonNegativeIntegerDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NonNegativeIntegerDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NonNegativeIntegerDataContract(NonNegativeIntegerDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NonNegativeIntegerDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NonNegativeIntegerDataContract(NonNegativeIntegerDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17030 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::NonNegativeIntegerDataContract, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::NonNegativeIntegerDataContract);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::NonNegativeIntegerDataContract*, "System.Runtime.Serialization", "NonNegativeIntegerDataContract");
