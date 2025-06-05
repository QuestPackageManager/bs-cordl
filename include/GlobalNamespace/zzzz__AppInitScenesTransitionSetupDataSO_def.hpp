#pragma once
// IWYU pragma private; include "GlobalNamespace/AppInitScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppInitScenesTransitionSetupDataSO)
namespace GlobalNamespace {
struct AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
struct AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType);
MARK_REF_PTR_T(::GlobalNamespace::AppInitScenesTransitionSetupDataSO);
MARK_REF_PTR_T(::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType
struct CORDL_TYPE AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType_Unwrapped
  enum struct __AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType_Unwrapped : int32_t {
    __E_DoNotOverride = static_cast<int32_t>(0x0),
    __E_AppStart = static_cast<int32_t>(0x1),
    __E_AppRestart = static_cast<int32_t>(0x2),
    __E_MultiSceneEditor = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType_Unwrapped() const noexcept {
    return static_cast<__AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType(int32_t value__) noexcept;

  /// @brief Field AppRestart value: I32(2)
  static ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType const AppRestart;

  /// @brief Field AppStart value: I32(1)
  static ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType const AppStart;

  /// @brief Field DoNotOverride value: I32(0)
  static ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType const DoNotOverride;

  /// @brief Field MultiSceneEditor value: I32(3)
  static ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType const MultiSceneEditor;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17635 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType, SceneSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: AppInitScenesTransitionSetupDataSO/AppInitSceneSetupData
class CORDL_TYPE AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field <appInitOverrideStartType>k__BackingField, offset 0x10, size 0x4
  __declspec(property(
      get = __cordl_internal_get__appInitOverrideStartType_k__BackingField,
      put = __cordl_internal_set__appInitOverrideStartType_k__BackingField)) ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType _appInitOverrideStartType_k__BackingField;

  __declspec(property(get = get_appInitOverrideStartType, put = set_appInitOverrideStartType)) ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType appInitOverrideStartType;

  static inline ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData*
  New_ctor(::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType appInitOverrideStartType);

  constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType const& __cordl_internal_get__appInitOverrideStartType_k__BackingField() const;

  constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType& __cordl_internal_get__appInitOverrideStartType_k__BackingField();

  constexpr void __cordl_internal_set__appInitOverrideStartType_k__BackingField(::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType value);

  /// @brief Method .ctor, addr 0x2294a70, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType appInitOverrideStartType);

  /// @brief Method get_appInitOverrideStartType, addr 0x229ba78, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType get_appInitOverrideStartType();

  /// @brief Method set_appInitOverrideStartType, addr 0x229ba80, size 0x8, virtual false, abstract: false, final false
  inline void set_appInitOverrideStartType(::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData(AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData(AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17636 };

  /// @brief Field <appInitOverrideStartType>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType ____appInitOverrideStartType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData, ____appInitOverrideStartType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies SingleFixedSceneScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: AppInitScenesTransitionSetupDataSO
class CORDL_TYPE AppInitScenesTransitionSetupDataSO : public ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
public:
  // Declarations
  using AppInitOverrideStartType = ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType;

  using AppInitSceneSetupData = ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData;

  /// @brief Method Init, addr 0x229b848, size 0x64, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method InitAsAppStart, addr 0x229b998, size 0x64, virtual false, abstract: false, final false
  inline void InitAsAppStart();

  static inline ::GlobalNamespace::AppInitScenesTransitionSetupDataSO* New_ctor();

  /// @brief Method __Init, addr 0x229b9fc, size 0x6c, virtual false, abstract: false, final false
  inline void __Init(::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType appInitOverrideStartType);

  /// @brief Method .ctor, addr 0x229ba68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInitScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppInitScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppInitScenesTransitionSetupDataSO(AppInitScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppInitScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppInitScenesTransitionSetupDataSO(AppInitScenesTransitionSetupDataSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17637 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppInitScenesTransitionSetupDataSO, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitOverrideStartType, "", "AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType");
NEED_NO_BOX(::GlobalNamespace::AppInitScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInitScenesTransitionSetupDataSO*, "", "AppInitScenesTransitionSetupDataSO");
NEED_NO_BOX(::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData*, "", "AppInitScenesTransitionSetupDataSO/AppInitSceneSetupData");
