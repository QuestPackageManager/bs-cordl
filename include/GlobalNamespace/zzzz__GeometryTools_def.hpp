#pragma once
// IWYU pragma private; include "GlobalNamespace/GeometryTools.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GeometryTools)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GeometryTools;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GeometryTools);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GeometryTools
class CORDL_TYPE GeometryTools : public ::System::Object {
public:
  // Declarations
  static inline ::GlobalNamespace::GeometryTools* New_ctor();

  /// @brief Method ThreePointsToBox, addr 0x22b4970, size 0x498, virtual false, abstract: false, final false
  static inline bool ThreePointsToBox(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::ByRef<::UnityEngine::Vector3> center, ::ByRef<::UnityEngine::Vector3> halfSize,
                                      ::ByRef<::UnityEngine::Quaternion> orientation);

  /// @brief Method .ctor, addr 0x22b4e08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryTools();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GeometryTools", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeometryTools(GeometryTools&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeometryTools", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeometryTools(GeometryTools const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17135 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GeometryTools, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GeometryTools);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GeometryTools*, "", "GeometryTools");
