#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationBeatmapEventData_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpawnRotationBeatmapEventData)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
struct __SpawnRotationBeatmapEventData__SpawnRotationEventType;
}
// Forward declare root types
namespace GlobalNamespace {
struct __SpawnRotationBeatmapEventData__SpawnRotationEventType;
}
namespace GlobalNamespace {
class SpawnRotationBeatmapEventData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType);
MARK_REF_PTR_T(::GlobalNamespace::SpawnRotationBeatmapEventData);
// Type: ::SpawnRotationEventType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14738))
// CS Name: ::SpawnRotationBeatmapEventData::SpawnRotationEventType
struct CORDL_TYPE __SpawnRotationBeatmapEventData__SpawnRotationEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SpawnRotationBeatmapEventData__SpawnRotationEventType_Unwrapped
  enum struct ____SpawnRotationBeatmapEventData__SpawnRotationEventType_Unwrapped : int32_t {
    __E_Early = static_cast<int32_t>(0x1),
    __E_Late = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SpawnRotationBeatmapEventData__SpawnRotationEventType_Unwrapped() const noexcept {
    return static_cast<____SpawnRotationBeatmapEventData__SpawnRotationEventType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SpawnRotationBeatmapEventData__SpawnRotationEventType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SpawnRotationBeatmapEventData__SpawnRotationEventType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Early value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType const Early;

  /// @brief Field Late value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType const Late;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SpawnRotationBeatmapEventData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(14727)), TypeDefinitionIndex(TypeDefinitionIndex(14738))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14739))
// CS Name: ::SpawnRotationBeatmapEventData*
class CORDL_TYPE SpawnRotationBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
public:
  // Declarations
  using SpawnRotationEventType = ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType;

  /// @brief Field <rotation>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__rotation_k__BackingField, put = __cordl_internal_set__rotation_k__BackingField)) float_t _rotation_k__BackingField;

  /// @brief Field spawnRotationEventType, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_spawnRotationEventType,
                      put = __cordl_internal_set_spawnRotationEventType))::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType spawnRotationEventType;

  /// @brief Field _deltaRotation, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__deltaRotation, put = __cordl_internal_set__deltaRotation)) float_t _deltaRotation;

  /// @brief Field _defaultCopy, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__defaultCopy, put = setStaticF__defaultCopy))::GlobalNamespace::BeatmapEventData* _defaultCopy;

  __declspec(property(get = get_subtypeGroupIdentifier)) int32_t subtypeGroupIdentifier;

  __declspec(property(get = get_rotation, put = set_rotation)) float_t rotation;

  constexpr float_t& __cordl_internal_get__rotation_k__BackingField();

  constexpr float_t const& __cordl_internal_get__rotation_k__BackingField() const;

  constexpr void __cordl_internal_set__rotation_k__BackingField(float_t value);

  constexpr ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType& __cordl_internal_get_spawnRotationEventType();

  constexpr ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType const& __cordl_internal_get_spawnRotationEventType() const;

  constexpr void __cordl_internal_set_spawnRotationEventType(::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType value);

  constexpr float_t& __cordl_internal_get__deltaRotation();

  constexpr float_t const& __cordl_internal_get__deltaRotation() const;

  constexpr void __cordl_internal_set__deltaRotation(float_t value);

  static inline void setStaticF__defaultCopy(::GlobalNamespace::BeatmapEventData* value);

  static inline ::GlobalNamespace::BeatmapEventData* getStaticF__defaultCopy();

  /// @brief Method get_subtypeGroupIdentifier, addr 0xdff254, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_subtypeGroupIdentifier();

  /// @brief Method get_rotation, addr 0xdff25c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_rotation();

  /// @brief Method set_rotation, addr 0xdff264, size 0x8, virtual false, abstract: false, final false
  inline void set_rotation(float_t value);

  static inline ::GlobalNamespace::SpawnRotationBeatmapEventData* New_ctor(float_t time, ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType spawnRotationEventType,
                                                                           float_t deltaRotation);

  /// @brief Method .ctor, addr 0xdff26c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(float_t time, ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType spawnRotationEventType, float_t deltaRotation);

  /// @brief Method Mirror, addr 0xdff2c4, size 0x1c, virtual false, abstract: false, final false
  inline void Mirror();

  /// @brief Method GetCopy, addr 0xdff2e0, size 0xa0, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method RecalculateRotationFromPreviousEvent, addr 0xdff380, size 0x24, virtual false, abstract: false, final false
  inline void RecalculateRotationFromPreviousEvent(::GlobalNamespace::SpawnRotationBeatmapEventData* previousSpawnRotationBeatmapEventData);

  /// @brief Method SetFirstRotationEventRotation, addr 0xdff3a4, size 0xc, virtual false, abstract: false, final false
  inline void SetFirstRotationEventRotation();

  /// @brief Method GetDefault, addr 0xdff3b0, size 0x58, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* GetDefault();

  // Ctor Parameters [CppParam { name: "", ty: "SpawnRotationBeatmapEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpawnRotationBeatmapEventData(SpawnRotationBeatmapEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpawnRotationBeatmapEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpawnRotationBeatmapEventData(SpawnRotationBeatmapEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpawnRotationBeatmapEventData();

public:
  /// @brief Field <rotation>k__BackingField, offset: 0x30, size: 0x4, def value: None
  float_t ____rotation_k__BackingField;

  /// @brief Field spawnRotationEventType, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType ___spawnRotationEventType;

  /// @brief Field _deltaRotation, offset: 0x38, size: 0x4, def value: None
  float_t ____deltaRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpawnRotationBeatmapEventData, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationBeatmapEventData, ____rotation_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationBeatmapEventData, ___spawnRotationEventType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnRotationBeatmapEventData, ____deltaRotation) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SpawnRotationBeatmapEventData__SpawnRotationEventType, "", "SpawnRotationBeatmapEventData/SpawnRotationEventType");
NEED_NO_BOX(::GlobalNamespace::SpawnRotationBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnRotationBeatmapEventData*, "", "SpawnRotationBeatmapEventData");
