#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRCubemapCapture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRCubemapCapture)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Cubemap;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRCubemapCapture;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRCubemapCapture);
// Dependencies UnityEngine.KeyCode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRCubemapCapture
class CORDL_TYPE OVRCubemapCapture : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field autoTriggerAfterLaunch, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_autoTriggerAfterLaunch, put = __cordl_internal_set_autoTriggerAfterLaunch)) bool autoTriggerAfterLaunch;

  /// @brief Field autoTriggerDelay, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_autoTriggerDelay, put = __cordl_internal_set_autoTriggerDelay)) float_t autoTriggerDelay;

  /// @brief Field autoTriggerElapse, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_autoTriggerElapse, put = __cordl_internal_set_autoTriggerElapse)) float_t autoTriggerElapse;

  /// @brief Field cubemapSize, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_cubemapSize, put = __cordl_internal_set_cubemapSize)) int32_t cubemapSize;

  /// @brief Field pathName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_pathName, put = __cordl_internal_set_pathName)) ::StringW pathName;

  /// @brief Field triggeredByKey, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_triggeredByKey, put = __cordl_internal_set_triggeredByKey)) ::UnityEngine::KeyCode triggeredByKey;

  static inline ::GlobalNamespace::OVRCubemapCapture* New_ctor();

  /// @brief Method RenderIntoCubemap, addr 0x5ce24a0, size 0x578, virtual false, abstract: false, final false
  static inline void RenderIntoCubemap(::UnityEngine::Camera* ownerCamera, ::UnityEngine::Cubemap* outCubemap);

  /// @brief Method SaveCubemapCapture, addr 0x5ce2a18, size 0x7bc, virtual false, abstract: false, final false
  static inline bool SaveCubemapCapture(::UnityEngine::Cubemap* cubemap, ::StringW pathName);

  /// @brief Method TriggerCubemapCapture, addr 0x5ce21e4, size 0x2bc, virtual false, abstract: false, final false
  static inline void TriggerCubemapCapture(::UnityEngine::Vector3 capturePos, int32_t cubemapSize, ::StringW pathName);

  /// @brief Method Update, addr 0x5ce20f8, size 0xec, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_autoTriggerAfterLaunch() const;

  constexpr bool& __cordl_internal_get_autoTriggerAfterLaunch();

  constexpr float_t const& __cordl_internal_get_autoTriggerDelay() const;

  constexpr float_t& __cordl_internal_get_autoTriggerDelay();

  constexpr float_t const& __cordl_internal_get_autoTriggerElapse() const;

  constexpr float_t& __cordl_internal_get_autoTriggerElapse();

  constexpr int32_t const& __cordl_internal_get_cubemapSize() const;

  constexpr int32_t& __cordl_internal_get_cubemapSize();

  constexpr ::StringW const& __cordl_internal_get_pathName() const;

  constexpr ::StringW& __cordl_internal_get_pathName();

  constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_triggeredByKey() const;

  constexpr ::UnityEngine::KeyCode& __cordl_internal_get_triggeredByKey();

  constexpr void __cordl_internal_set_autoTriggerAfterLaunch(bool value);

  constexpr void __cordl_internal_set_autoTriggerDelay(float_t value);

  constexpr void __cordl_internal_set_autoTriggerElapse(float_t value);

  constexpr void __cordl_internal_set_cubemapSize(int32_t value);

  constexpr void __cordl_internal_set_pathName(::StringW value);

  constexpr void __cordl_internal_set_triggeredByKey(::UnityEngine::KeyCode value);

  /// @brief Method .ctor, addr 0x5ce31d4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRCubemapCapture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRCubemapCapture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRCubemapCapture(OVRCubemapCapture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRCubemapCapture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRCubemapCapture(OVRCubemapCapture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7851 };

  /// @brief Field autoTriggerAfterLaunch, offset: 0x20, size: 0x1, def value: None
  bool ___autoTriggerAfterLaunch;

  /// @brief Field autoTriggerDelay, offset: 0x24, size: 0x4, def value: None
  float_t ___autoTriggerDelay;

  /// @brief Field autoTriggerElapse, offset: 0x28, size: 0x4, def value: None
  float_t ___autoTriggerElapse;

  /// @brief Field triggeredByKey, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::KeyCode ___triggeredByKey;

  /// @brief Field pathName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___pathName;

  /// @brief Field cubemapSize, offset: 0x38, size: 0x4, def value: None
  int32_t ___cubemapSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRCubemapCapture, ___autoTriggerAfterLaunch) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCubemapCapture, ___autoTriggerDelay) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCubemapCapture, ___autoTriggerElapse) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCubemapCapture, ___triggeredByKey) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCubemapCapture, ___pathName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRCubemapCapture, ___cubemapSize) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRCubemapCapture, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRCubemapCapture);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCubemapCapture*, "", "OVRCubemapCapture");
