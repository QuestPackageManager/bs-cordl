#pragma once
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
class BeatmapEventData;
}
namespace GlobalNamespace {
struct LightAxis;
}
namespace GlobalNamespace {
struct LightRotationDirection;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class BeatmapDataItem;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16090)), TypeDefinitionIndex(TypeDefinitionIndex(14736)), TypeDefinitionIndex(TypeDefinitionIndex(14727)),
// TypeDefinitionIndex(TypeDefinitionIndex(14733))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14735)) CS Name: ::LightRotationBeatmapEventData*
class CORDL_TYPE LightRotationBeatmapEventData : public ::GlobalNamespace::BeatmapEventData {
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

  /// @brief Field loopCount, offset 0x44, size 0x4
  __declspec(property(get = __get_loopCount, put = __set_loopCount)) int32_t loopCount;

  /// @brief Field rotationDirection, offset 0x48, size 0x4
  __declspec(property(get = __get_rotationDirection, put = __set_rotationDirection))::GlobalNamespace::LightRotationDirection rotationDirection;

  /// @brief Field <rotation>k__BackingField, offset 0x4c, size 0x4
  __declspec(property(get = __get__rotation_k__BackingField, put = __set__rotation_k__BackingField)) float_t _rotation_k__BackingField;

  /// @brief Field _defaults, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__defaults,
                             put = setStaticF__defaults))::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationBeatmapEventData*>* _defaults;

  __declspec(property(get = get_rotation, put = set_rotation)) float_t rotation;

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

  constexpr int32_t& __get_loopCount();

  constexpr int32_t const& __get_loopCount() const;

  constexpr void __set_loopCount(int32_t value);

  constexpr ::GlobalNamespace::LightRotationDirection& __get_rotationDirection();

  constexpr ::GlobalNamespace::LightRotationDirection const& __get_rotationDirection() const;

  constexpr void __set_rotationDirection(::GlobalNamespace::LightRotationDirection value);

  constexpr float_t& __get__rotation_k__BackingField();

  constexpr float_t const& __get__rotation_k__BackingField() const;

  constexpr void __set__rotation_k__BackingField(float_t value);

  static inline void setStaticF__defaults(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationBeatmapEventData*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationBeatmapEventData*>* getStaticF__defaults();

  /// @brief Method get_rotation addr 0xdfead0 size 0x8 virtual false final false
  inline float_t get_rotation();

  /// @brief Method set_rotation addr 0xdfead8 size 0x8 virtual false final false
  inline void set_rotation(float_t value);

  static inline ::GlobalNamespace::LightRotationBeatmapEventData* New_ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType,
                                                                           ::GlobalNamespace::LightAxis axis, float_t rotation, int32_t loopCount,
                                                                           ::GlobalNamespace::LightRotationDirection rotationDirection);

  /// @brief Method .ctor addr 0xdfeae0 size 0xe4 virtual false final false
  inline void _ctor(float_t time, int32_t groupId, int32_t elementId, bool usePreviousEventValue, ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::LightAxis axis, float_t rotation,
                    int32_t loopCount, ::GlobalNamespace::LightRotationDirection rotationDirection);

  /// @brief Method ChangeRotation addr 0xdfebdc size 0x8 virtual false final false
  inline void ChangeRotation(float_t rotation);

  /// @brief Method GetCopy addr 0xdfebe4 size 0xc4 virtual true final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method SubtypeIdentifier addr 0xdfebc4 size 0x18 virtual false final false
  static inline int32_t SubtypeIdentifier(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightAxis axis);

  /// @brief Method GetDefault addr 0xdfeca8 size 0x164 virtual true final false
  inline ::GlobalNamespace::BeatmapEventData* GetDefault();

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationBeatmapEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightRotationBeatmapEventData(LightRotationBeatmapEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightRotationBeatmapEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightRotationBeatmapEventData(LightRotationBeatmapEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationBeatmapEventData();

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightRotationBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationBeatmapEventData*, "", "LightRotationBeatmapEventData");
