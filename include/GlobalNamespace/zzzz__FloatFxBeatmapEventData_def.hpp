#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatFxBeatmapEventData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__FxBeatmapEventData_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatFxBeatmapEventData)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatFxBeatmapEventData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatFxBeatmapEventData);
// Dependencies EaseType, FxBeatmapEventData
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatFxBeatmapEventData
class CORDL_TYPE FloatFxBeatmapEventData : public ::GlobalNamespace::FxBeatmapEventData {
public:
  // Declarations
  /// @brief Field _defaults, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__defaults, put = setStaticF__defaults)) ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxBeatmapEventData*>* _defaults;

  /// @brief Field <easeType>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__easeType_k__BackingField, put = __cordl_internal_set__easeType_k__BackingField)) ::GlobalNamespace::EaseType _easeType_k__BackingField;

  /// @brief Field <value>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__value_k__BackingField, put = __cordl_internal_set__value_k__BackingField)) float_t _value_k__BackingField;

  __declspec(property(get = get_easeType, put = set_easeType)) ::GlobalNamespace::EaseType easeType;

  __declspec(property(get = get_value, put = set_value)) float_t value;

  /// @brief Method GetCopy, addr 0x22431bc, size 0xb0, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method GetDefault, addr 0x224326c, size 0x138, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* GetDefault();

  static inline ::GlobalNamespace::FloatFxBeatmapEventData* New_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, float_t value, ::GlobalNamespace::EaseType easeType);

  /// @brief Method UpdateBy, addr 0x2243198, size 0x24, virtual false, abstract: false, final false
  inline void UpdateBy(::GlobalNamespace::FloatFxBeatmapEventData* other);

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get__easeType_k__BackingField() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get__easeType_k__BackingField();

  constexpr float_t const& __cordl_internal_get__value_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__value_k__BackingField();

  constexpr void __cordl_internal_set__easeType_k__BackingField(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set__value_k__BackingField(float_t value);

  /// @brief Method .ctor, addr 0x224311c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, float_t value, ::GlobalNamespace::EaseType easeType);

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxBeatmapEventData*>* getStaticF__defaults();

  /// @brief Method get_easeType, addr 0x224310c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EaseType get_easeType();

  /// @brief Method get_value, addr 0x22430fc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_value();

  static inline void setStaticF__defaults(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxBeatmapEventData*>* value);

  /// @brief Method set_easeType, addr 0x2243114, size 0x8, virtual false, abstract: false, final false
  inline void set_easeType(::GlobalNamespace::EaseType value);

  /// @brief Method set_value, addr 0x2243104, size 0x8, virtual false, abstract: false, final false
  inline void set_value(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxBeatmapEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBeatmapEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxBeatmapEventData(FloatFxBeatmapEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBeatmapEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxBeatmapEventData(FloatFxBeatmapEventData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17058 };

  /// @brief Field <value>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  float_t ____value_k__BackingField;

  /// @brief Field <easeType>k__BackingField, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____easeType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatFxBeatmapEventData, ____value_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatFxBeatmapEventData, ____easeType_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxBeatmapEventData, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxBeatmapEventData*, "", "FloatFxBeatmapEventData");
