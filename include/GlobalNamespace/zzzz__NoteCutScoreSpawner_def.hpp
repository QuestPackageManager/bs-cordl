#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NoteCutScoreSpawner)
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
class FlyingScoreSpawner;
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
// Type: ::NoteCutScoreSpawner
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4894))
// CS Name: ::NoteCutScoreSpawner*
class CORDL_TYPE NoteCutScoreSpawner : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _flyingScoreSpawner, offset 0x18, size 0x8
  __declspec(property(get = __get__flyingScoreSpawner, put = __set__flyingScoreSpawner))::GlobalNamespace::FlyingScoreSpawner* _flyingScoreSpawner;

  /// @brief Field _scoreController, offset 0x20, size 0x8
  __declspec(property(get = __get__scoreController, put = __set__scoreController))::GlobalNamespace::IScoreController* _scoreController;

  constexpr ::GlobalNamespace::FlyingScoreSpawner*& __get__flyingScoreSpawner();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FlyingScoreSpawner*> const& __get__flyingScoreSpawner() const;

  constexpr void __set__flyingScoreSpawner(::GlobalNamespace::FlyingScoreSpawner* value);

  constexpr ::GlobalNamespace::IScoreController*& __get__scoreController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> const& __get__scoreController() const;

  constexpr void __set__scoreController(::GlobalNamespace::IScoreController* value);

  /// @brief Method Start addr 0x23a36a4 size 0xf0 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x23a3794 size 0x108 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleScoringForNoteStarted addr 0x23a389c size 0xac virtual false final false
  inline void HandleScoringForNoteStarted(::GlobalNamespace::ScoringElement* scoringElement);

  static inline ::GlobalNamespace::NoteCutScoreSpawner* New_ctor();

  /// @brief Method .ctor addr 0x23a3948 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutScoreSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutScoreSpawner(NoteCutScoreSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutScoreSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutScoreSpawner(NoteCutScoreSpawner const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutScoreSpawner();

public:
  /// @brief Field _flyingScoreSpawner, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::FlyingScoreSpawner* ____flyingScoreSpawner;

  /// @brief Field _scoreController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IScoreController* ____scoreController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutScoreSpawner, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteCutScoreSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutScoreSpawner*, "", "NoteCutScoreSpawner");
