#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__FxBeatmapEventData_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatFxBeatmapEventData)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatFxBeatmapEventData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatFxBeatmapEventData);
// Type: ::FloatFxBeatmapEventData
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14731)), TypeDefinitionIndex(TypeDefinitionIndex(16090))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14732))
// CS Name: ::FloatFxBeatmapEventData*
class CORDL_TYPE FloatFxBeatmapEventData : public ::GlobalNamespace::FxBeatmapEventData {
public:
  // Declarations
  /// @brief Field <value>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __get__value_k__BackingField, put = __set__value_k__BackingField)) float_t _value_k__BackingField;

  /// @brief Field <easeType>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __get__easeType_k__BackingField, put = __set__easeType_k__BackingField))::GlobalNamespace::EaseType _easeType_k__BackingField;

  /// @brief Field _defaults, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__defaults, put = setStaticF__defaults))::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxBeatmapEventData*>* _defaults;

  __declspec(property(get = get_value, put = set_value)) float_t value;

  __declspec(property(get = get_easeType, put = set_easeType))::GlobalNamespace::EaseType easeType;

  constexpr float_t& __get__value_k__BackingField();

  constexpr float_t const& __get__value_k__BackingField() const;

  constexpr void __set__value_k__BackingField(float_t value);

  constexpr ::GlobalNamespace::EaseType& __get__easeType_k__BackingField();

  constexpr ::GlobalNamespace::EaseType const& __get__easeType_k__BackingField() const;

  constexpr void __set__easeType_k__BackingField(::GlobalNamespace::EaseType value);

  static inline void setStaticF__defaults(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxBeatmapEventData*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxBeatmapEventData*>* getStaticF__defaults();

  /// @brief Method get_value addr 0xdfe3bc size 0x8 virtual false final false
  inline float_t get_value();

  /// @brief Method set_value addr 0xdfe3c4 size 0x8 virtual false final false
  inline void set_value(float_t value);

  /// @brief Method get_easeType addr 0xdfe3cc size 0x8 virtual false final false
  inline ::GlobalNamespace::EaseType get_easeType();

  /// @brief Method set_easeType addr 0xdfe3d4 size 0x8 virtual false final false
  inline void set_easeType(::GlobalNamespace::EaseType value);

  static inline ::GlobalNamespace::FloatFxBeatmapEventData* New_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, float_t value, ::GlobalNamespace::EaseType easeType);

  /// @brief Method .ctor addr 0xdfe3dc size 0x7c virtual false final false
  inline void _ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, float_t value, ::GlobalNamespace::EaseType easeType);

  /// @brief Method UpdateBy addr 0xdfe458 size 0x1c virtual false final false
  inline void UpdateBy(::GlobalNamespace::FloatFxBeatmapEventData* other);

  /// @brief Method GetCopy addr 0xdfe474 size 0xa4 virtual true final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method GetDefault addr 0xdfe518 size 0x13c virtual true final false
  inline ::GlobalNamespace::BeatmapEventData* GetDefault();

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBeatmapEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatFxBeatmapEventData(FloatFxBeatmapEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatFxBeatmapEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatFxBeatmapEventData(FloatFxBeatmapEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFxBeatmapEventData();

public:
  /// @brief Field <value>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  float_t ____value_k__BackingField;

  /// @brief Field <easeType>k__BackingField, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____easeType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxBeatmapEventData, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxBeatmapEventData*, "", "FloatFxBeatmapEventData");
