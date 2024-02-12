#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppInitScenesTransitionSetupDataSO)
namespace GlobalNamespace {
struct __AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType;
}
namespace GlobalNamespace {
class __AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
struct __AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class __AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType);
MARK_REF_PTR_T(::GlobalNamespace::AppInitScenesTransitionSetupDataSO);
MARK_REF_PTR_T(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData);
// Type: ::AppInitOverrideStartType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15457))
// CS Name: ::AppInitScenesTransitionSetupDataSO::AppInitOverrideStartType
struct CORDL_TYPE __AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType_Unwrapped
  enum struct ____AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType_Unwrapped : int32_t {
    __E_DoNotOverride = static_cast<int32_t>(0x0),
    __E_AppStart = static_cast<int32_t>(0x1),
    __E_AppRestart = static_cast<int32_t>(0x2),
    __E_MultiSceneEditor = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType_Unwrapped() const noexcept {
    return static_cast<____AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field DoNotOverride value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType const DoNotOverride;

  /// @brief Field AppStart value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType const AppStart;

  /// @brief Field AppRestart value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType const AppRestart;

  /// @brief Field MultiSceneEditor value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType const MultiSceneEditor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AppInitSceneSetupData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15456)), TypeDefinitionIndex(TypeDefinitionIndex(15457))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15458))
// CS Name: ::AppInitScenesTransitionSetupDataSO::AppInitSceneSetupData*
class CORDL_TYPE __AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field <appInitOverrideStartType>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__appInitOverrideStartType_k__BackingField,
                      put = __cordl_internal_set__appInitOverrideStartType_k__BackingField))::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType
      _appInitOverrideStartType_k__BackingField;

  __declspec(property(get = get_appInitOverrideStartType,
                      put = set_appInitOverrideStartType))::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType appInitOverrideStartType;

  constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType& __cordl_internal_get__appInitOverrideStartType_k__BackingField();

  constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType const& __cordl_internal_get__appInitOverrideStartType_k__BackingField() const;

  constexpr void __cordl_internal_set__appInitOverrideStartType_k__BackingField(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType value);

  /// @brief Method get_appInitOverrideStartType, addr 0xe45244, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType get_appInitOverrideStartType();

  /// @brief Method set_appInitOverrideStartType, addr 0xe4524c, size 0x8, virtual false, abstract: false, final false
  inline void set_appInitOverrideStartType(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType value);

  static inline ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*
  New_ctor(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType appInitOverrideStartType);

  /// @brief Method .ctor, addr 0xe3f5cc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType appInitOverrideStartType);

  // Ctor Parameters [CppParam { name: "", ty: "__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData(__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData(__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData();

public:
  /// @brief Field <appInitOverrideStartType>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType ____appInitOverrideStartType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData, ____appInitOverrideStartType_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AppInitScenesTransitionSetupDataSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15464))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15459))
// CS Name: ::AppInitScenesTransitionSetupDataSO*
class CORDL_TYPE AppInitScenesTransitionSetupDataSO : public ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
public:
  // Declarations
  using AppInitSceneSetupData = ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData;

  using AppInitOverrideStartType = ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType;

  /// @brief Method Init, addr 0xe44ffc, size 0x6c, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method InitAsAppStart, addr 0xe45154, size 0x6c, virtual false, abstract: false, final false
  inline void InitAsAppStart();

  /// @brief Method __Init, addr 0xe451c0, size 0x74, virtual false, abstract: false, final false
  inline void __Init(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType appInitOverrideStartType);

  static inline ::GlobalNamespace::AppInitScenesTransitionSetupDataSO* New_ctor();

  /// @brief Method .ctor, addr 0xe45234, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AppInitScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppInitScenesTransitionSetupDataSO(AppInitScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppInitScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppInitScenesTransitionSetupDataSO(AppInitScenesTransitionSetupDataSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInitScenesTransitionSetupDataSO();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppInitScenesTransitionSetupDataSO, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType, "", "AppInitScenesTransitionSetupDataSO/AppInitOverrideStartType");
NEED_NO_BOX(::GlobalNamespace::AppInitScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInitScenesTransitionSetupDataSO*, "", "AppInitScenesTransitionSetupDataSO");
NEED_NO_BOX(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*, "", "AppInitScenesTransitionSetupDataSO/AppInitSceneSetupData");
