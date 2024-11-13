#pragma once
// IWYU pragma private; include "GlobalNamespace/EmitParticles.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EmitParticles)
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class EmitParticles;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EmitParticles);
// Type: ::EmitParticles
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EmitParticles*
class CORDL_TYPE EmitParticles : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _particleSystem, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystem, put = __cordl_internal_set__particleSystem)) ::UnityW<::UnityEngine::ParticleSystem> _particleSystem;

  /// @brief Method Emit, addr 0x3b1b7f8, size 0x1c, virtual false, abstract: false, final false
  inline void Emit(int32_t count);

  static inline ::GlobalNamespace::EmitParticles* New_ctor();

  constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__particleSystem() const;

  constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__particleSystem();

  constexpr void __cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem> value);

  /// @brief Method .ctor, addr 0x3b1b814, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmitParticles();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EmitParticles", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmitParticles(EmitParticles&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmitParticles", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmitParticles(EmitParticles const&) = delete;

  /// @brief Field _particleSystem, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ParticleSystem> ____particleSystem;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4189 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EmitParticles, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EmitParticles, ____particleSystem) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EmitParticles);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EmitParticles*, "", "EmitParticles");
