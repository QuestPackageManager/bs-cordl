#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__Axis_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBox_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightTranslationEventBox)
namespace BeatmapSaveDataCommon {
struct Axis;
}
namespace BeatmapSaveDataCommon {
struct DistributionParamType;
}
namespace BeatmapSaveDataCommon {
struct EaseType;
}
namespace BeatmapSaveDataVersion3 {
class IndexFilter;
}
namespace BeatmapSaveDataVersion3 {
class LightTranslationBaseData;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class LightTranslationEventBox;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::LightTranslationEventBox);
// Type: BeatmapSaveDataVersion3::LightTranslationEventBox
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: ::BeatmapSaveDataVersion3::LightTranslationEventBox*
class CORDL_TYPE LightTranslationEventBox : public ::BeatmapSaveDataVersion3::EventBox {
public:
  // Declarations
  /// @brief Field a, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_a, put = __cordl_internal_set_a))::BeatmapSaveDataCommon::Axis a;

  __declspec(property(get = get_axis))::BeatmapSaveDataCommon::Axis axis;

  /// @brief Field b, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b)) int32_t b;

  __declspec(property(get = get_flipTranslation)) bool flipTranslation;

  __declspec(property(get = get_gapDistributionEaseType))::BeatmapSaveDataCommon::EaseType gapDistributionEaseType;

  __declspec(property(get = get_gapDistributionParam)) float_t gapDistributionParam;

  __declspec(property(get = get_gapDistributionParamType))::BeatmapSaveDataCommon::DistributionParamType gapDistributionParamType;

  __declspec(property(get = get_gapDistributionShouldAffectFirstBaseEvent)) bool gapDistributionShouldAffectFirstBaseEvent;

  /// @brief Field i, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_i, put = __cordl_internal_set_i))::BeatmapSaveDataCommon::EaseType i;

  /// @brief Field l, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_l, put = __cordl_internal_set_l))::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationBaseData*>* l;

  __declspec(property(get = get_lightTranslationBaseDataList))::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::LightTranslationBaseData*>* lightTranslationBaseDataList;

  /// @brief Field r, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_r, put = __cordl_internal_set_r)) int32_t r;

  /// @brief Field s, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_s, put = __cordl_internal_set_s)) float_t s;

  /// @brief Field t, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_t, put = __cordl_internal_set_t))::BeatmapSaveDataCommon::DistributionParamType t;

  static inline ::BeatmapSaveDataVersion3::LightTranslationEventBox*
  New_ctor(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, float_t beatDistributionParam, ::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType, float_t gapDistributionParam,
           ::BeatmapSaveDataCommon::DistributionParamType gapDistributionParamType, bool gapDistributionShouldAffectFirstBaseEvent, ::BeatmapSaveDataCommon::EaseType gapDistributionEaseType,
           ::BeatmapSaveDataCommon::Axis axis, bool flipTranslation, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationBaseData*>* lightTranslationBaseDataList);

  constexpr ::BeatmapSaveDataCommon::Axis const& __cordl_internal_get_a() const;

  constexpr ::BeatmapSaveDataCommon::Axis& __cordl_internal_get_a();

  constexpr int32_t const& __cordl_internal_get_b() const;

  constexpr int32_t& __cordl_internal_get_b();

  constexpr ::BeatmapSaveDataCommon::EaseType const& __cordl_internal_get_i() const;

  constexpr ::BeatmapSaveDataCommon::EaseType& __cordl_internal_get_i();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationBaseData*>*& __cordl_internal_get_l();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationBaseData*>*> const& __cordl_internal_get_l() const;

  constexpr int32_t const& __cordl_internal_get_r() const;

  constexpr int32_t& __cordl_internal_get_r();

  constexpr float_t const& __cordl_internal_get_s() const;

  constexpr float_t& __cordl_internal_get_s();

  constexpr ::BeatmapSaveDataCommon::DistributionParamType const& __cordl_internal_get_t() const;

  constexpr ::BeatmapSaveDataCommon::DistributionParamType& __cordl_internal_get_t();

  constexpr void __cordl_internal_set_a(::BeatmapSaveDataCommon::Axis value);

  constexpr void __cordl_internal_set_b(int32_t value);

  constexpr void __cordl_internal_set_i(::BeatmapSaveDataCommon::EaseType value);

  constexpr void __cordl_internal_set_l(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationBaseData*>* value);

  constexpr void __cordl_internal_set_r(int32_t value);

  constexpr void __cordl_internal_set_s(float_t value);

  constexpr void __cordl_internal_set_t(::BeatmapSaveDataCommon::DistributionParamType value);

  /// @brief Method .ctor, addr 0x12fcf78, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, float_t beatDistributionParam, ::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType,
                    float_t gapDistributionParam, ::BeatmapSaveDataCommon::DistributionParamType gapDistributionParamType, bool gapDistributionShouldAffectFirstBaseEvent,
                    ::BeatmapSaveDataCommon::EaseType gapDistributionEaseType, ::BeatmapSaveDataCommon::Axis axis, bool flipTranslation,
                    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationBaseData*>* lightTranslationBaseDataList);

  /// @brief Method get_axis, addr 0x12fcf40, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::Axis get_axis();

  /// @brief Method get_flipTranslation, addr 0x12fcf48, size 0x10, virtual false, abstract: false, final false
  inline bool get_flipTranslation();

  /// @brief Method get_gapDistributionEaseType, addr 0x12fcf68, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::EaseType get_gapDistributionEaseType();

  /// @brief Method get_gapDistributionParam, addr 0x12fcf30, size 0x8, virtual false, abstract: false, final false
  inline float_t get_gapDistributionParam();

  /// @brief Method get_gapDistributionParamType, addr 0x12fcf38, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::DistributionParamType get_gapDistributionParamType();

  /// @brief Method get_gapDistributionShouldAffectFirstBaseEvent, addr 0x12fcf58, size 0x10, virtual false, abstract: false, final false
  inline bool get_gapDistributionShouldAffectFirstBaseEvent();

  /// @brief Method get_lightTranslationBaseDataList, addr 0x12fcf70, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::LightTranslationBaseData*>* get_lightTranslationBaseDataList();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationEventBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationEventBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationEventBox(LightTranslationEventBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationEventBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationEventBox(LightTranslationEventBox const&) = delete;

  /// @brief Field s, offset: 0x20, size: 0x4, def value: None
  float_t ___s;

  /// @brief Field t, offset: 0x24, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::DistributionParamType ___t;

  /// @brief Field a, offset: 0x28, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::Axis ___a;

  /// @brief Field r, offset: 0x2c, size: 0x4, def value: None
  int32_t ___r;

  /// @brief Field b, offset: 0x30, size: 0x4, def value: None
  int32_t ___b;

  /// @brief Field i, offset: 0x34, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::EaseType ___i;

  /// @brief Field l, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightTranslationBaseData*>* ___l;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::LightTranslationEventBox, 0x40>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightTranslationEventBox, ___s) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightTranslationEventBox, ___t) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightTranslationEventBox, ___a) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightTranslationEventBox, ___r) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightTranslationEventBox, ___b) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightTranslationEventBox, ___i) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightTranslationEventBox, ___l) == 0x38, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::LightTranslationEventBox);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::LightTranslationEventBox*, "BeatmapSaveDataVersion3", "LightTranslationEventBox");
