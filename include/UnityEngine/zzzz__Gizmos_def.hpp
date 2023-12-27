#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Gizmos)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine {
class Gizmos;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Gizmos);
// Type: UnityEngine::Gizmos
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10267))
// CS Name: ::UnityEngine::Gizmos*
class CORDL_TYPE Gizmos : public ::System::Object {
public:
  // Declarations
  /// @brief Method DrawRay addr 0x2cde870 size 0x10 virtual false final false
  static inline void DrawRay(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 direction);

  /// @brief Method DrawLine addr 0x2cde880 size 0x50 virtual false final false
  static inline void DrawLine(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to);

  /// @brief Method DrawWireSphere addr 0x2cde914 size 0x54 virtual false final false
  static inline void DrawWireSphere(::UnityEngine::Vector3 center, float_t radius);

  /// @brief Method DrawSphere addr 0x2cde9b4 size 0x54 virtual false final false
  static inline void DrawSphere(::UnityEngine::Vector3 center, float_t radius);

  /// @brief Method DrawWireCube addr 0x2cdea54 size 0x50 virtual false final false
  static inline void DrawWireCube(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size);

  /// @brief Method DrawCube addr 0x2cdeae8 size 0x50 virtual false final false
  static inline void DrawCube(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size);

  /// @brief Method set_color addr 0x2cdeb7c size 0x44 virtual false final false
  static inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_matrix addr 0x2cdebfc size 0x3c virtual false final false
  static inline void set_matrix(::UnityEngine::Matrix4x4 value);

  /// @brief Method DrawLine_Injected addr 0x2cde8d0 size 0x44 virtual false final false
  static inline void DrawLine_Injected(ByRef<::UnityEngine::Vector3> from, ByRef<::UnityEngine::Vector3> to);

  /// @brief Method DrawWireSphere_Injected addr 0x2cde968 size 0x4c virtual false final false
  static inline void DrawWireSphere_Injected(ByRef<::UnityEngine::Vector3> center, float_t radius);

  /// @brief Method DrawSphere_Injected addr 0x2cdea08 size 0x4c virtual false final false
  static inline void DrawSphere_Injected(ByRef<::UnityEngine::Vector3> center, float_t radius);

  /// @brief Method DrawWireCube_Injected addr 0x2cdeaa4 size 0x44 virtual false final false
  static inline void DrawWireCube_Injected(ByRef<::UnityEngine::Vector3> center, ByRef<::UnityEngine::Vector3> size);

  /// @brief Method DrawCube_Injected addr 0x2cdeb38 size 0x44 virtual false final false
  static inline void DrawCube_Injected(ByRef<::UnityEngine::Vector3> center, ByRef<::UnityEngine::Vector3> size);

  /// @brief Method set_color_Injected addr 0x2cdebc0 size 0x3c virtual false final false
  static inline void set_color_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method set_matrix_Injected addr 0x2cdec38 size 0x3c virtual false final false
  static inline void set_matrix_Injected(ByRef<::UnityEngine::Matrix4x4> value);

  // Ctor Parameters [CppParam { name: "", ty: "Gizmos", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gizmos(Gizmos&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gizmos", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gizmos(Gizmos const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gizmos();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Gizmos, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Gizmos);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Gizmos*, "UnityEngine", "Gizmos");
