#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ShapeFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ShapeFactory)
namespace System {
class Type;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine::ProBuilder {
struct PivotLocation;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ShapeFactory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ShapeFactory);
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.ShapeFactory
class CORDL_TYPE ShapeFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> Instantiate(::UnityEngine::ProBuilder::PivotLocation pivotType);

  /// @brief Method Instantiate, addr 0x4734d54, size 0x250, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> Instantiate(::UnityEngine::ProBuilder::Shapes::Shape* shape, ::UnityEngine::ProBuilder::PivotLocation pivotType);

  /// @brief Method Instantiate, addr 0x4734ac8, size 0x28c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> Instantiate(::System::Type* shapeType, ::UnityEngine::ProBuilder::PivotLocation pivotType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShapeFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShapeFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShapeFactory(ShapeFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShapeFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShapeFactory(ShapeFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14314 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ShapeFactory, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::ShapeFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ShapeFactory*, "UnityEngine.ProBuilder", "ShapeFactory");
