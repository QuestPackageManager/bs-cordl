#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/LightRotationBaseData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__EaseType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__RotationDirection_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightRotationBaseData)
namespace BeatmapSaveDataCommon {
struct EaseType;
}
namespace BeatmapSaveDataCommon {
struct RotationDirection;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class LightRotationBaseData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::LightRotationBaseData);
// Type: BeatmapSaveDataVersion3::LightRotationBaseData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: ::BeatmapSaveDataVersion3::LightRotationBaseData*
class CORDL_TYPE LightRotationBaseData : public ::System::Object {
public:
  // Declarations
  /// @brief Field b, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b)) float_t b;

  __declspec(property(get = get_beat)) float_t beat;

  /// @brief Field e, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_e, put = __cordl_internal_set_e))::BeatmapSaveDataCommon::EaseType e;

  __declspec(property(get = get_easeType))::BeatmapSaveDataCommon::EaseType easeType;

  /// @brief Field l, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_l, put = __cordl_internal_set_l)) int32_t l;

  __declspec(property(get = get_loopsCount)) int32_t loopsCount;

  /// @brief Field o, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_o, put = __cordl_internal_set_o))::BeatmapSaveDataCommon::RotationDirection o;

  /// @brief Field p, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p)) int32_t p;

  /// @brief Field r, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_r, put = __cordl_internal_set_r)) float_t r;

  __declspec(property(get = get_rotation)) float_t rotation;

  __declspec(property(get = get_rotationDirection))::BeatmapSaveDataCommon::RotationDirection rotationDirection;

  __declspec(property(get = get_usePreviousEventRotationValue)) bool usePreviousEventRotationValue;

  static inline ::BeatmapSaveDataVersion3::LightRotationBaseData* New_ctor(float_t beat, bool usePreviousEventRotationValue, ::BeatmapSaveDataCommon::EaseType easeType, int32_t loopsCount,
                                                                           float_t rotation, ::BeatmapSaveDataCommon::RotationDirection rotationDirection);

  constexpr float_t const& __cordl_internal_get_b() const;

  constexpr float_t& __cordl_internal_get_b();

  constexpr ::BeatmapSaveDataCommon::EaseType const& __cordl_internal_get_e() const;

  constexpr ::BeatmapSaveDataCommon::EaseType& __cordl_internal_get_e();

  constexpr int32_t const& __cordl_internal_get_l() const;

  constexpr int32_t& __cordl_internal_get_l();

  constexpr ::BeatmapSaveDataCommon::RotationDirection const& __cordl_internal_get_o() const;

  constexpr ::BeatmapSaveDataCommon::RotationDirection& __cordl_internal_get_o();

  constexpr int32_t const& __cordl_internal_get_p() const;

  constexpr int32_t& __cordl_internal_get_p();

  constexpr float_t const& __cordl_internal_get_r() const;

  constexpr float_t& __cordl_internal_get_r();

  constexpr void __cordl_internal_set_b(float_t value);

  constexpr void __cordl_internal_set_e(::BeatmapSaveDataCommon::EaseType value);

  constexpr void __cordl_internal_set_l(int32_t value);

  constexpr void __cordl_internal_set_o(::BeatmapSaveDataCommon::RotationDirection value);

  constexpr void __cordl_internal_set_p(int32_t value);

  constexpr void __cordl_internal_set_r(float_t value);

  /// @brief Method .ctor, addr 0x14f2684, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, bool usePreviousEventRotationValue, ::BeatmapSaveDataCommon::EaseType easeType, int32_t loopsCount, float_t rotation,
                    ::BeatmapSaveDataCommon::RotationDirection rotationDirection);

  /// @brief Method get_beat, addr 0x14f264c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_beat();

  /// @brief Method get_easeType, addr 0x14f2664, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::EaseType get_easeType();

  /// @brief Method get_loopsCount, addr 0x14f266c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_loopsCount();

  /// @brief Method get_rotation, addr 0x14f2674, size 0x8, virtual false, abstract: false, final false
  inline float_t get_rotation();

  /// @brief Method get_rotationDirection, addr 0x14f267c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::RotationDirection get_rotationDirection();

  /// @brief Method get_usePreviousEventRotationValue, addr 0x14f2654, size 0x10, virtual false, abstract: false, final false
  inline bool get_usePreviousEventRotationValue();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationBaseData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightRotationBaseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationBaseData(LightRotationBaseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationBaseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationBaseData(LightRotationBaseData const&) = delete;

  /// @brief Field b, offset: 0x10, size: 0x4, def value: None
  float_t ___b;

  /// @brief Field p, offset: 0x14, size: 0x4, def value: None
  int32_t ___p;

  /// @brief Field e, offset: 0x18, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::EaseType ___e;

  /// @brief Field l, offset: 0x1c, size: 0x4, def value: None
  int32_t ___l;

  /// @brief Field r, offset: 0x20, size: 0x4, def value: None
  float_t ___r;

  /// @brief Field o, offset: 0x24, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::RotationDirection ___o;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::LightRotationBaseData, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightRotationBaseData, ___b) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightRotationBaseData, ___p) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightRotationBaseData, ___e) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightRotationBaseData, ___l) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightRotationBaseData, ___r) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightRotationBaseData, ___o) == 0x24, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::LightRotationBaseData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::LightRotationBaseData*, "BeatmapSaveDataVersion3", "LightRotationBaseData");
