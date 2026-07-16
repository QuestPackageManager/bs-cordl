#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/GMonthDayDataContract.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__StringDataContract_def.hpp"
CORDL_MODULE_EXPORT(GMonthDayDataContract)
// Forward declare root types
namespace System::Runtime::Serialization {
class GMonthDayDataContract;
}
// Write type traits
MARK_REF_T(::System::Runtime::Serialization::GMonthDayDataContract*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Serialization::GMonthDayDataContract*, "System.Runtime.Serialization", "GMonthDayDataContract");
// Dependencies System.Runtime.Serialization.StringDataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.GMonthDayDataContract
class CORDL_TYPE GMonthDayDataContract : public ::System::Runtime::Serialization::StringDataContract {
public:
  // Declarations
  static inline ::System::Runtime::Serialization::GMonthDayDataContract* New_ctor();

  /// @brief Method .ctor, addr 0x615828c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GMonthDayDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GMonthDayDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GMonthDayDataContract(GMonthDayDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GMonthDayDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GMonthDayDataContract(GMonthDayDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17057 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Serialization::GMonthDayDataContract) == 0x30, "Size mismatch!");

} // namespace System::Runtime::Serialization
