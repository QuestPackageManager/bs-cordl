#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: ::MenuShockwave
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969)), TypeDefinitionIndex(TypeDefinitionIndex(15068))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4781))
// CS Name: ::MenuShockwave*
class CORDL_TYPE MenuShockwave : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _shockwavePS, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__shockwavePS, put = __cordl_internal_set__shockwavePS))::UnityW<::UnityEngine::ParticleSystem> _shockwavePS;

  /// @brief Field _vrPointer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPointer, put = __cordl_internal_set__vrPointer))::UnityW<::VRUIControls::VRPointer> _vrPointer;

  /// @brief Field _buttonClickEvents, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonClickEvents,
                      put = __cordl_internal_set__buttonClickEvents))::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*> _buttonClickEvents;

  /// @brief Field _shockwavePSEmitParams, offset 0x30, size 0x90
  __declspec(property(get = __cordl_internal_get__shockwavePSEmitParams, put = __cordl_internal_set__shockwavePSEmitParams))::UnityEngine::__ParticleSystem__EmitParams _shockwavePSEmitParams;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__shockwavePS();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__shockwavePS() const;

  constexpr void __cordl_internal_set__shockwavePS(::UnityW<::UnityEngine::ParticleSystem> value);

  constexpr ::UnityW<::VRUIControls::VRPointer>& __cordl_internal_get__vrPointer();

  constexpr ::UnityW<::VRUIControls::VRPointer> const& __cordl_internal_get__vrPointer() const;

  constexpr void __cordl_internal_set__vrPointer(::UnityW<::VRUIControls::VRPointer> value);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*>& __cordl_internal_get__buttonClickEvents();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*> const& __cordl_internal_get__buttonClickEvents() const;

  constexpr void __cordl_internal_set__buttonClickEvents(::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*> value);

  constexpr ::UnityEngine::__ParticleSystem__EmitParams& __cordl_internal_get__shockwavePSEmitParams();

  constexpr ::UnityEngine::__ParticleSystem__EmitParams const& __cordl_internal_get__shockwavePSEmitParams() const;

  constexpr void __cordl_internal_set__shockwavePSEmitParams(::UnityEngine::__ParticleSystem__EmitParams value);

  /// @brief Method Awake, addr 0x23df348, size 0x10, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnEnable, addr 0x23df358, size 0xd4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x23df42c, size 0xd4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method HandleButtonClickEvent, addr 0x23df500, size 0x28, virtual false, abstract: false, final false
  inline void HandleButtonClickEvent();

  /// @brief Method SpawnShockwave, addr 0x23df528, size 0xa4, virtual false, abstract: false, final false
  inline void SpawnShockwave(::UnityEngine::Vector3 pos);

  static inline ::GlobalNamespace::MenuShockwave* New_ctor();

  /// @brief Method .ctor, addr 0x23df5cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MenuShockwave", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuShockwave(MenuShockwave&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuShockwave", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuShockwave(MenuShockwave const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuShockwave();

public:
  /// @brief Field _shockwavePS, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____shockwavePS;

  /// @brief Field _vrPointer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::VRUIControls::VRPointer> ____vrPointer;

  /// @brief Field _buttonClickEvents, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::Signal>, ::Array<::UnityW<::GlobalNamespace::Signal>>*> ____buttonClickEvents;

  /// @brief Field _shockwavePSEmitParams, offset: 0x30, size: 0x90, def value: None
  ::UnityEngine::__ParticleSystem__EmitParams ____shockwavePSEmitParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuShockwave, 0xc0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuShockwave, ____shockwavePS) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuShockwave, ____vrPointer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuShockwave, ____buttonClickEvents) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuShockwave, ____shockwavePSEmitParams) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuShockwave);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuShockwave*, "", "MenuShockwave");
