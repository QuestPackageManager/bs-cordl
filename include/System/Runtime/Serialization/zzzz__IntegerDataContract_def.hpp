#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/IntegerDataContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__LongDataContract_def.hpp"
CORDL_MODULE_EXPORT(IntegerDataContract)
// Forward declare root types
namespace System::Runtime::Serialization {
class IntegerDataContract;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::IntegerDataContract);
// Dependencies System.Runtime.Serialization.LongDataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.IntegerDataContract
class CORDL_TYPE IntegerDataContract : public ::System::Runtime::Serialization::LongDataContract {
public:
  // Declarations
  static inline ::System::Runtime::Serialization::IntegerDataContract* New_ctor();

  /// @brief Method .ctor, addr 0x5f4023c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegerDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntegerDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntegerDataContract(IntegerDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntegerDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntegerDataContract(IntegerDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17026 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::IntegerDataContract, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::IntegerDataContract);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::IntegerDataContract*, "System.Runtime.Serialization", "IntegerDataContract");
