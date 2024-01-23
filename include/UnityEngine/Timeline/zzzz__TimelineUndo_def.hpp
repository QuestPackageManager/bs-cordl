#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: UnityEngine.Timeline::TimelineUndo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13940))
// CS Name: ::UnityEngine.Timeline::TimelineUndo*
class CORDL_TYPE TimelineUndo : public ::System::Object {
public:
  // Declarations
  /// @brief Method PushDestroyUndo, addr 0x2c726bc, size 0x88, virtual false, abstract: false, final false
  static inline void PushDestroyUndo(::UnityEngine::Timeline::TimelineAsset* timeline, ::UnityEngine::Object* thingToDirty, ::UnityEngine::Object* objectToDestroy);

  /// @brief Method PushUndo, addr 0x2c72744, size 0x4, virtual false, abstract: false, final false
  static inline void PushUndo(::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> thingsToDirty, ::StringW operation);

  /// @brief Method PushUndo, addr 0x2c72748, size 0x4, virtual false, abstract: false, final false
  static inline void PushUndo(::UnityEngine::Object* thingToDirty, ::StringW operation);

  /// @brief Method RegisterCreatedObjectUndo, addr 0x2c7274c, size 0x4, virtual false, abstract: false, final false
  static inline void RegisterCreatedObjectUndo(::UnityEngine::Object* thingCreated, ::StringW operation);

  /// @brief Method UndoName, addr 0x2c72750, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW UndoName(::StringW name);

  // Ctor Parameters [CppParam { name: "", ty: "TimelineUndo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimelineUndo(TimelineUndo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimelineUndo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimelineUndo(TimelineUndo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimelineUndo();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TimelineUndo, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TimelineUndo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineUndo*, "UnityEngine.Timeline", "TimelineUndo");
