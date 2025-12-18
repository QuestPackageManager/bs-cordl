#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XsDurationDataContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__TimeSpanDataContract_def.hpp"
CORDL_MODULE_EXPORT(XsDurationDataContract)
// Forward declare root types
namespace System::Runtime::Serialization {
class XsDurationDataContract;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::XsDurationDataContract);
// Dependencies System.Runtime.Serialization.TimeSpanDataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.XsDurationDataContract
class CORDL_TYPE XsDurationDataContract : public ::System::Runtime::Serialization::TimeSpanDataContract {
public:
  // Declarations
  static inline ::System::Runtime::Serialization::XsDurationDataContract* New_ctor();

  /// @brief Method .ctor, addr 0x5fa9d80, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XsDurationDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XsDurationDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XsDurationDataContract(XsDurationDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XsDurationDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XsDurationDataContract(XsDurationDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17073 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::XsDurationDataContract, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::XsDurationDataContract);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::XsDurationDataContract*, "System.Runtime.Serialization", "XsDurationDataContract");
