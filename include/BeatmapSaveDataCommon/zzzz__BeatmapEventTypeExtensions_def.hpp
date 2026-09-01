#pragma once
// IWYU pragma private; include "BeatmapSaveDataCommon\BeatmapEventTypeExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapEventTypeExtensions)
namespace BeatmapSaveDataCommon {
struct BeatmapEventType;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
// Forward declare root types
namespace BeatmapSaveDataCommon {
class BeatmapEventTypeExtensions;
}
// Write type traits
MARK_REF_T(::BeatmapSaveDataCommon::BeatmapEventTypeExtensions*);
DEFINE_IL2CPP_CLASS(::BeatmapSaveDataCommon::BeatmapEventTypeExtensions*, "BeatmapSaveDataCommon", "BeatmapEventTypeExtensions");
// Dependencies System.Object
namespace BeatmapSaveDataCommon {
// Is value type: false
// CS Name: BeatmapSaveDataCommon.BeatmapEventTypeExtensions
class CORDL_TYPE BeatmapEventTypeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetSpecialEventTypes, addr 0x375fd6c, size 0x100, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* GetSpecialEventTypes();

  static inline ::BeatmapSaveDataCommon::BeatmapEventTypeExtensions* New_ctor();

  /// @brief Method .ctor, addr 0x375fe6c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventTypeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventTypeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventTypeExtensions(BeatmapEventTypeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventTypeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventTypeExtensions(BeatmapEventTypeExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15396 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatmapSaveDataCommon::BeatmapEventTypeExtensions) == 0x10, "Size mismatch!");

} // namespace BeatmapSaveDataCommon
