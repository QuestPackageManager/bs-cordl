#pragma once
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4842))
// CS Name: ::EmitParticles*
class CORDL_TYPE EmitParticles : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _particleSystem, offset 0x18, size 0x8
  __declspec(property(get = __get__particleSystem, put = __set__particleSystem))::UnityEngine::ParticleSystem* _particleSystem;

  constexpr ::UnityEngine::ParticleSystem*& __get__particleSystem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& __get__particleSystem() const;

  constexpr void __set__particleSystem(::UnityEngine::ParticleSystem* value);

  /// @brief Method Emit addr 0x2396db8 size 0x1c virtual false final false
  inline void Emit(int32_t count);

  static inline ::GlobalNamespace::EmitParticles* New_ctor();

  /// @brief Method .ctor addr 0x2396dd4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EmitParticles", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmitParticles(EmitParticles&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmitParticles", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmitParticles(EmitParticles const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmitParticles();

public:
  /// @brief Field _particleSystem, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ParticleSystem* ____particleSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EmitParticles, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EmitParticles);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EmitParticles*, "", "EmitParticles");
