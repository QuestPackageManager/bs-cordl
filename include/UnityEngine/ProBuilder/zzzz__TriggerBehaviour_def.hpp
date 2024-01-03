#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/zzzz__EntityBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TriggerBehaviour)
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class TriggerBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::TriggerBehaviour);
// Type: UnityEngine.ProBuilder::TriggerBehaviour
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12123))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12210))
// CS Name: ::UnityEngine.ProBuilder::TriggerBehaviour*
class CORDL_TYPE TriggerBehaviour : public ::UnityEngine::ProBuilder::EntityBehaviour {
public:
  // Declarations
  /// @brief Method Initialize, addr 0x2b7ccd4, size 0x19c, virtual true, abstract: false, final false
  inline void Initialize();

  /// @brief Method OnEnterPlayMode, addr 0x2b7ce70, size 0xb8, virtual true, abstract: false, final false
  inline void OnEnterPlayMode();

  /// @brief Method OnSceneLoaded, addr 0x2b7cf28, size 0xb8, virtual true, abstract: false, final false
  inline void OnSceneLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode mode);

  static inline ::UnityEngine::ProBuilder::TriggerBehaviour* New_ctor();

  /// @brief Method .ctor, addr 0x2b7cfe0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TriggerBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TriggerBehaviour(TriggerBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TriggerBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TriggerBehaviour(TriggerBehaviour const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TriggerBehaviour();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::TriggerBehaviour, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::TriggerBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::TriggerBehaviour*, "UnityEngine.ProBuilder", "TriggerBehaviour");
