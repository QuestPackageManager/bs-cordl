#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/NormalizedStringDataContract.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__StringDataContract_def.hpp"
CORDL_MODULE_EXPORT(NormalizedStringDataContract)
// Forward declare root types
namespace System::Runtime::Serialization {
class NormalizedStringDataContract;
}
// Write type traits
MARK_REF_T(::System::Runtime::Serialization::NormalizedStringDataContract*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Serialization::NormalizedStringDataContract*, "System.Runtime.Serialization", "NormalizedStringDataContract");
// Dependencies System.Runtime.Serialization.StringDataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.NormalizedStringDataContract
class CORDL_TYPE NormalizedStringDataContract : public ::System::Runtime::Serialization::StringDataContract {
public:
  // Declarations
  static inline ::System::Runtime::Serialization::NormalizedStringDataContract* New_ctor();

  /// @brief Method .ctor, addr 0x61583c4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NormalizedStringDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NormalizedStringDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NormalizedStringDataContract(NormalizedStringDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NormalizedStringDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NormalizedStringDataContract(NormalizedStringDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17060 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Serialization::NormalizedStringDataContract) == 0x30, "Size mismatch!");

} // namespace System::Runtime::Serialization
