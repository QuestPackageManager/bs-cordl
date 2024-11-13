#pragma once
// IWYU pragma private; include "GlobalNamespace/EnableEmmisionOnVisible.hpp"
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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnableEmmisionOnVisible*
class CORDL_TYPE EnableEmmisionOnVisible : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _emmisionModules, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__emmisionModules,
                      put = __cordl_internal_set__emmisionModules)) ::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*>
      _emmisionModules;

  /// @brief Field _particleSystems, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystems,
                      put = __cordl_internal_set__particleSystems)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*>
      _particleSystems;

  /// @brief Method Awake, addr 0x396d60c, size 0xe8, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::EnableEmmisionOnVisible* New_ctor();

  /// @brief Method OnBecameInvisible, addr 0x396d768, size 0x74, virtual false, abstract: false, final false
  inline void OnBecameInvisible();

  /// @brief Method OnBecameVisible, addr 0x396d6f4, size 0x74, virtual false, abstract: false, final false
  inline void OnBecameVisible();

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*> const& __cordl_internal_get__emmisionModules() const;

  constexpr ::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*>& __cordl_internal_get__emmisionModules();

  constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> const& __cordl_internal_get__particleSystems() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*>& __cordl_internal_get__particleSystems();

  constexpr void __cordl_internal_set__emmisionModules(::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*> value);

  constexpr void __cordl_internal_set__particleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> value);

  /// @brief Method .ctor, addr 0x396d7dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnableEmmisionOnVisible();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnableEmmisionOnVisible", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnableEmmisionOnVisible(EnableEmmisionOnVisible&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnableEmmisionOnVisible", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnableEmmisionOnVisible(EnableEmmisionOnVisible const&) = delete;

  /// @brief Field _particleSystems, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> ____particleSystems;

  /// @brief Field _emmisionModules, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::__ParticleSystem__EmissionModule, ::Array<::UnityEngine::__ParticleSystem__EmissionModule>*> ____emmisionModules;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16377 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnableEmmisionOnVisible, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnableEmmisionOnVisible, ____particleSystems) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnableEmmisionOnVisible, ____emmisionModules) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnableEmmisionOnVisible);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnableEmmisionOnVisible*, "", "EnableEmmisionOnVisible");
