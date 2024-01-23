#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(MainEffectContainerSO)
namespace GlobalNamespace {
class BoolSO;
}
namespace GlobalNamespace {
class MainEffectSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MainEffectContainerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainEffectContainerSO);
// Type: ::MainEffectContainerSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15857))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15290))
// CS Name: ::MainEffectContainerSO*
class CORDL_TYPE MainEffectContainerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _mainEffect, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mainEffect, put = __cordl_internal_set__mainEffect))::UnityW<::GlobalNamespace::MainEffectSO> _mainEffect;

  /// @brief Field _postProcessEnabled, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__postProcessEnabled, put = __cordl_internal_set__postProcessEnabled))::UnityW<::GlobalNamespace::BoolSO> _postProcessEnabled;

  __declspec(property(get = get_mainEffect))::UnityW<::GlobalNamespace::MainEffectSO> mainEffect;

  constexpr ::UnityW<::GlobalNamespace::MainEffectSO>& __cordl_internal_get__mainEffect();

  constexpr ::UnityW<::GlobalNamespace::MainEffectSO> const& __cordl_internal_get__mainEffect() const;

  constexpr void __cordl_internal_set__mainEffect(::UnityW<::GlobalNamespace::MainEffectSO> value);

  constexpr ::UnityW<::GlobalNamespace::BoolSO>& __cordl_internal_get__postProcessEnabled();

  constexpr ::UnityW<::GlobalNamespace::BoolSO> const& __cordl_internal_get__postProcessEnabled() const;

  constexpr void __cordl_internal_set__postProcessEnabled(::UnityW<::GlobalNamespace::BoolSO> value);

  /// @brief Method get_mainEffect, addr 0x28082a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MainEffectSO> get_mainEffect();

  /// @brief Method OnEnable, addr 0x28082b0, size 0x78, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Init, addr 0x2808328, size 0x74, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::MainEffectSO* mainEffect);

  static inline ::GlobalNamespace::MainEffectContainerSO* New_ctor();

  /// @brief Method .ctor, addr 0x280839c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectContainerSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainEffectContainerSO(MainEffectContainerSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainEffectContainerSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainEffectContainerSO(MainEffectContainerSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainEffectContainerSO();

public:
  /// @brief Field _mainEffect, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainEffectSO> ____mainEffect;

  /// @brief Field _postProcessEnabled, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoolSO> ____postProcessEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainEffectContainerSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectContainerSO, ____mainEffect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainEffectContainerSO, ____postProcessEnabled) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainEffectContainerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainEffectContainerSO*, "", "MainEffectContainerSO");
