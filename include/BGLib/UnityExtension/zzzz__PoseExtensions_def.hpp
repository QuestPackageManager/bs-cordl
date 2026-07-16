#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/PoseExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PoseExtensions)
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace BGLib::UnityExtension {
class PoseExtensions;
}
// Write type traits
MARK_REF_T(::BGLib::UnityExtension::PoseExtensions*);
DEFINE_IL2CPP_CLASS(::BGLib::UnityExtension::PoseExtensions*, "BGLib.UnityExtension", "PoseExtensions");
// Dependencies System.Object
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: BGLib.UnityExtension.PoseExtensions
class CORDL_TYPE PoseExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method InterpolateTo, addr 0x3326c58, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose InterpolateTo(::UnityEngine::Pose a, ::UnityEngine::Pose b, float_t t);

  /// @brief Method Invert, addr 0x3326ce8, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose Invert(::UnityEngine::Pose pose);

  /// @brief Method LerpTo, addr 0x3326d50, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose LerpTo(::UnityEngine::Pose a, ::UnityEngine::Pose b, float_t t);

  /// @brief Method MirrorController, addr 0x3326de0, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose MirrorController(::UnityEngine::Pose pose);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoseExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PoseExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoseExtensions(PoseExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoseExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoseExtensions(PoseExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20582 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BGLib::UnityExtension::PoseExtensions) == 0x10, "Size mismatch!");

} // namespace BGLib::UnityExtension
