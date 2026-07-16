#pragma once
// IWYU pragma private; include "GlobalNamespace/MainEffectContainerSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HardwareCategory_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MainEffectContainerSO)
namespace GlobalNamespace {
class BoolCvar;
}
namespace GlobalNamespace {
class BoolSO;
}
namespace GlobalNamespace {
struct MainEffectContainerSO_HardwareOverride;
}
namespace GlobalNamespace {
class MainEffectSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MainEffectContainerSO;
}
namespace GlobalNamespace {
struct MainEffectContainerSO_HardwareOverride;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MainEffectContainerSO*);
MARK_VAL_T(::GlobalNamespace::MainEffectContainerSO_HardwareOverride);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainEffectContainerSO*, "", "MainEffectContainerSO");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainEffectContainerSO_HardwareOverride, "", "MainEffectContainerSO/HardwareOverride");
// Dependencies HardwareCategory
namespace GlobalNamespace {
// Is value type: true
// CS Name: MainEffectContainerSO/HardwareOverride
struct CORDL_TYPE MainEffectContainerSO_HardwareOverride {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectContainerSO_HardwareOverride();

  // Ctor Parameters [CppParam { name: "hardwareCategory", ty: "::GlobalNamespace::HardwareCategory", modifiers: "", def_value: None }, CppParam { name: "mainEffect", ty:
  // "::UnityW<::GlobalNamespace::MainEffectSO>", modifiers: "", def_value: None }]
  constexpr MainEffectContainerSO_HardwareOverride(::GlobalNamespace::HardwareCategory hardwareCategory, ::UnityW<::GlobalNamespace::MainEffectSO> mainEffect) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20881 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field hardwareCategory, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::HardwareCategory hardwareCategory;

  /// @brief Field mainEffect, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectSO> mainEffect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainEffectContainerSO_HardwareOverride, hardwareCategory) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectContainerSO_HardwareOverride, mainEffect) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MainEffectContainerSO_HardwareOverride) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MainEffectContainerSO::HardwareOverride, PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainEffectContainerSO
class CORDL_TYPE MainEffectContainerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using HardwareOverride = ::GlobalNamespace::MainEffectContainerSO_HardwareOverride;

  /// @brief Field _enabled, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__enabled, put = setStaticF__enabled)) ::GlobalNamespace::BoolCvar* _enabled;

  /// @brief Field _hardwareOverrides, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__hardwareOverrides, put = __cordl_internal_set__hardwareOverrides)) ::ArrayW<::GlobalNamespace::MainEffectContainerSO_HardwareOverride>
      _hardwareOverrides;

  /// @brief Field _mainEffect, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffect, put = __cordl_internal_set__mainEffect)) ::UnityW<::GlobalNamespace::MainEffectSO> _mainEffect;

  /// @brief Field _mainEffectDisabled, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffectDisabled, put = __cordl_internal_set__mainEffectDisabled)) ::UnityW<::GlobalNamespace::MainEffectSO> _mainEffectDisabled;

  /// @brief Field <mainEffect>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffect_k__BackingField, put = __cordl_internal_set__mainEffect_k__BackingField)) ::UnityW<::GlobalNamespace::MainEffectSO>
      _mainEffect_k__BackingField;

  /// @brief Field _postProcessEnabled, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__postProcessEnabled, put = __cordl_internal_set__postProcessEnabled)) ::UnityW<::GlobalNamespace::BoolSO> _postProcessEnabled;

  __declspec(property(get = get_mainEffect, put = set_mainEffect)) ::UnityW<::GlobalNamespace::MainEffectSO> mainEffect;

  __declspec(property(get = get_postProcessEnabled)) ::UnityW<::GlobalNamespace::BoolSO> postProcessEnabled;

  /// @brief Method Init, addr 0x5f40b58, size 0x8, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::MainEffectSO* mainEffectEnabled, ::GlobalNamespace::MainEffectSO* mainEffectDisabled);

  static inline ::GlobalNamespace::MainEffectContainerSO* New_ctor();

  /// @brief Method OnDisable, addr 0x5f40b60, size 0xd8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x5f40a5c, size 0xfc, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnEnableChanged, addr 0x5f40c38, size 0xdc, virtual false, abstract: false, final false
  inline void OnEnableChanged();

  /// @brief Method ResolveMainEffect, addr 0x5f40d14, size 0xdc, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MainEffectSO> ResolveMainEffect();

  constexpr ::ArrayW<::GlobalNamespace::MainEffectContainerSO_HardwareOverride> const& __cordl_internal_get__hardwareOverrides() const;

  constexpr ::ArrayW<::GlobalNamespace::MainEffectContainerSO_HardwareOverride>& __cordl_internal_get__hardwareOverrides();

  constexpr ::UnityW<::GlobalNamespace::MainEffectSO> const& __cordl_internal_get__mainEffect() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectSO>& __cordl_internal_get__mainEffect();

  constexpr ::UnityW<::GlobalNamespace::MainEffectSO> const& __cordl_internal_get__mainEffectDisabled() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectSO>& __cordl_internal_get__mainEffectDisabled();

  constexpr ::UnityW<::GlobalNamespace::MainEffectSO> const& __cordl_internal_get__mainEffect_k__BackingField() const;

  constexpr ::UnityW<::GlobalNamespace::MainEffectSO>& __cordl_internal_get__mainEffect_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::BoolSO> const& __cordl_internal_get__postProcessEnabled() const;

  constexpr ::UnityW<::GlobalNamespace::BoolSO>& __cordl_internal_get__postProcessEnabled();

  constexpr void __cordl_internal_set__hardwareOverrides(::ArrayW<::GlobalNamespace::MainEffectContainerSO_HardwareOverride> value);

  constexpr void __cordl_internal_set__mainEffect(::UnityW<::GlobalNamespace::MainEffectSO> value);

  constexpr void __cordl_internal_set__mainEffectDisabled(::UnityW<::GlobalNamespace::MainEffectSO> value);

  constexpr void __cordl_internal_set__mainEffect_k__BackingField(::UnityW<::GlobalNamespace::MainEffectSO> value);

  constexpr void __cordl_internal_set__postProcessEnabled(::UnityW<::GlobalNamespace::BoolSO> value);

  /// @brief Method .ctor, addr 0x5f40df0, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BoolCvar* getStaticF__enabled();

  /// @brief Method get_mainEffect, addr 0x5f40a44, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MainEffectSO> get_mainEffect();

  /// @brief Method get_postProcessEnabled, addr 0x5f40a54, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BoolSO> get_postProcessEnabled();

  static inline void setStaticF__enabled(::GlobalNamespace::BoolCvar* value);

  /// @brief Method set_mainEffect, addr 0x5f40a4c, size 0x8, virtual false, abstract: false, final false
  inline void set_mainEffect(::GlobalNamespace::MainEffectSO* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectContainerSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainEffectContainerSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectContainerSO(MainEffectContainerSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectContainerSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectContainerSO(MainEffectContainerSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20882 };

  /// @brief Field _mainEffect, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectSO> ____mainEffect;

  /// @brief Field _mainEffectDisabled, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectSO> ____mainEffectDisabled;

  /// @brief Field _postProcessEnabled, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoolSO> ____postProcessEnabled;

  /// @brief Field _hardwareOverrides, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MainEffectContainerSO_HardwareOverride> ____hardwareOverrides;

  /// @brief Field <mainEffect>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectSO> ____mainEffect_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainEffectContainerSO, ____mainEffect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectContainerSO, ____mainEffectDisabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectContainerSO, ____postProcessEnabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectContainerSO, ____hardwareOverrides) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectContainerSO, ____mainEffect_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MainEffectContainerSO) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
