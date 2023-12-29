#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightTranslationBeatmapEventData)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
struct LightAxis;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class LightTranslationBeatmapEventData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightTranslationBeatmapEventData);
// Type: ::LightTranslationBeatmapEventData
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14944)), TypeDefinitionIndex(TypeDefinitionIndex(15944)), TypeDefinitionIndex(TypeDefinitionIndex(14948))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14952))
// CS Name: ::LightTranslationBeatmapEventData*
class CORDL_TYPE LightTranslationBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
public:
  // Declarations
  /// @brief Field groupId, offset 0x30, size 0x4
  __declspec(property(get = __get_groupId, put = __set_groupId)) int32_t groupId;

  /// @brief Field elementId, offset 0x34, size 0x4
  __declspec(property(get = __get_elementId, put = __set_elementId)) int32_t elementId;

  /// @brief Field usePreviousEventValue, offset 0x38, size 0x1
  __declspec(property(get = __get_usePreviousEventValue, put = __set_usePreviousEventValue)) bool usePreviousEventValue;

  /// @brief Field easeType, offset 0x3c, size 0x4
  __declspec(property(get = __get_easeType, put = __set_easeType))::GlobalNamespace::EaseType easeType;

  /// @brief Field axis, offset 0x40, size 0x4
  __declspec(property(get = __get_axis, put = __set_axis))::GlobalNamespace::LightAxis axis;

  /// @brief Field <translation>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __get__translation_k__BackingField, put = __set__translation_k__BackingField)) float_t _translation_k__BackingField;

  /// @brief Field <distribution>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __get__distribution_k__BackingField, put = __set__distribution_k__BackingField)) float_t _distribution_k__BackingField;

  /// @brief Field _defaults, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__defaults,
                             put = setStaticF__defaults))::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationBeatmapEventData*>* _defaults;

  __declspec(property(get = get_translation, put = set_translation)) float_t translation;

  __declspec(property(get = get_distribution, put = set_distribution)) float_t distribution;

  constexpr int32_t& __get_groupId();

  constexpr int32_t const& __get_groupId() const;

  constexpr void __set_groupId(int32_t value);

  constexpr int32_t& __get_elementId();

  constexpr int32_t const& __get_elementId() const;

  constexpr void __set_elementId(int32_t value);

  constexpr bool& __get_usePreviousEventValue();

  constexpr bool const& __get_usePreviousEventValue() const;

  constexpr void __set_usePreviousEventValue(bool value);

  constexpr ::GlobalNamespace::EaseType& __get_easeType();

  constexpr ::GlobalNamespace::EaseType const& __get_easeType() const;

  constexpr void __set_easeType(::GlobalNamespace::EaseType value);

  constexpr ::GlobalNamespace::LightAxis& __get_axis();

  constexpr ::GlobalNamespace::LightAxis const& __get_axis() const;

  constexpr void __set_axis(::GlobalNamespace::LightAxis value);

  constexpr float_t& __get__translation_k__BackingField();

  constexpr float_t const& __get__translation_k__BackingField() const;

  constexpr void __set__translation_k__BackingField(float_t value);

  constexpr float_t& __get__distribution_k__BackingField();

  constexpr float_t const& __get__distribution_k__BackingField() const;

  constexpr void __set__distribution_k__BackingField(float_t value);

  static inline void setStaticF__defaults(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationBeatmapEventData*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationBeatmapEventData*>* getStaticF__defaults();

  /// @brief Method get_translation addr 0xd994f0 size 0x8 virtual false final false
  inline float_t get_translation();

  /// @brief Method set_translation addr 0xd994f8 size 0x8 virtual false final false
  inline void set_translation(float_t value);

  /// @brief Method get_distribution addr 0xd99500 size 0x8 virtual false final false
  inline float_t get_distribution();

  /// @brief Method set_distribution addr 0xd99508 size 0x8 virtual false final false
  inline void set_distribution(float_t value);

  static inline ::GlobalNamespace::LightTranslationBeatmapEventData* New_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType,
                                                                              ::GlobalNamespace::LightAxis axis, float_t translation, float_t distribution);

  /// @brief Method .ctor addr 0xd99510 size 0xdc virtual false final false
  inline void _ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::LightAxis axis, float_t translation,
                    float_t distribution);

  /// @brief Method ChangeTranslation addr 0xd99604 size 0x8 virtual false final false
  inline void ChangeTranslation(float_t translation, float_t distribution);

  /// @brief Method GetCopy addr 0xd9960c size 0xb4 virtual true final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method SubtypeIdentifier addr 0xd995ec size 0x18 virtual false final false
  static inline int32_t SubtypeIdentifier(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightAxis axis);

  /// @brief Method GetDefault addr 0xd996c0 size 0x160 virtual true final false
  inline ::GlobalNamespace::BeatmapEventData* GetDefault();

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationBeatmapEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationBeatmapEventData(LightTranslationBeatmapEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationBeatmapEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationBeatmapEventData(LightTranslationBeatmapEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationBeatmapEventData();

public:
  /// @brief Field groupId, offset: 0x30, size: 0x4, def value: None
  int32_t ___groupId;

  /// @brief Field elementId, offset: 0x34, size: 0x4, def value: None
  int32_t ___elementId;

  /// @brief Field usePreviousEventValue, offset: 0x38, size: 0x1, def value: None
  bool ___usePreviousEventValue;

  /// @brief Field easeType, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ___easeType;

  /// @brief Field axis, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::LightAxis ___axis;

  /// @brief Field <translation>k__BackingField, offset: 0x44, size: 0x4, def value: None
  float_t ____translation_k__BackingField;

  /// @brief Field <distribution>k__BackingField, offset: 0x48, size: 0x4, def value: None
  float_t ____distribution_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightTranslationBeatmapEventData, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventData, ___groupId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventData, ___elementId) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventData, ___usePreviousEventValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventData, ___easeType) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventData, ___axis) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventData, ____translation_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightTranslationBeatmapEventData, ____distribution_k__BackingField) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightTranslationBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationBeatmapEventData*, "", "LightTranslationBeatmapEventData");
