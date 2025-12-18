#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/LightColorEventBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBox_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightColorEventBox)
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
class LightColorBaseData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class LightColorEventBox;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::LightColorEventBox);
// Dependencies BeatmapSaveDataCommon.DistributionParamType, BeatmapSaveDataCommon.EaseType, BeatmapSaveDataVersion3.EventBox
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: BeatmapSaveDataVersion3.LightColorEventBox
class CORDL_TYPE LightColorEventBox : public ::BeatmapSaveDataVersion3::EventBox {
public:
  // Declarations
  /// @brief Field b, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b)) int32_t b;

  __declspec(property(get = get_brightnessDistributionEaseType)) ::BeatmapSaveDataCommon::EaseType brightnessDistributionEaseType;

  __declspec(property(get = get_brightnessDistributionParam)) float_t brightnessDistributionParam;

  __declspec(property(get = get_brightnessDistributionParamType)) ::BeatmapSaveDataCommon::DistributionParamType brightnessDistributionParamType;

  __declspec(property(get = get_brightnessDistributionShouldAffectFirstBaseEvent)) bool brightnessDistributionShouldAffectFirstBaseEvent;

  /// @brief Field e, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_e, put = __cordl_internal_set_e)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorBaseData*>* e;

  /// @brief Field i, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_i, put = __cordl_internal_set_i)) ::BeatmapSaveDataCommon::EaseType i;

  __declspec(property(get = get_lightColorBaseDataList)) ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorBaseData*>* lightColorBaseDataList;

  /// @brief Field r, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_r, put = __cordl_internal_set_r)) float_t r;

  /// @brief Field t, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_t, put = __cordl_internal_set_t)) ::BeatmapSaveDataCommon::DistributionParamType t;

  static inline ::BeatmapSaveDataVersion3::LightColorEventBox*
  New_ctor(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, float_t beatDistributionParam, ::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType,
           float_t brightnessDistributionParam, bool brightnessDistributionShouldAffectFirstBaseEvent, ::BeatmapSaveDataCommon::DistributionParamType brightnessDistributionParamType,
           ::BeatmapSaveDataCommon::EaseType brightnessDistributionEaseType, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorBaseData*>* lightColorBaseDataList);

  constexpr int32_t const& __cordl_internal_get_b() const;

  constexpr int32_t& __cordl_internal_get_b();

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorBaseData*>* const& __cordl_internal_get_e() const;

  constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorBaseData*>*& __cordl_internal_get_e();

  constexpr ::BeatmapSaveDataCommon::EaseType const& __cordl_internal_get_i() const;

  constexpr ::BeatmapSaveDataCommon::EaseType& __cordl_internal_get_i();

  constexpr float_t const& __cordl_internal_get_r() const;

  constexpr float_t& __cordl_internal_get_r();

  constexpr ::BeatmapSaveDataCommon::DistributionParamType const& __cordl_internal_get_t() const;

  constexpr ::BeatmapSaveDataCommon::DistributionParamType& __cordl_internal_get_t();

  constexpr void __cordl_internal_set_b(int32_t value);

  constexpr void __cordl_internal_set_e(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorBaseData*>* value);

  constexpr void __cordl_internal_set_i(::BeatmapSaveDataCommon::EaseType value);

  constexpr void __cordl_internal_set_r(float_t value);

  constexpr void __cordl_internal_set_t(::BeatmapSaveDataCommon::DistributionParamType value);

  /// @brief Method .ctor, addr 0x3661880, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, float_t beatDistributionParam, ::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType,
                    float_t brightnessDistributionParam, bool brightnessDistributionShouldAffectFirstBaseEvent, ::BeatmapSaveDataCommon::DistributionParamType brightnessDistributionParamType,
                    ::BeatmapSaveDataCommon::EaseType brightnessDistributionEaseType, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorBaseData*>* lightColorBaseDataList);

  /// @brief Method get_brightnessDistributionEaseType, addr 0x3661870, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::EaseType get_brightnessDistributionEaseType();

  /// @brief Method get_brightnessDistributionParam, addr 0x3661850, size 0x8, virtual false, abstract: false, final false
  inline float_t get_brightnessDistributionParam();

  /// @brief Method get_brightnessDistributionParamType, addr 0x3661858, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::DistributionParamType get_brightnessDistributionParamType();

  /// @brief Method get_brightnessDistributionShouldAffectFirstBaseEvent, addr 0x3661860, size 0x10, virtual false, abstract: false, final false
  inline bool get_brightnessDistributionShouldAffectFirstBaseEvent();

  /// @brief Method get_lightColorBaseDataList, addr 0x3661878, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorBaseData*>* get_lightColorBaseDataList();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorEventBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightColorEventBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorEventBox(LightColorEventBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorEventBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorEventBox(LightColorEventBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15332 };

  /// @brief Field r, offset: 0x20, size: 0x4, def value: None
  float_t ___r;

  /// @brief Field t, offset: 0x24, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::DistributionParamType ___t;

  /// @brief Field b, offset: 0x28, size: 0x4, def value: None
  int32_t ___b;

  /// @brief Field i, offset: 0x2c, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::EaseType ___i;

  /// @brief Field e, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorBaseData*>* ___e;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion3::LightColorEventBox, ___r) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightColorEventBox, ___t) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightColorEventBox, ___b) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightColorEventBox, ___i) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightColorEventBox, ___e) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::LightColorEventBox, 0x38>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::LightColorEventBox);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::LightColorEventBox*, "BeatmapSaveDataVersion3", "LightColorEventBox");
