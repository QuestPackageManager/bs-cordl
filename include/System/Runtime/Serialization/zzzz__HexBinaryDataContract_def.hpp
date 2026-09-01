#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\HexBinaryDataContract.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__StringDataContract_def.hpp"
CORDL_MODULE_EXPORT(HexBinaryDataContract)
// Forward declare root types
namespace System::Runtime::Serialization {
class HexBinaryDataContract;
}
// Write type traits
MARK_REF_T(::System::Runtime::Serialization::HexBinaryDataContract*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Serialization::HexBinaryDataContract*, "System.Runtime.Serialization", "HexBinaryDataContract");
// Dependencies System.Runtime.Serialization.StringDataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.HexBinaryDataContract
class CORDL_TYPE HexBinaryDataContract : public ::System::Runtime::Serialization::StringDataContract {
public:
  // Declarations
  static inline ::System::Runtime::Serialization::HexBinaryDataContract* New_ctor();

  /// @brief Method .ctor, addr 0x615d96c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HexBinaryDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HexBinaryDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HexBinaryDataContract(HexBinaryDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HexBinaryDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HexBinaryDataContract(HexBinaryDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17085 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Serialization::HexBinaryDataContract) == 0x30, "Size mismatch!");

} // namespace System::Runtime::Serialization
