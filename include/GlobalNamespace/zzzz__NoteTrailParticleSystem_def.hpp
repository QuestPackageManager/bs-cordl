#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteTrailParticleSystem.hpp"
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
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoteTrailParticleSystem*
class CORDL_TYPE NoteTrailParticleSystem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _emitParams, offset 0x28, size 0x90
  __declspec(property(get = __cordl_internal_get__emitParams, put = __cordl_internal_set__emitParams)) ::UnityEngine::__ParticleSystem__EmitParams _emitParams;

  /// @brief Field _particleSystem, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystem, put = __cordl_internal_set__particleSystem)) ::UnityW<::UnityEngine::ParticleSystem> _particleSystem;

  /// @brief Method Awake, addr 0x3b200cc, size 0x10, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Emit, addr 0x3b200dc, size 0x110, virtual false, abstract: false, final false
  inline void Emit(::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 endPos, int32_t count);

  static inline ::GlobalNamespace::NoteTrailParticleSystem* New_ctor();

  constexpr ::UnityEngine::__ParticleSystem__EmitParams const& __cordl_internal_get__emitParams() const;

  constexpr ::UnityEngine::__ParticleSystem__EmitParams& __cordl_internal_get__emitParams();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem();

  constexpr void __cordl_internal_set__emitParams(::UnityEngine::__ParticleSystem__EmitParams value);

  constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  /// @brief Method .ctor, addr 0x3b201ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteTrailParticleSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteTrailParticleSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteTrailParticleSystem(NoteTrailParticleSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteTrailParticleSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteTrailParticleSystem(NoteTrailParticleSystem const&) = delete;

  /// @brief Field _particleSystem, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____particleSystem;

  /// @brief Field _emitParams, offset: 0x28, size: 0x90, def value: None
  ::UnityEngine::__ParticleSystem__EmitParams ____emitParams;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4219 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteTrailParticleSystem, 0xb8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteTrailParticleSystem, ____particleSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteTrailParticleSystem, ____emitParams) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteTrailParticleSystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteTrailParticleSystem*, "", "NoteTrailParticleSystem");
