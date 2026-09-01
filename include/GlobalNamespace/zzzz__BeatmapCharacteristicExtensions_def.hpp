#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapCharacteristicExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapCharacteristicExtensions)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapCharacteristic;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatmapCharacteristicExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapCharacteristicExtensions*, "", "BeatmapCharacteristicExtensions");
// Dependencies BeatmapCharacteristic, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCharacteristicExtensions
class CORDL_TYPE BeatmapCharacteristicExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Field kAllBeatmapCharacteristics, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kAllBeatmapCharacteristics, put = setStaticF_kAllBeatmapCharacteristics)) ::ArrayW<::GlobalNamespace::BeatmapCharacteristic> kAllBeatmapCharacteristics;

  /// @brief Method AsEnum, addr 0x370f0bc, size 0x214, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BeatmapCharacteristic AsEnum(::GlobalNamespace::BeatmapCharacteristicSO* so);

  /// @brief Method BeatmapCharacteristicFromSerializedName, addr 0x370f5f4, size 0x170, virtual false, abstract: false, final false
  static inline bool BeatmapCharacteristicFromSerializedName(::StringW name, ::by_ref<::GlobalNamespace::BeatmapCharacteristic> characteristic);

  /// @brief Method CompoundIdPartName, addr 0x370f764, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW CompoundIdPartName(::GlobalNamespace::BeatmapCharacteristic characteristic);

  /// @brief Method ContainsRotationEvents, addr 0x3709f58, size 0x10, virtual false, abstract: false, final false
  static inline bool ContainsRotationEvents(::GlobalNamespace::BeatmapCharacteristic characteristic);

  /// @brief Method GetAllBeatmapCharacteristics, addr 0x370f57c, size 0x78, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<::GlobalNamespace::BeatmapCharacteristic> GetAllBeatmapCharacteristics();

  /// @brief Method HintLocalizationKey, addr 0x370f9dc, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW HintLocalizationKey(::GlobalNamespace::BeatmapCharacteristic characteristic);

  /// @brief Method LocalizedHint, addr 0x370f97c, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW LocalizedHint(::GlobalNamespace::BeatmapCharacteristic characteristic);

  /// @brief Method LocalizedName, addr 0x370f850, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW LocalizedName(::GlobalNamespace::BeatmapCharacteristic characteristic);

  /// @brief Method NameLocalizationKey, addr 0x370f8b0, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW NameLocalizationKey(::GlobalNamespace::BeatmapCharacteristic characteristic);

  /// @brief Method NumberOfColors, addr 0x370f840, size 0x10, virtual false, abstract: false, final false
  static inline int32_t NumberOfColors(::GlobalNamespace::BeatmapCharacteristic characteristic);

  /// @brief Method Requires360Movement, addr 0x370f834, size 0xc, virtual false, abstract: false, final false
  static inline bool Requires360Movement(::GlobalNamespace::BeatmapCharacteristic characteristic);

  /// @brief Method SerializedName, addr 0x370f3f0, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW SerializedName(::GlobalNamespace::BeatmapCharacteristic characteristic);

  /// @brief Method SerializedName, addr 0x370faa8, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW SerializedName(::GlobalNamespace::BeatmapCharacteristicSO* so);

  /// @brief Method SortingOrder, addr 0x370f830, size 0x4, virtual false, abstract: false, final false
  static inline int32_t SortingOrder(::GlobalNamespace::BeatmapCharacteristic characteristic);

  static inline ::ArrayW<::GlobalNamespace::BeatmapCharacteristic> getStaticF_kAllBeatmapCharacteristics();

  static inline void setStaticF_kAllBeatmapCharacteristics(::ArrayW<::GlobalNamespace::BeatmapCharacteristic> value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14879 };

  /// @brief Field kDegree360HintLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDegree360HintLocalizationKey{ u"LEVEL_360DEGREE_HINT" };

  /// @brief Field kDegree360NameLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDegree360NameLocalizationKey{ u"LEVEL_360DEGREE" };

  /// @brief Field kDegree360SerializedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDegree360SerializedName{ u"360Degree" };

  /// @brief Field kDegree90HintLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDegree90HintLocalizationKey{ u"LEVEL_90DEGREE_HINT" };

  /// @brief Field kDegree90NameLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kDegree90NameLocalizationKey{ u"LEVEL_90DEGREE" };

  /// @brief Field kDegree90SerializedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDegree90SerializedName{ u"90Degree" };

  /// @brief Field kLegacyHintLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kLegacyHintLocalizationKey{ u"LEVEL_LEGACY_HINT" };

  /// @brief Field kLegacyNameLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kLegacyNameLocalizationKey{ u"LEVEL_LEGACY" };

  /// @brief Field kLegacySerializedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kLegacySerializedName{ u"Legacy" };

  /// @brief Field kNoArrowsHintLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kNoArrowsHintLocalizationKey{ u"LEVEL_NO_ARROWS_HINT" };

  /// @brief Field kNoArrowsNameLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kNoArrowsNameLocalizationKey{ u"LEVEL_NO_ARROWS" };

  /// @brief Field kNoArrowsSerializedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kNoArrowsSerializedName{ u"NoArrows" };

  /// @brief Field kOneSaberHintLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kOneSaberHintLocalizationKey{ u"LEVEL_ONE_SABER_HINT" };

  /// @brief Field kOneSaberNameLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kOneSaberNameLocalizationKey{ u"LEVEL_ONE_SABER" };

  /// @brief Field kOneSaberSerializedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kOneSaberSerializedName{ u"OneSaber" };

  /// @brief Field kStandardHintLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kStandardHintLocalizationKey{ u"LEVEL_STANDARD_HINT" };

  /// @brief Field kStandardNameLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kStandardNameLocalizationKey{ u"LEVEL_STANDARD" };

  /// @brief Field kStandardSerializedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kStandardSerializedName{ u"Standard" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicExtensions) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
