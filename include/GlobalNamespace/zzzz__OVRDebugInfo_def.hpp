#pragma once
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
// Type: ::OVRDebugInfo
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 205, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8092))
// CS Name: ::OVRDebugInfo*
class CORDL_TYPE OVRDebugInfo : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field debugUIManager, offset 0x18, size 0x8
  __declspec(property(get = __get_debugUIManager, put = __set_debugUIManager))::UnityEngine::GameObject* debugUIManager;

  /// @brief Field debugUIObject, offset 0x20, size 0x8
  __declspec(property(get = __get_debugUIObject, put = __set_debugUIObject))::UnityEngine::GameObject* debugUIObject;

  /// @brief Field riftPresent, offset 0x28, size 0x8
  __declspec(property(get = __get_riftPresent, put = __set_riftPresent))::UnityEngine::GameObject* riftPresent;

  /// @brief Field fps, offset 0x30, size 0x8
  __declspec(property(get = __get_fps, put = __set_fps))::UnityEngine::GameObject* fps;

  /// @brief Field ipd, offset 0x38, size 0x8
  __declspec(property(get = __get_ipd, put = __set_ipd))::UnityEngine::GameObject* ipd;

  /// @brief Field fov, offset 0x40, size 0x8
  __declspec(property(get = __get_fov, put = __set_fov))::UnityEngine::GameObject* fov;

  /// @brief Field height, offset 0x48, size 0x8
  __declspec(property(get = __get_height, put = __set_height))::UnityEngine::GameObject* height;

  /// @brief Field depth, offset 0x50, size 0x8
  __declspec(property(get = __get_depth, put = __set_depth))::UnityEngine::GameObject* depth;

  /// @brief Field resolutionEyeTexture, offset 0x58, size 0x8
  __declspec(property(get = __get_resolutionEyeTexture, put = __set_resolutionEyeTexture))::UnityEngine::GameObject* resolutionEyeTexture;

  /// @brief Field latencies, offset 0x60, size 0x8
  __declspec(property(get = __get_latencies, put = __set_latencies))::UnityEngine::GameObject* latencies;

  /// @brief Field texts, offset 0x68, size 0x8
  __declspec(property(get = __get_texts, put = __set_texts))::UnityEngine::GameObject* texts;

  /// @brief Field strRiftPresent, offset 0x70, size 0x8
  __declspec(property(get = __get_strRiftPresent, put = __set_strRiftPresent))::StringW strRiftPresent;

  /// @brief Field strFPS, offset 0x78, size 0x8
  __declspec(property(get = __get_strFPS, put = __set_strFPS))::StringW strFPS;

  /// @brief Field strIPD, offset 0x80, size 0x8
  __declspec(property(get = __get_strIPD, put = __set_strIPD))::StringW strIPD;

  /// @brief Field strFOV, offset 0x88, size 0x8
  __declspec(property(get = __get_strFOV, put = __set_strFOV))::StringW strFOV;

  /// @brief Field strHeight, offset 0x90, size 0x8
  __declspec(property(get = __get_strHeight, put = __set_strHeight))::StringW strHeight;

  /// @brief Field strDepth, offset 0x98, size 0x8
  __declspec(property(get = __get_strDepth, put = __set_strDepth))::StringW strDepth;

  /// @brief Field strResolutionEyeTexture, offset 0xa0, size 0x8
  __declspec(property(get = __get_strResolutionEyeTexture, put = __set_strResolutionEyeTexture))::StringW strResolutionEyeTexture;

  /// @brief Field strLatencies, offset 0xa8, size 0x8
  __declspec(property(get = __get_strLatencies, put = __set_strLatencies))::StringW strLatencies;

  /// @brief Field updateInterval, offset 0xb0, size 0x4
  __declspec(property(get = __get_updateInterval, put = __set_updateInterval)) float_t updateInterval;

  /// @brief Field accum, offset 0xb4, size 0x4
  __declspec(property(get = __get_accum, put = __set_accum)) float_t accum;

  /// @brief Field frames, offset 0xb8, size 0x4
  __declspec(property(get = __get_frames, put = __set_frames)) int32_t frames;

  /// @brief Field timeLeft, offset 0xbc, size 0x4
  __declspec(property(get = __get_timeLeft, put = __set_timeLeft)) float_t timeLeft;

  /// @brief Field initUIComponent, offset 0xc0, size 0x1
  __declspec(property(get = __get_initUIComponent, put = __set_initUIComponent)) bool initUIComponent;

  /// @brief Field isInited, offset 0xc1, size 0x1
  __declspec(property(get = __get_isInited, put = __set_isInited)) bool isInited;

  /// @brief Field offsetY, offset 0xc4, size 0x4
  __declspec(property(get = __get_offsetY, put = __set_offsetY)) float_t offsetY;

  /// @brief Field riftPresentTimeout, offset 0xc8, size 0x4
  __declspec(property(get = __get_riftPresentTimeout, put = __set_riftPresentTimeout)) float_t riftPresentTimeout;

  /// @brief Field showVRVars, offset 0xcc, size 0x1
  __declspec(property(get = __get_showVRVars, put = __set_showVRVars)) bool showVRVars;

  constexpr ::UnityEngine::GameObject*& __get_debugUIManager();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_debugUIManager() const;

  constexpr void __set_debugUIManager(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_debugUIObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_debugUIObject() const;

  constexpr void __set_debugUIObject(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_riftPresent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_riftPresent() const;

  constexpr void __set_riftPresent(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_fps();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_fps() const;

  constexpr void __set_fps(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_ipd();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_ipd() const;

  constexpr void __set_ipd(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_fov();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_fov() const;

  constexpr void __set_fov(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_height();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_height() const;

  constexpr void __set_height(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_depth();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_depth() const;

  constexpr void __set_depth(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_resolutionEyeTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_resolutionEyeTexture() const;

  constexpr void __set_resolutionEyeTexture(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_latencies();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_latencies() const;

  constexpr void __set_latencies(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_texts();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_texts() const;

  constexpr void __set_texts(::UnityEngine::GameObject* value);

  constexpr ::StringW& __get_strRiftPresent();

  constexpr ::StringW const& __get_strRiftPresent() const;

  constexpr void __set_strRiftPresent(::StringW value);

  constexpr ::StringW& __get_strFPS();

  constexpr ::StringW const& __get_strFPS() const;

  constexpr void __set_strFPS(::StringW value);

  constexpr ::StringW& __get_strIPD();

  constexpr ::StringW const& __get_strIPD() const;

  constexpr void __set_strIPD(::StringW value);

  constexpr ::StringW& __get_strFOV();

  constexpr ::StringW const& __get_strFOV() const;

  constexpr void __set_strFOV(::StringW value);

  constexpr ::StringW& __get_strHeight();

  constexpr ::StringW const& __get_strHeight() const;

  constexpr void __set_strHeight(::StringW value);

  constexpr ::StringW& __get_strDepth();

  constexpr ::StringW const& __get_strDepth() const;

  constexpr void __set_strDepth(::StringW value);

  constexpr ::StringW& __get_strResolutionEyeTexture();

  constexpr ::StringW const& __get_strResolutionEyeTexture() const;

  constexpr void __set_strResolutionEyeTexture(::StringW value);

  constexpr ::StringW& __get_strLatencies();

  constexpr ::StringW const& __get_strLatencies() const;

  constexpr void __set_strLatencies(::StringW value);

  constexpr float_t& __get_updateInterval();

  constexpr float_t const& __get_updateInterval() const;

  constexpr void __set_updateInterval(float_t value);

  constexpr float_t& __get_accum();

  constexpr float_t const& __get_accum() const;

  constexpr void __set_accum(float_t value);

  constexpr int32_t& __get_frames();

  constexpr int32_t const& __get_frames() const;

  constexpr void __set_frames(int32_t value);

  constexpr float_t& __get_timeLeft();

  constexpr float_t const& __get_timeLeft() const;

  constexpr void __set_timeLeft(float_t value);

  constexpr bool& __get_initUIComponent();

  constexpr bool const& __get_initUIComponent() const;

  constexpr void __set_initUIComponent(bool value);

  constexpr bool& __get_isInited();

  constexpr bool const& __get_isInited() const;

  constexpr void __set_isInited(bool value);

  constexpr float_t& __get_offsetY();

  constexpr float_t const& __get_offsetY() const;

  constexpr void __set_offsetY(float_t value);

  constexpr float_t& __get_riftPresentTimeout();

  constexpr float_t const& __get_riftPresentTimeout() const;

  constexpr void __set_riftPresentTimeout(float_t value);

  constexpr bool& __get_showVRVars();

  constexpr bool const& __get_showVRVars() const;

  constexpr void __set_showVRVars(bool value);

  /// @brief Method Awake addr 0x27aa268 size 0x1e4 virtual false final false
  inline void Awake();

  /// @brief Method Update addr 0x27aa44c size 0xb8 virtual false final false
  inline void Update();

  /// @brief Method OnDestroy addr 0x27aab54 size 0x8 virtual false final false
  inline void OnDestroy();

  /// @brief Method InitUIComponents addr 0x27aa504 size 0x3b4 virtual false final false
  inline void InitUIComponents();

  /// @brief Method UpdateVariable addr 0x27aa8ec size 0x38 virtual false final false
  inline void UpdateVariable();

  /// @brief Method UpdateStrings addr 0x27aa924 size 0x230 virtual false final false
  inline void UpdateStrings();

  /// @brief Method RiftPresentGUI addr 0x27ab304 size 0x184 virtual false final false
  inline void RiftPresentGUI(::UnityEngine::GameObject* guiMainOBj);

  /// @brief Method UpdateDeviceDetection addr 0x27aa8b8 size 0x34 virtual false final false
  inline void UpdateDeviceDetection();

  /// @brief Method VariableObjectManager addr 0x27aab5c size 0x1ac virtual false final false
  inline ::UnityEngine::GameObject* VariableObjectManager(::UnityEngine::GameObject* gameObject, ::StringW name, float_t posY, ::StringW str, int32_t fontSize);

  /// @brief Method ComponentComposition addr 0x27ab488 size 0x338 virtual false final false
  inline ::UnityEngine::GameObject* ComponentComposition(::UnityEngine::GameObject* GO);

  /// @brief Method UpdateIPD addr 0x27aad08 size 0xcc virtual false final false
  inline void UpdateIPD();

  /// @brief Method UpdateEyeHeightOffset addr 0x27aadd4 size 0xc0 virtual false final false
  inline void UpdateEyeHeightOffset();

  /// @brief Method UpdateEyeDepthOffset addr 0x27aae94 size 0xc0 virtual false final false
  inline void UpdateEyeDepthOffset();

  /// @brief Method UpdateFOV addr 0x27aaf54 size 0x100 virtual false final false
  inline void UpdateFOV();

  /// @brief Method UpdateResolutionEyeTexture addr 0x27ab054 size 0x1cc virtual false final false
  inline void UpdateResolutionEyeTexture();

  /// @brief Method UpdateLatencyValues addr 0x27ab220 size 0x4 virtual false final false
  inline void UpdateLatencyValues();

  /// @brief Method UpdateFPS addr 0x27ab224 size 0xe0 virtual false final false
  inline void UpdateFPS();

  static inline ::GlobalNamespace::OVRDebugInfo* New_ctor();

  /// @brief Method .ctor addr 0x27ab7c0 size 0x18 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRDebugInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRDebugInfo(OVRDebugInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRDebugInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRDebugInfo(OVRDebugInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDebugInfo();

public:
  /// @brief Field debugUIManager, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___debugUIManager;

  /// @brief Field debugUIObject, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___debugUIObject;

  /// @brief Field riftPresent, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___riftPresent;

  /// @brief Field fps, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___fps;

  /// @brief Field ipd, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___ipd;

  /// @brief Field fov, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___fov;

  /// @brief Field height, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___height;

  /// @brief Field depth, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___depth;

  /// @brief Field resolutionEyeTexture, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___resolutionEyeTexture;

  /// @brief Field latencies, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___latencies;

  /// @brief Field texts, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___texts;

  /// @brief Field strRiftPresent, offset: 0x70, size: 0x8, def value: None
  ::StringW ___strRiftPresent;

  /// @brief Field strFPS, offset: 0x78, size: 0x8, def value: None
  ::StringW ___strFPS;

  /// @brief Field strIPD, offset: 0x80, size: 0x8, def value: None
  ::StringW ___strIPD;

  /// @brief Field strFOV, offset: 0x88, size: 0x8, def value: None
  ::StringW ___strFOV;

  /// @brief Field strHeight, offset: 0x90, size: 0x8, def value: None
  ::StringW ___strHeight;

  /// @brief Field strDepth, offset: 0x98, size: 0x8, def value: None
  ::StringW ___strDepth;

  /// @brief Field strResolutionEyeTexture, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___strResolutionEyeTexture;

  /// @brief Field strLatencies, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___strLatencies;

  /// @brief Field updateInterval, offset: 0xb0, size: 0x4, def value: None
  float_t ___updateInterval;

  /// @brief Field accum, offset: 0xb4, size: 0x4, def value: None
  float_t ___accum;

  /// @brief Field frames, offset: 0xb8, size: 0x4, def value: None
  int32_t ___frames;

  /// @brief Field timeLeft, offset: 0xbc, size: 0x4, def value: None
  float_t ___timeLeft;

  /// @brief Field initUIComponent, offset: 0xc0, size: 0x1, def value: None
  bool ___initUIComponent;

  /// @brief Field isInited, offset: 0xc1, size: 0x1, def value: None
  bool ___isInited;

  /// @brief Field offsetY, offset: 0xc4, size: 0x4, def value: None
  float_t ___offsetY;

  /// @brief Field riftPresentTimeout, offset: 0xc8, size: 0x4, def value: None
  float_t ___riftPresentTimeout;

  /// @brief Field showVRVars, offset: 0xcc, size: 0x1, def value: None
  bool ___showVRVars;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDebugInfo, 0xd0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRDebugInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDebugInfo*, "", "OVRDebugInfo");
