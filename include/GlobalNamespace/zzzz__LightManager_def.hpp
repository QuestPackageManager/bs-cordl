#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: ::LightManager
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14497))
// CS Name: ::LightManager*
class CORDL_TYPE LightManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _directionalLightDirections, offset 0x18, size 0x8
  __declspec(property(get = __get__directionalLightDirections, put = __set__directionalLightDirections))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _directionalLightDirections;

  /// @brief Field _directionalLightColors, offset 0x20, size 0x8
  __declspec(property(get = __get__directionalLightColors, put = __set__directionalLightColors))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _directionalLightColors;

  /// @brief Field _directionalLightPositions, offset 0x28, size 0x8
  __declspec(property(get = __get__directionalLightPositions, put = __set__directionalLightPositions))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _directionalLightPositions;

  /// @brief Field _directionalLightRadii, offset 0x30, size 0x8
  __declspec(property(get = __get__directionalLightRadii, put = __set__directionalLightRadii))::ArrayW<float_t, ::Array<float_t>*> _directionalLightRadii;

  /// @brief Field _pointLightPositions, offset 0x38, size 0x8
  __declspec(property(get = __get__pointLightPositions, put = __set__pointLightPositions))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _pointLightPositions;

  /// @brief Field _pointLightColors, offset 0x40, size 0x8
  __declspec(property(get = __get__pointLightColors, put = __set__pointLightColors))::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _pointLightColors;

  /// @brief Field lastRefreshFrameNum, offset 0x48, size 0x4
  __declspec(property(get = __get_lastRefreshFrameNum, put = __set_lastRefreshFrameNum)) int32_t lastRefreshFrameNum;

  /// @brief Field _directionalLightDirectionsID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__directionalLightDirectionsID, put = setStaticF__directionalLightDirectionsID)) int32_t _directionalLightDirectionsID;

  /// @brief Field _directionalLightPositionID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__directionalLightPositionID, put = setStaticF__directionalLightPositionID)) int32_t _directionalLightPositionID;

  /// @brief Field _directionalLightRadiiID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__directionalLightRadiiID, put = setStaticF__directionalLightRadiiID)) int32_t _directionalLightRadiiID;

  /// @brief Field _directionalLightColorsID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__directionalLightColorsID, put = setStaticF__directionalLightColorsID)) int32_t _directionalLightColorsID;

  /// @brief Field _pointLightPositionsID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__pointLightPositionsID, put = setStaticF__pointLightPositionsID)) int32_t _pointLightPositionsID;

  /// @brief Field _pointLightColorsID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__pointLightColorsID, put = setStaticF__pointLightColorsID)) int32_t _pointLightColorsID;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __get__directionalLightDirections();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __get__directionalLightDirections() const;

  constexpr void __set__directionalLightDirections(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __get__directionalLightColors();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __get__directionalLightColors() const;

  constexpr void __set__directionalLightColors(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __get__directionalLightPositions();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __get__directionalLightPositions() const;

  constexpr void __set__directionalLightPositions(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__directionalLightRadii();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__directionalLightRadii() const;

  constexpr void __set__directionalLightRadii(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __get__pointLightPositions();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __get__pointLightPositions() const;

  constexpr void __set__pointLightPositions(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __get__pointLightColors();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __get__pointLightColors() const;

  constexpr void __set__pointLightColors(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr int32_t& __get_lastRefreshFrameNum();

  constexpr int32_t const& __get_lastRefreshFrameNum() const;

  constexpr void __set_lastRefreshFrameNum(int32_t value);

  static inline void setStaticF__directionalLightDirectionsID(int32_t value);

  static inline int32_t getStaticF__directionalLightDirectionsID();

  static inline void setStaticF__directionalLightPositionID(int32_t value);

  static inline int32_t getStaticF__directionalLightPositionID();

  static inline void setStaticF__directionalLightRadiiID(int32_t value);

  static inline int32_t getStaticF__directionalLightRadiiID();

  static inline void setStaticF__directionalLightColorsID(int32_t value);

  static inline int32_t getStaticF__directionalLightColorsID();

  static inline void setStaticF__pointLightPositionsID(int32_t value);

  static inline int32_t getStaticF__pointLightPositionsID();

  static inline void setStaticF__pointLightColorsID(int32_t value);

  static inline int32_t getStaticF__pointLightColorsID();

  /// @brief Method OnEnable, addr 0x210b4dc, size 0xec, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x210b5c8, size 0xec, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnCameraPreRender, addr 0x210b6b4, size 0x560, virtual false, abstract: false, final false
  inline void OnCameraPreRender(::UnityEngine::Camera* camera);

  /// @brief Method OnDestroy, addr 0x210bc14, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ResetColors, addr 0x210bc18, size 0xe4, virtual false, abstract: false, final false
  inline void ResetColors();

  static inline ::GlobalNamespace::LightManager* New_ctor();

  /// @brief Method .ctor, addr 0x210bcfc, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightManager(LightManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightManager(LightManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightManager();

public:
  /// @brief Field _directionalLightDirections, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____directionalLightDirections;

  /// @brief Field _directionalLightColors, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____directionalLightColors;

  /// @brief Field _directionalLightPositions, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____directionalLightPositions;

  /// @brief Field _directionalLightRadii, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____directionalLightRadii;

  /// @brief Field _pointLightPositions, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____pointLightPositions;

  /// @brief Field _pointLightColors, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____pointLightColors;

  /// @brief Field lastRefreshFrameNum, offset: 0x48, size: 0x4, def value: None
  int32_t ___lastRefreshFrameNum;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightManager, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightManager, ____directionalLightDirections) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightManager, ____directionalLightColors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightManager, ____directionalLightPositions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightManager, ____directionalLightRadii) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightManager, ____pointLightPositions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightManager, ____pointLightColors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightManager, ___lastRefreshFrameNum) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightManager*, "", "LightManager");
