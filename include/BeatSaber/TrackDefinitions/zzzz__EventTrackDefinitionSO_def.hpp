#pragma once
// IWYU pragma private; include "BeatSaber/TrackDefinitions/EventTrackDefinitionSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventTrackDefinitionSO)
namespace BeatSaber::TrackDefinitions {
struct EventTrackDefinitionSO_DataTransformationType;
}
namespace BeatSaber::TrackDefinitions {
struct EventTrackDefinitionSO_MarkerType;
}
// Forward declare root types
namespace BeatSaber::TrackDefinitions {
struct EventTrackDefinitionSO_DataTransformationType;
}
namespace BeatSaber::TrackDefinitions {
struct EventTrackDefinitionSO_MarkerType;
}
namespace BeatSaber::TrackDefinitions {
class EventTrackDefinitionSO;
}
// Write type traits
MARK_VAL_T(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType);
MARK_VAL_T(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType);
MARK_REF_PTR_T(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO);
// Dependencies
namespace BeatSaber::TrackDefinitions {
// Is value type: true
// CS Name: BeatSaber.TrackDefinitions.EventTrackDefinitionSO/DataTransformationType
struct CORDL_TYPE EventTrackDefinitionSO_DataTransformationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EventTrackDefinitionSO_DataTransformationType_Unwrapped
  enum struct __EventTrackDefinitionSO_DataTransformationType_Unwrapped : int32_t {
    __E_NoTransformation = static_cast<int32_t>(0x0),
    __E_Light = static_cast<int32_t>(0x1),
    __E_DeltaRotation = static_cast<int32_t>(0x2),
    __E_Switch = static_cast<int32_t>(0x3),
    __E_TurnOffValueDuration = static_cast<int32_t>(0x4),
    __E_ValueDuration = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventTrackDefinitionSO_DataTransformationType_Unwrapped() const noexcept {
    return static_cast<__EventTrackDefinitionSO_DataTransformationType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventTrackDefinitionSO_DataTransformationType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventTrackDefinitionSO_DataTransformationType(int32_t value__) noexcept;

  /// @brief Field DeltaRotation value: I32(2)
  static ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType const DeltaRotation;

  /// @brief Field Light value: I32(1)
  static ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType const Light;

  /// @brief Field NoTransformation value: I32(0)
  static ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType const NoTransformation;

  /// @brief Field Switch value: I32(3)
  static ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType const Switch;

  /// @brief Field TurnOffValueDuration value: I32(4)
  static ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType const TurnOffValueDuration;

  /// @brief Field ValueDuration value: I32(5)
  static ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType const ValueDuration;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18639 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType, 0x4>, "Size mismatch!");

} // namespace BeatSaber::TrackDefinitions
// Dependencies
namespace BeatSaber::TrackDefinitions {
// Is value type: true
// CS Name: BeatSaber.TrackDefinitions.EventTrackDefinitionSO/MarkerType
struct CORDL_TYPE EventTrackDefinitionSO_MarkerType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EventTrackDefinitionSO_MarkerType_Unwrapped
  enum struct __EventTrackDefinitionSO_MarkerType_Unwrapped : int32_t {
    __E_BasicMarker = static_cast<int32_t>(0x0),
    __E_DurationMarker = static_cast<int32_t>(0x1),
    __E_LightMarker = static_cast<int32_t>(0x2),
    __E_TextMarker = static_cast<int32_t>(0x3),
    __E_TooltipMarker = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventTrackDefinitionSO_MarkerType_Unwrapped() const noexcept {
    return static_cast<__EventTrackDefinitionSO_MarkerType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventTrackDefinitionSO_MarkerType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventTrackDefinitionSO_MarkerType(int32_t value__) noexcept;

  /// @brief Field BasicMarker value: I32(0)
  static ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType const BasicMarker;

  /// @brief Field DurationMarker value: I32(1)
  static ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType const DurationMarker;

  /// @brief Field LightMarker value: I32(2)
  static ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType const LightMarker;

  /// @brief Field TextMarker value: I32(3)
  static ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType const TextMarker;

  /// @brief Field TooltipMarker value: I32(4)
  static ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType const TooltipMarker;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18640 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType, 0x4>, "Size mismatch!");

} // namespace BeatSaber::TrackDefinitions
// Dependencies BeatSaber.TrackDefinitions.EventTrackDefinitionSO::DataTransformationType, BeatSaber.TrackDefinitions.EventTrackDefinitionSO::MarkerType, PersistentScriptableObject
namespace BeatSaber::TrackDefinitions {
// Is value type: false
// CS Name: BeatSaber.TrackDefinitions.EventTrackDefinitionSO
class CORDL_TYPE EventTrackDefinitionSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using DataTransformationType = ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType;

  using MarkerType = ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType;

  /// @brief Field _dataTransformationType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__dataTransformationType,
                      put = __cordl_internal_set__dataTransformationType)) ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType _dataTransformationType;

  /// @brief Field _markerType, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__markerType, put = __cordl_internal_set__markerType)) ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType _markerType;

  /// @brief Field _needsFiltering, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__needsFiltering, put = __cordl_internal_set__needsFiltering)) bool _needsFiltering;

  /// @brief Field _visible, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__visible, put = __cordl_internal_set__visible)) bool _visible;

  __declspec(property(get = get_dataTransformation)) ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType dataTransformation;

  __declspec(property(get = get_markerType)) ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType markerType;

  __declspec(property(get = get_needsFiltering)) bool needsFiltering;

  __declspec(property(get = get_visible)) bool visible;

  static inline ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO* New_ctor();

  constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType const& __cordl_internal_get__dataTransformationType() const;

  constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType& __cordl_internal_get__dataTransformationType();

  constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType const& __cordl_internal_get__markerType() const;

  constexpr ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType& __cordl_internal_get__markerType();

  constexpr bool const& __cordl_internal_get__needsFiltering() const;

  constexpr bool& __cordl_internal_get__needsFiltering();

  constexpr bool const& __cordl_internal_get__visible() const;

  constexpr bool& __cordl_internal_get__visible();

  constexpr void __cordl_internal_set__dataTransformationType(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType value);

  constexpr void __cordl_internal_set__markerType(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType value);

  constexpr void __cordl_internal_set__needsFiltering(bool value);

  constexpr void __cordl_internal_set__visible(bool value);

  /// @brief Method .ctor, addr 0x2282f9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_dataTransformation, addr 0x2282f84, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType get_dataTransformation();

  /// @brief Method get_markerType, addr 0x2282f8c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType get_markerType();

  /// @brief Method get_needsFiltering, addr 0x2282f94, size 0x8, virtual false, abstract: false, final false
  inline bool get_needsFiltering();

  /// @brief Method get_visible, addr 0x2282f7c, size 0x8, virtual false, abstract: false, final false
  inline bool get_visible();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventTrackDefinitionSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventTrackDefinitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventTrackDefinitionSO(EventTrackDefinitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventTrackDefinitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventTrackDefinitionSO(EventTrackDefinitionSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18641 };

  /// @brief Field _dataTransformationType, offset: 0x18, size: 0x4, def value: None
  ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType ____dataTransformationType;

  /// @brief Field _markerType, offset: 0x1c, size: 0x4, def value: None
  ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType ____markerType;

  /// @brief Field _visible, offset: 0x20, size: 0x1, def value: None
  bool ____visible;

  /// @brief Field _needsFiltering, offset: 0x21, size: 0x1, def value: None
  bool ____needsFiltering;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO, ____dataTransformationType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO, ____markerType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO, ____visible) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO, ____needsFiltering) == 0x21, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO, 0x28>, "Size mismatch!");

} // namespace BeatSaber::TrackDefinitions
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_DataTransformationType, "BeatSaber.TrackDefinitions", "EventTrackDefinitionSO/DataTransformationType");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO_MarkerType, "BeatSaber.TrackDefinitions", "EventTrackDefinitionSO/MarkerType");
NEED_NO_BOX(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*, "BeatSaber.TrackDefinitions", "EventTrackDefinitionSO");
