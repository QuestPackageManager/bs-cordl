#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGearVrControllerTest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRGearVrControllerTest)
// Forward declare root types
namespace GlobalNamespace {
class OVRGearVrControllerTest;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGearVrControllerTest);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRGearVrControllerTest
class CORDL_TYPE OVRGearVrControllerTest : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::OVRGearVrControllerTest* New_ctor();

  /// @brief Method .ctor, addr 0x4037980, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGearVrControllerTest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRGearVrControllerTest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRGearVrControllerTest(OVRGearVrControllerTest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRGearVrControllerTest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRGearVrControllerTest(OVRGearVrControllerTest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8424 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGearVrControllerTest, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGearVrControllerTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGearVrControllerTest*, "", "OVRGearVrControllerTest");
