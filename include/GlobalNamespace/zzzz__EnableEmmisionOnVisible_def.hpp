#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(EnableEmmisionOnVisible)
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct __ParticleSystem__EmissionModule;
}
// Forward declare root types
namespace GlobalNamespace {
class EnableEmmisionOnVisible;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnableEmmisionOnVisible);
// Type: ::EnableEmmisionOnVisible
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14518))
// CS Name: ::EnableEmmisionOnVisible*
class CORDL_TYPE EnableEmmisionOnVisible : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _particleSystems, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystems,
                      put = __cordl_internal_set__particleSystems))::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> _particleSystems;

  /// @brief Field _emmisionModules, offset 0x20, size 0x8
  __declspec(
      property(get = __cordl_internal_get__emmisionModules,
               put = __cordl_internal_set__emmisionModules))::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*> _emmisionModules;

  constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*>& __cordl_internal_get__particleSystems();

  constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> const& __cordl_internal_get__particleSystems() const;

  constexpr void __cordl_internal_set__particleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> value);

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*>& __cordl_internal_get__emmisionModules();

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*> const& __cordl_internal_get__emmisionModules() const;

  constexpr void __cordl_internal_set__emmisionModules(::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*> value);

  /// @brief Method Awake, addr 0x2186658, size 0xe8, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnBecameVisible, addr 0x2186740, size 0x74, virtual false, abstract: false, final false
  inline void OnBecameVisible();

  /// @brief Method OnBecameInvisible, addr 0x21867b4, size 0x74, virtual false, abstract: false, final false
  inline void OnBecameInvisible();

  static inline ::GlobalNamespace::EnableEmmisionOnVisible* New_ctor();

  /// @brief Method .ctor, addr 0x2186828, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnableEmmisionOnVisible", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnableEmmisionOnVisible(EnableEmmisionOnVisible&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnableEmmisionOnVisible", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnableEmmisionOnVisible(EnableEmmisionOnVisible const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnableEmmisionOnVisible();

public:
  /// @brief Field _particleSystems, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> ____particleSystems;

  /// @brief Field _emmisionModules, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*> ____emmisionModules;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnableEmmisionOnVisible, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnableEmmisionOnVisible, ____particleSystems) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnableEmmisionOnVisible, ____emmisionModules) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnableEmmisionOnVisible);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnableEmmisionOnVisible*, "", "EnableEmmisionOnVisible");
