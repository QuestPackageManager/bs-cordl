#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SetPSSaberGlowColor)
namespace GlobalNamespace {
class ColorManager;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace GlobalNamespace {
class SaberTypeObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SetPSSaberGlowColor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SetPSSaberGlowColor);
// Type: ::SetPSSaberGlowColor
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5398))
// CS Name: ::SetPSSaberGlowColor*
class CORDL_TYPE SetPSSaberGlowColor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _saber, offset 0x18, size 0x8
  __declspec(property(get = __get__saber, put = __set__saber))::GlobalNamespace::SaberTypeObject* _saber;

  /// @brief Field _colorManager, offset 0x20, size 0x8
  __declspec(property(get = __get__colorManager, put = __set__colorManager))::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _particleSystem, offset 0x28, size 0x8
  __declspec(property(get = __get__particleSystem, put = __set__particleSystem))::UnityEngine::ParticleSystem* _particleSystem;

  constexpr ::GlobalNamespace::SaberTypeObject*& __get__saber();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberTypeObject*> const& __get__saber() const;

  constexpr void __set__saber(::GlobalNamespace::SaberTypeObject* value);

  constexpr ::GlobalNamespace::ColorManager*& __get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __get__colorManager() const;

  constexpr void __set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr ::UnityEngine::ParticleSystem*& __get__particleSystem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& __get__particleSystem() const;

  constexpr void __set__particleSystem(::UnityEngine::ParticleSystem* value);

  /// @brief Method Start addr 0x2120620 size 0x84 virtual false final false
  inline void Start();

  static inline ::GlobalNamespace::SetPSSaberGlowColor* New_ctor();

  /// @brief Method .ctor addr 0x21206a4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SetPSSaberGlowColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetPSSaberGlowColor(SetPSSaberGlowColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetPSSaberGlowColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetPSSaberGlowColor(SetPSSaberGlowColor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetPSSaberGlowColor();

public:
  /// @brief Field _saber, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SaberTypeObject* ____saber;

  /// @brief Field _colorManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _particleSystem, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* ____particleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetPSSaberGlowColor, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SetPSSaberGlowColor, ____saber) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetPSSaberGlowColor, ____colorManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetPSSaberGlowColor, ____particleSystem) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetPSSaberGlowColor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetPSSaberGlowColor*, "", "SetPSSaberGlowColor");
