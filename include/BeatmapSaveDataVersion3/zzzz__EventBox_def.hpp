#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EventBox)
namespace BeatmapSaveDataCommon {
struct DistributionParamType;
}
namespace BeatmapSaveDataVersion3 {
class IndexFilter;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class EventBox;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::EventBox);
// Type: BeatmapSaveDataVersion3::EventBox
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: ::BeatmapSaveDataVersion3::EventBox*
class CORDL_TYPE EventBox : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_beatDistributionParam)) float_t beatDistributionParam;

  __declspec(property(get = get_beatDistributionParamType))::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType;

  /// @brief Field d, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_d, put = __cordl_internal_set_d))::BeatmapSaveDataCommon::DistributionParamType d;

  /// @brief Field f, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_f, put = __cordl_internal_set_f))::BeatmapSaveDataVersion3::IndexFilter* f;

  __declspec(property(get = get_indexFilter))::BeatmapSaveDataVersion3::IndexFilter* indexFilter;

  /// @brief Field w, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_w, put = __cordl_internal_set_w)) float_t w;

  static inline ::BeatmapSaveDataVersion3::EventBox* New_ctor(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, float_t beatDistributionParam,
                                                              ::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType);

  constexpr ::BeatmapSaveDataCommon::DistributionParamType const& __cordl_internal_get_d() const;

  constexpr ::BeatmapSaveDataCommon::DistributionParamType& __cordl_internal_get_d();

  constexpr ::BeatmapSaveDataVersion3::IndexFilter*& __cordl_internal_get_f();

  constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::IndexFilter*> const& __cordl_internal_get_f() const;

  constexpr float_t const& __cordl_internal_get_w() const;

  constexpr float_t& __cordl_internal_get_w();

  constexpr void __cordl_internal_set_d(::BeatmapSaveDataCommon::DistributionParamType value);

  constexpr void __cordl_internal_set_f(::BeatmapSaveDataVersion3::IndexFilter* value);

  constexpr void __cordl_internal_set_w(float_t value);

  /// @brief Method .ctor, addr 0x1324c70, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, float_t beatDistributionParam, ::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType);

  /// @brief Method get_beatDistributionParam, addr 0x1324c60, size 0x8, virtual false, abstract: false, final false
  inline float_t get_beatDistributionParam();

  /// @brief Method get_beatDistributionParamType, addr 0x1324c68, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::DistributionParamType get_beatDistributionParamType();

  /// @brief Method get_indexFilter, addr 0x1324c58, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataVersion3::IndexFilter* get_indexFilter();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBox(EventBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBox(EventBox const&) = delete;

  /// @brief Field f, offset: 0x10, size: 0x8, def value: None
  ::BeatmapSaveDataVersion3::IndexFilter* ___f;

  /// @brief Field w, offset: 0x18, size: 0x4, def value: None
  float_t ___w;

  /// @brief Field d, offset: 0x1c, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::DistributionParamType ___d;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::EventBox, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::EventBox, ___f) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::EventBox, ___w) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::EventBox, ___d) == 0x1c, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::EventBox);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::EventBox*, "BeatmapSaveDataVersion3", "EventBox");
