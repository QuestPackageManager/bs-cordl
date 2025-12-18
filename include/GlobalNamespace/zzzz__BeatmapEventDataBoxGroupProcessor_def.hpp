#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEventDataBoxGroupProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapEventDataBoxGroupProcessor)
namespace GlobalNamespace {
class BeatmapEventDataBoxGroup;
}
namespace GlobalNamespace {
template <typename T> class ISortedListItemProcessor_1;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupProcessor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEventDataBoxGroupProcessor);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapEventDataBoxGroupProcessor
class CORDL_TYPE BeatmapEventDataBoxGroupProcessor : public ::System::Object {
public:
  // Declarations
  /// @brief Field _dirtyBoxGroups, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dirtyBoxGroups,
                      put = __cordl_internal_set__dirtyBoxGroups)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* _dirtyBoxGroups;

  __declspec(property(get = get_dirtyBoxGroups)) ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* dirtyBoxGroups;

  /// @brief Convert operator to "::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>"
  constexpr operator ::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*() noexcept;

  /// @brief Method ClearDirtyData, addr 0x3618b6c, size 0x54, virtual false, abstract: false, final false
  inline void ClearDirtyData();

  static inline ::GlobalNamespace::BeatmapEventDataBoxGroupProcessor* New_ctor();

  /// @brief Method ProcessBeforeDeleteData, addr 0x3619c18, size 0x364, virtual true, abstract: false, final true
  inline void ProcessBeforeDeleteData(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* nodeToDelete);

  /// @brief Method ProcessInsertedData, addr 0x361964c, size 0x5cc, virtual true, abstract: false, final true
  inline void ProcessInsertedData(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* insertedNode);

  constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* const& __cordl_internal_get__dirtyBoxGroups() const;

  constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*& __cordl_internal_get__dirtyBoxGroups();

  constexpr void __cordl_internal_set__dirtyBoxGroups(::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* value);

  /// @brief Method .ctor, addr 0x36187a4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_dirtyBoxGroups, addr 0x3619644, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* get_dirtyBoxGroups();

  /// @brief Convert to "::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>"
  constexpr ::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>*
  i___GlobalNamespace__ISortedListItemProcessor_1___GlobalNamespace__BeatmapEventDataBoxGroup__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventDataBoxGroupProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroupProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventDataBoxGroupProcessor(BeatmapEventDataBoxGroupProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataBoxGroupProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventDataBoxGroupProcessor(BeatmapEventDataBoxGroupProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14881 };

  /// @brief Field _dirtyBoxGroups, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapEventDataBoxGroup*>* ____dirtyBoxGroups;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapEventDataBoxGroupProcessor, ____dirtyBoxGroups) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEventDataBoxGroupProcessor, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEventDataBoxGroupProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventDataBoxGroupProcessor*, "", "BeatmapEventDataBoxGroupProcessor");
