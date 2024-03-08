#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnvironmentSizeData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentSizeData)
namespace GlobalNamespace {
struct __EnvironmentSizeData__CeilingType;
}
namespace GlobalNamespace {
struct __EnvironmentSizeData__FloorType;
}
namespace GlobalNamespace {
struct __EnvironmentSizeData__TrackLaneType;
}
// Forward declare root types
namespace GlobalNamespace {
struct __EnvironmentSizeData__CeilingType;
}
namespace GlobalNamespace {
struct __EnvironmentSizeData__FloorType;
}
namespace GlobalNamespace {
struct __EnvironmentSizeData__TrackLaneType;
}
namespace GlobalNamespace {
class EnvironmentSizeData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__EnvironmentSizeData__CeilingType);
MARK_VAL_T(::GlobalNamespace::__EnvironmentSizeData__FloorType);
MARK_VAL_T(::GlobalNamespace::__EnvironmentSizeData__TrackLaneType);
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentSizeData);
// Type: ::FloorType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::EnvironmentSizeData::FloorType
struct CORDL_TYPE __EnvironmentSizeData__FloorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____EnvironmentSizeData__FloorType_Unwrapped
  enum struct ____EnvironmentSizeData__FloorType_Unwrapped : int32_t {
    __E_NoFloor = static_cast<int32_t>(0x0),
    __E_CloseTo0 = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EnvironmentSizeData__FloorType_Unwrapped() const noexcept {
    return static_cast<____EnvironmentSizeData__FloorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentSizeData__FloorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EnvironmentSizeData__FloorType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CloseTo0 value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__EnvironmentSizeData__FloorType const CloseTo0;

  /// @brief Field NoFloor value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__EnvironmentSizeData__FloorType const NoFloor;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnvironmentSizeData__FloorType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EnvironmentSizeData__FloorType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CeilingType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::EnvironmentSizeData::CeilingType
struct CORDL_TYPE __EnvironmentSizeData__CeilingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____EnvironmentSizeData__CeilingType_Unwrapped
  enum struct ____EnvironmentSizeData__CeilingType_Unwrapped : int32_t {
    __E_NoCeiling = static_cast<int32_t>(0x0),
    __E_LowCeiling = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EnvironmentSizeData__CeilingType_Unwrapped() const noexcept {
    return static_cast<____EnvironmentSizeData__CeilingType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentSizeData__CeilingType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EnvironmentSizeData__CeilingType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field LowCeiling value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__EnvironmentSizeData__CeilingType const LowCeiling;

  /// @brief Field NoCeiling value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__EnvironmentSizeData__CeilingType const NoCeiling;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnvironmentSizeData__CeilingType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EnvironmentSizeData__CeilingType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TrackLaneType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::EnvironmentSizeData::TrackLaneType
struct CORDL_TYPE __EnvironmentSizeData__TrackLaneType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____EnvironmentSizeData__TrackLaneType_Unwrapped
  enum struct ____EnvironmentSizeData__TrackLaneType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Normal = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EnvironmentSizeData__TrackLaneType_Unwrapped() const noexcept {
    return static_cast<____EnvironmentSizeData__TrackLaneType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentSizeData__TrackLaneType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EnvironmentSizeData__TrackLaneType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__EnvironmentSizeData__TrackLaneType const None;

  /// @brief Field Normal value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__EnvironmentSizeData__TrackLaneType const Normal;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnvironmentSizeData__TrackLaneType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EnvironmentSizeData__TrackLaneType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EnvironmentSizeData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnvironmentSizeData*
class CORDL_TYPE EnvironmentSizeData : public ::System::Object {
public:
  // Declarations
  using CeilingType = ::GlobalNamespace::__EnvironmentSizeData__CeilingType;

  using FloorType = ::GlobalNamespace::__EnvironmentSizeData__FloorType;

  using TrackLaneType = ::GlobalNamespace::__EnvironmentSizeData__TrackLaneType;

  /// @brief Field _ceilingType, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__ceilingType, put = __cordl_internal_set__ceilingType))::GlobalNamespace::__EnvironmentSizeData__CeilingType _ceilingType;

  /// @brief Field _floorType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__floorType, put = __cordl_internal_set__floorType))::GlobalNamespace::__EnvironmentSizeData__FloorType _floorType;

  /// @brief Field _trackLaneType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__trackLaneType, put = __cordl_internal_set__trackLaneType))::GlobalNamespace::__EnvironmentSizeData__TrackLaneType _trackLaneType;

  __declspec(property(get = get_ceilingType))::GlobalNamespace::__EnvironmentSizeData__CeilingType ceilingType;

  __declspec(property(get = get_floorType))::GlobalNamespace::__EnvironmentSizeData__FloorType floorType;

  __declspec(property(get = get_trackLaneType))::GlobalNamespace::__EnvironmentSizeData__TrackLaneType trackLaneType;

  static inline ::GlobalNamespace::EnvironmentSizeData* New_ctor();

  constexpr ::GlobalNamespace::__EnvironmentSizeData__CeilingType const& __cordl_internal_get__ceilingType() const;

  constexpr ::GlobalNamespace::__EnvironmentSizeData__CeilingType& __cordl_internal_get__ceilingType();

  constexpr ::GlobalNamespace::__EnvironmentSizeData__FloorType const& __cordl_internal_get__floorType() const;

  constexpr ::GlobalNamespace::__EnvironmentSizeData__FloorType& __cordl_internal_get__floorType();

  constexpr ::GlobalNamespace::__EnvironmentSizeData__TrackLaneType const& __cordl_internal_get__trackLaneType() const;

  constexpr ::GlobalNamespace::__EnvironmentSizeData__TrackLaneType& __cordl_internal_get__trackLaneType();

  constexpr void __cordl_internal_set__ceilingType(::GlobalNamespace::__EnvironmentSizeData__CeilingType value);

  constexpr void __cordl_internal_set__floorType(::GlobalNamespace::__EnvironmentSizeData__FloorType value);

  constexpr void __cordl_internal_set__trackLaneType(::GlobalNamespace::__EnvironmentSizeData__TrackLaneType value);

  /// @brief Method .ctor, addr 0x12d0b00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ceilingType, addr 0x12d0af0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__EnvironmentSizeData__CeilingType get_ceilingType();

  /// @brief Method get_floorType, addr 0x12d0ae8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__EnvironmentSizeData__FloorType get_floorType();

  /// @brief Method get_trackLaneType, addr 0x12d0af8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__EnvironmentSizeData__TrackLaneType get_trackLaneType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentSizeData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentSizeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentSizeData(EnvironmentSizeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentSizeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentSizeData(EnvironmentSizeData const&) = delete;

  /// @brief Field _floorType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__EnvironmentSizeData__FloorType ____floorType;

  /// @brief Field _ceilingType, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__EnvironmentSizeData__CeilingType ____ceilingType;

  /// @brief Field _trackLaneType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__EnvironmentSizeData__TrackLaneType ____trackLaneType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentSizeData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSizeData, ____floorType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSizeData, ____ceilingType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSizeData, ____trackLaneType) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnvironmentSizeData__CeilingType, "", "EnvironmentSizeData/CeilingType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnvironmentSizeData__FloorType, "", "EnvironmentSizeData/FloorType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnvironmentSizeData__TrackLaneType, "", "EnvironmentSizeData/TrackLaneType");
NEED_NO_BOX(::GlobalNamespace::EnvironmentSizeData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSizeData*, "", "EnvironmentSizeData");
