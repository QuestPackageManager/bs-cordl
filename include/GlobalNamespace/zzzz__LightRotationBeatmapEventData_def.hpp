#pragma once
// IWYU pragma private; include "GlobalNamespace/LightRotationBeatmapEventData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationDirection_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightRotationBeatmapEventData)
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
namespace GlobalNamespace {
struct LightRotationDirection;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationBeatmapEventData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightRotationBeatmapEventData);
// Type: ::LightRotationBeatmapEventData
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightRotationBeatmapEventData*
class CORDL_TYPE LightRotationBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
public:
  // Declarations
  /// @brief Field _defaults, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__defaults,
                             put = setStaticF__defaults))::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationBeatmapEventData*>* _defaults;

  /// @brief Field <rotation>k__BackingField, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__rotation_k__BackingField, put = __cordl_internal_set__rotation_k__BackingField)) float_t _rotation_k__BackingField;

  /// @brief Field axis, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_axis, put = __cordl_internal_set_axis))::GlobalNamespace::LightAxis axis;

  /// @brief Field easeType, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_easeType, put = __cordl_internal_set_easeType))::GlobalNamespace::EaseType easeType;

  /// @brief Field elementId, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_elementId, put = __cordl_internal_set_elementId)) int32_t elementId;

  /// @brief Field groupId, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_groupId, put = __cordl_internal_set_groupId)) int32_t groupId;

  /// @brief Field loopCount, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_loopCount, put = __cordl_internal_set_loopCount)) int32_t loopCount;

  __declspec(property(get = get_rotation, put = set_rotation)) float_t rotation;

  /// @brief Field rotationDirection, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationDirection, put = __cordl_internal_set_rotationDirection))::GlobalNamespace::LightRotationDirection rotationDirection;

  /// @brief Field usePreviousEventValue, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_usePreviousEventValue, put = __cordl_internal_set_usePreviousEventValue)) bool usePreviousEventValue;

  /// @brief Method ChangeRotation, addr 0x103e72c, size 0x8, virtual false, abstract: false, final false
  inline void ChangeRotation(float_t rotation);

  /// @brief Method GetCopy, addr 0x103e734, size 0xc4, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method GetDefault, addr 0x103e7f8, size 0x164, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* GetDefault();

  static inline ::GlobalNamespace::LightRotationBeatmapEventData* New_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType,
                                                                           ::GlobalNamespace::LightAxis axis, float_t rotation, int32_t loopCount,
                                                                           ::GlobalNamespace::LightRotationDirection rotationDirection);

  /// @brief Method SubtypeIdentifier, addr 0x103e714, size 0x18, virtual false, abstract: false, final false
  static inline int32_t SubtypeIdentifier(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightAxis axis);

  constexpr float_t const& __cordl_internal_get__rotation_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__rotation_k__BackingField();

  constexpr ::GlobalNamespace::LightAxis const& __cordl_internal_get_axis() const;

  constexpr ::GlobalNamespace::LightAxis& __cordl_internal_get_axis();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get_easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get_easeType();

  constexpr int32_t const& __cordl_internal_get_elementId() const;

  constexpr int32_t& __cordl_internal_get_elementId();

  constexpr int32_t const& __cordl_internal_get_groupId() const;

  constexpr int32_t& __cordl_internal_get_groupId();

  constexpr int32_t const& __cordl_internal_get_loopCount() const;

  constexpr int32_t& __cordl_internal_get_loopCount();

  constexpr ::GlobalNamespace::LightRotationDirection const& __cordl_internal_get_rotationDirection() const;

  constexpr ::GlobalNamespace::LightRotationDirection& __cordl_internal_get_rotationDirection();

  constexpr bool const& __cordl_internal_get_usePreviousEventValue() const;

  constexpr bool& __cordl_internal_get_usePreviousEventValue();

  constexpr void __cordl_internal_set__rotation_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_axis(::GlobalNamespace::LightAxis value);

  constexpr void __cordl_internal_set_easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set_elementId(int32_t value);

  constexpr void __cordl_internal_set_groupId(int32_t value);

  constexpr void __cordl_internal_set_loopCount(int32_t value);

  constexpr void __cordl_internal_set_rotationDirection(::GlobalNamespace::LightRotationDirection value);

  constexpr void __cordl_internal_set_usePreviousEventValue(bool value);

  /// @brief Method .ctor, addr 0x103e630, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::LightAxis axis, float_t rotation,
                    int32_t loopCount, ::GlobalNamespace::LightRotationDirection rotationDirection);

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationBeatmapEventData*>* getStaticF__defaults();

  /// @brief Method get_rotation, addr 0x103e620, size 0x8, virtual false, abstract: false, final false
  inline float_t get_rotation();

  static inline void setStaticF__defaults(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationBeatmapEventData*>* value);

  /// @brief Method set_rotation, addr 0x103e628, size 0x8, virtual false, abstract: false, final false
  inline void set_rotation(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationBeatmapEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightRotationBeatmapEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationBeatmapEventData(LightRotationBeatmapEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationBeatmapEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationBeatmapEventData(LightRotationBeatmapEventData const&) = delete;

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

  /// @brief Field loopCount, offset: 0x44, size: 0x4, def value: None
  int32_t ___loopCount;

  /// @brief Field rotationDirection, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::LightRotationDirection ___rotationDirection;

  /// @brief Field <rotation>k__BackingField, offset: 0x4c, size: 0x4, def value: None
  float_t ____rotation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightRotationBeatmapEventData, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventData, ___groupId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventData, ___elementId) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventData, ___usePreviousEventValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventData, ___easeType) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventData, ___axis) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventData, ___loopCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventData, ___rotationDirection) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventData, ____rotation_k__BackingField) == 0x4c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightRotationBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationBeatmapEventData*, "", "LightRotationBeatmapEventData");
