#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/GYearMonthDataContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__StringDataContract_def.hpp"
CORDL_MODULE_EXPORT(GYearMonthDataContract)
// Forward declare root types
namespace System::Runtime::Serialization {
class GYearMonthDataContract;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::GYearMonthDataContract);
// Dependencies System.Runtime.Serialization.StringDataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.GYearMonthDataContract
class CORDL_TYPE GYearMonthDataContract : public ::System::Runtime::Serialization::StringDataContract {
public:
  // Declarations
  static inline ::System::Runtime::Serialization::GYearMonthDataContract* New_ctor();

  /// @brief Method .ctor, addr 0x5fa8e7c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GYearMonthDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GYearMonthDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GYearMonthDataContract(GYearMonthDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GYearMonthDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GYearMonthDataContract(GYearMonthDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17054 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::GYearMonthDataContract, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::GYearMonthDataContract);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::GYearMonthDataContract*, "System.Runtime.Serialization", "GYearMonthDataContract");
