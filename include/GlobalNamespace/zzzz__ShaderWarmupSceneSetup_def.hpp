#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(ShaderWarmupSceneSetup)
namespace GlobalNamespace {
class ColorSchemeSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ShaderWarmupSceneSetup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ShaderWarmupSceneSetup);
// Type: ::ShaderWarmupSceneSetup
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ShaderWarmupSceneSetup*
class CORDL_TYPE ShaderWarmupSceneSetup : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _sharedWarmupColorScheme, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sharedWarmupColorScheme, put = __cordl_internal_set__sharedWarmupColorScheme))::UnityW<::GlobalNamespace::ColorSchemeSO> _sharedWarmupColorScheme;

  /// @brief Method InstallBindings, addr 0x25ac77c, size 0xb8, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::ShaderWarmupSceneSetup* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO> const& __cordl_internal_get__sharedWarmupColorScheme() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO>& __cordl_internal_get__sharedWarmupColorScheme();

  constexpr void __cordl_internal_set__sharedWarmupColorScheme(::UnityW<::GlobalNamespace::ColorSchemeSO> value);

  /// @brief Method .ctor, addr 0x25ac834, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderWarmupSceneSetup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupSceneSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderWarmupSceneSetup(ShaderWarmupSceneSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupSceneSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderWarmupSceneSetup(ShaderWarmupSceneSetup const&) = delete;

  /// @brief Field _sharedWarmupColorScheme, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSchemeSO> ____sharedWarmupColorScheme;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShaderWarmupSceneSetup, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderWarmupSceneSetup, ____sharedWarmupColorScheme) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ShaderWarmupSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShaderWarmupSceneSetup*, "", "ShaderWarmupSceneSetup");
