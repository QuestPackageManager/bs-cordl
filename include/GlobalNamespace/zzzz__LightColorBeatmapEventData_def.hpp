#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightColorBeatmapEventData)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorBeatmapEventData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightColorBeatmapEventData);
// Type: ::LightColorBeatmapEventData
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 81, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightColorBeatmapEventData*
class CORDL_TYPE LightColorBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
public:
  // Declarations
  /// @brief Field <brightness>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__brightness_k__BackingField, put = __cordl_internal_set__brightness_k__BackingField)) float_t _brightness_k__BackingField;

  /// @brief Field <colorType>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__colorType_k__BackingField, put = __cordl_internal_set__colorType_k__BackingField))::GlobalNamespace::EnvironmentColorType _colorType_k__BackingField;

  /// @brief Field _defaults, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__defaults, put = setStaticF__defaults))::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightColorBeatmapEventData*>* _defaults;

  /// @brief Field <strobeBeatFrequency>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__strobeBeatFrequency_k__BackingField, put = __cordl_internal_set__strobeBeatFrequency_k__BackingField)) int32_t _strobeBeatFrequency_k__BackingField;

  /// @brief Field <strobeBrightness>k__BackingField, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__strobeBrightness_k__BackingField, put = __cordl_internal_set__strobeBrightness_k__BackingField)) float_t _strobeBrightness_k__BackingField;

  /// @brief Field <strobeFade>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__strobeFade_k__BackingField, put = __cordl_internal_set__strobeFade_k__BackingField)) bool _strobeFade_k__BackingField;

  __declspec(property(get = get_brightness, put = set_brightness)) float_t brightness;

  __declspec(property(get = get_colorType, put = set_colorType))::GlobalNamespace::EnvironmentColorType colorType;

  /// @brief Field easeType, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_easeType, put = __cordl_internal_set_easeType))::GlobalNamespace::EaseType easeType;

  /// @brief Field elementId, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_elementId, put = __cordl_internal_set_elementId)) int32_t elementId;

  /// @brief Field groupId, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_groupId, put = __cordl_internal_set_groupId)) int32_t groupId;

  __declspec(property(get = get_strobeBeatFrequency, put = set_strobeBeatFrequency)) int32_t strobeBeatFrequency;

  __declspec(property(get = get_strobeBrightness, put = set_strobeBrightness)) float_t strobeBrightness;

  __declspec(property(get = get_strobeFade, put = set_strobeFade)) bool strobeFade;

  /// @brief Field usePreviousValue, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_usePreviousValue, put = __cordl_internal_set_usePreviousValue)) bool usePreviousValue;

  /// @brief Method CopyColorDataFrom, addr 0x1035ba4, size 0x24, virtual false, abstract: false, final false
  inline void CopyColorDataFrom(::GlobalNamespace::LightColorBeatmapEventData* lightColorBeatmapEventData);

  /// @brief Method DisableStrobe, addr 0x1035bc8, size 0x8, virtual false, abstract: false, final false
  inline void DisableStrobe();

  /// @brief Method GetCopy, addr 0x1035bd0, size 0xdc, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method GetDefault, addr 0x1035cac, size 0x13c, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* GetDefault();

  static inline ::GlobalNamespace::LightColorBeatmapEventData* New_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousValue, ::GlobalNamespace::EaseType easeType,
                                                                        ::GlobalNamespace::EnvironmentColorType colorType, float_t brightness, int32_t strobeBeatFrequency, float_t strobeBrightness,
                                                                        bool strobeFade);

  /// @brief Method SubtypeIdentifier, addr 0x1035b98, size 0xc, virtual false, abstract: false, final false
  static inline int32_t SubtypeIdentifier(int32_t groupId, int32_t elementId);

  constexpr float_t const& __cordl_internal_get__brightness_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__brightness_k__BackingField();

  constexpr ::GlobalNamespace::EnvironmentColorType const& __cordl_internal_get__colorType_k__BackingField() const;

  constexpr ::GlobalNamespace::EnvironmentColorType& __cordl_internal_get__colorType_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__strobeBeatFrequency_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__strobeBeatFrequency_k__BackingField();

  constexpr float_t const& __cordl_internal_get__strobeBrightness_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__strobeBrightness_k__BackingField();

  constexpr bool const& __cordl_internal_get__strobeFade_k__BackingField() const;

  constexpr bool& __cordl_internal_get__strobeFade_k__BackingField();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get_easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get_easeType();

  constexpr int32_t const& __cordl_internal_get_elementId() const;

  constexpr int32_t& __cordl_internal_get_elementId();

  constexpr int32_t const& __cordl_internal_get_groupId() const;

  constexpr int32_t& __cordl_internal_get_groupId();

  constexpr bool const& __cordl_internal_get_usePreviousValue() const;

  constexpr bool& __cordl_internal_get_usePreviousValue();

  constexpr void __cordl_internal_set__brightness_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__colorType_k__BackingField(::GlobalNamespace::EnvironmentColorType value);

  constexpr void __cordl_internal_set__strobeBeatFrequency_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__strobeBrightness_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__strobeFade_k__BackingField(bool value);

  constexpr void __cordl_internal_set_easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set_elementId(int32_t value);

  constexpr void __cordl_internal_set_groupId(int32_t value);

  constexpr void __cordl_internal_set_usePreviousValue(bool value);

  /// @brief Method .ctor, addr 0x1035aa8, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousValue, ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::EnvironmentColorType colorType,
                    float_t brightness, int32_t strobeBeatFrequency, float_t strobeBrightness, bool strobeFade);

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightColorBeatmapEventData*>* getStaticF__defaults();

  /// @brief Method get_brightness, addr 0x1035a64, size 0x8, virtual false, abstract: false, final false
  inline float_t get_brightness();

  /// @brief Method get_colorType, addr 0x1035a54, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentColorType get_colorType();

  /// @brief Method get_strobeBeatFrequency, addr 0x1035a74, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_strobeBeatFrequency();

  /// @brief Method get_strobeBrightness, addr 0x1035a84, size 0x8, virtual false, abstract: false, final false
  inline float_t get_strobeBrightness();

  /// @brief Method get_strobeFade, addr 0x1035a94, size 0x8, virtual false, abstract: false, final false
  inline bool get_strobeFade();

  static inline void setStaticF__defaults(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightColorBeatmapEventData*>* value);

  /// @brief Method set_brightness, addr 0x1035a6c, size 0x8, virtual false, abstract: false, final false
  inline void set_brightness(float_t value);

  /// @brief Method set_colorType, addr 0x1035a5c, size 0x8, virtual false, abstract: false, final false
  inline void set_colorType(::GlobalNamespace::EnvironmentColorType value);

  /// @brief Method set_strobeBeatFrequency, addr 0x1035a7c, size 0x8, virtual false, abstract: false, final false
  inline void set_strobeBeatFrequency(int32_t value);

  /// @brief Method set_strobeBrightness, addr 0x1035a8c, size 0x8, virtual false, abstract: false, final false
  inline void set_strobeBrightness(float_t value);

  /// @brief Method set_strobeFade, addr 0x1035a9c, size 0xc, virtual false, abstract: false, final false
  inline void set_strobeFade(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorBeatmapEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightColorBeatmapEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorBeatmapEventData(LightColorBeatmapEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorBeatmapEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorBeatmapEventData(LightColorBeatmapEventData const&) = delete;

  /// @brief Field groupId, offset: 0x30, size: 0x4, def value: None
  int32_t ___groupId;

  /// @brief Field elementId, offset: 0x34, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field usePreviousValue, offset: 0x38, size: 0x1, def value: None
  bool ___usePreviousValue;

  /// @brief Field easeType, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ___easeType;

  /// @brief Field <colorType>k__BackingField, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentColorType ____colorType_k__BackingField;

  /// @brief Field <brightness>k__BackingField, offset: 0x44, size: 0x4, def value: None
  float_t ____brightness_k__BackingField;

  /// @brief Field <strobeBeatFrequency>k__BackingField, offset: 0x48, size: 0x4, def value: None
  int32_t ____strobeBeatFrequency_k__BackingField;

  /// @brief Field <strobeBrightness>k__BackingField, offset: 0x4c, size: 0x4, def value: None
  float_t ____strobeBrightness_k__BackingField;

  /// @brief Field <strobeFade>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____strobeFade_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightColorBeatmapEventData, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventData, ___groupId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventData, ___elementId) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventData, ___usePreviousValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventData, ___easeType) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventData, ____colorType_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventData, ____brightness_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventData, ____strobeBeatFrequency_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventData, ____strobeBrightness_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventData, ____strobeFade_k__BackingField) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightColorBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorBeatmapEventData*, "", "LightColorBeatmapEventData");
