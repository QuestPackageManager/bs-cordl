#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteCutDirectionExtensions)
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteCutDirectionExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteCutDirectionExtensions);
// Type: ::NoteCutDirectionExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoteCutDirectionExtensions*
class CORDL_TYPE NoteCutDirectionExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Direction, addr 0xe70494, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Direction(::GlobalNamespace::NoteCutDirection cutDirection);

  /// @brief Method IsMainDirection, addr 0xe70518, size 0xc, virtual false, abstract: false, final false
  static inline bool IsMainDirection(::GlobalNamespace::NoteCutDirection cutDirection);

  /// @brief Method IsOnSamePlane, addr 0xe705d8, size 0xd0, virtual false, abstract: false, final false
  static inline bool IsOnSamePlane(::GlobalNamespace::NoteCutDirection noteCutDirection1, ::GlobalNamespace::NoteCutDirection noteCutDirection2);

  /// @brief Method MainNoteCutDirectionFromCutDirAngle, addr 0xe70524, size 0x80, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteCutDirection MainNoteCutDirectionFromCutDirAngle(float_t angle);

  /// @brief Method Mirrored, addr 0xe705a4, size 0x1c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteCutDirection Mirrored(::GlobalNamespace::NoteCutDirection cutDirection);

  /// @brief Method NoteCutDirectionFromDirection, addr 0xe706a8, size 0x218, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteCutDirection NoteCutDirectionFromDirection(::UnityEngine::Vector3 direction);

  /// @brief Method Opposite, addr 0xe705c0, size 0x18, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteCutDirection Opposite(::GlobalNamespace::NoteCutDirection cutDirection);

  /// @brief Method Rotation, addr 0xe704e0, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Rotation(::GlobalNamespace::NoteCutDirection cutDirection, float_t offset);

  /// @brief Method RotationAngle, addr 0xe704c0, size 0x20, virtual false, abstract: false, final false
  static inline float_t RotationAngle(::GlobalNamespace::NoteCutDirection cutDirection);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteCutDirectionExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteCutDirectionExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteCutDirectionExtensions(NoteCutDirectionExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteCutDirectionExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteCutDirectionExtensions(NoteCutDirectionExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteCutDirectionExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteCutDirectionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutDirectionExtensions*, "", "NoteCutDirectionExtensions");
