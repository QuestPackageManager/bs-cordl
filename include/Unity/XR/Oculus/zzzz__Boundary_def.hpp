#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Boundary)
namespace Unity::XR::Oculus {
struct __Boundary__BoundaryType;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::XR::Oculus {
struct __Boundary__BoundaryType;
}
namespace Unity::XR::Oculus {
class Boundary;
}
// Write type traits
MARK_VAL_T(::Unity::XR::Oculus::__Boundary__BoundaryType);
MARK_REF_PTR_T(::Unity::XR::Oculus::Boundary);
// Type: ::BoundaryType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: true
// CS Name: ::Boundary::BoundaryType
struct CORDL_TYPE __Boundary__BoundaryType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Boundary__BoundaryType_Unwrapped
  enum struct ____Boundary__BoundaryType_Unwrapped : int32_t {
    __E_OuterBoundary = static_cast<int32_t>(0x0),
    __E_PlayArea = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Boundary__BoundaryType_Unwrapped() const noexcept {
    return static_cast<____Boundary__BoundaryType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Boundary__BoundaryType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Boundary__BoundaryType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field OuterBoundary value: static_cast<int32_t>(0x0)
  static ::Unity::XR::Oculus::__Boundary__BoundaryType const OuterBoundary;

  /// @brief Field PlayArea value: static_cast<int32_t>(0x1)
  static ::Unity::XR::Oculus::__Boundary__BoundaryType const PlayArea;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::__Boundary__BoundaryType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__Boundary__BoundaryType, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::XR::Oculus
// Type: Unity.XR.Oculus::Boundary
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: ::Unity.XR.Oculus::Boundary*
class CORDL_TYPE Boundary : public ::System::Object {
public:
  // Declarations
  using BoundaryType = ::Unity::XR::Oculus::__Boundary__BoundaryType;

  /// @brief Method GetBoundaryConfigured, addr 0x2d5d280, size 0x4, virtual false, abstract: false, final false
  static inline bool GetBoundaryConfigured();

  /// @brief Method GetBoundaryDimensions, addr 0x2d5d288, size 0x4, virtual false, abstract: false, final false
  static inline bool GetBoundaryDimensions(::Unity::XR::Oculus::__Boundary__BoundaryType boundaryType, ByRef<::UnityEngine::Vector3> dimensions);

  /// @brief Method GetBoundaryVisible, addr 0x2d5d290, size 0x4, virtual false, abstract: false, final false
  static inline bool GetBoundaryVisible();

  /// @brief Method SetBoundaryVisible, addr 0x2d5d298, size 0x8, virtual false, abstract: false, final false
  static inline void SetBoundaryVisible(bool boundaryVisible);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Boundary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Boundary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Boundary(Boundary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Boundary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Boundary(Boundary const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Boundary, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::__Boundary__BoundaryType, "Unity.XR.Oculus", "Boundary/BoundaryType");
NEED_NO_BOX(::Unity::XR::Oculus::Boundary);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Boundary*, "Unity.XR.Oculus", "Boundary");
