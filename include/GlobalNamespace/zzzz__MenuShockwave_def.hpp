#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuShockwave.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
CORDL_MODULE_EXPORT(MenuShockwave)
namespace GlobalNamespace {
class Signal;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
namespace VRUIControls {
class VRPointer;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuShockwave;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MenuShockwave);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem::EmitParams
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuShockwave
class CORDL_TYPE MenuShockwave : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _buttonClickEvents, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonClickEvents,
                      put = __cordl_internal_set__buttonClickEvents)) ::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*>
      _buttonClickEvents;

  /// @brief Field _shockwavePS, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__shockwavePS, put = __cordl_internal_set__shockwavePS)) ::UnityW<::UnityEngine::ParticleSystem> _shockwavePS;

  /// @brief Field _shockwavePSEmitParams, offset 0x38, size 0x90
  __declspec(property(get = __cordl_internal_get__shockwavePSEmitParams, put = __cordl_internal_set__shockwavePSEmitParams)) ::UnityEngine::ParticleSystem_EmitParams _shockwavePSEmitParams;

  /// @brief Field _vrPointer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPointer, put = __cordl_internal_set__vrPointer)) ::UnityW<::VRUIControls::VRPointer> _vrPointer;

  /// @brief Method Awake, addr 0x3bfdc50, size 0x10, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleButtonClickEvent, addr 0x3bfde00, size 0x28, virtual false, abstract: false, final false
  inline void HandleButtonClickEvent();

  static inline ::GlobalNamespace::MenuShockwave* New_ctor();

  /// @brief Method OnDisable, addr 0x3bfdd30, size 0xd0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3bfdc60, size 0xd0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SpawnShockwave, addr 0x3bfde28, size 0xa4, virtual false, abstract: false, final false
  inline void SpawnShockwave(::UnityEngine::Vector3 pos);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*> const& __cordl_internal_get__buttonClickEvents() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*>& __cordl_internal_get__buttonClickEvents();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__shockwavePS() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__shockwavePS();

  constexpr ::UnityEngine::ParticleSystem_EmitParams const& __cordl_internal_get__shockwavePSEmitParams() const;

  constexpr ::UnityEngine::ParticleSystem_EmitParams& __cordl_internal_get__shockwavePSEmitParams();

  constexpr ::UnityW<::VRUIControls::VRPointer> const& __cordl_internal_get__vrPointer() const;

  constexpr ::UnityW<::VRUIControls::VRPointer>& __cordl_internal_get__vrPointer();

  constexpr void __cordl_internal_set__buttonClickEvents(::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*> value);

  constexpr void __cordl_internal_set__shockwavePS(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr void __cordl_internal_set__shockwavePSEmitParams(::UnityEngine::ParticleSystem_EmitParams value);

  constexpr void __cordl_internal_set__vrPointer(::UnityW<::VRUIControls::VRPointer> value);

  /// @brief Method .ctor, addr 0x3bfdecc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuShockwave();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuShockwave", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuShockwave(MenuShockwave&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuShockwave", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuShockwave(MenuShockwave const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4777 };

  /// @brief Field _shockwavePS, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____shockwavePS;

  /// @brief Field _vrPointer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::VRUIControls::VRPointer> ____vrPointer;

  /// @brief Field _buttonClickEvents, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*> ____buttonClickEvents;

  /// @brief Field _shockwavePSEmitParams, offset: 0x38, size: 0x90, def value: None
  ::UnityEngine::ParticleSystem_EmitParams ____shockwavePSEmitParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuShockwave, ____shockwavePS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuShockwave, ____vrPointer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuShockwave, ____buttonClickEvents) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuShockwave, ____shockwavePSEmitParams) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuShockwave, 0xc8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuShockwave);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuShockwave*, "", "MenuShockwave");
