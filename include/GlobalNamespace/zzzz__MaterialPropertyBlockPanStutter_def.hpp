#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialPropertyBlockPanStutter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyBlockPanStutter)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
struct MaterialPropertyBlockPanStutter_LayerCache;
}
namespace GlobalNamespace {
struct MaterialPropertyBlockPanStutter_PannedLayer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockPanStutter;
}
namespace GlobalNamespace {
struct MaterialPropertyBlockPanStutter_LayerCache;
}
namespace GlobalNamespace {
struct MaterialPropertyBlockPanStutter_PannedLayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MaterialPropertyBlockPanStutter*);
MARK_VAL_T(::GlobalNamespace::MaterialPropertyBlockPanStutter_LayerCache);
MARK_VAL_T(::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MaterialPropertyBlockPanStutter*, "", "MaterialPropertyBlockPanStutter");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MaterialPropertyBlockPanStutter_LayerCache, "", "MaterialPropertyBlockPanStutter/LayerCache");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer, "", "MaterialPropertyBlockPanStutter/PannedLayer");
// [IsReadOnly]
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MaterialPropertyBlockPanStutter/PannedLayer
struct CORDL_TYPE MaterialPropertyBlockPanStutter_PannedLayer {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x5cc025c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::StringW scaleOffsetPropertyName, ::StringW speedPropertyName, float_t panRatePerSec);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockPanStutter_PannedLayer();

  // Ctor Parameters [CppParam { name: "scaleOffsetPropertyId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "speedPropertyId", ty: "int32_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "panRatePerSec", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr MaterialPropertyBlockPanStutter_PannedLayer(int32_t scaleOffsetPropertyId, int32_t speedPropertyId, float_t panRatePerSec) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19972 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field scaleOffsetPropertyId, offset: 0x0, size: 0x4, def value: None
  int32_t scaleOffsetPropertyId;

  /// @brief Field speedPropertyId, offset: 0x4, size: 0x4, def value: None
  int32_t speedPropertyId;

  /// @brief Field panRatePerSec, offset: 0x8, size: 0x4, def value: None
  float_t panRatePerSec;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer, scaleOffsetPropertyId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer, speedPropertyId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer, panRatePerSec) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer) == 0xc, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: true
// CS Name: MaterialPropertyBlockPanStutter/LayerCache
struct CORDL_TYPE MaterialPropertyBlockPanStutter_LayerCache {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockPanStutter_LayerCache();

  // Ctor Parameters [CppParam { name: "baseScaleOffset", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "panSpeed", ty: "::UnityEngine::Vector4",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "isEnabled", ty: "bool", modifiers: "", def_value: None, comment: None }]
  constexpr MaterialPropertyBlockPanStutter_LayerCache(::UnityEngine::Vector4 baseScaleOffset, ::UnityEngine::Vector4 panSpeed, bool isEnabled) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19973 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  /// @brief Field baseScaleOffset, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Vector4 baseScaleOffset;

  /// @brief Field panSpeed, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Vector4 panSpeed;

  /// @brief Field isEnabled, offset: 0x20, size: 0x1, def value: None
  bool isEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter_LayerCache, baseScaleOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter_LayerCache, panSpeed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter_LayerCache, isEnabled) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MaterialPropertyBlockPanStutter_LayerCache) == 0x24, "Size mismatch!");

} // namespace GlobalNamespace
// [ExecuteAlways]
// Dependencies MaterialPropertyBlockPanStutter::LayerCache, MaterialPropertyBlockPanStutter::PannedLayer, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialPropertyBlockPanStutter
class CORDL_TYPE MaterialPropertyBlockPanStutter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using LayerCache = ::GlobalNamespace::MaterialPropertyBlockPanStutter_LayerCache;

  using PannedLayer = ::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer;

  /// @brief Field _activeLayers, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__activeLayers, put = __cordl_internal_set__activeLayers)) ::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer> _activeLayers;

  /// @brief Field _freezeSpeedMultiplier, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__freezeSpeedMultiplier, put = __cordl_internal_set__freezeSpeedMultiplier)) float_t _freezeSpeedMultiplier;

  /// @brief Field _glitchedTimeOffsetSec, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__glitchedTimeOffsetSec, put = __cordl_internal_set__glitchedTimeOffsetSec)) float_t _glitchedTimeOffsetSec;

  /// @brief Field _globalSpeedMultiplier, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__globalSpeedMultiplier, put = __cordl_internal_set__globalSpeedMultiplier)) float_t _globalSpeedMultiplier;

  /// @brief Field _hasUnglitchedPanning, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get__hasUnglitchedPanning, put = __cordl_internal_set__hasUnglitchedPanning)) bool _hasUnglitchedPanning;

  /// @brief Field _isInFreezePhase, offset 0x84, size 0x1
  __declspec(property(get = __cordl_internal_get__isInFreezePhase, put = __cordl_internal_set__isInFreezePhase)) bool _isInFreezePhase;

  /// @brief Field _isShaderTimeFrozen, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__isShaderTimeFrozen, put = __cordl_internal_set__isShaderTimeFrozen)) bool _isShaderTimeFrozen;

  /// @brief Field _lastAppliedGlitchedTimeOffsetSec, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__lastAppliedGlitchedTimeOffsetSec, put = __cordl_internal_set__lastAppliedGlitchedTimeOffsetSec)) float_t _lastAppliedGlitchedTimeOffsetSec;

  /// @brief Field _lastAppliedUnglitchedTimeOffsetSec, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get__lastAppliedUnglitchedTimeOffsetSec, put = __cordl_internal_set__lastAppliedUnglitchedTimeOffsetSec)) float_t _lastAppliedUnglitchedTimeOffsetSec;

  /// @brief Field _layerCaches, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__layerCaches, put = __cordl_internal_set__layerCaches)) ::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_LayerCache> _layerCaches;

  /// @brief Field _materialPropertyBlockController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>
      _materialPropertyBlockController;

  /// @brief Field _maxFreezeDurationSec, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__maxFreezeDurationSec, put = __cordl_internal_set__maxFreezeDurationSec)) float_t _maxFreezeDurationSec;

  /// @brief Field _maxJumpSec, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__maxJumpSec, put = __cordl_internal_set__maxJumpSec)) float_t _maxJumpSec;

  /// @brief Field _maxPlayDurationSec, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__maxPlayDurationSec, put = __cordl_internal_set__maxPlayDurationSec)) float_t _maxPlayDurationSec;

  /// @brief Field _minFreezeDurationSec, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__minFreezeDurationSec, put = __cordl_internal_set__minFreezeDurationSec)) float_t _minFreezeDurationSec;

  /// @brief Field _minJumpSec, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__minJumpSec, put = __cordl_internal_set__minJumpSec)) float_t _minJumpSec;

  /// @brief Field _minPlayDurationSec, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__minPlayDurationSec, put = __cordl_internal_set__minPlayDurationSec)) float_t _minPlayDurationSec;

  /// @brief Field _playSpeedMultiplier, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__playSpeedMultiplier, put = __cordl_internal_set__playSpeedMultiplier)) float_t _playSpeedMultiplier;

  /// @brief Field _shouldGlitchDistortion, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__shouldGlitchDistortion, put = __cordl_internal_set__shouldGlitchDistortion)) bool _shouldGlitchDistortion;

  /// @brief Field _shouldGlitchLayer1, offset 0x4d, size 0x1
  __declspec(property(get = __cordl_internal_get__shouldGlitchLayer1, put = __cordl_internal_set__shouldGlitchLayer1)) bool _shouldGlitchLayer1;

  /// @brief Field _shouldGlitchLayer2, offset 0x4e, size 0x1
  __declspec(property(get = __cordl_internal_get__shouldGlitchLayer2, put = __cordl_internal_set__shouldGlitchLayer2)) bool _shouldGlitchLayer2;

  /// @brief Field _shouldGlitchLayer3, offset 0x4f, size 0x1
  __declspec(property(get = __cordl_internal_get__shouldGlitchLayer3, put = __cordl_internal_set__shouldGlitchLayer3)) bool _shouldGlitchLayer3;

  /// @brief Field _shouldUseSharedTimeOffset, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get__shouldUseSharedTimeOffset, put = __cordl_internal_set__shouldUseSharedTimeOffset)) bool _shouldUseSharedTimeOffset;

  /// @brief Field _stateTimeLeftSec, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__stateTimeLeftSec, put = __cordl_internal_set__stateTimeLeftSec)) float_t _stateTimeLeftSec;

  /// @brief Field _unglitchedTimeOffsetSec, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__unglitchedTimeOffsetSec, put = __cordl_internal_set__unglitchedTimeOffsetSec)) float_t _unglitchedTimeOffsetSec;

  /// @brief Field _wasUsingSharedTimeOffset, offset 0x75, size 0x1
  __declspec(property(get = __cordl_internal_get__wasUsingSharedTimeOffset, put = __cordl_internal_set__wasUsingSharedTimeOffset)) bool _wasUsingSharedTimeOffset;

  /// @brief Field kEmissionTexLayers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kEmissionTexLayers, put = setStaticF_kEmissionTexLayers)) ::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer> kEmissionTexLayers;

  /// @brief Field kMainTexLayers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kMainTexLayers, put = setStaticF_kMainTexLayers)) ::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer> kMainTexLayers;

  /// @brief Field kTimeOffsetPropertyId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kTimeOffsetPropertyId, put = setStaticF_kTimeOffsetPropertyId)) int32_t kTimeOffsetPropertyId;

  /// @brief Method AdvancePhase, addr 0x5cbfaac, size 0xc4, virtual false, abstract: false, final false
  inline void AdvancePhase();

  /// @brief Method ApplyLayerOffsets, addr 0x5cbfb70, size 0xdc, virtual false, abstract: false, final false
  inline void ApplyLayerOffsets(::UnityEngine::MaterialPropertyBlock* materialPropertyBlock);

  /// @brief Method GetFirstSharedMaterial, addr 0x5cbfc4c, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetFirstSharedMaterial(::ArrayW<::UnityEngine::Renderer*> renderers);

  /// @brief Method IsLayerGlitchEnabled, addr 0x5cbfd8c, size 0x30, virtual false, abstract: false, final false
  inline bool IsLayerGlitchEnabled(int32_t index);

  static inline ::GlobalNamespace::MaterialPropertyBlockPanStutter* New_ctor();

  /// @brief Method OnEnable, addr 0x5cbf458, size 0xac, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RefreshLayerCaches, addr 0x5cbf504, size 0x420, virtual false, abstract: false, final false
  inline void RefreshLayerCaches(bool shouldWarnIfUnsupported);

  /// @brief Method ResolveLayers, addr 0x5cbfc84, size 0x108, virtual false, abstract: false, final false
  static inline ::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer> ResolveLayers(::UnityEngine::Material* material);

  /// @brief Method SetLayerEnabled, addr 0x5cbfdbc, size 0x4c, virtual false, abstract: false, final false
  inline bool SetLayerEnabled(int32_t index, bool isEnabled);

  /// @brief Method Update, addr 0x5cbf924, size 0x188, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer> const& __cordl_internal_get__activeLayers() const;

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer>& __cordl_internal_get__activeLayers();

  constexpr float_t const& __cordl_internal_get__freezeSpeedMultiplier() const;

  constexpr float_t& __cordl_internal_get__freezeSpeedMultiplier();

  constexpr float_t const& __cordl_internal_get__glitchedTimeOffsetSec() const;

  constexpr float_t& __cordl_internal_get__glitchedTimeOffsetSec();

  constexpr float_t const& __cordl_internal_get__globalSpeedMultiplier() const;

  constexpr float_t& __cordl_internal_get__globalSpeedMultiplier();

  constexpr bool const& __cordl_internal_get__hasUnglitchedPanning() const;

  constexpr bool& __cordl_internal_get__hasUnglitchedPanning();

  constexpr bool const& __cordl_internal_get__isInFreezePhase() const;

  constexpr bool& __cordl_internal_get__isInFreezePhase();

  constexpr bool const& __cordl_internal_get__isShaderTimeFrozen() const;

  constexpr bool& __cordl_internal_get__isShaderTimeFrozen();

  constexpr float_t const& __cordl_internal_get__lastAppliedGlitchedTimeOffsetSec() const;

  constexpr float_t& __cordl_internal_get__lastAppliedGlitchedTimeOffsetSec();

  constexpr float_t const& __cordl_internal_get__lastAppliedUnglitchedTimeOffsetSec() const;

  constexpr float_t& __cordl_internal_get__lastAppliedUnglitchedTimeOffsetSec();

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_LayerCache> const& __cordl_internal_get__layerCaches() const;

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_LayerCache>& __cordl_internal_get__layerCaches();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr float_t const& __cordl_internal_get__maxFreezeDurationSec() const;

  constexpr float_t& __cordl_internal_get__maxFreezeDurationSec();

  constexpr float_t const& __cordl_internal_get__maxJumpSec() const;

  constexpr float_t& __cordl_internal_get__maxJumpSec();

  constexpr float_t const& __cordl_internal_get__maxPlayDurationSec() const;

  constexpr float_t& __cordl_internal_get__maxPlayDurationSec();

  constexpr float_t const& __cordl_internal_get__minFreezeDurationSec() const;

  constexpr float_t& __cordl_internal_get__minFreezeDurationSec();

  constexpr float_t const& __cordl_internal_get__minJumpSec() const;

  constexpr float_t& __cordl_internal_get__minJumpSec();

  constexpr float_t const& __cordl_internal_get__minPlayDurationSec() const;

  constexpr float_t& __cordl_internal_get__minPlayDurationSec();

  constexpr float_t const& __cordl_internal_get__playSpeedMultiplier() const;

  constexpr float_t& __cordl_internal_get__playSpeedMultiplier();

  constexpr bool const& __cordl_internal_get__shouldGlitchDistortion() const;

  constexpr bool& __cordl_internal_get__shouldGlitchDistortion();

  constexpr bool const& __cordl_internal_get__shouldGlitchLayer1() const;

  constexpr bool& __cordl_internal_get__shouldGlitchLayer1();

  constexpr bool const& __cordl_internal_get__shouldGlitchLayer2() const;

  constexpr bool& __cordl_internal_get__shouldGlitchLayer2();

  constexpr bool const& __cordl_internal_get__shouldGlitchLayer3() const;

  constexpr bool& __cordl_internal_get__shouldGlitchLayer3();

  constexpr bool const& __cordl_internal_get__shouldUseSharedTimeOffset() const;

  constexpr bool& __cordl_internal_get__shouldUseSharedTimeOffset();

  constexpr float_t const& __cordl_internal_get__stateTimeLeftSec() const;

  constexpr float_t& __cordl_internal_get__stateTimeLeftSec();

  constexpr float_t const& __cordl_internal_get__unglitchedTimeOffsetSec() const;

  constexpr float_t& __cordl_internal_get__unglitchedTimeOffsetSec();

  constexpr bool const& __cordl_internal_get__wasUsingSharedTimeOffset() const;

  constexpr bool& __cordl_internal_get__wasUsingSharedTimeOffset();

  constexpr void __cordl_internal_set__activeLayers(::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer> value);

  constexpr void __cordl_internal_set__freezeSpeedMultiplier(float_t value);

  constexpr void __cordl_internal_set__glitchedTimeOffsetSec(float_t value);

  constexpr void __cordl_internal_set__globalSpeedMultiplier(float_t value);

  constexpr void __cordl_internal_set__hasUnglitchedPanning(bool value);

  constexpr void __cordl_internal_set__isInFreezePhase(bool value);

  constexpr void __cordl_internal_set__isShaderTimeFrozen(bool value);

  constexpr void __cordl_internal_set__lastAppliedGlitchedTimeOffsetSec(float_t value);

  constexpr void __cordl_internal_set__lastAppliedUnglitchedTimeOffsetSec(float_t value);

  constexpr void __cordl_internal_set__layerCaches(::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_LayerCache> value);

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr void __cordl_internal_set__maxFreezeDurationSec(float_t value);

  constexpr void __cordl_internal_set__maxJumpSec(float_t value);

  constexpr void __cordl_internal_set__maxPlayDurationSec(float_t value);

  constexpr void __cordl_internal_set__minFreezeDurationSec(float_t value);

  constexpr void __cordl_internal_set__minJumpSec(float_t value);

  constexpr void __cordl_internal_set__minPlayDurationSec(float_t value);

  constexpr void __cordl_internal_set__playSpeedMultiplier(float_t value);

  constexpr void __cordl_internal_set__shouldGlitchDistortion(bool value);

  constexpr void __cordl_internal_set__shouldGlitchLayer1(bool value);

  constexpr void __cordl_internal_set__shouldGlitchLayer2(bool value);

  constexpr void __cordl_internal_set__shouldGlitchLayer3(bool value);

  constexpr void __cordl_internal_set__shouldUseSharedTimeOffset(bool value);

  constexpr void __cordl_internal_set__stateTimeLeftSec(float_t value);

  constexpr void __cordl_internal_set__unglitchedTimeOffsetSec(float_t value);

  constexpr void __cordl_internal_set__wasUsingSharedTimeOffset(bool value);

  /// @brief Method .ctor, addr 0x5cbfe08, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer> getStaticF_kEmissionTexLayers();

  static inline ::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer> getStaticF_kMainTexLayers();

  static inline int32_t getStaticF_kTimeOffsetPropertyId();

  static inline void setStaticF_kEmissionTexLayers(::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer> value);

  static inline void setStaticF_kMainTexLayers(::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer> value);

  static inline void setStaticF_kTimeOffsetPropertyId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockPanStutter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockPanStutter", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockPanStutter(MaterialPropertyBlockPanStutter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockPanStutter", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockPanStutter(MaterialPropertyBlockPanStutter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19974 };

  /// @brief Field kDistortionPanRatePerSec offset 0xffffffff size 0x4
  static constexpr float_t kDistortionPanRatePerSec{ static_cast<float_t>(0.1f) };

  /// @brief Field kEmissionPanRatePerSec offset 0xffffffff size 0x4
  static constexpr float_t kEmissionPanRatePerSec{ static_cast<float_t>(0.05f) };

  /// @brief Field kFreezeShaderTimeKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString kFreezeShaderTimeKeyword{ u"_CUSTOM_TIME_FREEZE" };

  /// @brief Field kFullTimePanRatePerSec offset 0xffffffff size 0x4
  static constexpr float_t kFullTimePanRatePerSec{ static_cast<float_t>(1.0f) };

  /// @brief Field kLayerCount offset 0xffffffff size 0x4
  static constexpr int32_t kLayerCount{ static_cast<int32_t>(0x4) };

  /// @brief Field kMaxTimeOffsetSec offset 0xffffffff size 0x4
  static constexpr float_t kMaxTimeOffsetSec{ static_cast<float_t>(600.0f) };

  /// [SerializeField]
  /// @brief Field _materialPropertyBlockController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// [Space]
  /// [Tooltip("Scales scroll rates and jump cadence. 0 freezes everything, negative reverses the scroll.")]
  /// [SerializeField]
  /// @brief Field _globalSpeedMultiplier, offset: 0x28, size: 0x4, def value: None
  float_t ____globalSpeedMultiplier;

  /// [Space]
  /// [Tooltip("Scroll rate within each phase, on top of the global multiplier. Does not affect jumps.")]
  /// [SerializeField]
  /// @brief Field _playSpeedMultiplier, offset: 0x2c, size: 0x4, def value: None
  float_t ____playSpeedMultiplier;

  /// [SerializeField]
  /// @brief Field _minPlayDurationSec, offset: 0x30, size: 0x4, def value: None
  float_t ____minPlayDurationSec;

  /// [SerializeField]
  /// @brief Field _maxPlayDurationSec, offset: 0x34, size: 0x4, def value: None
  float_t ____maxPlayDurationSec;

  /// [Space]
  /// [SerializeField]
  /// @brief Field _freezeSpeedMultiplier, offset: 0x38, size: 0x4, def value: None
  float_t ____freezeSpeedMultiplier;

  /// [SerializeField]
  /// @brief Field _minFreezeDurationSec, offset: 0x3c, size: 0x4, def value: None
  float_t ____minFreezeDurationSec;

  /// [SerializeField]
  /// @brief Field _maxFreezeDurationSec, offset: 0x40, size: 0x4, def value: None
  float_t ____maxFreezeDurationSec;

  /// [Space]
  /// [Tooltip("The visible jump is this times the shader\'s pan speed, so slow-panning materials need larger values.")]
  /// [SerializeField]
  /// @brief Field _minJumpSec, offset: 0x44, size: 0x4, def value: None
  float_t ____minJumpSec;

  /// [SerializeField]
  /// @brief Field _maxJumpSec, offset: 0x48, size: 0x4, def value: None
  float_t ____maxJumpSec;

  /// [Space]
  /// [Tooltip("Writes the instanced _TimeOffset to keep GPU instancing. The per-layer toggles do not apply.")]
  /// [SerializeField]
  /// @brief Field _shouldUseSharedTimeOffset, offset: 0x4c, size: 0x1, def value: None
  bool ____shouldUseSharedTimeOffset;

  /// [Space]
  /// [SerializeField]
  /// [DrawIf("_shouldUseSharedTimeOffset", false, (DrawIfAttribute::DisablingType)1)]
  /// @brief Field _shouldGlitchLayer1, offset: 0x4d, size: 0x1, def value: None
  bool ____shouldGlitchLayer1;

  /// [SerializeField]
  /// [DrawIf("_shouldUseSharedTimeOffset", false, (DrawIfAttribute::DisablingType)1)]
  /// @brief Field _shouldGlitchLayer2, offset: 0x4e, size: 0x1, def value: None
  bool ____shouldGlitchLayer2;

  /// [SerializeField]
  /// [DrawIf("_shouldUseSharedTimeOffset", false, (DrawIfAttribute::DisablingType)1)]
  /// @brief Field _shouldGlitchLayer3, offset: 0x4f, size: 0x1, def value: None
  bool ____shouldGlitchLayer3;

  /// [SerializeField]
  /// [DrawIf("_shouldUseSharedTimeOffset", false, (DrawIfAttribute::DisablingType)1)]
  /// @brief Field _shouldGlitchDistortion, offset: 0x50, size: 0x1, def value: None
  bool ____shouldGlitchDistortion;

  /// @brief Field _layerCaches, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_LayerCache> ____layerCaches;

  /// @brief Field _activeLayers, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MaterialPropertyBlockPanStutter_PannedLayer> ____activeLayers;

  /// @brief Field _isShaderTimeFrozen, offset: 0x68, size: 0x1, def value: None
  bool ____isShaderTimeFrozen;

  /// @brief Field _glitchedTimeOffsetSec, offset: 0x6c, size: 0x4, def value: None
  float_t ____glitchedTimeOffsetSec;

  /// @brief Field _unglitchedTimeOffsetSec, offset: 0x70, size: 0x4, def value: None
  float_t ____unglitchedTimeOffsetSec;

  /// @brief Field _hasUnglitchedPanning, offset: 0x74, size: 0x1, def value: None
  bool ____hasUnglitchedPanning;

  /// @brief Field _wasUsingSharedTimeOffset, offset: 0x75, size: 0x1, def value: None
  bool ____wasUsingSharedTimeOffset;

  /// @brief Field _lastAppliedGlitchedTimeOffsetSec, offset: 0x78, size: 0x4, def value: None
  float_t ____lastAppliedGlitchedTimeOffsetSec;

  /// @brief Field _lastAppliedUnglitchedTimeOffsetSec, offset: 0x7c, size: 0x4, def value: None
  float_t ____lastAppliedUnglitchedTimeOffsetSec;

  /// @brief Field _stateTimeLeftSec, offset: 0x80, size: 0x4, def value: None
  float_t ____stateTimeLeftSec;

  /// @brief Field _isInFreezePhase, offset: 0x84, size: 0x1, def value: None
  bool ____isInFreezePhase;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____materialPropertyBlockController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____globalSpeedMultiplier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____playSpeedMultiplier) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____minPlayDurationSec) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____maxPlayDurationSec) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____freezeSpeedMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____minFreezeDurationSec) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____maxFreezeDurationSec) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____minJumpSec) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____maxJumpSec) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____shouldUseSharedTimeOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____shouldGlitchLayer1) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____shouldGlitchLayer2) == 0x4e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____shouldGlitchLayer3) == 0x4f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____shouldGlitchDistortion) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____layerCaches) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____activeLayers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____isShaderTimeFrozen) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____glitchedTimeOffsetSec) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____unglitchedTimeOffsetSec) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____hasUnglitchedPanning) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____wasUsingSharedTimeOffset) == 0x75, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____lastAppliedGlitchedTimeOffsetSec) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____lastAppliedUnglitchedTimeOffsetSec) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____stateTimeLeftSec) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockPanStutter, ____isInFreezePhase) == 0x84, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MaterialPropertyBlockPanStutter) == 0x88, "Size mismatch!");

} // namespace GlobalNamespace
