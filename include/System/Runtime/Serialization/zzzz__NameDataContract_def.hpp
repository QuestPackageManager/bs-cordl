#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/NameDataContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__StringDataContract_def.hpp"
CORDL_MODULE_EXPORT(NameDataContract)
// Forward declare root types
namespace System::Runtime::Serialization {
class NameDataContract;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::NameDataContract);
// Dependencies System.Runtime.Serialization.StringDataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.NameDataContract
class CORDL_TYPE NameDataContract : public ::System::Runtime::Serialization::StringDataContract {
public:
  // Declarations
  static inline ::System::Runtime::Serialization::NameDataContract* New_ctor();

  /// @brief Method .ctor, addr 0x5fa91bc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NameDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameDataContract(NameDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameDataContract(NameDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17062 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::NameDataContract, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::NameDataContract);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::NameDataContract*, "System.Runtime.Serialization", "NameDataContract");
