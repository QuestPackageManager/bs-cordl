#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteCutScoreSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NoteCutScoreSpawner)
namespace GlobalNamespace {
class FlyingScoreSpawner;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
class ScoringElement;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteCutScoreSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteCutScoreSpawner);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteCutScoreSpawner
class CORDL_TYPE NoteCutScoreSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _flyingScoreSpawner, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__flyingScoreSpawner, put = __cordl_internal_set__flyingScoreSpawner)) ::UnityW<::GlobalNamespace::FlyingScoreSpawner> _flyingScoreSpawner;

  /// @brief Field _scoreController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreController, put = __cordl_internal_set__scoreController)) ::GlobalNamespace::IScoreController* _scoreController;

  /// @brief Method HandleScoringForNoteStarted, addr 0x57ddc08, size 0xc8, virtual false, abstract: false, final false
  inline void HandleScoringForNoteStarted(::GlobalNamespace::ScoringElement* scoringElement);

  static inline ::GlobalNamespace::NoteCutScoreSpawner* New_ctor();

  /// @brief Method OnDestroy, addr 0x57ddb08, size 0x100, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x57dda10, size 0xf8, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::FlyingScoreSpawner> const& __cordl_internal_get__flyingScoreSpawner() const;

  constexpr ::UnityW<::GlobalNamespace::FlyingScoreSpawner>& __cordl_internal_get__flyingScoreSpawner();

  constexpr ::GlobalNamespace::IScoreController* const& __cordl_internal_get__scoreController() const;

  constexpr ::GlobalNamespace::IScoreController*& __cordl_internal_get__scoreController();

  constexpr void __cordl_internal_set__flyingScoreSpawner(::UnityW<::GlobalNamespace::FlyingScoreSpawner> value);

  constexpr void __cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value);

  /// @brief Method .ctor, addr 0x57ddcd0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutScoreSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteCutScoreSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutScoreSpawner(NoteCutScoreSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutScoreSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutScoreSpawner(NoteCutScoreSpawner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5818 };

  /// @brief Field _flyingScoreSpawner, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FlyingScoreSpawner> ____flyingScoreSpawner;

  /// @brief Field _scoreController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IScoreController* ____scoreController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteCutScoreSpawner, ____flyingScoreSpawner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteCutScoreSpawner, ____scoreController) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutScoreSpawner, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteCutScoreSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutScoreSpawner*, "", "NoteCutScoreSpawner");
