#pragma once
// IWYU pragma private; include "GlobalNamespace/VRControllersRecorderExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VRControllersRecorderExtensions)
namespace GlobalNamespace {
class GameplayAdditionalInformation;
}
namespace GlobalNamespace {
struct PlaymodeOptions;
}
namespace GlobalNamespace {
class VRControllersRecorder_InitData;
}
namespace GlobalNamespace {
struct VRControllersRecorder_Mode;
}
// Forward declare root types
namespace GlobalNamespace {
class VRControllersRecorderExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRControllersRecorderExtensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VRControllersRecorderExtensions
class CORDL_TYPE VRControllersRecorderExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToVRControllersRecorderInitData, addr 0x574e8d4, size 0x78, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::VRControllersRecorder_InitData* ToVRControllersRecorderInitData(::GlobalNamespace::GameplayAdditionalInformation* gameplayAdditionalInformation);

  /// @brief Method ToVRControllersRecorderMode, addr 0x574e8bc, size 0x18, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::VRControllersRecorder_Mode ToVRControllersRecorderMode(::GlobalNamespace::PlaymodeOptions playmodeOptions);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRControllersRecorderExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRControllersRecorderExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRControllersRecorderExtensions(VRControllersRecorderExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRControllersRecorderExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRControllersRecorderExtensions(VRControllersRecorderExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6608 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRControllersRecorderExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRControllersRecorderExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRControllersRecorderExtensions*, "", "VRControllersRecorderExtensions");
