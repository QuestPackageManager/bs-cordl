#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEventDataProcessor_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapEventDataProcessor_1)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
template <typename T> class ISortedListItemProcessor_1;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class BeatmapEventDataProcessor_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::BeatmapEventDataProcessor_1);
// Type: ::BeatmapEventDataProcessor`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::BeatmapEventDataProcessor`1<T>*
class CORDL_TYPE BeatmapEventDataProcessor_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapDataItem*>"
  constexpr operator ::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapDataItem*>*() noexcept;

  static inline ::GlobalNamespace::BeatmapEventDataProcessor_1<T>* New_ctor();

  /// @brief Method ProcessBeforeDeleteData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void ProcessBeforeDeleteData(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete);

  /// @brief Method ProcessBeforeDeleteEventDataCommon, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ProcessBeforeDeleteEventDataCommon(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete);

  /// @brief Method ProcessBeforeDeleteEventDataInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete);

  /// @brief Method ProcessInsertedData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void ProcessInsertedData(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode);

  /// @brief Method ProcessInsertedEventDataCommon, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ProcessInsertedEventDataCommon(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode);

  /// @brief Method ProcessInsertedEventDataInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapDataItem*>"
  constexpr ::GlobalNamespace::ISortedListItemProcessor_1<::GlobalNamespace::BeatmapDataItem*>* i___GlobalNamespace__ISortedListItemProcessor_1___GlobalNamespace__BeatmapDataItem__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventDataProcessor_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataProcessor_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventDataProcessor_1(BeatmapEventDataProcessor_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataProcessor_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventDataProcessor_1(BeatmapEventDataProcessor_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17015 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BeatmapEventDataProcessor_1, "", "BeatmapEventDataProcessor`1");
