#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MenuShockwave)
namespace UnityEngine {
struct Vector3;
}
namespace VRUIControls {
class VRPointer;
}
namespace GlobalNamespace {
class Signal;
}
namespace UnityEngine {
class ParticleSystem;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(15781))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5584))
// CS Name: ::MenuShockwave*
class CORDL_TYPE MenuShockwave : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _shockwavePS, offset 0x18, size 0x8
  __declspec(property(get = __get__shockwavePS, put = __set__shockwavePS))::UnityEngine::ParticleSystem* _shockwavePS;

  /// @brief Field _vrPointer, offset 0x20, size 0x8
  __declspec(property(get = __get__vrPointer, put = __set__vrPointer))::VRUIControls::VRPointer* _vrPointer;

  /// @brief Field _buttonClickEvents, offset 0x28, size 0x8
  __declspec(property(get = __get__buttonClickEvents, put = __set__buttonClickEvents))::ArrayW<::GlobalNamespace::Signal*, ::Array<::GlobalNamespace::Signal*>*> _buttonClickEvents;

  /// @brief Field _shockwavePSEmitParams, offset 0x30, size 0x90
  __declspec(property(get = __get__shockwavePSEmitParams, put = __set__shockwavePSEmitParams))::UnityEngine::__ParticleSystem__EmitParams _shockwavePSEmitParams;

  constexpr ::UnityEngine::ParticleSystem*& __get__shockwavePS();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& __get__shockwavePS() const;

  constexpr void __set__shockwavePS(::UnityEngine::ParticleSystem* value);

  constexpr ::VRUIControls::VRPointer*& __get__vrPointer();

  constexpr ::cordl_internals::to_const_pointer<::VRUIControls::VRPointer*> const& __get__vrPointer() const;

  constexpr void __set__vrPointer(::VRUIControls::VRPointer* value);

  constexpr ::ArrayW<::GlobalNamespace::Signal*, ::Array<::GlobalNamespace::Signal*>*>& __get__buttonClickEvents();

  constexpr ::ArrayW<::GlobalNamespace::Signal*, ::Array<::GlobalNamespace::Signal*>*> const& __get__buttonClickEvents() const;

  constexpr void __set__buttonClickEvents(::ArrayW<::GlobalNamespace::Signal*, ::Array<::GlobalNamespace::Signal*>*> value);

  constexpr ::UnityEngine::__ParticleSystem__EmitParams& __get__shockwavePSEmitParams();

  constexpr ::UnityEngine::__ParticleSystem__EmitParams const& __get__shockwavePSEmitParams() const;

  constexpr void __set__shockwavePSEmitParams(::UnityEngine::__ParticleSystem__EmitParams value);

  /// @brief Method Awake addr 0x21420a8 size 0x10 virtual false final false
  inline void Awake();

  /// @brief Method OnEnable addr 0x21420b8 size 0xd4 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x214218c size 0xd4 virtual false final false
  inline void OnDisable();

  /// @brief Method HandleButtonClickEvent addr 0x2142260 size 0x28 virtual false final false
  inline void HandleButtonClickEvent();

  /// @brief Method SpawnShockwave addr 0x2142288 size 0xa4 virtual false final false
  inline void SpawnShockwave(::UnityEngine::Vector3 pos);

  static inline ::GlobalNamespace::MenuShockwave* New_ctor();

  /// @brief Method .ctor addr 0x214232c size 0x8 virtual false final false
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
  ::UnityEngine::ParticleSystem* ____shockwavePS;

  /// @brief Field _vrPointer, offset: 0x20, size: 0x8, def value: None
  ::VRUIControls::VRPointer* ____vrPointer;

  /// @brief Field _buttonClickEvents, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::Signal*, ::Array<::GlobalNamespace::Signal*>*> ____buttonClickEvents;

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
