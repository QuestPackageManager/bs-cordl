#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoteTrailParticleSystem)
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteTrailParticleSystem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteTrailParticleSystem);
// Type: ::NoteTrailParticleSystem
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15889)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4872))
// CS Name: ::NoteTrailParticleSystem*
class CORDL_TYPE NoteTrailParticleSystem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _particleSystem, offset 0x18, size 0x8
  __declspec(property(get = __get__particleSystem, put = __set__particleSystem))::UnityEngine::ParticleSystem* _particleSystem;

  /// @brief Field _emitParams, offset 0x20, size 0x90
  __declspec(property(get = __get__emitParams, put = __set__emitParams))::UnityEngine::__ParticleSystem__EmitParams _emitParams;

  constexpr ::UnityEngine::ParticleSystem*& __get__particleSystem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& __get__particleSystem() const;

  constexpr void __set__particleSystem(::UnityEngine::ParticleSystem* value);

  constexpr ::UnityEngine::__ParticleSystem__EmitParams& __get__emitParams();

  constexpr ::UnityEngine::__ParticleSystem__EmitParams const& __get__emitParams() const;

  constexpr void __set__emitParams(::UnityEngine::__ParticleSystem__EmitParams value);

  /// @brief Method Awake, addr 0x239af5c, size 0x10, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Emit, addr 0x239af6c, size 0x110, virtual false, abstract: false, final false
  inline void Emit(::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 endPos, int32_t count);

  static inline ::GlobalNamespace::NoteTrailParticleSystem* New_ctor();

  /// @brief Method .ctor, addr 0x239b07c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteTrailParticleSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteTrailParticleSystem(NoteTrailParticleSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteTrailParticleSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteTrailParticleSystem(NoteTrailParticleSystem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteTrailParticleSystem();

public:
  /// @brief Field _particleSystem, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* ____particleSystem;

  /// @brief Field _emitParams, offset: 0x20, size: 0x90, def value: None
  ::UnityEngine::__ParticleSystem__EmitParams ____emitParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteTrailParticleSystem, 0xb0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteTrailParticleSystem, ____particleSystem) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteTrailParticleSystem, ____emitParams) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteTrailParticleSystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteTrailParticleSystem*, "", "NoteTrailParticleSystem");
