#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatFxBeatmapEventDataProcessor_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventDataProcessor_1_def.hpp"
CORDL_MODULE_EXPORT(FloatFxBeatmapEventDataProcessor_1)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace System::Collections::Generic {
template <typename T> class LinkedListNode_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class FloatFxBeatmapEventDataProcessor_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::FloatFxBeatmapEventDataProcessor_1);
// Dependencies BeatmapEventDataProcessor`1<T>
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: FloatFxBeatmapEventDataProcessor`1<T>
class CORDL_TYPE FloatFxBeatmapEventDataProcessor_1 : public ::GlobalNamespace::BeatmapEventDataProcessor_1<T> {
public:
  // Declarations
  static inline ::GlobalNamespace::FloatFxBeatmapEventDataProcessor_1<T>* New_ctor();

  /// @brief Method ProcessBeforeDeleteEventDataInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessBeforeDeleteEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* nodeToDelete);

  /// @brief Method ProcessInsertedEventDataInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessInsertedEventDataInternal(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>* insertedNode);

  /// @brief Method UpdateByOther, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateByOther(T current, T other);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxBeatmapEventDataProcessor_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBeatmapEventDataProcessor_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxBeatmapEventDataProcessor_1(FloatFxBeatmapEventDataProcessor_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBeatmapEventDataProcessor_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxBeatmapEventDataProcessor_1(FloatFxBeatmapEventDataProcessor_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20981 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::FloatFxBeatmapEventDataProcessor_1, "", "FloatFxBeatmapEventDataProcessor`1");
