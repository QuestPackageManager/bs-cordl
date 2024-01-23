#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "TrackDefinitions/zzzz__EventTrackDefinitionSO_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventTrackDefinitionSO)
namespace TrackDefinitions {
struct __EventTrackDefinitionSO__DataTransformationType;
}
namespace TrackDefinitions {
struct __EventTrackDefinitionSO__MarkerType;
}
// Forward declare root types
namespace TrackDefinitions {
struct __EventTrackDefinitionSO__DataTransformationType;
}
namespace TrackDefinitions {
struct __EventTrackDefinitionSO__MarkerType;
}
namespace TrackDefinitions {
class EventTrackDefinitionSO;
}
// Write type traits
MARK_VAL_T(::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType);
MARK_VAL_T(::TrackDefinitions::__EventTrackDefinitionSO__MarkerType);
MARK_REF_PTR_T(::TrackDefinitions::EventTrackDefinitionSO);
// Type: ::DataTransformationType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TrackDefinitions {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16062))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EventTrackDefinitionSO__DataTransformationType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventTrackDefinitionSO__DataTransformationType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NoTransformation value: static_cast<int32_t>(0x0)
  static ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const NoTransformation;

  /// @brief Field Light value: static_cast<int32_t>(0x1)
  static ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const Light;

  /// @brief Field DeltaRotation value: static_cast<int32_t>(0x2)
  static ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const DeltaRotation;

  /// @brief Field Switch value: static_cast<int32_t>(0x3)
  static ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const Switch;

  /// @brief Field TurnOffValueDuration value: static_cast<int32_t>(0x4)
  static ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const TurnOffValueDuration;

  /// @brief Field ValueDuration value: static_cast<int32_t>(0x5)
  static ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const ValueDuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType, 0x4>, "Size mismatch!");

static_assert(offsetof(::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType, value__) == 0x0, "Offset mismatch!");

} // namespace TrackDefinitions
// Type: ::MarkerType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TrackDefinitions {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16063))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EventTrackDefinitionSO__MarkerType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventTrackDefinitionSO__MarkerType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field BasicMarker value: static_cast<int32_t>(0x0)
  static ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const BasicMarker;

  /// @brief Field DurationMarker value: static_cast<int32_t>(0x1)
  static ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const DurationMarker;

  /// @brief Field LightMarker value: static_cast<int32_t>(0x2)
  static ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const LightMarker;

  /// @brief Field TextMarker value: static_cast<int32_t>(0x3)
  static ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const TextMarker;

  /// @brief Field TooltipMarker value: static_cast<int32_t>(0x4)
  static ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const TooltipMarker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TrackDefinitions::__EventTrackDefinitionSO__MarkerType, 0x4>, "Size mismatch!");

static_assert(offsetof(::TrackDefinitions::__EventTrackDefinitionSO__MarkerType, value__) == 0x0, "Offset mismatch!");

} // namespace TrackDefinitions
// Type: TrackDefinitions::EventTrackDefinitionSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 34, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace TrackDefinitions {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15857)), TypeDefinitionIndex(TypeDefinitionIndex(16062)), TypeDefinitionIndex(TypeDefinitionIndex(16063))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16064))
// CS Name: ::TrackDefinitions::EventTrackDefinitionSO*
class CORDL_TYPE EventTrackDefinitionSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using MarkerType = ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType;

  using DataTransformationType = ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType;

  /// @brief Field _dataTransformationType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__dataTransformationType,
                      put = __cordl_internal_set__dataTransformationType))::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType _dataTransformationType;

  /// @brief Field _markerType, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__markerType, put = __cordl_internal_set__markerType))::TrackDefinitions::__EventTrackDefinitionSO__MarkerType _markerType;

  /// @brief Field _visible, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__visible, put = __cordl_internal_set__visible)) bool _visible;

  /// @brief Field _needsFiltering, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__needsFiltering, put = __cordl_internal_set__needsFiltering)) bool _needsFiltering;

  __declspec(property(get = get_visible)) bool visible;

  __declspec(property(get = get_dataTransformation))::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType dataTransformation;

  __declspec(property(get = get_markerType))::TrackDefinitions::__EventTrackDefinitionSO__MarkerType markerType;

  __declspec(property(get = get_needsFiltering)) bool needsFiltering;

  constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType& __cordl_internal_get__dataTransformationType();

  constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const& __cordl_internal_get__dataTransformationType() const;

  constexpr void __cordl_internal_set__dataTransformationType(::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType value);

  constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType& __cordl_internal_get__markerType();

  constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const& __cordl_internal_get__markerType() const;

  constexpr void __cordl_internal_set__markerType(::TrackDefinitions::__EventTrackDefinitionSO__MarkerType value);

  constexpr bool& __cordl_internal_get__visible();

  constexpr bool const& __cordl_internal_get__visible() const;

  constexpr void __cordl_internal_set__visible(bool value);

  constexpr bool& __cordl_internal_get__needsFiltering();

  constexpr bool const& __cordl_internal_get__needsFiltering() const;

  constexpr void __cordl_internal_set__needsFiltering(bool value);

  /// @brief Method get_visible, addr 0x2a0b030, size 0x8, virtual false, abstract: false, final false
  inline bool get_visible();

  /// @brief Method get_dataTransformation, addr 0x2a0b038, size 0x8, virtual false, abstract: false, final false
  inline ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType get_dataTransformation();

  /// @brief Method get_markerType, addr 0x2a0b040, size 0x8, virtual false, abstract: false, final false
  inline ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType get_markerType();

  /// @brief Method get_needsFiltering, addr 0x2a0b048, size 0x8, virtual false, abstract: false, final false
  inline bool get_needsFiltering();

  static inline ::TrackDefinitions::EventTrackDefinitionSO* New_ctor();

  /// @brief Method .ctor, addr 0x2a0b050, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EventTrackDefinitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventTrackDefinitionSO(EventTrackDefinitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventTrackDefinitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventTrackDefinitionSO(EventTrackDefinitionSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventTrackDefinitionSO();

public:
  /// @brief Field _dataTransformationType, offset: 0x18, size: 0x4, def value: None
  ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType ____dataTransformationType;

  /// @brief Field _markerType, offset: 0x1c, size: 0x4, def value: None
  ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType ____markerType;

  /// @brief Field _visible, offset: 0x20, size: 0x1, def value: None
  bool ____visible;

  /// @brief Field _needsFiltering, offset: 0x21, size: 0x1, def value: None
  bool ____needsFiltering;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TrackDefinitions::EventTrackDefinitionSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::TrackDefinitions::EventTrackDefinitionSO, ____dataTransformationType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TrackDefinitions::EventTrackDefinitionSO, ____markerType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::TrackDefinitions::EventTrackDefinitionSO, ____visible) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TrackDefinitions::EventTrackDefinitionSO, ____needsFiltering) == 0x21, "Offset mismatch!");

} // namespace TrackDefinitions
DEFINE_IL2CPP_ARG_TYPE(::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType, "TrackDefinitions", "EventTrackDefinitionSO/DataTransformationType");
DEFINE_IL2CPP_ARG_TYPE(::TrackDefinitions::__EventTrackDefinitionSO__MarkerType, "TrackDefinitions", "EventTrackDefinitionSO/MarkerType");
NEED_NO_BOX(::TrackDefinitions::EventTrackDefinitionSO);
DEFINE_IL2CPP_ARG_TYPE(::TrackDefinitions::EventTrackDefinitionSO*, "TrackDefinitions", "EventTrackDefinitionSO");
