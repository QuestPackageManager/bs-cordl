#pragma once
// IWYU pragma private; include "UnityEngine\Gizmos.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Gizmos)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Gizmos;
}
// Write type traits
MARK_REF_T(::UnityEngine::Gizmos*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Gizmos*, "UnityEngine", "Gizmos");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Gizmos
class CORDL_TYPE Gizmos : public ::System::Object {
public:
  // Declarations
  /// @brief Method DrawCube, addr 0x6a83504, size 0x50, virtual false, abstract: false, final false
  static inline void DrawCube(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size);

  /// @brief Method DrawCube_Injected, addr 0x6a83554, size 0x44, virtual false, abstract: false, final false
  static inline void DrawCube_Injected(::by_ref<::UnityEngine::Vector3> center, ::by_ref<::UnityEngine::Vector3> size);

  /// @brief Method DrawIcon, addr 0x6a83598, size 0x14c, virtual false, abstract: false, final false
  static inline void DrawIcon(::UnityEngine::Vector3 center, ::StringW name, bool allowScaling, ::UnityEngine::Color tint);

  /// @brief Method DrawIcon_Injected, addr 0x6a836e4, size 0x5c, virtual false, abstract: false, final false
  static inline void DrawIcon_Injected(::by_ref<::UnityEngine::Vector3> center, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, bool allowScaling, ::by_ref<::UnityEngine::Color> tint);

  /// @brief Method DrawLine, addr 0x6a8333c, size 0x50, virtual false, abstract: false, final false
  static inline void DrawLine(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to);

  /// @brief Method DrawLine_Injected, addr 0x6a8338c, size 0x44, virtual false, abstract: false, final false
  static inline void DrawLine_Injected(::by_ref<::UnityEngine::Vector3> from, ::by_ref<::UnityEngine::Vector3> to);

  /// @brief Method DrawRay, addr 0x6a83838, size 0x10, virtual false, abstract: false, final false
  static inline void DrawRay(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 direction);

  /// @brief Method DrawSphere, addr 0x6a833d0, size 0x54, virtual false, abstract: false, final false
  static inline void DrawSphere(::UnityEngine::Vector3 center, float_t radius);

  /// @brief Method DrawSphere_Injected, addr 0x6a83424, size 0x4c, virtual false, abstract: false, final false
  static inline void DrawSphere_Injected(::by_ref<::UnityEngine::Vector3> center, float_t radius);

  /// @brief Method DrawWireCube, addr 0x6a83470, size 0x50, virtual false, abstract: false, final false
  static inline void DrawWireCube(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size);

  /// @brief Method DrawWireCube_Injected, addr 0x6a834c0, size 0x44, virtual false, abstract: false, final false
  static inline void DrawWireCube_Injected(::by_ref<::UnityEngine::Vector3> center, ::by_ref<::UnityEngine::Vector3> size);

  /// @brief Method set_color, addr 0x6a83740, size 0x44, virtual false, abstract: false, final false
  static inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_color_Injected, addr 0x6a83784, size 0x3c, virtual false, abstract: false, final false
  static inline void set_color_Injected(::by_ref<::UnityEngine::Color> value);

  /// @brief Method set_matrix, addr 0x6a837c0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_matrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method set_matrix_Injected, addr 0x6a837fc, size 0x3c, virtual false, abstract: false, final false
  static inline void set_matrix_Injected(::by_ref<::UnityEngine::Matrix4x4> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gizmos();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Gizmos", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gizmos(Gizmos&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gizmos", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gizmos(Gizmos const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10124 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Gizmos) == 0x10, "Size mismatch!");

} // namespace UnityEngine
