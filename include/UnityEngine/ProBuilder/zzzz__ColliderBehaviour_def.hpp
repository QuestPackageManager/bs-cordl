#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/zzzz__EntityBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ColliderBehaviour)
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ColliderBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ColliderBehaviour);
// Type: UnityEngine.ProBuilder::ColliderBehaviour
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12123))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12111))
// CS Name: ::UnityEngine.ProBuilder::ColliderBehaviour*
class CORDL_TYPE ColliderBehaviour : public ::UnityEngine::ProBuilder::EntityBehaviour {
public:
  // Declarations
  /// @brief Method Initialize, addr 0x2b3c470, size 0x10c, virtual true, abstract: false, final false
  inline void Initialize();

  /// @brief Method OnEnterPlayMode, addr 0x2b3c660, size 0xb8, virtual true, abstract: false, final false
  inline void OnEnterPlayMode();

  /// @brief Method OnSceneLoaded, addr 0x2b3c718, size 0xb8, virtual true, abstract: false, final false
  inline void OnSceneLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  static inline ::UnityEngine::ProBuilder::ColliderBehaviour* New_ctor();

  /// @brief Method .ctor, addr 0x2b3c7d0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ColliderBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColliderBehaviour(ColliderBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColliderBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColliderBehaviour(ColliderBehaviour const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColliderBehaviour();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ColliderBehaviour, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::ColliderBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ColliderBehaviour*, "UnityEngine.ProBuilder", "ColliderBehaviour");
