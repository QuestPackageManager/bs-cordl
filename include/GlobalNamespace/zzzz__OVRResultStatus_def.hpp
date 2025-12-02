#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRResultStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(OVRResultStatus)
// Forward declare root types
namespace GlobalNamespace {
class OVRResultStatus;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRResultStatus);
// Dependencies System.Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRResultStatus
class CORDL_TYPE OVRResultStatus : public ::System::Attribute {
public:
  // Declarations
  static inline ::GlobalNamespace::OVRResultStatus* New_ctor();

  /// @brief Method .ctor, addr 0x5cdc340, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRResultStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRResultStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRResultStatus(OVRResultStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRResultStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRResultStatus(OVRResultStatus const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7803 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRResultStatus, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRResultStatus);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRResultStatus*, "", "OVRResultStatus");
