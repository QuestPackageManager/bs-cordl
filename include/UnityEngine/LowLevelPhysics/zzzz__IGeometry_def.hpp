#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics/IGeometry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGeometry)
namespace UnityEngine::LowLevelPhysics {
struct GeometryType;
}
// Forward declare root types
namespace UnityEngine::LowLevelPhysics {
class IGeometry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LowLevelPhysics::IGeometry);
// Dependencies
namespace UnityEngine::LowLevelPhysics {
// Is value type: false
// CS Name: UnityEngine.LowLevelPhysics.IGeometry
class CORDL_TYPE IGeometry {
public:
  // Declarations
  __declspec(property(get = get_GeometryType)) ::UnityEngine::LowLevelPhysics::GeometryType GeometryType;

  /// @brief Method get_GeometryType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics::GeometryType get_GeometryType();

  // Ctor Parameters [CppParam { name: "", ty: "IGeometry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGeometry(IGeometry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18659 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::LowLevelPhysics
NEED_NO_BOX(::UnityEngine::LowLevelPhysics::IGeometry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowLevelPhysics::IGeometry*, "UnityEngine.LowLevelPhysics", "IGeometry");
