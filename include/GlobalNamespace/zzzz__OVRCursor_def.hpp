#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRCursor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRCursor)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRCursor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRCursor);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRCursor
class CORDL_TYPE OVRCursor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::OVRCursor* New_ctor();

  /// @brief Method SetCursorRay, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetCursorRay(::UnityEngine::Transform* ray);

  /// @brief Method SetCursorStartDest, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetCursorStartDest(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 dest, ::UnityEngine::Vector3 normal);

  /// @brief Method .ctor, addr 0x5d49cd8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRCursor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRCursor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRCursor(OVRCursor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRCursor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRCursor(OVRCursor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7856 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRCursor, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRCursor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCursor*, "", "OVRCursor");
