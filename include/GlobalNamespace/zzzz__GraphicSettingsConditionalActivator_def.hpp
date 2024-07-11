#pragma once
// IWYU pragma private; include "GlobalNamespace/GraphicSettingsConditionalActivator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GraphicSettingsConditionalActivator_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicSettingsConditionalActivator)
namespace BeatSaber::GameSettings {
class GraphicSettingsHandler;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
struct __GraphicSettingsConditionalActivator__ActivatorType;
}
// Forward declare root types
namespace GlobalNamespace {
struct __GraphicSettingsConditionalActivator__ActivatorType;
}
namespace GlobalNamespace {
class GraphicSettingsConditionalActivator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType);
MARK_REF_PTR_T(::GlobalNamespace::GraphicSettingsConditionalActivator);
// Type: ::ActivatorType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GraphicSettingsConditionalActivator::ActivatorType
struct CORDL_TYPE __GraphicSettingsConditionalActivator__ActivatorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GraphicSettingsConditionalActivator__ActivatorType_Unwrapped
  enum struct ____GraphicSettingsConditionalActivator__ActivatorType_Unwrapped : int32_t {
    __E_smoke = static_cast<int32_t>(0x0),
    __E_depthTexture = static_cast<int32_t>(0x1),
    __E_burnmarkTrails = static_cast<int32_t>(0x2),
    __E_screenDisplacement = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GraphicSettingsConditionalActivator__ActivatorType_Unwrapped() const noexcept {
    return static_cast<____GraphicSettingsConditionalActivator__ActivatorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphicSettingsConditionalActivator__ActivatorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GraphicSettingsConditionalActivator__ActivatorType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field burnmarkTrails value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType const burnmarkTrails;

  /// @brief Field depthTexture value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType const depthTexture;

  /// @brief Field screenDisplacement value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType const screenDisplacement;

  /// @brief Field smoke value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType const smoke;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GraphicSettingsConditionalActivator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GraphicSettingsConditionalActivator*
class CORDL_TYPE GraphicSettingsConditionalActivator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ActivatorType = ::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType;

  /// @brief Field _activateOnFalse, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get__activateOnFalse, put = __cordl_internal_set__activateOnFalse)) bool _activateOnFalse;

  /// @brief Field _activatorType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__activatorType, put = __cordl_internal_set__activatorType))::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType _activatorType;

  /// @brief Field _graphicsSettingsHandler, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__graphicsSettingsHandler,
                      put = __cordl_internal_set__graphicsSettingsHandler))::BeatSaber::GameSettings::GraphicSettingsHandler* _graphicsSettingsHandler;

  /// @brief Field _sceneSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData))::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  /// @brief Method GetGraphicsActivatorType, addr 0x26c52bc, size 0x160, virtual false, abstract: false, final false
  inline bool GetGraphicsActivatorType();

  static inline ::GlobalNamespace::GraphicSettingsConditionalActivator* New_ctor();

  /// @brief Method Start, addr 0x26c526c, size 0x50, virtual false, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get__activateOnFalse() const;

  constexpr bool& __cordl_internal_get__activateOnFalse();

  constexpr ::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType const& __cordl_internal_get__activatorType() const;

  constexpr ::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType& __cordl_internal_get__activatorType();

  constexpr ::BeatSaber::GameSettings::GraphicSettingsHandler*& __cordl_internal_get__graphicsSettingsHandler();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::GraphicSettingsHandler*> const& __cordl_internal_get__graphicsSettingsHandler() const;

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __cordl_internal_get__sceneSetupData() const;

  constexpr void __cordl_internal_set__activateOnFalse(bool value);

  constexpr void __cordl_internal_set__activatorType(::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType value);

  constexpr void __cordl_internal_set__graphicsSettingsHandler(::BeatSaber::GameSettings::GraphicSettingsHandler* value);

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  /// @brief Method .ctor, addr 0x26c541c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _activatorType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType ____activatorType;

  /// @brief Field _activateOnFalse, offset: 0x1c, size: 0x1, def value: None
  bool ____activateOnFalse;

  /// @brief Field _graphicsSettingsHandler, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::GameSettings::GraphicSettingsHandler* ____graphicsSettingsHandler;

  /// @brief Field _sceneSetupData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GraphicSettingsConditionalActivator, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphicSettingsConditionalActivator, ____activatorType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphicSettingsConditionalActivator, ____activateOnFalse) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphicSettingsConditionalActivator, ____graphicsSettingsHandler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GraphicSettingsConditionalActivator, ____sceneSetupData) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GraphicSettingsConditionalActivator__ActivatorType, "", "GraphicSettingsConditionalActivator/ActivatorType");
NEED_NO_BOX(::GlobalNamespace::GraphicSettingsConditionalActivator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GraphicSettingsConditionalActivator*, "", "GraphicSettingsConditionalActivator");
