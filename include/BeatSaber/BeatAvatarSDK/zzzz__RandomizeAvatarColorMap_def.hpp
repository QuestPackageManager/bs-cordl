#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/RandomizeAvatarColorMap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RandomizeAvatarColorMap)
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class RandomizeAvatarColorMap;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap);
// Type: BeatSaber.BeatAvatarSDK::RandomizeAvatarColorMap
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// CS Name: ::BeatSaber.BeatAvatarSDK::RandomizeAvatarColorMap*
class CORDL_TYPE RandomizeAvatarColorMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field <colorIndices>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__colorIndices_k__BackingField,
                      put = __cordl_internal_set__colorIndices_k__BackingField))::ArrayW<int32_t, ::Array<int32_t>*> _colorIndices_k__BackingField;

  /// @brief Field <totalIndices>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__totalIndices_k__BackingField, put = __cordl_internal_set__totalIndices_k__BackingField)) int32_t _totalIndices_k__BackingField;

  __declspec(property(get = get_colorIndices))::ArrayW<int32_t, ::Array<int32_t>*> colorIndices;

  __declspec(property(get = get_totalIndices)) int32_t totalIndices;

  static inline ::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap* New_ctor(int32_t headTopPrimaryColorIndex, int32_t headTopSecondaryColorIndex, int32_t glassesColorIndex,
                                                                              int32_t facialHairColorIndex, int32_t handsColorIndex, int32_t clothesPrimaryColorIndex,
                                                                              int32_t clothesSecondaryColorIndex, int32_t clothesDetailColorIndex);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__colorIndices_k__BackingField() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__colorIndices_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__totalIndices_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__totalIndices_k__BackingField();

  constexpr void __cordl_internal_set__colorIndices_k__BackingField(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__totalIndices_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x105e1e0, size 0x188, virtual false, abstract: false, final false
  inline void _ctor(int32_t headTopPrimaryColorIndex, int32_t headTopSecondaryColorIndex, int32_t glassesColorIndex, int32_t facialHairColorIndex, int32_t handsColorIndex,
                    int32_t clothesPrimaryColorIndex, int32_t clothesSecondaryColorIndex, int32_t clothesDetailColorIndex);

  /// @brief Method get_colorIndices, addr 0x105e768, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_colorIndices();

  /// @brief Method get_totalIndices, addr 0x105e760, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_totalIndices();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RandomizeAvatarColorMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RandomizeAvatarColorMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RandomizeAvatarColorMap(RandomizeAvatarColorMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RandomizeAvatarColorMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RandomizeAvatarColorMap(RandomizeAvatarColorMap const&) = delete;

  /// @brief Field <totalIndices>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____totalIndices_k__BackingField;

  /// @brief Field <colorIndices>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____colorIndices_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap, ____totalIndices_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap, ____colorIndices_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*, "BeatSaber.BeatAvatarSDK", "RandomizeAvatarColorMap");
