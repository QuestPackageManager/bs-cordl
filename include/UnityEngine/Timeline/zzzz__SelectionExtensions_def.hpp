#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/SelectionExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SelectionExtensions)
namespace UnityEngine::Timeline {
struct ObjectId;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class SelectionExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::Timeline::SelectionExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::SelectionExtensions*, "UnityEngine.Timeline", "SelectionExtensions");
// [Extension]
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.SelectionExtensions
class CORDL_TYPE SelectionExtensions : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// @brief Method GetObjectId, addr 0x6def740, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Timeline::ObjectId GetObjectId(::UnityEngine::Object* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectionExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectionExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectionExtensions(SelectionExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectionExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectionExtensions(SelectionExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19329 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Timeline::SelectionExtensions) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Timeline
