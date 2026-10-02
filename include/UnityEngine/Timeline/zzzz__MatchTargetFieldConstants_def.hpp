#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/MatchTargetFieldConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Timeline/zzzz__MatchTargetFields_def.hpp"
CORDL_MODULE_EXPORT(MatchTargetFieldConstants)
namespace UnityEngine::Timeline {
struct MatchTargetFields;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class MatchTargetFieldConstants;
}
// Write type traits
MARK_REF_T(::UnityEngine::Timeline::MatchTargetFieldConstants*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::MatchTargetFieldConstants*, "UnityEngine.Timeline", "MatchTargetFieldConstants");
// [Extension]
// Dependencies System.Object, UnityEngine.Timeline.MatchTargetFields
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.MatchTargetFieldConstants
class CORDL_TYPE MatchTargetFieldConstants : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// @brief Method HasAny, addr 0x6dd61cc, size 0xc, virtual false, abstract: false, final false
  static inline bool HasAny(::UnityEngine::Timeline::MatchTargetFields me, ::UnityEngine::Timeline::MatchTargetFields fields);

  /// [Extension]
  /// @brief Method Toggle, addr 0x6dd61d8, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::MatchTargetFields Toggle(::UnityEngine::Timeline::MatchTargetFields me, ::UnityEngine::Timeline::MatchTargetFields flag);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchTargetFieldConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MatchTargetFieldConstants", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MatchTargetFieldConstants(MatchTargetFieldConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MatchTargetFieldConstants", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MatchTargetFieldConstants(MatchTargetFieldConstants const&) = delete;

  /// @brief Field All value: I32(63)
  static ::UnityEngine::Timeline::MatchTargetFields const All;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Timeline::MatchTargetFields const None;

  /// @brief Field Position value: I32(7)
  static ::UnityEngine::Timeline::MatchTargetFields const Position;

  /// @brief Field Rotation value: I32(56)
  static ::UnityEngine::Timeline::MatchTargetFields const Rotation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19271 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Timeline::MatchTargetFieldConstants) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Timeline
