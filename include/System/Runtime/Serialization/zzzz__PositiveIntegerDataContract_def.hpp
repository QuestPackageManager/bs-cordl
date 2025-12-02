#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/PositiveIntegerDataContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__LongDataContract_def.hpp"
CORDL_MODULE_EXPORT(PositiveIntegerDataContract)
// Forward declare root types
namespace System::Runtime::Serialization {
class PositiveIntegerDataContract;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::PositiveIntegerDataContract);
// Dependencies System.Runtime.Serialization.LongDataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.PositiveIntegerDataContract
class CORDL_TYPE PositiveIntegerDataContract : public ::System::Runtime::Serialization::LongDataContract {
public:
  // Declarations
  static inline ::System::Runtime::Serialization::PositiveIntegerDataContract* New_ctor();

  /// @brief Method .ctor, addr 0x5f402a4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PositiveIntegerDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PositiveIntegerDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PositiveIntegerDataContract(PositiveIntegerDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PositiveIntegerDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PositiveIntegerDataContract(PositiveIntegerDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17027 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::PositiveIntegerDataContract, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::PositiveIntegerDataContract);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::PositiveIntegerDataContract*, "System.Runtime.Serialization", "PositiveIntegerDataContract");
