#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentIntensityReductionOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentIntensityReductionOptions)
namespace GlobalNamespace {
struct EnvironmentIntensityReductionOptions_CompressExpandReductionType;
}
namespace GlobalNamespace {
struct EnvironmentIntensityReductionOptions_RotateRingsReductionType;
}
// Forward declare root types
namespace GlobalNamespace {
struct EnvironmentIntensityReductionOptions_CompressExpandReductionType;
}
namespace GlobalNamespace {
struct EnvironmentIntensityReductionOptions_RotateRingsReductionType;
}
namespace GlobalNamespace {
class EnvironmentIntensityReductionOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType);
MARK_VAL_T(::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType);
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentIntensityReductionOptions);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: EnvironmentIntensityReductionOptions/CompressExpandReductionType
struct CORDL_TYPE EnvironmentIntensityReductionOptions_CompressExpandReductionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EnvironmentIntensityReductionOptions_CompressExpandReductionType_Unwrapped
  enum struct __EnvironmentIntensityReductionOptions_CompressExpandReductionType_Unwrapped : int32_t {
    __E_Keep = static_cast<int32_t>(0x0),
    __E_RemoveWithStrobeFilter = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EnvironmentIntensityReductionOptions_CompressExpandReductionType_Unwrapped() const noexcept {
    return static_cast<__EnvironmentIntensityReductionOptions_CompressExpandReductionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentIntensityReductionOptions_CompressExpandReductionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EnvironmentIntensityReductionOptions_CompressExpandReductionType(int32_t value__) noexcept;

  /// @brief Field Keep value: I32(0)
  static ::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType const Keep;

  /// @brief Field RemoveWithStrobeFilter value: I32(1)
  static ::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType const RemoveWithStrobeFilter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12831 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: EnvironmentIntensityReductionOptions/RotateRingsReductionType
struct CORDL_TYPE EnvironmentIntensityReductionOptions_RotateRingsReductionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EnvironmentIntensityReductionOptions_RotateRingsReductionType_Unwrapped
  enum struct __EnvironmentIntensityReductionOptions_RotateRingsReductionType_Unwrapped : int32_t {
    __E_Keep = static_cast<int32_t>(0x0),
    __E_RemoveWithStrobeFilter = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EnvironmentIntensityReductionOptions_RotateRingsReductionType_Unwrapped() const noexcept {
    return static_cast<__EnvironmentIntensityReductionOptions_RotateRingsReductionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentIntensityReductionOptions_RotateRingsReductionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EnvironmentIntensityReductionOptions_RotateRingsReductionType(int32_t value__) noexcept;

  /// @brief Field Keep value: I32(0)
  static ::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType const Keep;

  /// @brief Field RemoveWithStrobeFilter value: I32(1)
  static ::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType const RemoveWithStrobeFilter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12832 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies EnvironmentIntensityReductionOptions::CompressExpandReductionType, EnvironmentIntensityReductionOptions::RotateRingsReductionType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentIntensityReductionOptions
class CORDL_TYPE EnvironmentIntensityReductionOptions : public ::System::Object {
public:
  // Declarations
  using CompressExpandReductionType = ::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType;

  using RotateRingsReductionType = ::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType;

  /// @brief Field _compressExpand, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__compressExpand,
                      put = __cordl_internal_set__compressExpand)) ::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType _compressExpand;

  /// @brief Field _rotateRings, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__rotateRings, put = __cordl_internal_set__rotateRings)) ::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType _rotateRings;

  __declspec(property(get = get_compressExpand)) ::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType compressExpand;

  __declspec(property(get = get_rotateRings)) ::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType rotateRings;

  static inline ::GlobalNamespace::EnvironmentIntensityReductionOptions* New_ctor();

  constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType const& __cordl_internal_get__compressExpand() const;

  constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType& __cordl_internal_get__compressExpand();

  constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType const& __cordl_internal_get__rotateRings() const;

  constexpr ::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType& __cordl_internal_get__rotateRings();

  constexpr void __cordl_internal_set__compressExpand(::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType value);

  constexpr void __cordl_internal_set__rotateRings(::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType value);

  /// @brief Method .ctor, addr 0x26ae444, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_compressExpand, addr 0x26ae434, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType get_compressExpand();

  /// @brief Method get_rotateRings, addr 0x26ae43c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType get_rotateRings();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentIntensityReductionOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentIntensityReductionOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentIntensityReductionOptions(EnvironmentIntensityReductionOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentIntensityReductionOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentIntensityReductionOptions(EnvironmentIntensityReductionOptions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12833 };

  /// @brief Field _compressExpand, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType ____compressExpand;

  /// @brief Field _rotateRings, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType ____rotateRings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentIntensityReductionOptions, ____compressExpand) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentIntensityReductionOptions, ____rotateRings) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentIntensityReductionOptions, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentIntensityReductionOptions_CompressExpandReductionType, "", "EnvironmentIntensityReductionOptions/CompressExpandReductionType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentIntensityReductionOptions_RotateRingsReductionType, "", "EnvironmentIntensityReductionOptions/RotateRingsReductionType");
NEED_NO_BOX(::GlobalNamespace::EnvironmentIntensityReductionOptions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentIntensityReductionOptions*, "", "EnvironmentIntensityReductionOptions");
