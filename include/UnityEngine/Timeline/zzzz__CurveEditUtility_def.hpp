#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/CurveEditUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CurveEditUtility)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class CurveEditUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::Timeline::CurveEditUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::CurveEditUtility*, "UnityEngine.Timeline", "CurveEditUtility");
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.CurveEditUtility
class CORDL_TYPE CurveEditUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateMatchingCurve, addr 0x6dec600, size 0xf8, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationCurve* CreateMatchingCurve(::UnityEngine::AnimationCurve* curve);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CurveEditUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CurveEditUtility", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CurveEditUtility(CurveEditUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CurveEditUtility", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CurveEditUtility(CurveEditUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19307 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Timeline::CurveEditUtility) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Timeline
