#pragma once
// IWYU pragma private; include "GlobalNamespace/SetPSSaberGlowColor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SetPSSaberGlowColor)
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class SaberTypeObject;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class SetPSSaberGlowColor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SetPSSaberGlowColor);
// Type: ::SetPSSaberGlowColor
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SetPSSaberGlowColor*
class CORDL_TYPE SetPSSaberGlowColor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _colorManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _particleSystem, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystem, put = __cordl_internal_set__particleSystem)) ::UnityW<::UnityEngine::ParticleSystem> _particleSystem;

  /// @brief Field _saber, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__saber, put = __cordl_internal_set__saber)) ::UnityW<::GlobalNamespace::SaberTypeObject> _saber;

  static inline ::GlobalNamespace::SetPSSaberGlowColor* New_ctor();

  /// @brief Method Start, addr 0x3b70ae0, size 0x80, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __cordl_internal_get__colorManager() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem();

  constexpr ::UnityW<::GlobalNamespace::SaberTypeObject> const& __cordl_internal_get__saber() const;

  constexpr ::UnityW<::GlobalNamespace::SaberTypeObject>& __cordl_internal_get__saber();

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set__saber(::UnityW<::GlobalNamespace::SaberTypeObject> value);

  /// @brief Method .ctor, addr 0x3b70b60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetPSSaberGlowColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetPSSaberGlowColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetPSSaberGlowColor(SetPSSaberGlowColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetPSSaberGlowColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetPSSaberGlowColor(SetPSSaberGlowColor const&) = delete;

  /// @brief Field _saber, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberTypeObject> ____saber;

  /// @brief Field _colorManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field _particleSystem, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____particleSystem;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4648 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetPSSaberGlowColor, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SetPSSaberGlowColor, ____saber) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetPSSaberGlowColor, ____colorManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetPSSaberGlowColor, ____particleSystem) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetPSSaberGlowColor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetPSSaberGlowColor*, "", "SetPSSaberGlowColor");
