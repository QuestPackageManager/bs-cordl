#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentSizeData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentSizeData)
namespace GlobalNamespace {
struct EnvironmentSizeData_CeilingType;
}
namespace GlobalNamespace {
struct EnvironmentSizeData_FloorType;
}
namespace GlobalNamespace {
struct EnvironmentSizeData_TrackLaneType;
}
// Forward declare root types
namespace GlobalNamespace {
struct EnvironmentSizeData_CeilingType;
}
namespace GlobalNamespace {
struct EnvironmentSizeData_FloorType;
}
namespace GlobalNamespace {
struct EnvironmentSizeData_TrackLaneType;
}
namespace GlobalNamespace {
class EnvironmentSizeData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EnvironmentSizeData_CeilingType);
MARK_VAL_T(::GlobalNamespace::EnvironmentSizeData_FloorType);
MARK_VAL_T(::GlobalNamespace::EnvironmentSizeData_TrackLaneType);
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentSizeData);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: EnvironmentSizeData/FloorType
struct CORDL_TYPE EnvironmentSizeData_FloorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EnvironmentSizeData_FloorType_Unwrapped
  enum struct __EnvironmentSizeData_FloorType_Unwrapped : int32_t {
    __E_NoFloor = static_cast<int32_t>(0x0),
    __E_CloseTo0 = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EnvironmentSizeData_FloorType_Unwrapped() const noexcept {
    return static_cast<__EnvironmentSizeData_FloorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentSizeData_FloorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EnvironmentSizeData_FloorType(int32_t value__) noexcept;

  /// @brief Field CloseTo0 value: I32(1)
  static ::GlobalNamespace::EnvironmentSizeData_FloorType const CloseTo0;

  /// @brief Field NoFloor value: I32(0)
  static ::GlobalNamespace::EnvironmentSizeData_FloorType const NoFloor;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12840 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentSizeData_FloorType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentSizeData_FloorType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: EnvironmentSizeData/CeilingType
struct CORDL_TYPE EnvironmentSizeData_CeilingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EnvironmentSizeData_CeilingType_Unwrapped
  enum struct __EnvironmentSizeData_CeilingType_Unwrapped : int32_t {
    __E_NoCeiling = static_cast<int32_t>(0x0),
    __E_LowCeiling = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EnvironmentSizeData_CeilingType_Unwrapped() const noexcept {
    return static_cast<__EnvironmentSizeData_CeilingType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentSizeData_CeilingType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EnvironmentSizeData_CeilingType(int32_t value__) noexcept;

  /// @brief Field LowCeiling value: I32(1)
  static ::GlobalNamespace::EnvironmentSizeData_CeilingType const LowCeiling;

  /// @brief Field NoCeiling value: I32(0)
  static ::GlobalNamespace::EnvironmentSizeData_CeilingType const NoCeiling;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12841 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentSizeData_CeilingType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentSizeData_CeilingType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: EnvironmentSizeData/TrackLaneType
struct CORDL_TYPE EnvironmentSizeData_TrackLaneType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EnvironmentSizeData_TrackLaneType_Unwrapped
  enum struct __EnvironmentSizeData_TrackLaneType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Normal = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EnvironmentSizeData_TrackLaneType_Unwrapped() const noexcept {
    return static_cast<__EnvironmentSizeData_TrackLaneType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentSizeData_TrackLaneType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EnvironmentSizeData_TrackLaneType(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::EnvironmentSizeData_TrackLaneType const None;

  /// @brief Field Normal value: I32(1)
  static ::GlobalNamespace::EnvironmentSizeData_TrackLaneType const Normal;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12842 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentSizeData_TrackLaneType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentSizeData_TrackLaneType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EnvironmentSizeData::CeilingType, EnvironmentSizeData::FloorType, EnvironmentSizeData::TrackLaneType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentSizeData
class CORDL_TYPE EnvironmentSizeData : public ::System::Object {
public:
  // Declarations
  using CeilingType = ::GlobalNamespace::EnvironmentSizeData_CeilingType;

  using FloorType = ::GlobalNamespace::EnvironmentSizeData_FloorType;

  using TrackLaneType = ::GlobalNamespace::EnvironmentSizeData_TrackLaneType;

  /// @brief Field _ceilingType, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__ceilingType, put = __cordl_internal_set__ceilingType)) ::GlobalNamespace::EnvironmentSizeData_CeilingType _ceilingType;

  /// @brief Field _floorType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__floorType, put = __cordl_internal_set__floorType)) ::GlobalNamespace::EnvironmentSizeData_FloorType _floorType;

  /// @brief Field _trackLaneType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__trackLaneType, put = __cordl_internal_set__trackLaneType)) ::GlobalNamespace::EnvironmentSizeData_TrackLaneType _trackLaneType;

  __declspec(property(get = get_ceilingType)) ::GlobalNamespace::EnvironmentSizeData_CeilingType ceilingType;

  __declspec(property(get = get_floorType)) ::GlobalNamespace::EnvironmentSizeData_FloorType floorType;

  __declspec(property(get = get_trackLaneType)) ::GlobalNamespace::EnvironmentSizeData_TrackLaneType trackLaneType;

  static inline ::GlobalNamespace::EnvironmentSizeData* New_ctor();

  constexpr ::GlobalNamespace::EnvironmentSizeData_CeilingType const& __cordl_internal_get__ceilingType() const;

  constexpr ::GlobalNamespace::EnvironmentSizeData_CeilingType& __cordl_internal_get__ceilingType();

  constexpr ::GlobalNamespace::EnvironmentSizeData_FloorType const& __cordl_internal_get__floorType() const;

  constexpr ::GlobalNamespace::EnvironmentSizeData_FloorType& __cordl_internal_get__floorType();

  constexpr ::GlobalNamespace::EnvironmentSizeData_TrackLaneType const& __cordl_internal_get__trackLaneType() const;

  constexpr ::GlobalNamespace::EnvironmentSizeData_TrackLaneType& __cordl_internal_get__trackLaneType();

  constexpr void __cordl_internal_set__ceilingType(::GlobalNamespace::EnvironmentSizeData_CeilingType value);

  constexpr void __cordl_internal_set__floorType(::GlobalNamespace::EnvironmentSizeData_FloorType value);

  constexpr void __cordl_internal_set__trackLaneType(::GlobalNamespace::EnvironmentSizeData_TrackLaneType value);

  /// @brief Method .ctor, addr 0x26ac7e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ceilingType, addr 0x26ac7d8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentSizeData_CeilingType get_ceilingType();

  /// @brief Method get_floorType, addr 0x26ac7d0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentSizeData_FloorType get_floorType();

  /// @brief Method get_trackLaneType, addr 0x26ac7e0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentSizeData_TrackLaneType get_trackLaneType();

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12843 };

  /// @brief Field _floorType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentSizeData_FloorType ____floorType;

  /// @brief Field _ceilingType, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentSizeData_CeilingType ____ceilingType;

  /// @brief Field _trackLaneType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentSizeData_TrackLaneType ____trackLaneType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentSizeData, ____floorType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSizeData, ____ceilingType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentSizeData, ____trackLaneType) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentSizeData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSizeData_CeilingType, "", "EnvironmentSizeData/CeilingType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSizeData_FloorType, "", "EnvironmentSizeData/FloorType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSizeData_TrackLaneType, "", "EnvironmentSizeData/TrackLaneType");
NEED_NO_BOX(::GlobalNamespace::EnvironmentSizeData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSizeData*, "", "EnvironmentSizeData");
