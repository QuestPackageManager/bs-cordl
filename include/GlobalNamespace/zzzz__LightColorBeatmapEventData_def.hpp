#pragma once
// IWYU pragma private; include "GlobalNamespace/LightColorBeatmapEventData.hpp"
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
// Dependencies BeatmapEventData, EaseType, EnvironmentColorType
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightColorBeatmapEventData
class CORDL_TYPE LightColorBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
public:
  // Declarations
  /// @brief Field <brightness>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__brightness_k__BackingField, put = __cordl_internal_set__brightness_k__BackingField)) float_t _brightness_k__BackingField;

  /// @brief Field <colorType>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__colorType_k__BackingField, put = __cordl_internal_set__colorType_k__BackingField)) ::GlobalNamespace::EnvironmentColorType _colorType_k__BackingField;

  /// @brief Field _defaults, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__defaults, put = setStaticF__defaults)) ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightColorBeatmapEventData*>* _defaults;

  /// @brief Field <easeType>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__easeType_k__BackingField, put = __cordl_internal_set__easeType_k__BackingField)) ::GlobalNamespace::EaseType _easeType_k__BackingField;

  /// @brief Field <elementId>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__elementId_k__BackingField, put = __cordl_internal_set__elementId_k__BackingField)) int32_t _elementId_k__BackingField;

  /// @brief Field <groupId>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__groupId_k__BackingField, put = __cordl_internal_set__groupId_k__BackingField)) int32_t _groupId_k__BackingField;

  /// @brief Field <strobeBeatFrequency>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__strobeBeatFrequency_k__BackingField, put = __cordl_internal_set__strobeBeatFrequency_k__BackingField)) int32_t _strobeBeatFrequency_k__BackingField;

  /// @brief Field <strobeBrightness>k__BackingField, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__strobeBrightness_k__BackingField, put = __cordl_internal_set__strobeBrightness_k__BackingField)) float_t _strobeBrightness_k__BackingField;

  /// @brief Field <strobeFade>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__strobeFade_k__BackingField, put = __cordl_internal_set__strobeFade_k__BackingField)) bool _strobeFade_k__BackingField;

  /// @brief Field <usePreviousValue>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__usePreviousValue_k__BackingField, put = __cordl_internal_set__usePreviousValue_k__BackingField)) bool _usePreviousValue_k__BackingField;

  __declspec(property(get = get_brightness, put = set_brightness)) float_t brightness;

  __declspec(property(get = get_colorType, put = set_colorType)) ::GlobalNamespace::EnvironmentColorType colorType;

  __declspec(property(get = get_easeType, put = set_easeType)) ::GlobalNamespace::EaseType easeType;

  __declspec(property(get = get_elementId, put = set_elementId)) int32_t elementId;

  __declspec(property(get = get_groupId, put = set_groupId)) int32_t groupId;

  __declspec(property(get = get_strobeBeatFrequency, put = set_strobeBeatFrequency)) int32_t strobeBeatFrequency;

  __declspec(property(get = get_strobeBrightness, put = set_strobeBrightness)) float_t strobeBrightness;

  __declspec(property(get = get_strobeFade, put = set_strobeFade)) bool strobeFade;

  __declspec(property(get = get_usePreviousValue, put = set_usePreviousValue)) bool usePreviousValue;

  /// @brief Method CopyColorDataFrom, addr 0x22422e4, size 0x3c, virtual false, abstract: false, final false
  inline void CopyColorDataFrom(::GlobalNamespace::LightColorBeatmapEventData* lightColorBeatmapEventData);

  /// @brief Method DisableStrobe, addr 0x2242320, size 0x8, virtual false, abstract: false, final false
  inline void DisableStrobe();

  /// @brief Method GetCopy, addr 0x2242328, size 0xcc, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method GetDefault, addr 0x22423f4, size 0x138, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* GetDefault();

  static inline ::GlobalNamespace::LightColorBeatmapEventData* New_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousValue, ::GlobalNamespace::EaseType easeType,
                                                                        ::GlobalNamespace::EnvironmentColorType colorType, float_t brightness, int32_t strobeBeatFrequency, float_t strobeBrightness,
                                                                        bool strobeFade);

  /// @brief Method SubtypeIdentifier, addr 0x22422d8, size 0xc, virtual false, abstract: false, final false
  static inline int32_t SubtypeIdentifier(int32_t groupId, int32_t elementId);

  constexpr float_t const& __cordl_internal_get__brightness_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__brightness_k__BackingField();

  constexpr ::GlobalNamespace::EnvironmentColorType const& __cordl_internal_get__colorType_k__BackingField() const;

  constexpr ::GlobalNamespace::EnvironmentColorType& __cordl_internal_get__colorType_k__BackingField();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get__easeType_k__BackingField() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get__easeType_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__elementId_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__elementId_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__groupId_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__groupId_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__strobeBeatFrequency_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__strobeBeatFrequency_k__BackingField();

  constexpr float_t const& __cordl_internal_get__strobeBrightness_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__strobeBrightness_k__BackingField();

  constexpr bool const& __cordl_internal_get__strobeFade_k__BackingField() const;

  constexpr bool& __cordl_internal_get__strobeFade_k__BackingField();

  constexpr bool const& __cordl_internal_get__usePreviousValue_k__BackingField() const;

  constexpr bool& __cordl_internal_get__usePreviousValue_k__BackingField();

  constexpr void __cordl_internal_set__brightness_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__colorType_k__BackingField(::GlobalNamespace::EnvironmentColorType value);

  constexpr void __cordl_internal_set__easeType_k__BackingField(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set__elementId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__groupId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__strobeBeatFrequency_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__strobeBrightness_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__strobeFade_k__BackingField(bool value);

  constexpr void __cordl_internal_set__usePreviousValue_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x22421e4, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousValue, ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::EnvironmentColorType colorType,
                    float_t brightness, int32_t strobeBeatFrequency, float_t strobeBrightness, bool strobeFade);

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightColorBeatmapEventData*>* getStaticF__defaults();

  /// @brief Method get_brightness, addr 0x22421a0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_brightness();

  /// @brief Method get_colorType, addr 0x2242190, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentColorType get_colorType();

  /// @brief Method get_easeType, addr 0x2242180, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EaseType get_easeType();

  /// @brief Method get_elementId, addr 0x224215c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_elementId();

  /// @brief Method get_groupId, addr 0x224214c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_groupId();

  /// @brief Method get_strobeBeatFrequency, addr 0x22421b0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_strobeBeatFrequency();

  /// @brief Method get_strobeBrightness, addr 0x22421c0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_strobeBrightness();

  /// @brief Method get_strobeFade, addr 0x22421d0, size 0x8, virtual false, abstract: false, final false
  inline bool get_strobeFade();

  /// @brief Method get_usePreviousValue, addr 0x224216c, size 0x8, virtual false, abstract: false, final false
  inline bool get_usePreviousValue();

  static inline void setStaticF__defaults(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightColorBeatmapEventData*>* value);

  /// @brief Method set_brightness, addr 0x22421a8, size 0x8, virtual false, abstract: false, final false
  inline void set_brightness(float_t value);

  /// @brief Method set_colorType, addr 0x2242198, size 0x8, virtual false, abstract: false, final false
  inline void set_colorType(::GlobalNamespace::EnvironmentColorType value);

  /// @brief Method set_easeType, addr 0x2242188, size 0x8, virtual false, abstract: false, final false
  inline void set_easeType(::GlobalNamespace::EaseType value);

  /// @brief Method set_elementId, addr 0x2242164, size 0x8, virtual false, abstract: false, final false
  inline void set_elementId(int32_t value);

  /// @brief Method set_groupId, addr 0x2242154, size 0x8, virtual false, abstract: false, final false
  inline void set_groupId(int32_t value);

  /// @brief Method set_strobeBeatFrequency, addr 0x22421b8, size 0x8, virtual false, abstract: false, final false
  inline void set_strobeBeatFrequency(int32_t value);

  /// @brief Method set_strobeBrightness, addr 0x22421c8, size 0x8, virtual false, abstract: false, final false
  inline void set_strobeBrightness(float_t value);

  /// @brief Method set_strobeFade, addr 0x22421d8, size 0xc, virtual false, abstract: false, final false
  inline void set_strobeFade(bool value);

  /// @brief Method set_usePreviousValue, addr 0x2242174, size 0xc, virtual false, abstract: false, final false
  inline void set_usePreviousValue(bool value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17052 };

  /// @brief Field <groupId>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t ____groupId_k__BackingField;

  /// @brief Field <elementId>k__BackingField, offset: 0x34, size: 0x4, def value: None
  int32_t ____elementId_k__BackingField;

  /// @brief Field <usePreviousValue>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____usePreviousValue_k__BackingField;

  /// @brief Field <easeType>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____easeType_k__BackingField;

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
static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventData, ____groupId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventData, ____elementId_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventData, ____usePreviousValue_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventData, ____easeType_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventData, ____colorType_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventData, ____brightness_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventData, ____strobeBeatFrequency_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventData, ____strobeBrightness_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBeatmapEventData, ____strobeFade_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightColorBeatmapEventData, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightColorBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorBeatmapEventData*, "", "LightColorBeatmapEventData");
