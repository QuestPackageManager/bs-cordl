#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Shape)
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::Shape);
// Type: UnityEngine.ProBuilder.Shapes::Shape
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.Shapes::Shape*
class CORDL_TYPE Shape : public ::System::Object {
public:
  // Declarations
  /// @brief Method CopyShape, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape);

  static inline ::UnityEngine::ProBuilder::Shapes::Shape* New_ctor();

  /// @brief Method RebuildMesh, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);

  /// @brief Method UpdateBounds, addr 0x2cd506c, size 0x4c, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation, ::UnityEngine::Bounds bounds);

  /// @brief Method .ctor, addr 0x2ccef5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Shape();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Shape", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Shape(Shape&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Shape", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Shape(Shape const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Shape, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Shape);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Shape*, "UnityEngine.ProBuilder.Shapes", "Shape");
