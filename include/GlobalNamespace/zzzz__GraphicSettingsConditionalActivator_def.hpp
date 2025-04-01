#pragma once
// IWYU pragma private; include "GlobalNamespace/GraphicSettingsConditionalActivator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicSettingsConditionalActivator)
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
struct GraphicSettingsConditionalActivator_ActivatorType;
}
namespace GlobalNamespace {
class SettingsManager;
}
// Forward declare root types
namespace GlobalNamespace {
struct GraphicSettingsConditionalActivator_ActivatorType;
}
namespace GlobalNamespace {
class GraphicSettingsConditionalActivator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType);
MARK_REF_PTR_T(::GlobalNamespace::GraphicSettingsConditionalActivator);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: GraphicSettingsConditionalActivator/ActivatorType
struct CORDL_TYPE GraphicSettingsConditionalActivator_ActivatorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GraphicSettingsConditionalActivator_ActivatorType_Unwrapped
  enum struct __GraphicSettingsConditionalActivator_ActivatorType_Unwrapped : int32_t {
    __E_smoke = static_cast<int32_t>(0x0),
    __E_depthTexture = static_cast<int32_t>(0x1),
    __E_burnmarkTrails = static_cast<int32_t>(0x2),
    __E_screenDisplacement = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GraphicSettingsConditionalActivator_ActivatorType_Unwrapped() const noexcept {
    return static_cast<__GraphicSettingsConditionalActivator_ActivatorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicSettingsConditionalActivator_ActivatorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GraphicSettingsConditionalActivator_ActivatorType(int32_t value__) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5169 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field burnmarkTrails value: I32(2)
  static ::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType const burnmarkTrails;

  /// @brief Field depthTexture value: I32(1)
  static ::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType const depthTexture;

  /// @brief Field screenDisplacement value: I32(3)
  static ::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType const screenDisplacement;

  /// @brief Field smoke value: I32(0)
  static ::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType const smoke;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies GraphicSettingsConditionalActivator::ActivatorType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GraphicSettingsConditionalActivator
class CORDL_TYPE GraphicSettingsConditionalActivator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ActivatorType = ::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType;

  /// @brief Field _activateOnFalse, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__activateOnFalse, put = __cordl_internal_set__activateOnFalse)) bool _activateOnFalse;

  /// @brief Field _activatorType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__activatorType, put = __cordl_internal_set__activatorType)) ::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType _activatorType;

  /// @brief Field _sceneSetupData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Field _settingsManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Method GetGraphicsActivatorType, addr 0x3b29654, size 0x90, virtual false, abstract: false, final false
  inline bool GetGraphicsActivatorType();

  static inline ::GlobalNamespace::GraphicSettingsConditionalActivator* New_ctor();

  /// @brief Method Start, addr 0x3b29604, size 0x50, virtual false, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get__activateOnFalse() const;

  constexpr bool& __cordl_internal_get__activateOnFalse();

  constexpr ::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType const& __cordl_internal_get__activatorType() const;

  constexpr ::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType& __cordl_internal_get__activatorType();

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& __cordl_internal_get__sceneSetupData() const;

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr void __cordl_internal_set__activateOnFalse(bool value);

  constexpr void __cordl_internal_set__activatorType(::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType value);

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method .ctor, addr 0x3b296e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicSettingsConditionalActivator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphicSettingsConditionalActivator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphicSettingsConditionalActivator(GraphicSettingsConditionalActivator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphicSettingsConditionalActivator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphicSettingsConditionalActivator(GraphicSettingsConditionalActivator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5170 };

  /// @brief Field _activatorType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType ____activatorType;

  /// @brief Field _activateOnFalse, offset: 0x24, size: 0x1, def value: None
  bool ____activateOnFalse;

  /// @brief Field _settingsManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _sceneSetupData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GraphicSettingsConditionalActivator, ____activatorType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphicSettingsConditionalActivator, ____activateOnFalse) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphicSettingsConditionalActivator, ____settingsManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphicSettingsConditionalActivator, ____sceneSetupData) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GraphicSettingsConditionalActivator, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GraphicSettingsConditionalActivator_ActivatorType, "", "GraphicSettingsConditionalActivator/ActivatorType");
NEED_NO_BOX(::GlobalNamespace::GraphicSettingsConditionalActivator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GraphicSettingsConditionalActivator*, "", "GraphicSettingsConditionalActivator");
