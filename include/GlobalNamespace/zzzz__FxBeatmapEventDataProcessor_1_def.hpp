#pragma once
// IWYU pragma private; include "GlobalNamespace/FxBeatmapEventDataProcessor_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
CORDL_MODULE_EXPORT(FxBeatmapEventDataProcessor_1)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class FxBeatmapEventDataProcessor_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::FxBeatmapEventDataProcessor_1);
// Type: ::FxBeatmapEventDataProcessor`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::FxBeatmapEventDataProcessor`1<T>*
class CORDL_TYPE FxBeatmapEventDataProcessor_1 : public ::GlobalNamespace::BeatmapEventDataProcessor_1<T> {
public:
  // Declarations
  static inline ::GlobalNamespace::FxBeatmapEventDataProcessor_1<T>* New_ctor();

  /// @brief Method ProcessBeforeDeleteEventDataInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete);

  /// @brief Method ProcessInsertedEventDataInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode);

  /// @brief Method UpdateByOther, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateByOther(T current, T other);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FxBeatmapEventDataProcessor_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FxBeatmapEventDataProcessor_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FxBeatmapEventDataProcessor_1(FxBeatmapEventDataProcessor_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FxBeatmapEventDataProcessor_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FxBeatmapEventDataProcessor_1(FxBeatmapEventDataProcessor_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17010 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::FxBeatmapEventDataProcessor_1, "", "FxBeatmapEventDataProcessor`1");
