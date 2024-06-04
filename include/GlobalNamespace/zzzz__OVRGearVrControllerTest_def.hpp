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
// Type: ::OVRGearVrControllerTest
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRGearVrControllerTest*
class CORDL_TYPE OVRGearVrControllerTest : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::OVRGearVrControllerTest* New_ctor();

  /// @brief Method .ctor, addr 0x2ba2e40, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGearVrControllerTest, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGearVrControllerTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGearVrControllerTest*, "", "OVRGearVrControllerTest");
