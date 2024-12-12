#pragma once
// IWYU pragma private; include "GlobalNamespace/LightManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightManager)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class LightManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightManager);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightManager
class CORDL_TYPE LightManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _directionalLightColors, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__directionalLightColors, put = __cordl_internal_set__directionalLightColors)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>
      _directionalLightColors;

  /// @brief Field _directionalLightColorsID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__directionalLightColorsID, put = setStaticF__directionalLightColorsID)) int32_t _directionalLightColorsID;

  /// @brief Field _directionalLightDirections, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__directionalLightDirections,
                      put = __cordl_internal_set__directionalLightDirections)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>
      _directionalLightDirections;

  /// @brief Field _directionalLightDirectionsID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__directionalLightDirectionsID, put = setStaticF__directionalLightDirectionsID)) int32_t _directionalLightDirectionsID;

  /// @brief Field _directionalLightPositionID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__directionalLightPositionID, put = setStaticF__directionalLightPositionID)) int32_t _directionalLightPositionID;

  /// @brief Field _directionalLightPositions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__directionalLightPositions, put = __cordl_internal_set__directionalLightPositions)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>
      _directionalLightPositions;

  /// @brief Field _directionalLightRadii, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__directionalLightRadii, put = __cordl_internal_set__directionalLightRadii)) ::ArrayW<float_t, ::Array<float_t>*> _directionalLightRadii;

  /// @brief Field _directionalLightRadiiID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__directionalLightRadiiID, put = setStaticF__directionalLightRadiiID)) int32_t _directionalLightRadiiID;

  /// @brief Field _pointLightColors, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__pointLightColors, put = __cordl_internal_set__pointLightColors)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _pointLightColors;

  /// @brief Field _pointLightColorsID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__pointLightColorsID, put = setStaticF__pointLightColorsID)) int32_t _pointLightColorsID;

  /// @brief Field _pointLightPositions, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__pointLightPositions, put = __cordl_internal_set__pointLightPositions)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>
      _pointLightPositions;

  /// @brief Field _pointLightPositionsID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__pointLightPositionsID, put = setStaticF__pointLightPositionsID)) int32_t _pointLightPositionsID;

  /// @brief Field lastRefreshFrameNum, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_lastRefreshFrameNum, put = __cordl_internal_set_lastRefreshFrameNum)) int32_t lastRefreshFrameNum;

  static inline ::GlobalNamespace::LightManager* New_ctor();

  /// @brief Method OnCameraPreRender, addr 0x39de368, size 0x544, virtual false, abstract: false, final false
  inline void OnCameraPreRender(::UnityEngine::Camera* camera);

  /// @brief Method OnDestroy, addr 0x39de8ac, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x39de284, size 0xe4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x39de1a0, size 0xe4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ResetColors, addr 0x39de8b0, size 0xe4, virtual false, abstract: false, final false
  inline void ResetColors();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__directionalLightColors() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__directionalLightColors();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__directionalLightDirections() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__directionalLightDirections();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__directionalLightPositions() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__directionalLightPositions();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__directionalLightRadii() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__directionalLightRadii();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__pointLightColors() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__pointLightColors();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__pointLightPositions() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__pointLightPositions();

  constexpr int32_t const& __cordl_internal_get_lastRefreshFrameNum() const;

  constexpr int32_t& __cordl_internal_get_lastRefreshFrameNum();

  constexpr void __cordl_internal_set__directionalLightColors(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set__directionalLightDirections(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set__directionalLightPositions(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set__directionalLightRadii(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__pointLightColors(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set__pointLightPositions(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_lastRefreshFrameNum(int32_t value);

  /// @brief Method .ctor, addr 0x39de994, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__directionalLightColorsID();

  static inline int32_t getStaticF__directionalLightDirectionsID();

  static inline int32_t getStaticF__directionalLightPositionID();

  static inline int32_t getStaticF__directionalLightRadiiID();

  static inline int32_t getStaticF__pointLightColorsID();

  static inline int32_t getStaticF__pointLightPositionsID();

  static inline void setStaticF__directionalLightColorsID(int32_t value);

  static inline void setStaticF__directionalLightDirectionsID(int32_t value);

  static inline void setStaticF__directionalLightPositionID(int32_t value);

  static inline void setStaticF__directionalLightRadiiID(int32_t value);

  static inline void setStaticF__pointLightColorsID(int32_t value);

  static inline void setStaticF__pointLightPositionsID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightManager(LightManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightManager(LightManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16276 };

  /// @brief Field _directionalLightDirections, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____directionalLightDirections;

  /// @brief Field _directionalLightColors, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____directionalLightColors;

  /// @brief Field _directionalLightPositions, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____directionalLightPositions;

  /// @brief Field _directionalLightRadii, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____directionalLightRadii;

  /// @brief Field _pointLightPositions, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____pointLightPositions;

  /// @brief Field _pointLightColors, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____pointLightColors;

  /// @brief Field lastRefreshFrameNum, offset: 0x50, size: 0x4, def value: None
  int32_t ___lastRefreshFrameNum;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightManager, ____directionalLightDirections) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightManager, ____directionalLightColors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightManager, ____directionalLightPositions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightManager, ____directionalLightRadii) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightManager, ____pointLightPositions) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightManager, ____pointLightColors) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightManager, ___lastRefreshFrameNum) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightManager, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightManager*, "", "LightManager");
