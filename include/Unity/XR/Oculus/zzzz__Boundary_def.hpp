#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/Boundary.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Boundary)
namespace Unity::XR::Oculus {
struct Boundary_BoundaryType;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::XR::Oculus {
struct Boundary_BoundaryType;
}
namespace Unity::XR::Oculus {
class Boundary;
}
// Write type traits
MARK_VAL_T(::Unity::XR::Oculus::Boundary_BoundaryType);
MARK_REF_PTR_T(::Unity::XR::Oculus::Boundary);
// Dependencies
namespace Unity::XR::Oculus {
// Is value type: true
// CS Name: Unity.XR.Oculus.Boundary/BoundaryType
struct CORDL_TYPE Boundary_BoundaryType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Boundary_BoundaryType_Unwrapped
  enum struct __Boundary_BoundaryType_Unwrapped : int32_t {
    __E_OuterBoundary = static_cast<int32_t>(0x0),
    __E_PlayArea = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Boundary_BoundaryType_Unwrapped() const noexcept {
    return static_cast<__Boundary_BoundaryType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Boundary_BoundaryType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Boundary_BoundaryType(int32_t value__) noexcept;

  /// @brief Field OuterBoundary value: I32(0)
  static ::Unity::XR::Oculus::Boundary_BoundaryType const OuterBoundary;

  /// @brief Field PlayArea value: I32(1)
  static ::Unity::XR::Oculus::Boundary_BoundaryType const PlayArea;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17399 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::Oculus::Boundary_BoundaryType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Boundary_BoundaryType, 0x4>, "Size mismatch!");

} // namespace Unity::XR::Oculus
// Dependencies System.Object
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: Unity.XR.Oculus.Boundary
class CORDL_TYPE Boundary : public ::System::Object {
public:
  // Declarations
  using BoundaryType = ::Unity::XR::Oculus::Boundary_BoundaryType;

  /// @brief Method GetBoundaryConfigured, addr 0x48334a4, size 0x4, virtual false, abstract: false, final false
  static inline bool GetBoundaryConfigured();

  /// @brief Method GetBoundaryDimensions, addr 0x48334ac, size 0x4, virtual false, abstract: false, final false
  static inline bool GetBoundaryDimensions(::Unity::XR::Oculus::Boundary_BoundaryType boundaryType, ::ByRef<::UnityEngine::Vector3> dimensions);

  /// @brief Method GetBoundaryVisible, addr 0x48334b4, size 0x4, virtual false, abstract: false, final false
  static inline bool GetBoundaryVisible();

  /// @brief Method SetBoundaryVisible, addr 0x48334bc, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17400 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Boundary, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Boundary_BoundaryType, "Unity.XR.Oculus", "Boundary/BoundaryType");
NEED_NO_BOX(::Unity::XR::Oculus::Boundary);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Boundary*, "Unity.XR.Oculus", "Boundary");
