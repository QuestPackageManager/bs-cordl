#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRCameraComposition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OVRCameraComposition)
// Forward declare root types
namespace GlobalNamespace {
class OVRCameraComposition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRCameraComposition);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRCameraComposition
class CORDL_TYPE OVRCameraComposition : public ::System::Object {
public:
  // Declarations
  static inline ::GlobalNamespace::OVRCameraComposition* New_ctor();

  /// @brief Method .ctor, addr 0x3f92898, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRCameraComposition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRCameraComposition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRCameraComposition(OVRCameraComposition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRCameraComposition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRCameraComposition(OVRCameraComposition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7819 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRCameraComposition, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRCameraComposition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCameraComposition*, "", "OVRCameraComposition");
