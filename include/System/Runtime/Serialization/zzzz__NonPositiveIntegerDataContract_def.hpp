#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/NonPositiveIntegerDataContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__LongDataContract_def.hpp"
CORDL_MODULE_EXPORT(NonPositiveIntegerDataContract)
// Forward declare root types
namespace System::Runtime::Serialization {
class NonPositiveIntegerDataContract;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::NonPositiveIntegerDataContract);
// Dependencies System.Runtime.Serialization.LongDataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.NonPositiveIntegerDataContract
class CORDL_TYPE NonPositiveIntegerDataContract : public ::System::Runtime::Serialization::LongDataContract {
public:
  // Declarations
  static inline ::System::Runtime::Serialization::NonPositiveIntegerDataContract* New_ctor();

  /// @brief Method .ctor, addr 0x5fa7f00, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NonPositiveIntegerDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NonPositiveIntegerDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NonPositiveIntegerDataContract(NonPositiveIntegerDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NonPositiveIntegerDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NonPositiveIntegerDataContract(NonPositiveIntegerDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17043 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::NonPositiveIntegerDataContract, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::NonPositiveIntegerDataContract);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::NonPositiveIntegerDataContract*, "System.Runtime.Serialization", "NonPositiveIntegerDataContract");
