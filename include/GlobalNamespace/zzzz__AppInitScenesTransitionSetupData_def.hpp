#pragma once
// IWYU pragma private; include "GlobalNamespace\AppInitScenesTransitionSetupData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppInitScenesTransitionSetupData)
namespace GlobalNamespace {
struct AppInitScenesTransitionSetupData_AppInitOverrideStartType;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupData_AppInitSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
struct AppInitScenesTransitionSetupData_AppInitOverrideStartType;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupData;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupData_AppInitSceneSetupData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType);
MARK_REF_T(::GlobalNamespace::AppInitScenesTransitionSetupData*);
MARK_REF_T(::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType, "", "AppInitScenesTransitionSetupData/AppInitOverrideStartType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AppInitScenesTransitionSetupData*, "", "AppInitScenesTransitionSetupData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData*, "", "AppInitScenesTransitionSetupData/AppInitSceneSetupData");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: AppInitScenesTransitionSetupData/AppInitOverrideStartType
struct CORDL_TYPE AppInitScenesTransitionSetupData_AppInitOverrideStartType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AppInitScenesTransitionSetupData_AppInitOverrideStartType_Unwrapped
  enum struct __AppInitScenesTransitionSetupData_AppInitOverrideStartType_Unwrapped : int32_t {
    __E_DoNotOverride = static_cast<int32_t>(0x0),
    __E_Default = static_cast<int32_t>(0x1),
    __E_DirectlyToMenu = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AppInitScenesTransitionSetupData_AppInitOverrideStartType_Unwrapped() const noexcept {
    return static_cast<__AppInitScenesTransitionSetupData_AppInitOverrideStartType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInitScenesTransitionSetupData_AppInitOverrideStartType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AppInitScenesTransitionSetupData_AppInitOverrideStartType(int32_t value__) noexcept;

  /// @brief Field Default value: I32(1)
  static ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType const Default;

  /// @brief Field DirectlyToMenu value: I32(2)
  static ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType const DirectlyToMenu;

  /// @brief Field DoNotOverride value: I32(0)
  static ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType const DoNotOverride;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21540 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies AppInitScenesTransitionSetupData::AppInitOverrideStartType, SceneSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: AppInitScenesTransitionSetupData/AppInitSceneSetupData
class CORDL_TYPE AppInitScenesTransitionSetupData_AppInitSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field <appInitOverrideStartType>k__BackingField, offset 0x10, size 0x4
  __declspec(property(
      get = __cordl_internal_get__appInitOverrideStartType_k__BackingField,
      put = __cordl_internal_set__appInitOverrideStartType_k__BackingField)) ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType _appInitOverrideStartType_k__BackingField;

  __declspec(property(get = get_appInitOverrideStartType, put = set_appInitOverrideStartType)) ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType appInitOverrideStartType;

  static inline ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData*
  New_ctor(::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType appInitOverrideStartType);

  constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType const& __cordl_internal_get__appInitOverrideStartType_k__BackingField() const;

  constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType& __cordl_internal_get__appInitOverrideStartType_k__BackingField();

  constexpr void __cordl_internal_set__appInitOverrideStartType_k__BackingField(::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType value);

  /// @brief Method .ctor, addr 0x3308144, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType appInitOverrideStartType);

  /// @brief Method get_appInitOverrideStartType, addr 0x33082dc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType get_appInitOverrideStartType();

  /// @brief Method set_appInitOverrideStartType, addr 0x33082e4, size 0x8, virtual false, abstract: false, final false
  inline void set_appInitOverrideStartType(::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInitScenesTransitionSetupData_AppInitSceneSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppInitScenesTransitionSetupData_AppInitSceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppInitScenesTransitionSetupData_AppInitSceneSetupData(AppInitScenesTransitionSetupData_AppInitSceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppInitScenesTransitionSetupData_AppInitSceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppInitScenesTransitionSetupData_AppInitSceneSetupData(AppInitScenesTransitionSetupData_AppInitSceneSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21541 };

  /// @brief Field <appInitOverrideStartType>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType ____appInitOverrideStartType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData, ____appInitOverrideStartType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ScenesTransitionSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: AppInitScenesTransitionSetupData
class CORDL_TYPE AppInitScenesTransitionSetupData : public ::GlobalNamespace::ScenesTransitionSetupData {
public:
  // Declarations
  using AppInitOverrideStartType = ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType;

  using AppInitSceneSetupData = ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData;

  /// @brief Method Init, addr 0x3308058, size 0xe4, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitOverrideStartType appInitOverrideStartType);

  /// @brief Method InitAsDefault, addr 0x330813c, size 0x8, virtual false, abstract: false, final false
  inline void InitAsDefault();

  /// @brief Method InitDirectlyToMenu, addr 0x3308050, size 0x8, virtual false, abstract: false, final false
  inline void InitDirectlyToMenu();

  static inline ::GlobalNamespace::AppInitScenesTransitionSetupData* New_ctor();

  /// @brief Method .ctor, addr 0x33081c8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInitScenesTransitionSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppInitScenesTransitionSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppInitScenesTransitionSetupData(AppInitScenesTransitionSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppInitScenesTransitionSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppInitScenesTransitionSetupData(AppInitScenesTransitionSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21542 };

  /// @brief Field kGameInitSceneName offset 0xffffffff size 0x8
  static constexpr ::ConstString kGameInitSceneName{ u"GameInit" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AppInitScenesTransitionSetupData) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
