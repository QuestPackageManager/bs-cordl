#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LineTriangleIntersection)
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class LineTriangleIntersection;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LineTriangleIntersection);
// Type: ::LineTriangleIntersection
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13874))
// CS Name: ::LineTriangleIntersection*
class CORDL_TYPE LineTriangleIntersection : public ::System::Object {
public:
  // Declarations
  /// @brief Method Intersects addr 0x1f9755c size 0x8 virtual false final false
  static inline bool Intersects(::UnityEngine::Ray ray, ::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2);

  static inline ::GlobalNamespace::LineTriangleIntersection* New_ctor();

  /// @brief Method .ctor addr 0x1f97564 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LineTriangleIntersection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LineTriangleIntersection(LineTriangleIntersection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LineTriangleIntersection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LineTriangleIntersection(LineTriangleIntersection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LineTriangleIntersection();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LineTriangleIntersection, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LineTriangleIntersection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LineTriangleIntersection*, "", "LineTriangleIntersection");
