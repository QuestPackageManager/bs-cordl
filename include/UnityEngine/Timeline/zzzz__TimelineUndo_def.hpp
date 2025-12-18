#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelineUndo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TimelineUndo)
namespace UnityEngine::Timeline {
class TimelineAsset;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TimelineUndo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TimelineUndo);
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TimelineUndo
class CORDL_TYPE TimelineUndo : public ::System::Object {
public:
  // Declarations
  /// @brief Method PushDestroyUndo, addr 0x6816e08, size 0x8c, virtual false, abstract: false, final false
  static inline void PushDestroyUndo(::UnityEngine::Timeline::TimelineAsset* timeline, ::UnityEngine::Object* thingToDirty, ::UnityEngine::Object* objectToDestroy);

  /// @brief Method PushUndo, addr 0x6816e98, size 0x4, virtual false, abstract: false, final false
  static inline void PushUndo(::UnityEngine::Object* thingToDirty, ::StringW operation);

  /// @brief Method PushUndo, addr 0x6816e94, size 0x4, virtual false, abstract: false, final false
  static inline void PushUndo(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> thingsToDirty, ::StringW operation);

  /// @brief Method RegisterCreatedObjectUndo, addr 0x6816e9c, size 0x4, virtual false, abstract: false, final false
  static inline void RegisterCreatedObjectUndo(::UnityEngine::Object* thingCreated, ::StringW operation);

  /// @brief Method UndoName, addr 0x6816ea0, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW UndoName(::StringW name);

  /// @brief Method get_undoEnabled, addr 0x6816e00, size 0x8, virtual false, abstract: false, final false
  static inline bool get_undoEnabled();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineUndo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimelineUndo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelineUndo(TimelineUndo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelineUndo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelineUndo(TimelineUndo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19089 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineUndo, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TimelineUndo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineUndo*, "UnityEngine.Timeline", "TimelineUndo");
