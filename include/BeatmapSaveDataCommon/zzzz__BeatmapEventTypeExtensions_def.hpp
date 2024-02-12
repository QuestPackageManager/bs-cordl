#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::BeatmapSaveDataCommon::BeatmapEventTypeExtensions);
// Type: BeatmapSaveDataCommon::BeatmapEventTypeExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatmapSaveDataCommon {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11204))
// CS Name: ::BeatmapSaveDataCommon::BeatmapEventTypeExtensions*
class CORDL_TYPE BeatmapEventTypeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetSpecialEventTypes, addr 0x12bcc5c, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataCommon::BeatmapEventType>* GetSpecialEventTypes();

  static inline ::BeatmapSaveDataCommon::BeatmapEventTypeExtensions* New_ctor();

  /// @brief Method .ctor, addr 0x12bcd20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventTypeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEventTypeExtensions(BeatmapEventTypeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEventTypeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEventTypeExtensions(BeatmapEventTypeExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEventTypeExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataCommon::BeatmapEventTypeExtensions, 0x10>, "Size mismatch!");

} // namespace BeatmapSaveDataCommon
NEED_NO_BOX(::BeatmapSaveDataCommon::BeatmapEventTypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataCommon::BeatmapEventTypeExtensions*, "BeatmapSaveDataCommon", "BeatmapEventTypeExtensions");
