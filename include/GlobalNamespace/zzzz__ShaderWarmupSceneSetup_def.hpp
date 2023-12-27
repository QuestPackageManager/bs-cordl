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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6082))
// CS Name: ::ShaderWarmupSceneSetup*
class CORDL_TYPE ShaderWarmupSceneSetup : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _sharedWarmupColorScheme, offset 0x20, size 0x8
  __declspec(property(get = __get__sharedWarmupColorScheme, put = __set__sharedWarmupColorScheme))::GlobalNamespace::ColorSchemeSO* _sharedWarmupColorScheme;

  constexpr ::GlobalNamespace::ColorSchemeSO*& __get__sharedWarmupColorScheme();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeSO*> const& __get__sharedWarmupColorScheme() const;

  constexpr void __set__sharedWarmupColorScheme(::GlobalNamespace::ColorSchemeSO* value);

  /// @brief Method InstallBindings addr 0x2320098 size 0xb8 virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::ShaderWarmupSceneSetup* New_ctor();

  /// @brief Method .ctor addr 0x2320150 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupSceneSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderWarmupSceneSetup(ShaderWarmupSceneSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupSceneSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderWarmupSceneSetup(ShaderWarmupSceneSetup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderWarmupSceneSetup();

public:
  /// @brief Field _sharedWarmupColorScheme, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemeSO* ____sharedWarmupColorScheme;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ShaderWarmupSceneSetup, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ShaderWarmupSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShaderWarmupSceneSetup*, "", "ShaderWarmupSceneSetup");
