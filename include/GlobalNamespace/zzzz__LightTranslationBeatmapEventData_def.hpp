#pragma once
// IWYU pragma private; include "GlobalNamespace/LightTranslationBeatmapEventData.hpp"
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
class BeatmapEventData;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
struct LightAxis;
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
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightTranslationBeatmapEventData*
class CORDL_TYPE LightTranslationBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
public:
  // Declarations
  /// @brief Field _defaults, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__defaults,
                             put = setStaticF__defaults)) ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationBeatmapEventData*>* _defaults;

  /// @brief Field <distribution>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__distribution_k__BackingField, put = __cordl_internal_set__distribution_k__BackingField)) float_t _distribution_k__BackingField;

  /// @brief Field <translation>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__translation_k__BackingField, put = __cordl_internal_set__translation_k__BackingField)) float_t _translation_k__BackingField;

  /// @brief Field axis, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_axis, put = __cordl_internal_set_axis)) ::GlobalNamespace::LightAxis axis;

  __declspec(property(get = get_distribution, put = set_distribution)) float_t distribution;

  /// @brief Field easeType, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_easeType, put = __cordl_internal_set_easeType)) ::GlobalNamespace::EaseType easeType;

  /// @brief Field elementId, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_elementId, put = __cordl_internal_set_elementId)) int32_t elementId;

  /// @brief Field groupId, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_groupId, put = __cordl_internal_set_groupId)) int32_t groupId;

  __declspec(property(get = get_translation, put = set_translation)) float_t translation;

  /// @brief Field usePreviousEventValue, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_usePreviousEventValue, put = __cordl_internal_set_usePreviousEventValue)) bool usePreviousEventValue;

  /// @brief Method ChangeTranslation, addr 0x220dca8, size 0x8, virtual false, abstract: false, final false
  inline void ChangeTranslation(float_t translation, float_t distribution);

  /// @brief Method GetCopy, addr 0x220dcb0, size 0xa8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method GetDefault, addr 0x220dd58, size 0x15c, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* GetDefault();

  static inline ::GlobalNamespace::LightTranslationBeatmapEventData* New_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType,
                                                                              ::GlobalNamespace::LightAxis axis, float_t translation, float_t distribution);

  /// @brief Method SubtypeIdentifier, addr 0x220dc90, size 0x18, virtual false, abstract: false, final false
  static inline int32_t SubtypeIdentifier(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightAxis axis);

  constexpr float_t const& __cordl_internal_get__distribution_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__distribution_k__BackingField();

  constexpr float_t const& __cordl_internal_get__translation_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__translation_k__BackingField();

  constexpr ::GlobalNamespace::LightAxis const& __cordl_internal_get_axis() const;

  constexpr ::GlobalNamespace::LightAxis& __cordl_internal_get_axis();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get_easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get_easeType();

  constexpr int32_t const& __cordl_internal_get_elementId() const;

  constexpr int32_t& __cordl_internal_get_elementId();

  constexpr int32_t const& __cordl_internal_get_groupId() const;

  constexpr int32_t& __cordl_internal_get_groupId();

  constexpr bool const& __cordl_internal_get_usePreviousEventValue() const;

  constexpr bool& __cordl_internal_get_usePreviousEventValue();

  constexpr void __cordl_internal_set__distribution_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__translation_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_axis(::GlobalNamespace::LightAxis value);

  constexpr void __cordl_internal_set_easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set_elementId(int32_t value);

  constexpr void __cordl_internal_set_groupId(int32_t value);

  constexpr void __cordl_internal_set_usePreviousEventValue(bool value);

  /// @brief Method .ctor, addr 0x220dbb0, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::LightAxis axis, float_t translation,
                    float_t distribution);

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationBeatmapEventData*>* getStaticF__defaults();

  /// @brief Method get_distribution, addr 0x220dba0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_distribution();

  /// @brief Method get_translation, addr 0x220db90, size 0x8, virtual false, abstract: false, final false
  inline float_t get_translation();

  static inline void setStaticF__defaults(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationBeatmapEventData*>* value);

  /// @brief Method set_distribution, addr 0x220dba8, size 0x8, virtual false, abstract: false, final false
  inline void set_distribution(float_t value);

  /// @brief Method set_translation, addr 0x220db98, size 0x8, virtual false, abstract: false, final false
  inline void set_translation(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightTranslationBeatmapEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationBeatmapEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightTranslationBeatmapEventData(LightTranslationBeatmapEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightTranslationBeatmapEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightTranslationBeatmapEventData(LightTranslationBeatmapEventData const&) = delete;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17004 };

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
