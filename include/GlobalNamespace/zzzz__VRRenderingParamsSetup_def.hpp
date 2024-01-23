#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VRRenderingParamsSetup_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRRenderingParamsSetup)
namespace GlobalNamespace {
class BoolSO;
}
namespace GlobalNamespace {
class FloatSO;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
struct __VRRenderingParamsSetup__SceneType;
}
// Forward declare root types
namespace GlobalNamespace {
struct __VRRenderingParamsSetup__SceneType;
}
namespace GlobalNamespace {
class VRRenderingParamsSetup;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__VRRenderingParamsSetup__SceneType);
MARK_REF_PTR_T(::GlobalNamespace::VRRenderingParamsSetup);
// Type: ::SceneType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6000))
// CS Name: ::VRRenderingParamsSetup::SceneType
struct CORDL_TYPE __VRRenderingParamsSetup__SceneType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____VRRenderingParamsSetup__SceneType_Unwrapped
  enum struct ____VRRenderingParamsSetup__SceneType_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_Menu = static_cast<int32_t>(0x1),
    __E_Game = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____VRRenderingParamsSetup__SceneType_Unwrapped() const noexcept {
    return static_cast<____VRRenderingParamsSetup__SceneType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __VRRenderingParamsSetup__SceneType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRRenderingParamsSetup__SceneType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Undefined value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__VRRenderingParamsSetup__SceneType const Undefined;

  /// @brief Field Menu value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__VRRenderingParamsSetup__SceneType const Menu;

  /// @brief Field Game value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__VRRenderingParamsSetup__SceneType const Game;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VRRenderingParamsSetup__SceneType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VRRenderingParamsSetup__SceneType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::VRRenderingParamsSetup
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6000)), TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6001))
// CS Name: ::VRRenderingParamsSetup*
class CORDL_TYPE VRRenderingParamsSetup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using SceneType = ::GlobalNamespace::__VRRenderingParamsSetup__SceneType;

  /// @brief Field _vrResolutionScale, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__vrResolutionScale, put = __cordl_internal_set__vrResolutionScale))::UnityW<::GlobalNamespace::FloatSO> _vrResolutionScale;

  /// @brief Field _menuVRResolutionScaleMultiplier, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__menuVRResolutionScaleMultiplier,
                      put = __cordl_internal_set__menuVRResolutionScaleMultiplier))::UnityW<::GlobalNamespace::FloatSO> _menuVRResolutionScaleMultiplier;

  /// @brief Field _useFixedFoveatedRenderingDuringGameplay, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__useFixedFoveatedRenderingDuringGameplay,
                      put = __cordl_internal_set__useFixedFoveatedRenderingDuringGameplay))::UnityW<::GlobalNamespace::BoolSO> _useFixedFoveatedRenderingDuringGameplay;

  /// @brief Field _sceneType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__sceneType, put = __cordl_internal_set__sceneType))::GlobalNamespace::__VRRenderingParamsSetup__SceneType _sceneType;

  /// @brief Field _vrPlatformHelper, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field _mainSettingsModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsModel, put = __cordl_internal_set__mainSettingsModel))::UnityW<::GlobalNamespace::MainSettingsModelSO> _mainSettingsModel;

  constexpr ::UnityW<::GlobalNamespace::FloatSO>& __cordl_internal_get__vrResolutionScale();

  constexpr ::UnityW<::GlobalNamespace::FloatSO> const& __cordl_internal_get__vrResolutionScale() const;

  constexpr void __cordl_internal_set__vrResolutionScale(::UnityW<::GlobalNamespace::FloatSO> value);

  constexpr ::UnityW<::GlobalNamespace::FloatSO>& __cordl_internal_get__menuVRResolutionScaleMultiplier();

  constexpr ::UnityW<::GlobalNamespace::FloatSO> const& __cordl_internal_get__menuVRResolutionScaleMultiplier() const;

  constexpr void __cordl_internal_set__menuVRResolutionScaleMultiplier(::UnityW<::GlobalNamespace::FloatSO> value);

  constexpr ::UnityW<::GlobalNamespace::BoolSO>& __cordl_internal_get__useFixedFoveatedRenderingDuringGameplay();

  constexpr ::UnityW<::GlobalNamespace::BoolSO> const& __cordl_internal_get__useFixedFoveatedRenderingDuringGameplay() const;

  constexpr void __cordl_internal_set__useFixedFoveatedRenderingDuringGameplay(::UnityW<::GlobalNamespace::BoolSO> value);

  constexpr ::GlobalNamespace::__VRRenderingParamsSetup__SceneType& __cordl_internal_get__sceneType();

  constexpr ::GlobalNamespace::__VRRenderingParamsSetup__SceneType const& __cordl_internal_get__sceneType() const;

  constexpr void __cordl_internal_set__sceneType(::GlobalNamespace::__VRRenderingParamsSetup__SceneType value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& __cordl_internal_get__mainSettingsModel();

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& __cordl_internal_get__mainSettingsModel() const;

  constexpr void __cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value);

  /// @brief Method OnEnable, addr 0x2314d38, size 0xf0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Start, addr 0x2315038, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method SetupOculus, addr 0x2314e28, size 0x210, virtual false, abstract: false, final false
  inline void SetupOculus();

  static inline ::GlobalNamespace::VRRenderingParamsSetup* New_ctor();

  /// @brief Method .ctor, addr 0x231503c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VRRenderingParamsSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRRenderingParamsSetup(VRRenderingParamsSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRRenderingParamsSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRRenderingParamsSetup(VRRenderingParamsSetup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRRenderingParamsSetup();

public:
  /// @brief Field _vrResolutionScale, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FloatSO> ____vrResolutionScale;

  /// @brief Field _menuVRResolutionScaleMultiplier, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FloatSO> ____menuVRResolutionScaleMultiplier;

  /// @brief Field _useFixedFoveatedRenderingDuringGameplay, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoolSO> ____useFixedFoveatedRenderingDuringGameplay;

  /// @brief Field _sceneType, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__VRRenderingParamsSetup__SceneType ____sceneType;

  /// @brief Field _vrPlatformHelper, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _mainSettingsModel, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsModelSO> ____mainSettingsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRRenderingParamsSetup, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRenderingParamsSetup, ____vrResolutionScale) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRenderingParamsSetup, ____menuVRResolutionScaleMultiplier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRenderingParamsSetup, ____useFixedFoveatedRenderingDuringGameplay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRenderingParamsSetup, ____sceneType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRenderingParamsSetup, ____vrPlatformHelper) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRenderingParamsSetup, ____mainSettingsModel) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VRRenderingParamsSetup__SceneType, "", "VRRenderingParamsSetup/SceneType");
NEED_NO_BOX(::GlobalNamespace::VRRenderingParamsSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRRenderingParamsSetup*, "", "VRRenderingParamsSetup");
