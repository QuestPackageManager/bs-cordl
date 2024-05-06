#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__DistributionParamType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBox_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FxEventBox)
namespace BeatmapSaveDataCommon {
struct DistributionParamType;
}
namespace BeatmapSaveDataCommon {
struct EaseType;
}
namespace BeatmapSaveDataVersion3 {
class IndexFilter;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class FxEventBox;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::FxEventBox);
// Type: BeatmapSaveDataVersion3::FxEventBox
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: ::BeatmapSaveDataVersion3::FxEventBox*
class CORDL_TYPE FxEventBox : public ::BeatmapSaveDataVersion3::EventBox {
public:
  // Declarations
  /// @brief Field b, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b)) int32_t b;

  /// @brief Field i, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_i, put = __cordl_internal_set_i))::BeatmapSaveDataCommon::EaseType i;

  /// @brief Field l, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_l, put = __cordl_internal_set_l))::System::Collections::Generic::List_1<int32_t>* l;

  /// @brief Field s, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_s, put = __cordl_internal_set_s)) float_t s;

  /// @brief Field t, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_t, put = __cordl_internal_set_t))::BeatmapSaveDataCommon::DistributionParamType t;

  __declspec(property(get = get_vfxBaseDataList))::System::Collections::Generic::IReadOnlyList_1<int32_t>* vfxBaseDataList;

  __declspec(property(get = get_vfxDistributionEaseType))::BeatmapSaveDataCommon::EaseType vfxDistributionEaseType;

  __declspec(property(get = get_vfxDistributionParam)) float_t vfxDistributionParam;

  __declspec(property(get = get_vfxDistributionParamType))::BeatmapSaveDataCommon::DistributionParamType vfxDistributionParamType;

  __declspec(property(get = get_vfxDistributionShouldAffectFirstBaseEvent)) bool vfxDistributionShouldAffectFirstBaseEvent;

  static inline ::BeatmapSaveDataVersion3::FxEventBox* New_ctor(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, float_t beatDistributionParam,
                                                                ::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType, float_t vfxDistributionParam,
                                                                ::BeatmapSaveDataCommon::DistributionParamType vfxDistributionParamType, ::BeatmapSaveDataCommon::EaseType vfxDistributionEaseType,
                                                                bool vfxDistributionShouldAffectFirstBaseEvent, ::System::Collections::Generic::List_1<int32_t>* effectsBaseDataList);

  constexpr int32_t const& __cordl_internal_get_b() const;

  constexpr int32_t& __cordl_internal_get_b();

  constexpr ::BeatmapSaveDataCommon::EaseType const& __cordl_internal_get_i() const;

  constexpr ::BeatmapSaveDataCommon::EaseType& __cordl_internal_get_i();

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_l();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_l() const;

  constexpr float_t const& __cordl_internal_get_s() const;

  constexpr float_t& __cordl_internal_get_s();

  constexpr ::BeatmapSaveDataCommon::DistributionParamType const& __cordl_internal_get_t() const;

  constexpr ::BeatmapSaveDataCommon::DistributionParamType& __cordl_internal_get_t();

  constexpr void __cordl_internal_set_b(int32_t value);

  constexpr void __cordl_internal_set_i(::BeatmapSaveDataCommon::EaseType value);

  constexpr void __cordl_internal_set_l(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_s(float_t value);

  constexpr void __cordl_internal_set_t(::BeatmapSaveDataCommon::DistributionParamType value);

  /// @brief Method .ctor, addr 0x14f2010, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::BeatmapSaveDataVersion3::IndexFilter* indexFilter, float_t beatDistributionParam, ::BeatmapSaveDataCommon::DistributionParamType beatDistributionParamType,
                    float_t vfxDistributionParam, ::BeatmapSaveDataCommon::DistributionParamType vfxDistributionParamType, ::BeatmapSaveDataCommon::EaseType vfxDistributionEaseType,
                    bool vfxDistributionShouldAffectFirstBaseEvent, ::System::Collections::Generic::List_1<int32_t>* effectsBaseDataList);

  /// @brief Method get_vfxBaseDataList, addr 0x14f2008, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<int32_t>* get_vfxBaseDataList();

  /// @brief Method get_vfxDistributionEaseType, addr 0x14f1ff0, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::EaseType get_vfxDistributionEaseType();

  /// @brief Method get_vfxDistributionParam, addr 0x14f1fe0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_vfxDistributionParam();

  /// @brief Method get_vfxDistributionParamType, addr 0x14f1fe8, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::DistributionParamType get_vfxDistributionParamType();

  /// @brief Method get_vfxDistributionShouldAffectFirstBaseEvent, addr 0x14f1ff8, size 0x10, virtual false, abstract: false, final false
  inline bool get_vfxDistributionShouldAffectFirstBaseEvent();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FxEventBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FxEventBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FxEventBox(FxEventBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FxEventBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FxEventBox(FxEventBox const&) = delete;

  /// @brief Field l, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___l;

  /// @brief Field s, offset: 0x28, size: 0x4, def value: None
  float_t ___s;

  /// @brief Field t, offset: 0x2c, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::DistributionParamType ___t;

  /// @brief Field i, offset: 0x30, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::EaseType ___i;

  /// @brief Field b, offset: 0x34, size: 0x4, def value: None
  int32_t ___b;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::FxEventBox, 0x38>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::FxEventBox, ___l) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::FxEventBox, ___s) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::FxEventBox, ___t) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::FxEventBox, ___i) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::FxEventBox, ___b) == 0x34, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::FxEventBox);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::FxEventBox*, "BeatmapSaveDataVersion3", "FxEventBox");
