#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentIntensityReductionOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnvironmentIntensityReductionOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentIntensityReductionOptions)
namespace GlobalNamespace {
struct __EnvironmentIntensityReductionOptions__CompressExpandReductionType;
}
namespace GlobalNamespace {
struct __EnvironmentIntensityReductionOptions__RotateRingsReductionType;
}
// Forward declare root types
namespace GlobalNamespace {
struct __EnvironmentIntensityReductionOptions__CompressExpandReductionType;
}
namespace GlobalNamespace {
struct __EnvironmentIntensityReductionOptions__RotateRingsReductionType;
}
namespace GlobalNamespace {
class EnvironmentIntensityReductionOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType);
MARK_VAL_T(::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType);
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentIntensityReductionOptions);
// Type: ::CompressExpandReductionType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::EnvironmentIntensityReductionOptions::CompressExpandReductionType
struct CORDL_TYPE __EnvironmentIntensityReductionOptions__CompressExpandReductionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____EnvironmentIntensityReductionOptions__CompressExpandReductionType_Unwrapped
  enum struct ____EnvironmentIntensityReductionOptions__CompressExpandReductionType_Unwrapped : int32_t {
    __E_Keep = static_cast<int32_t>(0x0),
    __E_RemoveWithStrobeFilter = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EnvironmentIntensityReductionOptions__CompressExpandReductionType_Unwrapped() const noexcept {
    return static_cast<____EnvironmentIntensityReductionOptions__CompressExpandReductionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentIntensityReductionOptions__CompressExpandReductionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EnvironmentIntensityReductionOptions__CompressExpandReductionType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Keep value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType const Keep;

  /// @brief Field RemoveWithStrobeFilter value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType const RemoveWithStrobeFilter;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RotateRingsReductionType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::EnvironmentIntensityReductionOptions::RotateRingsReductionType
struct CORDL_TYPE __EnvironmentIntensityReductionOptions__RotateRingsReductionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____EnvironmentIntensityReductionOptions__RotateRingsReductionType_Unwrapped
  enum struct ____EnvironmentIntensityReductionOptions__RotateRingsReductionType_Unwrapped : int32_t {
    __E_Keep = static_cast<int32_t>(0x0),
    __E_RemoveWithStrobeFilter = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EnvironmentIntensityReductionOptions__RotateRingsReductionType_Unwrapped() const noexcept {
    return static_cast<____EnvironmentIntensityReductionOptions__RotateRingsReductionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentIntensityReductionOptions__RotateRingsReductionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EnvironmentIntensityReductionOptions__RotateRingsReductionType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Keep value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType const Keep;

  /// @brief Field RemoveWithStrobeFilter value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType const RemoveWithStrobeFilter;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EnvironmentIntensityReductionOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnvironmentIntensityReductionOptions*
class CORDL_TYPE EnvironmentIntensityReductionOptions : public ::System::Object {
public:
  // Declarations
  using CompressExpandReductionType = ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType;

  using RotateRingsReductionType = ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType;

  /// @brief Field _compressExpand, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__compressExpand,
                      put = __cordl_internal_set__compressExpand))::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType _compressExpand;

  /// @brief Field _rotateRings, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__rotateRings,
                      put = __cordl_internal_set__rotateRings))::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType _rotateRings;

  __declspec(property(get = get_compressExpand))::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType compressExpand;

  __declspec(property(get = get_rotateRings))::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType rotateRings;

  static inline ::GlobalNamespace::EnvironmentIntensityReductionOptions* New_ctor();

  constexpr ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType const& __cordl_internal_get__compressExpand() const;

  constexpr ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType& __cordl_internal_get__compressExpand();

  constexpr ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType const& __cordl_internal_get__rotateRings() const;

  constexpr ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType& __cordl_internal_get__rotateRings();

  constexpr void __cordl_internal_set__compressExpand(::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType value);

  constexpr void __cordl_internal_set__rotateRings(::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType value);

  /// @brief Method .ctor, addr 0x14ac6bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_compressExpand, addr 0x14ac6ac, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType get_compressExpand();

  /// @brief Method get_rotateRings, addr 0x14ac6b4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType get_rotateRings();

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

  /// @brief Field _compressExpand, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType ____compressExpand;

  /// @brief Field _rotateRings, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType ____rotateRings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentIntensityReductionOptions, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentIntensityReductionOptions, ____compressExpand) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentIntensityReductionOptions, ____rotateRings) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnvironmentIntensityReductionOptions__CompressExpandReductionType, "", "EnvironmentIntensityReductionOptions/CompressExpandReductionType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnvironmentIntensityReductionOptions__RotateRingsReductionType, "", "EnvironmentIntensityReductionOptions/RotateRingsReductionType");
NEED_NO_BOX(::GlobalNamespace::EnvironmentIntensityReductionOptions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentIntensityReductionOptions*, "", "EnvironmentIntensityReductionOptions");
