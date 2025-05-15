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
// Dependencies BeatmapEventData, EaseType, LightAxis, LightRotationDirection
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightRotationBeatmapEventData
class CORDL_TYPE LightRotationBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
public:
  // Declarations
  /// @brief Field <axis>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__axis_k__BackingField, put = __cordl_internal_set__axis_k__BackingField)) ::GlobalNamespace::LightAxis _axis_k__BackingField;

  /// @brief Field _defaults, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__defaults, put = setStaticF__defaults)) ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationBeatmapEventData*>* _defaults;

  /// @brief Field <easeType>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__easeType_k__BackingField, put = __cordl_internal_set__easeType_k__BackingField)) ::GlobalNamespace::EaseType _easeType_k__BackingField;

  /// @brief Field <elementId>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__elementId_k__BackingField, put = __cordl_internal_set__elementId_k__BackingField)) int32_t _elementId_k__BackingField;

  /// @brief Field <groupId>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__groupId_k__BackingField, put = __cordl_internal_set__groupId_k__BackingField)) int32_t _groupId_k__BackingField;

  /// @brief Field <loopCount>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__loopCount_k__BackingField, put = __cordl_internal_set__loopCount_k__BackingField)) int32_t _loopCount_k__BackingField;

  /// @brief Field <rotationDirection>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__rotationDirection_k__BackingField,
                      put = __cordl_internal_set__rotationDirection_k__BackingField)) ::GlobalNamespace::LightRotationDirection _rotationDirection_k__BackingField;

  /// @brief Field <rotation>k__BackingField, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__rotation_k__BackingField, put = __cordl_internal_set__rotation_k__BackingField)) float_t _rotation_k__BackingField;

  /// @brief Field <usePreviousEventValue>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__usePreviousEventValue_k__BackingField,
                      put = __cordl_internal_set__usePreviousEventValue_k__BackingField)) bool _usePreviousEventValue_k__BackingField;

  __declspec(property(get = get_axis, put = set_axis)) ::GlobalNamespace::LightAxis axis;

  __declspec(property(get = get_easeType, put = set_easeType)) ::GlobalNamespace::EaseType easeType;

  __declspec(property(get = get_elementId, put = set_elementId)) int32_t elementId;

  __declspec(property(get = get_groupId, put = set_groupId)) int32_t groupId;

  __declspec(property(get = get_loopCount, put = set_loopCount)) int32_t loopCount;

  __declspec(property(get = get_rotation, put = set_rotation)) float_t rotation;

  __declspec(property(get = get_rotationDirection, put = set_rotationDirection)) ::GlobalNamespace::LightRotationDirection rotationDirection;

  __declspec(property(get = get_usePreviousEventValue, put = set_usePreviousEventValue)) bool usePreviousEventValue;

  /// @brief Method ChangeRotation, addr 0x2243a60, size 0x8, virtual false, abstract: false, final false
  inline void ChangeRotation(float_t rotation);

  /// @brief Method GetCopy, addr 0x2243a68, size 0xb8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method GetDefault, addr 0x2243b20, size 0x160, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* GetDefault();

  static inline ::GlobalNamespace::LightRotationBeatmapEventData* New_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType,
                                                                           ::GlobalNamespace::LightAxis axis, float_t rotation, int32_t loopCount,
                                                                           ::GlobalNamespace::LightRotationDirection rotationDirection);

  /// @brief Method SubtypeIdentifier, addr 0x2243a48, size 0x18, virtual false, abstract: false, final false
  static inline int32_t SubtypeIdentifier(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightAxis axis);

  constexpr ::GlobalNamespace::LightAxis const& __cordl_internal_get__axis_k__BackingField() const;

  constexpr ::GlobalNamespace::LightAxis& __cordl_internal_get__axis_k__BackingField();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get__easeType_k__BackingField() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get__easeType_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__elementId_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__elementId_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__groupId_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__groupId_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__loopCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__loopCount_k__BackingField();

  constexpr ::GlobalNamespace::LightRotationDirection const& __cordl_internal_get__rotationDirection_k__BackingField() const;

  constexpr ::GlobalNamespace::LightRotationDirection& __cordl_internal_get__rotationDirection_k__BackingField();

  constexpr float_t const& __cordl_internal_get__rotation_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__rotation_k__BackingField();

  constexpr bool const& __cordl_internal_get__usePreviousEventValue_k__BackingField() const;

  constexpr bool& __cordl_internal_get__usePreviousEventValue_k__BackingField();

  constexpr void __cordl_internal_set__axis_k__BackingField(::GlobalNamespace::LightAxis value);

  constexpr void __cordl_internal_set__easeType_k__BackingField(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set__elementId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__groupId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__loopCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__rotationDirection_k__BackingField(::GlobalNamespace::LightRotationDirection value);

  constexpr void __cordl_internal_set__rotation_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__usePreviousEventValue_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x2243960, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::LightAxis axis, float_t rotation,
                    int32_t loopCount, ::GlobalNamespace::LightRotationDirection rotationDirection);

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationBeatmapEventData*>* getStaticF__defaults();

  /// @brief Method get_axis, addr 0x2243920, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LightAxis get_axis();

  /// @brief Method get_easeType, addr 0x2243910, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EaseType get_easeType();

  /// @brief Method get_elementId, addr 0x22438ec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_elementId();

  /// @brief Method get_groupId, addr 0x22438dc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_groupId();

  /// @brief Method get_loopCount, addr 0x2243930, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_loopCount();

  /// @brief Method get_rotation, addr 0x2243950, size 0x8, virtual false, abstract: false, final false
  inline float_t get_rotation();

  /// @brief Method get_rotationDirection, addr 0x2243940, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LightRotationDirection get_rotationDirection();

  /// @brief Method get_usePreviousEventValue, addr 0x22438fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_usePreviousEventValue();

  static inline void setStaticF__defaults(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationBeatmapEventData*>* value);

  /// @brief Method set_axis, addr 0x2243928, size 0x8, virtual false, abstract: false, final false
  inline void set_axis(::GlobalNamespace::LightAxis value);

  /// @brief Method set_easeType, addr 0x2243918, size 0x8, virtual false, abstract: false, final false
  inline void set_easeType(::GlobalNamespace::EaseType value);

  /// @brief Method set_elementId, addr 0x22438f4, size 0x8, virtual false, abstract: false, final false
  inline void set_elementId(int32_t value);

  /// @brief Method set_groupId, addr 0x22438e4, size 0x8, virtual false, abstract: false, final false
  inline void set_groupId(int32_t value);

  /// @brief Method set_loopCount, addr 0x2243938, size 0x8, virtual false, abstract: false, final false
  inline void set_loopCount(int32_t value);

  /// @brief Method set_rotation, addr 0x2243958, size 0x8, virtual false, abstract: false, final false
  inline void set_rotation(float_t value);

  /// @brief Method set_rotationDirection, addr 0x2243948, size 0x8, virtual false, abstract: false, final false
  inline void set_rotationDirection(::GlobalNamespace::LightRotationDirection value);

  /// @brief Method set_usePreviousEventValue, addr 0x2243904, size 0xc, virtual false, abstract: false, final false
  inline void set_usePreviousEventValue(bool value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17061 };

  /// @brief Field <groupId>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t ____groupId_k__BackingField;

  /// @brief Field <elementId>k__BackingField, offset: 0x34, size: 0x4, def value: None
  int32_t ____elementId_k__BackingField;

  /// @brief Field <usePreviousEventValue>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____usePreviousEventValue_k__BackingField;

  /// @brief Field <easeType>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ____easeType_k__BackingField;

  /// @brief Field <axis>k__BackingField, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::LightAxis ____axis_k__BackingField;

  /// @brief Field <loopCount>k__BackingField, offset: 0x44, size: 0x4, def value: None
  int32_t ____loopCount_k__BackingField;

  /// @brief Field <rotationDirection>k__BackingField, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::LightRotationDirection ____rotationDirection_k__BackingField;

  /// @brief Field <rotation>k__BackingField, offset: 0x4c, size: 0x4, def value: None
  float_t ____rotation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventData, ____groupId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventData, ____elementId_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventData, ____usePreviousEventValue_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventData, ____easeType_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventData, ____axis_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventData, ____loopCount_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventData, ____rotationDirection_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationBeatmapEventData, ____rotation_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightRotationBeatmapEventData, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightRotationBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationBeatmapEventData*, "", "LightRotationBeatmapEventData");
