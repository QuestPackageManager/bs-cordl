#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/MatchTargetFieldConstants.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::UnityEngine::Timeline::MatchTargetFieldConstants);
// Dependencies System.Object, UnityEngine.Timeline.MatchTargetFields
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.MatchTargetFieldConstants
class CORDL_TYPE MatchTargetFieldConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field All, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_All, put = setStaticF_All)) ::UnityEngine::Timeline::MatchTargetFields All;

  /// @brief Field None, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_None, put = setStaticF_None)) ::UnityEngine::Timeline::MatchTargetFields None;

  /// @brief Field Position, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Position, put = setStaticF_Position)) ::UnityEngine::Timeline::MatchTargetFields Position;

  /// @brief Field Rotation, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Rotation, put = setStaticF_Rotation)) ::UnityEngine::Timeline::MatchTargetFields Rotation;

  /// @brief Method HasAny, addr 0x67f60f0, size 0x78, virtual false, abstract: false, final false
  static inline bool HasAny(::UnityEngine::Timeline::MatchTargetFields me, ::UnityEngine::Timeline::MatchTargetFields fields);

  /// @brief Method Toggle, addr 0x67f6168, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::MatchTargetFields Toggle(::UnityEngine::Timeline::MatchTargetFields me, ::UnityEngine::Timeline::MatchTargetFields flag);

  static inline ::UnityEngine::Timeline::MatchTargetFields getStaticF_All();

  static inline ::UnityEngine::Timeline::MatchTargetFields getStaticF_None();

  static inline ::UnityEngine::Timeline::MatchTargetFields getStaticF_Position();

  static inline ::UnityEngine::Timeline::MatchTargetFields getStaticF_Rotation();

  static inline void setStaticF_All(::UnityEngine::Timeline::MatchTargetFields value);

  static inline void setStaticF_None(::UnityEngine::Timeline::MatchTargetFields value);

  static inline void setStaticF_Position(::UnityEngine::Timeline::MatchTargetFields value);

  static inline void setStaticF_Rotation(::UnityEngine::Timeline::MatchTargetFields value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchTargetFieldConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MatchTargetFieldConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MatchTargetFieldConstants(MatchTargetFieldConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MatchTargetFieldConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MatchTargetFieldConstants(MatchTargetFieldConstants const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18988 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::MatchTargetFieldConstants, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::MatchTargetFieldConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::MatchTargetFieldConstants*, "UnityEngine.Timeline", "MatchTargetFieldConstants");
