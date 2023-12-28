#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventTransitionType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightColorBeatmapEventData)
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
struct BeatmapEventTransitionType;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorBeatmapEventData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightColorBeatmapEventData);
// Type: ::LightColorBeatmapEventData
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 77, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14754)), TypeDefinitionIndex(TypeDefinitionIndex(14727)), TypeDefinitionIndex(TypeDefinitionIndex(14728))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14734))
// CS Name: ::LightColorBeatmapEventData*
class CORDL_TYPE LightColorBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
public:
  // Declarations
  /// @brief Field groupId, offset 0x30, size 0x4
  __declspec(property(get = __get_groupId, put = __set_groupId)) int32_t groupId;

  /// @brief Field elementId, offset 0x34, size 0x4
  __declspec(property(get = __get_elementId, put = __set_elementId)) int32_t elementId;

  /// @brief Field transitionType, offset 0x38, size 0x4
  __declspec(property(get = __get_transitionType, put = __set_transitionType))::GlobalNamespace::BeatmapEventTransitionType transitionType;

  /// @brief Field <colorType>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __get__colorType_k__BackingField, put = __set__colorType_k__BackingField))::GlobalNamespace::EnvironmentColorType _colorType_k__BackingField;

  /// @brief Field <brightness>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __get__brightness_k__BackingField, put = __set__brightness_k__BackingField)) float_t _brightness_k__BackingField;

  /// @brief Field <strobeBeatFrequency>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __get__strobeBeatFrequency_k__BackingField, put = __set__strobeBeatFrequency_k__BackingField)) int32_t _strobeBeatFrequency_k__BackingField;

  /// @brief Field <strobeBrightness>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __get__strobeBrightness_k__BackingField, put = __set__strobeBrightness_k__BackingField)) float_t _strobeBrightness_k__BackingField;

  /// @brief Field <strobeFade>k__BackingField, offset 0x4c, size 0x1
  __declspec(property(get = __get__strobeFade_k__BackingField, put = __set__strobeFade_k__BackingField)) bool _strobeFade_k__BackingField;

  /// @brief Field _defaults, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__defaults, put = setStaticF__defaults))::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightColorBeatmapEventData*>* _defaults;

  __declspec(property(get = get_colorType, put = set_colorType))::GlobalNamespace::EnvironmentColorType colorType;

  __declspec(property(get = get_brightness, put = set_brightness)) float_t brightness;

  __declspec(property(get = get_strobeBeatFrequency, put = set_strobeBeatFrequency)) int32_t strobeBeatFrequency;

  __declspec(property(get = get_strobeBrightness, put = set_strobeBrightness)) float_t strobeBrightness;

  __declspec(property(get = get_strobeFade, put = set_strobeFade)) bool strobeFade;

  constexpr int32_t& __get_groupId();

  constexpr int32_t const& __get_groupId() const;

  constexpr void __set_groupId(int32_t value);

  constexpr int32_t& __get_elementId();

  constexpr int32_t const& __get_elementId() const;

  constexpr void __set_elementId(int32_t value);

  constexpr ::GlobalNamespace::BeatmapEventTransitionType& __get_transitionType();

  constexpr ::GlobalNamespace::BeatmapEventTransitionType const& __get_transitionType() const;

  constexpr void __set_transitionType(::GlobalNamespace::BeatmapEventTransitionType value);

  constexpr ::GlobalNamespace::EnvironmentColorType& __get__colorType_k__BackingField();

  constexpr ::GlobalNamespace::EnvironmentColorType const& __get__colorType_k__BackingField() const;

  constexpr void __set__colorType_k__BackingField(::GlobalNamespace::EnvironmentColorType value);

  constexpr float_t& __get__brightness_k__BackingField();

  constexpr float_t const& __get__brightness_k__BackingField() const;

  constexpr void __set__brightness_k__BackingField(float_t value);

  constexpr int32_t& __get__strobeBeatFrequency_k__BackingField();

  constexpr int32_t const& __get__strobeBeatFrequency_k__BackingField() const;

  constexpr void __set__strobeBeatFrequency_k__BackingField(int32_t value);

  constexpr float_t& __get__strobeBrightness_k__BackingField();

  constexpr float_t const& __get__strobeBrightness_k__BackingField() const;

  constexpr void __set__strobeBrightness_k__BackingField(float_t value);

  constexpr bool& __get__strobeFade_k__BackingField();

  constexpr bool const& __get__strobeFade_k__BackingField() const;

  constexpr void __set__strobeFade_k__BackingField(bool value);

  static inline void setStaticF__defaults(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightColorBeatmapEventData*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightColorBeatmapEventData*>* getStaticF__defaults();

  /// @brief Method get_colorType addr 0xdfe6e0 size 0x8 virtual false final false
  inline ::GlobalNamespace::EnvironmentColorType get_colorType();

  /// @brief Method set_colorType addr 0xdfe6e8 size 0x8 virtual false final false
  inline void set_colorType(::GlobalNamespace::EnvironmentColorType value);

  /// @brief Method get_brightness addr 0xdfe6f0 size 0x8 virtual false final false
  inline float_t get_brightness();

  /// @brief Method set_brightness addr 0xdfe6f8 size 0x8 virtual false final false
  inline void set_brightness(float_t value);

  /// @brief Method get_strobeBeatFrequency addr 0xdfe700 size 0x8 virtual false final false
  inline int32_t get_strobeBeatFrequency();

  /// @brief Method set_strobeBeatFrequency addr 0xdfe708 size 0x8 virtual false final false
  inline void set_strobeBeatFrequency(int32_t value);

  /// @brief Method get_strobeBrightness addr 0xdfe710 size 0x8 virtual false final false
  inline float_t get_strobeBrightness();

  /// @brief Method set_strobeBrightness addr 0xdfe718 size 0x8 virtual false final false
  inline void set_strobeBrightness(float_t value);

  /// @brief Method get_strobeFade addr 0xdfe720 size 0x8 virtual false final false
  inline bool get_strobeFade();

  /// @brief Method set_strobeFade addr 0xdfe728 size 0xc virtual false final false
  inline void set_strobeFade(bool value);

  static inline ::GlobalNamespace::LightColorBeatmapEventData* New_ctor(float_t time, int32_t groupId, int32_t elementId, ::GlobalNamespace::BeatmapEventTransitionType transitionType,
                                                                        ::GlobalNamespace::EnvironmentColorType colorType, float_t brightness, int32_t strobeBeatFrequency, float_t strobeBrightness,
                                                                        bool strobeFade);

  /// @brief Method .ctor addr 0xdfe734 size 0xe0 virtual false final false
  inline void _ctor(float_t time, int32_t groupId, int32_t elementId, ::GlobalNamespace::BeatmapEventTransitionType transitionType, ::GlobalNamespace::EnvironmentColorType colorType,
                    float_t brightness, int32_t strobeBeatFrequency, float_t strobeBrightness, bool strobeFade);

  /// @brief Method CopyColorDataFrom addr 0xdfe820 size 0x24 virtual false final false
  inline void CopyColorDataFrom(::GlobalNamespace::LightColorBeatmapEventData* lightColorBeatmapEventData);

  /// @brief Method DisableStrobe addr 0xdfe844 size 0x8 virtual false final false
  inline void DisableStrobe();

  /// @brief Method GetCopy addr 0xdfe84c size 0xc8 virtual true final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method SubtypeIdentifier addr 0xdfe814 size 0xc virtual false final false
  static inline int32_t SubtypeIdentifier(int32_t groupId, int32_t elementId);

  /// @brief Method GetDefault addr 0xdfe914 size 0x130 virtual true final false
  inline ::GlobalNamespace::BeatmapEventData* GetDefault();

  // Ctor Parameters [CppParam { name: "", ty: "LightColorBeatmapEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorBeatmapEventData(LightColorBeatmapEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorBeatmapEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorBeatmapEventData(LightColorBeatmapEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorBeatmapEventData();

public:
  /// @brief Field groupId, offset: 0x30, size: 0x4, def value: None
  int32_t ___groupId;

  /// @brief Field elementId, offset: 0x34, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field transitionType, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapEventTransitionType ___transitionType;

  /// @brief Field <colorType>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentColorType ____colorType_k__BackingField;

  /// @brief Field <brightness>k__BackingField, offset: 0x40, size: 0x4, def value: None
  float_t ____brightness_k__BackingField;

  /// @brief Field <strobeBeatFrequency>k__BackingField, offset: 0x44, size: 0x4, def value: None
  int32_t ____strobeBeatFrequency_k__BackingField;

  /// @brief Field <strobeBrightness>k__BackingField, offset: 0x48, size: 0x4, def value: None
  float_t ____strobeBrightness_k__BackingField;

  /// @brief Field <strobeFade>k__BackingField, offset: 0x4c, size: 0x1, def value: None
  bool ____strobeFade_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightColorBeatmapEventData, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightColorBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorBeatmapEventData*, "", "LightColorBeatmapEventData");
