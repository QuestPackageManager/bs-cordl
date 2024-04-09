#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/TrackDefinitions/zzzz__EventTrackDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventTrackDefinitionSO)
namespace BeatSaber::TrackDefinitions {
struct __EventTrackDefinitionSO__DataTransformationType;
}
namespace BeatSaber::TrackDefinitions {
struct __EventTrackDefinitionSO__MarkerType;
}
// Forward declare root types
namespace BeatSaber::TrackDefinitions {
struct __EventTrackDefinitionSO__DataTransformationType;
}
namespace BeatSaber::TrackDefinitions {
struct __EventTrackDefinitionSO__MarkerType;
}
namespace BeatSaber::TrackDefinitions {
class EventTrackDefinitionSO;
}
// Write type traits
MARK_VAL_T(::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType);
MARK_VAL_T(::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType);
MARK_REF_PTR_T(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO);
// Type: ::DataTransformationType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::TrackDefinitions {
// Is value type: true
// CS Name: ::EventTrackDefinitionSO::DataTransformationType
struct CORDL_TYPE __EventTrackDefinitionSO__DataTransformationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____EventTrackDefinitionSO__DataTransformationType_Unwrapped
  enum struct ____EventTrackDefinitionSO__DataTransformationType_Unwrapped : int32_t {
    __E_NoTransformation = static_cast<int32_t>(0x0),
    __E_Light = static_cast<int32_t>(0x1),
    __E_DeltaRotation = static_cast<int32_t>(0x2),
    __E_Switch = static_cast<int32_t>(0x3),
    __E_TurnOffValueDuration = static_cast<int32_t>(0x4),
    __E_ValueDuration = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EventTrackDefinitionSO__DataTransformationType_Unwrapped() const noexcept {
    return static_cast<____EventTrackDefinitionSO__DataTransformationType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventTrackDefinitionSO__DataTransformationType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EventTrackDefinitionSO__DataTransformationType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DeltaRotation value: static_cast<int32_t>(0x2)
  static ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const DeltaRotation;

  /// @brief Field Light value: static_cast<int32_t>(0x1)
  static ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const Light;

  /// @brief Field NoTransformation value: static_cast<int32_t>(0x0)
  static ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const NoTransformation;

  /// @brief Field Switch value: static_cast<int32_t>(0x3)
  static ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const Switch;

  /// @brief Field TurnOffValueDuration value: static_cast<int32_t>(0x4)
  static ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const TurnOffValueDuration;

  /// @brief Field ValueDuration value: static_cast<int32_t>(0x5)
  static ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const ValueDuration;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::TrackDefinitions
// Type: ::MarkerType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::TrackDefinitions {
// Is value type: true
// CS Name: ::EventTrackDefinitionSO::MarkerType
struct CORDL_TYPE __EventTrackDefinitionSO__MarkerType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____EventTrackDefinitionSO__MarkerType_Unwrapped
  enum struct ____EventTrackDefinitionSO__MarkerType_Unwrapped : int32_t {
    __E_BasicMarker = static_cast<int32_t>(0x0),
    __E_DurationMarker = static_cast<int32_t>(0x1),
    __E_LightMarker = static_cast<int32_t>(0x2),
    __E_TextMarker = static_cast<int32_t>(0x3),
    __E_TooltipMarker = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EventTrackDefinitionSO__MarkerType_Unwrapped() const noexcept {
    return static_cast<____EventTrackDefinitionSO__MarkerType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventTrackDefinitionSO__MarkerType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EventTrackDefinitionSO__MarkerType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BasicMarker value: static_cast<int32_t>(0x0)
  static ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const BasicMarker;

  /// @brief Field DurationMarker value: static_cast<int32_t>(0x1)
  static ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const DurationMarker;

  /// @brief Field LightMarker value: static_cast<int32_t>(0x2)
  static ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const LightMarker;

  /// @brief Field TextMarker value: static_cast<int32_t>(0x3)
  static ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const TextMarker;

  /// @brief Field TooltipMarker value: static_cast<int32_t>(0x4)
  static ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const TooltipMarker;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaber::TrackDefinitions
// Type: BeatSaber.TrackDefinitions::EventTrackDefinitionSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 34, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::TrackDefinitions {
// Is value type: false
// CS Name: ::BeatSaber.TrackDefinitions::EventTrackDefinitionSO*
class CORDL_TYPE EventTrackDefinitionSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using DataTransformationType = ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType;

  using MarkerType = ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType;

  /// @brief Field _dataTransformationType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__dataTransformationType,
                      put = __cordl_internal_set__dataTransformationType))::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType _dataTransformationType;

  /// @brief Field _markerType, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__markerType, put = __cordl_internal_set__markerType))::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType _markerType;

  /// @brief Field _needsFiltering, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__needsFiltering, put = __cordl_internal_set__needsFiltering)) bool _needsFiltering;

  /// @brief Field _visible, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__visible, put = __cordl_internal_set__visible)) bool _visible;

  __declspec(property(get = get_dataTransformation))::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType dataTransformation;

  __declspec(property(get = get_markerType))::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType markerType;

  __declspec(property(get = get_needsFiltering)) bool needsFiltering;

  __declspec(property(get = get_visible)) bool visible;

  static inline ::BeatSaber::TrackDefinitions::EventTrackDefinitionSO* New_ctor();

  constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const& __cordl_internal_get__dataTransformationType() const;

  constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType& __cordl_internal_get__dataTransformationType();

  constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const& __cordl_internal_get__markerType() const;

  constexpr ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType& __cordl_internal_get__markerType();

  constexpr bool const& __cordl_internal_get__needsFiltering() const;

  constexpr bool& __cordl_internal_get__needsFiltering();

  constexpr bool const& __cordl_internal_get__visible() const;

  constexpr bool& __cordl_internal_get__visible();

  constexpr void __cordl_internal_set__dataTransformationType(::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType value);

  constexpr void __cordl_internal_set__markerType(::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType value);

  constexpr void __cordl_internal_set__needsFiltering(bool value);

  constexpr void __cordl_internal_set__visible(bool value);

  /// @brief Method .ctor, addr 0xf761c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_dataTransformation, addr 0xf761b0, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType get_dataTransformation();

  /// @brief Method get_markerType, addr 0xf761b8, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType get_markerType();

  /// @brief Method get_needsFiltering, addr 0xf761c0, size 0x8, virtual false, abstract: false, final false
  inline bool get_needsFiltering();

  /// @brief Method get_visible, addr 0xf761a8, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _dataTransformationType, offset: 0x18, size: 0x4, def value: None
  ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType ____dataTransformationType;

  /// @brief Field _markerType, offset: 0x1c, size: 0x4, def value: None
  ::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType ____markerType;

  /// @brief Field _visible, offset: 0x20, size: 0x1, def value: None
  bool ____visible;

  /// @brief Field _needsFiltering, offset: 0x21, size: 0x1, def value: None
  bool ____needsFiltering;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::EventTrackDefinitionSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO, ____dataTransformationType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO, ____markerType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO, ____visible) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO, ____needsFiltering) == 0x21, "Offset mismatch!");

} // namespace BeatSaber::TrackDefinitions
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType, "BeatSaber.TrackDefinitions", "EventTrackDefinitionSO/DataTransformationType");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::__EventTrackDefinitionSO__MarkerType, "BeatSaber.TrackDefinitions", "EventTrackDefinitionSO/MarkerType");
NEED_NO_BOX(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::EventTrackDefinitionSO*, "BeatSaber.TrackDefinitions", "EventTrackDefinitionSO");
