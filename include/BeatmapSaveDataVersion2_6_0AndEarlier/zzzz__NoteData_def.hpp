#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteLineLayer_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveDataItem_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__NoteType_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteData)
namespace BeatmapSaveDataCommon {
struct NoteCutDirection;
}
namespace BeatmapSaveDataCommon {
struct NoteLineLayer;
}
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct NoteType;
}
// Forward declare root types
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
class NoteData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData);
// Type: BeatmapSaveDataVersion2_6_0AndEarlier::NoteData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: false
// CS Name: ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*
class CORDL_TYPE NoteData : public ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem {
public:
  // Declarations
  /// @brief Field _cutDirection, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__cutDirection, put = __cordl_internal_set__cutDirection))::BeatmapSaveDataCommon::NoteCutDirection _cutDirection;

  /// @brief Field _lineIndex, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__lineIndex, put = __cordl_internal_set__lineIndex)) int32_t _lineIndex;

  /// @brief Field _lineLayer, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__lineLayer, put = __cordl_internal_set__lineLayer))::BeatmapSaveDataCommon::NoteLineLayer _lineLayer;

  /// @brief Field _time, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__time, put = __cordl_internal_set__time)) float_t _time;

  /// @brief Field _type, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type))::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType _type;

  __declspec(property(get = get_cutDirection))::BeatmapSaveDataCommon::NoteCutDirection cutDirection;

  __declspec(property(get = get_lineIndex)) int32_t lineIndex;

  __declspec(property(get = get_lineLayer))::BeatmapSaveDataCommon::NoteLineLayer lineLayer;

  __declspec(property(get = get_time)) float_t time;

  __declspec(property(get = get_type))::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType type;

  static inline ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData* New_ctor(float_t time, int32_t lineIndex, ::BeatmapSaveDataCommon::NoteLineLayer lineLayer,
                                                                            ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType type, ::BeatmapSaveDataCommon::NoteCutDirection cutDirection);

  constexpr ::BeatmapSaveDataCommon::NoteCutDirection const& __cordl_internal_get__cutDirection() const;

  constexpr ::BeatmapSaveDataCommon::NoteCutDirection& __cordl_internal_get__cutDirection();

  constexpr int32_t const& __cordl_internal_get__lineIndex() const;

  constexpr int32_t& __cordl_internal_get__lineIndex();

  constexpr ::BeatmapSaveDataCommon::NoteLineLayer const& __cordl_internal_get__lineLayer() const;

  constexpr ::BeatmapSaveDataCommon::NoteLineLayer& __cordl_internal_get__lineLayer();

  constexpr float_t const& __cordl_internal_get__time() const;

  constexpr float_t& __cordl_internal_get__time();

  constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType const& __cordl_internal_get__type() const;

  constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__cutDirection(::BeatmapSaveDataCommon::NoteCutDirection value);

  constexpr void __cordl_internal_set__lineIndex(int32_t value);

  constexpr void __cordl_internal_set__lineLayer(::BeatmapSaveDataCommon::NoteLineLayer value);

  constexpr void __cordl_internal_set__time(float_t value);

  constexpr void __cordl_internal_set__type(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType value);

  /// @brief Method .ctor, addr 0x1325e2c, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(float_t time, int32_t lineIndex, ::BeatmapSaveDataCommon::NoteLineLayer lineLayer, ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType type,
                    ::BeatmapSaveDataCommon::NoteCutDirection cutDirection);

  /// @brief Method get_cutDirection, addr 0x1325e24, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::NoteCutDirection get_cutDirection();

  /// @brief Method get_lineIndex, addr 0x1325e0c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_lineIndex();

  /// @brief Method get_lineLayer, addr 0x1325e14, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::NoteLineLayer get_lineLayer();

  /// @brief Method get_time, addr 0x1325e04, size 0x8, virtual true, abstract: false, final false
  inline float_t get_time();

  /// @brief Method get_type, addr 0x1325e1c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType get_type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteData(NoteData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteData(NoteData const&) = delete;

  /// @brief Field _time, offset: 0x10, size: 0x4, def value: None
  float_t ____time;

  /// @brief Field _lineIndex, offset: 0x14, size: 0x4, def value: None
  int32_t ____lineIndex;

  /// @brief Field _lineLayer, offset: 0x18, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::NoteLineLayer ____lineLayer;

  /// @brief Field _type, offset: 0x1c, size: 0x4, def value: None
  ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType ____type;

  /// @brief Field _cutDirection, offset: 0x20, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::NoteCutDirection ____cutDirection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData, ____time) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData, ____lineIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData, ____lineLayer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData, ____type) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData, ____cutDirection) == 0x20, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*, "BeatmapSaveDataVersion2_6_0AndEarlier", "NoteData");
