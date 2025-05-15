#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDebugInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRDebugInfo)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRDebugInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRDebugInfo);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRDebugInfo
class CORDL_TYPE OVRDebugInfo : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field accum, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_accum, put = __cordl_internal_set_accum)) float_t accum;

  /// @brief Field debugUIManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_debugUIManager, put = __cordl_internal_set_debugUIManager)) ::UnityW<::UnityEngine::GameObject> debugUIManager;

  /// @brief Field debugUIObject, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_debugUIObject, put = __cordl_internal_set_debugUIObject)) ::UnityW<::UnityEngine::GameObject> debugUIObject;

  /// @brief Field depth, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) ::UnityW<::UnityEngine::GameObject> depth;

  /// @brief Field fov, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_fov, put = __cordl_internal_set_fov)) ::UnityW<::UnityEngine::GameObject> fov;

  /// @brief Field fps, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_fps, put = __cordl_internal_set_fps)) ::UnityW<::UnityEngine::GameObject> fps;

  /// @brief Field frames, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_frames, put = __cordl_internal_set_frames)) int32_t frames;

  /// @brief Field height, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_height, put = __cordl_internal_set_height)) ::UnityW<::UnityEngine::GameObject> height;

  /// @brief Field initUIComponent, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get_initUIComponent, put = __cordl_internal_set_initUIComponent)) bool initUIComponent;

  /// @brief Field ipd, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_ipd, put = __cordl_internal_set_ipd)) ::UnityW<::UnityEngine::GameObject> ipd;

  /// @brief Field isInited, offset 0xc9, size 0x1
  __declspec(property(get = __cordl_internal_get_isInited, put = __cordl_internal_set_isInited)) bool isInited;

  /// @brief Field latencies, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_latencies, put = __cordl_internal_set_latencies)) ::UnityW<::UnityEngine::GameObject> latencies;

  /// @brief Field offsetY, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get_offsetY, put = __cordl_internal_set_offsetY)) float_t offsetY;

  /// @brief Field resolutionEyeTexture, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_resolutionEyeTexture, put = __cordl_internal_set_resolutionEyeTexture)) ::UnityW<::UnityEngine::GameObject> resolutionEyeTexture;

  /// @brief Field riftPresent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_riftPresent, put = __cordl_internal_set_riftPresent)) ::UnityW<::UnityEngine::GameObject> riftPresent;

  /// @brief Field riftPresentTimeout, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_riftPresentTimeout, put = __cordl_internal_set_riftPresentTimeout)) float_t riftPresentTimeout;

  /// @brief Field showVRVars, offset 0xd4, size 0x1
  __declspec(property(get = __cordl_internal_get_showVRVars, put = __cordl_internal_set_showVRVars)) bool showVRVars;

  /// @brief Field strDepth, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_strDepth, put = __cordl_internal_set_strDepth)) ::StringW strDepth;

  /// @brief Field strFOV, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_strFOV, put = __cordl_internal_set_strFOV)) ::StringW strFOV;

  /// @brief Field strFPS, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_strFPS, put = __cordl_internal_set_strFPS)) ::StringW strFPS;

  /// @brief Field strHeight, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_strHeight, put = __cordl_internal_set_strHeight)) ::StringW strHeight;

  /// @brief Field strIPD, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_strIPD, put = __cordl_internal_set_strIPD)) ::StringW strIPD;

  /// @brief Field strLatencies, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_strLatencies, put = __cordl_internal_set_strLatencies)) ::StringW strLatencies;

  /// @brief Field strResolutionEyeTexture, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_strResolutionEyeTexture, put = __cordl_internal_set_strResolutionEyeTexture)) ::StringW strResolutionEyeTexture;

  /// @brief Field strRiftPresent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_strRiftPresent, put = __cordl_internal_set_strRiftPresent)) ::StringW strRiftPresent;

  /// @brief Field texts, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_texts, put = __cordl_internal_set_texts)) ::UnityW<::UnityEngine::GameObject> texts;

  /// @brief Field timeLeft, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_timeLeft, put = __cordl_internal_set_timeLeft)) float_t timeLeft;

  /// @brief Field updateInterval, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_updateInterval, put = __cordl_internal_set_updateInterval)) float_t updateInterval;

  /// @brief Method Awake, addr 0x4030f10, size 0x1e4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ComponentComposition, addr 0x4032160, size 0x338, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> ComponentComposition(::UnityEngine::GameObject* GO);

  /// @brief Method InitUIComponents, addr 0x40311ac, size 0x3b4, virtual false, abstract: false, final false
  inline void InitUIComponents();

  static inline ::GlobalNamespace::OVRDebugInfo* New_ctor();

  /// @brief Method OnDestroy, addr 0x403182c, size 0x8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RiftPresentGUI, addr 0x4031fdc, size 0x184, virtual false, abstract: false, final false
  inline void RiftPresentGUI(::UnityEngine::GameObject* guiMainOBj);

  /// @brief Method Update, addr 0x40310f4, size 0xb8, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateDeviceDetection, addr 0x4031560, size 0x34, virtual false, abstract: false, final false
  inline void UpdateDeviceDetection();

  /// @brief Method UpdateEyeDepthOffset, addr 0x4031b6c, size 0xc0, virtual false, abstract: false, final false
  inline void UpdateEyeDepthOffset();

  /// @brief Method UpdateEyeHeightOffset, addr 0x4031aac, size 0xc0, virtual false, abstract: false, final false
  inline void UpdateEyeHeightOffset();

  /// @brief Method UpdateFOV, addr 0x4031c2c, size 0x100, virtual false, abstract: false, final false
  inline void UpdateFOV();

  /// @brief Method UpdateFPS, addr 0x4031efc, size 0xe0, virtual false, abstract: false, final false
  inline void UpdateFPS();

  /// @brief Method UpdateIPD, addr 0x40319e0, size 0xcc, virtual false, abstract: false, final false
  inline void UpdateIPD();

  /// @brief Method UpdateLatencyValues, addr 0x4031ef8, size 0x4, virtual false, abstract: false, final false
  inline void UpdateLatencyValues();

  /// @brief Method UpdateResolutionEyeTexture, addr 0x4031d2c, size 0x1cc, virtual false, abstract: false, final false
  inline void UpdateResolutionEyeTexture();

  /// @brief Method UpdateStrings, addr 0x40315cc, size 0x260, virtual false, abstract: false, final false
  inline void UpdateStrings();

  /// @brief Method UpdateVariable, addr 0x4031594, size 0x38, virtual false, abstract: false, final false
  inline void UpdateVariable();

  /// @brief Method VariableObjectManager, addr 0x4031834, size 0x1ac, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> VariableObjectManager(::UnityEngine::GameObject* gameObject, ::StringW name, float_t posY, ::StringW str, int32_t fontSize);

  constexpr float_t const& __cordl_internal_get_accum() const;

  constexpr float_t& __cordl_internal_get_accum();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_debugUIManager() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_debugUIManager();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_debugUIObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_debugUIObject();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_depth() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_depth();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_fov() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_fov();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_fps() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_fps();

  constexpr int32_t const& __cordl_internal_get_frames() const;

  constexpr int32_t& __cordl_internal_get_frames();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_height() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_height();

  constexpr bool const& __cordl_internal_get_initUIComponent() const;

  constexpr bool& __cordl_internal_get_initUIComponent();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ipd() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ipd();

  constexpr bool const& __cordl_internal_get_isInited() const;

  constexpr bool& __cordl_internal_get_isInited();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_latencies() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_latencies();

  constexpr float_t const& __cordl_internal_get_offsetY() const;

  constexpr float_t& __cordl_internal_get_offsetY();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_resolutionEyeTexture() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_resolutionEyeTexture();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_riftPresent() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_riftPresent();

  constexpr float_t const& __cordl_internal_get_riftPresentTimeout() const;

  constexpr float_t& __cordl_internal_get_riftPresentTimeout();

  constexpr bool const& __cordl_internal_get_showVRVars() const;

  constexpr bool& __cordl_internal_get_showVRVars();

  constexpr ::StringW const& __cordl_internal_get_strDepth() const;

  constexpr ::StringW& __cordl_internal_get_strDepth();

  constexpr ::StringW const& __cordl_internal_get_strFOV() const;

  constexpr ::StringW& __cordl_internal_get_strFOV();

  constexpr ::StringW const& __cordl_internal_get_strFPS() const;

  constexpr ::StringW& __cordl_internal_get_strFPS();

  constexpr ::StringW const& __cordl_internal_get_strHeight() const;

  constexpr ::StringW& __cordl_internal_get_strHeight();

  constexpr ::StringW const& __cordl_internal_get_strIPD() const;

  constexpr ::StringW& __cordl_internal_get_strIPD();

  constexpr ::StringW const& __cordl_internal_get_strLatencies() const;

  constexpr ::StringW& __cordl_internal_get_strLatencies();

  constexpr ::StringW const& __cordl_internal_get_strResolutionEyeTexture() const;

  constexpr ::StringW& __cordl_internal_get_strResolutionEyeTexture();

  constexpr ::StringW const& __cordl_internal_get_strRiftPresent() const;

  constexpr ::StringW& __cordl_internal_get_strRiftPresent();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_texts() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_texts();

  constexpr float_t const& __cordl_internal_get_timeLeft() const;

  constexpr float_t& __cordl_internal_get_timeLeft();

  constexpr float_t const& __cordl_internal_get_updateInterval() const;

  constexpr float_t& __cordl_internal_get_updateInterval();

  constexpr void __cordl_internal_set_accum(float_t value);

  constexpr void __cordl_internal_set_debugUIManager(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_debugUIObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_depth(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_fov(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_fps(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_frames(int32_t value);

  constexpr void __cordl_internal_set_height(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_initUIComponent(bool value);

  constexpr void __cordl_internal_set_ipd(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_isInited(bool value);

  constexpr void __cordl_internal_set_latencies(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_offsetY(float_t value);

  constexpr void __cordl_internal_set_resolutionEyeTexture(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_riftPresent(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_riftPresentTimeout(float_t value);

  constexpr void __cordl_internal_set_showVRVars(bool value);

  constexpr void __cordl_internal_set_strDepth(::StringW value);

  constexpr void __cordl_internal_set_strFOV(::StringW value);

  constexpr void __cordl_internal_set_strFPS(::StringW value);

  constexpr void __cordl_internal_set_strHeight(::StringW value);

  constexpr void __cordl_internal_set_strIPD(::StringW value);

  constexpr void __cordl_internal_set_strLatencies(::StringW value);

  constexpr void __cordl_internal_set_strResolutionEyeTexture(::StringW value);

  constexpr void __cordl_internal_set_strRiftPresent(::StringW value);

  constexpr void __cordl_internal_set_texts(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_timeLeft(float_t value);

  constexpr void __cordl_internal_set_updateInterval(float_t value);

  /// @brief Method .ctor, addr 0x4032498, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDebugInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRDebugInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRDebugInfo(OVRDebugInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRDebugInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRDebugInfo(OVRDebugInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8408 };

  /// @brief Field debugUIManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___debugUIManager;

  /// @brief Field debugUIObject, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___debugUIObject;

  /// @brief Field riftPresent, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___riftPresent;

  /// @brief Field fps, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___fps;

  /// @brief Field ipd, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___ipd;

  /// @brief Field fov, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___fov;

  /// @brief Field height, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___height;

  /// @brief Field depth, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___depth;

  /// @brief Field resolutionEyeTexture, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___resolutionEyeTexture;

  /// @brief Field latencies, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___latencies;

  /// @brief Field texts, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___texts;

  /// @brief Field strRiftPresent, offset: 0x78, size: 0x8, def value: None
  ::StringW ___strRiftPresent;

  /// @brief Field strFPS, offset: 0x80, size: 0x8, def value: None
  ::StringW ___strFPS;

  /// @brief Field strIPD, offset: 0x88, size: 0x8, def value: None
  ::StringW ___strIPD;

  /// @brief Field strFOV, offset: 0x90, size: 0x8, def value: None
  ::StringW ___strFOV;

  /// @brief Field strHeight, offset: 0x98, size: 0x8, def value: None
  ::StringW ___strHeight;

  /// @brief Field strDepth, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___strDepth;

  /// @brief Field strResolutionEyeTexture, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___strResolutionEyeTexture;

  /// @brief Field strLatencies, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___strLatencies;

  /// @brief Field updateInterval, offset: 0xb8, size: 0x4, def value: None
  float_t ___updateInterval;

  /// @brief Field accum, offset: 0xbc, size: 0x4, def value: None
  float_t ___accum;

  /// @brief Field frames, offset: 0xc0, size: 0x4, def value: None
  int32_t ___frames;

  /// @brief Field timeLeft, offset: 0xc4, size: 0x4, def value: None
  float_t ___timeLeft;

  /// @brief Field initUIComponent, offset: 0xc8, size: 0x1, def value: None
  bool ___initUIComponent;

  /// @brief Field isInited, offset: 0xc9, size: 0x1, def value: None
  bool ___isInited;

  /// @brief Field offsetY, offset: 0xcc, size: 0x4, def value: None
  float_t ___offsetY;

  /// @brief Field riftPresentTimeout, offset: 0xd0, size: 0x4, def value: None
  float_t ___riftPresentTimeout;

  /// @brief Field showVRVars, offset: 0xd4, size: 0x1, def value: None
  bool ___showVRVars;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___debugUIManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___debugUIObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___riftPresent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___fps) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___ipd) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___fov) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___height) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___depth) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___resolutionEyeTexture) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___latencies) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___texts) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___strRiftPresent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___strFPS) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___strIPD) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___strFOV) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___strHeight) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___strDepth) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___strResolutionEyeTexture) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___strLatencies) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___updateInterval) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___accum) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___frames) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___timeLeft) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___initUIComponent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___isInited) == 0xc9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___offsetY) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___riftPresentTimeout) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDebugInfo, ___showVRVars) == 0xd4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDebugInfo, 0xd8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRDebugInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDebugInfo*, "", "OVRDebugInfo");
