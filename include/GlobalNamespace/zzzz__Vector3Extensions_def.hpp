#pragma once
// IWYU pragma private; include "GlobalNamespace/Vector3Extensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector3Extensions)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class Vector3Extensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Vector3Extensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Vector3Extensions
class CORDL_TYPE Vector3Extensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Abs, addr 0x22b6578, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Abs(::ByRef<::UnityEngine::Vector3> vector);

  /// @brief Method InverseLerp, addr 0x22b64b4, size 0x50, virtual false, abstract: false, final false
  static inline float_t InverseLerp(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 value);

  /// @brief Method MirrorEulerAnglesOnYZPlane, addr 0x22b656c, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 MirrorEulerAnglesOnYZPlane(::UnityEngine::Vector3 vector);

  /// @brief Method MirrorOnYZPlane, addr 0x22b6564, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 MirrorOnYZPlane(::UnityEngine::Vector3 vector);

  /// @brief Method RotatedAroundPivot, addr 0x22b6504, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 RotatedAroundPivot(::UnityEngine::Vector3 vector, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 pivot);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3Extensions(Vector3Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3Extensions(Vector3Extensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17162 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Vector3Extensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Vector3Extensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Vector3Extensions*, "", "Vector3Extensions");
