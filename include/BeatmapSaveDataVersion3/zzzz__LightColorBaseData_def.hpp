#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/LightColorBaseData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatmapSaveDataCommon/zzzz__EnvironmentColorType_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__TransitionType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightColorBaseData)
namespace BeatmapSaveDataCommon {
struct EnvironmentColorType;
}
namespace BeatmapSaveDataVersion3 {
struct TransitionType;
}
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
class LightColorBaseData;
}
// Write type traits
MARK_REF_PTR_T(::BeatmapSaveDataVersion3::LightColorBaseData);
// Dependencies BeatmapSaveDataCommon.EnvironmentColorType, BeatmapSaveDataVersion3.TransitionType, System.Object
namespace BeatmapSaveDataVersion3 {
// Is value type: false
// CS Name: BeatmapSaveDataVersion3.LightColorBaseData
class CORDL_TYPE LightColorBaseData : public ::System::Object {
public:
  // Declarations
  /// @brief Field b, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b)) float_t b;

  __declspec(property(get = get_beat)) float_t beat;

  __declspec(property(get = get_brightness)) float_t brightness;

  /// @brief Field c, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c)) ::BeatmapSaveDataCommon::EnvironmentColorType c;

  __declspec(property(get = get_colorType)) ::BeatmapSaveDataCommon::EnvironmentColorType colorType;

  /// @brief Field f, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_f, put = __cordl_internal_set_f)) int32_t f;

  /// @brief Field i, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_i, put = __cordl_internal_set_i)) ::BeatmapSaveDataVersion3::TransitionType i;

  /// @brief Field s, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_s, put = __cordl_internal_set_s)) float_t s;

  /// @brief Field sb, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_sb, put = __cordl_internal_set_sb)) float_t sb;

  /// @brief Field sf, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_sf, put = __cordl_internal_set_sf)) int32_t sf;

  __declspec(property(get = get_strobeBeatFrequency)) int32_t strobeBeatFrequency;

  __declspec(property(get = get_strobeBrightness)) float_t strobeBrightness;

  __declspec(property(get = get_strobeFade)) bool strobeFade;

  __declspec(property(get = get_transitionType)) ::BeatmapSaveDataVersion3::TransitionType transitionType;

  static inline ::BeatmapSaveDataVersion3::LightColorBaseData* New_ctor(float_t beat, ::BeatmapSaveDataVersion3::TransitionType transitionType, ::BeatmapSaveDataCommon::EnvironmentColorType colorType,
                                                                        float_t brightness, int32_t strobeFrequency, float_t strobeBrightness, bool strobeFade);

  constexpr float_t const& __cordl_internal_get_b() const;

  constexpr float_t& __cordl_internal_get_b();

  constexpr ::BeatmapSaveDataCommon::EnvironmentColorType const& __cordl_internal_get_c() const;

  constexpr ::BeatmapSaveDataCommon::EnvironmentColorType& __cordl_internal_get_c();

  constexpr int32_t const& __cordl_internal_get_f() const;

  constexpr int32_t& __cordl_internal_get_f();

  constexpr ::BeatmapSaveDataVersion3::TransitionType const& __cordl_internal_get_i() const;

  constexpr ::BeatmapSaveDataVersion3::TransitionType& __cordl_internal_get_i();

  constexpr float_t const& __cordl_internal_get_s() const;

  constexpr float_t& __cordl_internal_get_s();

  constexpr float_t const& __cordl_internal_get_sb() const;

  constexpr float_t& __cordl_internal_get_sb();

  constexpr int32_t const& __cordl_internal_get_sf() const;

  constexpr int32_t& __cordl_internal_get_sf();

  constexpr void __cordl_internal_set_b(float_t value);

  constexpr void __cordl_internal_set_c(::BeatmapSaveDataCommon::EnvironmentColorType value);

  constexpr void __cordl_internal_set_f(int32_t value);

  constexpr void __cordl_internal_set_i(::BeatmapSaveDataVersion3::TransitionType value);

  constexpr void __cordl_internal_set_s(float_t value);

  constexpr void __cordl_internal_set_sb(float_t value);

  constexpr void __cordl_internal_set_sf(int32_t value);

  /// @brief Method .ctor, addr 0x2709f38, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, ::BeatmapSaveDataVersion3::TransitionType transitionType, ::BeatmapSaveDataCommon::EnvironmentColorType colorType, float_t brightness, int32_t strobeFrequency,
                    float_t strobeBrightness, bool strobeFade);

  /// @brief Method get_beat, addr 0x2709ef8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_beat();

  /// @brief Method get_brightness, addr 0x2709f10, size 0x8, virtual false, abstract: false, final false
  inline float_t get_brightness();

  /// @brief Method get_colorType, addr 0x2709f08, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataCommon::EnvironmentColorType get_colorType();

  /// @brief Method get_strobeBeatFrequency, addr 0x2709f18, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_strobeBeatFrequency();

  /// @brief Method get_strobeBrightness, addr 0x2709f20, size 0x8, virtual false, abstract: false, final false
  inline float_t get_strobeBrightness();

  /// @brief Method get_strobeFade, addr 0x2709f28, size 0x10, virtual false, abstract: false, final false
  inline bool get_strobeFade();

  /// @brief Method get_transitionType, addr 0x2709f00, size 0x8, virtual false, abstract: false, final false
  inline ::BeatmapSaveDataVersion3::TransitionType get_transitionType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorBaseData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightColorBaseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorBaseData(LightColorBaseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorBaseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorBaseData(LightColorBaseData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13411 };

  /// @brief Field b, offset: 0x10, size: 0x4, def value: None
  float_t ___b;

  /// @brief Field i, offset: 0x14, size: 0x4, def value: None
  ::BeatmapSaveDataVersion3::TransitionType ___i;

  /// @brief Field c, offset: 0x18, size: 0x4, def value: None
  ::BeatmapSaveDataCommon::EnvironmentColorType ___c;

  /// @brief Field s, offset: 0x1c, size: 0x4, def value: None
  float_t ___s;

  /// @brief Field f, offset: 0x20, size: 0x4, def value: None
  int32_t ___f;

  /// @brief Field sb, offset: 0x24, size: 0x4, def value: None
  float_t ___sb;

  /// @brief Field sf, offset: 0x28, size: 0x4, def value: None
  int32_t ___sf;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion3::LightColorBaseData, ___b) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightColorBaseData, ___i) == 0x14, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightColorBaseData, ___c) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightColorBaseData, ___s) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightColorBaseData, ___f) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightColorBaseData, ___sb) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::LightColorBaseData, ___sf) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::LightColorBaseData, 0x30>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
NEED_NO_BOX(::BeatmapSaveDataVersion3::LightColorBaseData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::LightColorBaseData*, "BeatmapSaveDataVersion3", "LightColorBaseData");
