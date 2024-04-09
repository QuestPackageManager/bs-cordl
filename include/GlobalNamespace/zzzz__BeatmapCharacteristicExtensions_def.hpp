#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapCharacteristicExtensions)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicExtensions);
// Type: ::BeatmapCharacteristicExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapCharacteristicExtensions*
class CORDL_TYPE BeatmapCharacteristicExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method SerializedName, addr 0x13b6dfc, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW SerializedName(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicExtensions(BeatmapCharacteristicExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicExtensions(BeatmapCharacteristicExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicExtensions*, "", "BeatmapCharacteristicExtensions");
