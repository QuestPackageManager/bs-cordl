#pragma once
// IWYU pragma private; include "UnityEngine/GeometryUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GeometryUtility)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace UnityEngine {
class GeometryUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::GeometryUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GeometryUtility*, "UnityEngine", "GeometryUtility");
// [NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
// [StaticAccessor("GeometryUtilityScripting", (UnityEngine.Bindings.StaticAccessorType)2)]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GeometryUtility
class CORDL_TYPE GeometryUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method CalculateFrustumPlanes, addr 0x6ed2bf0, size 0xe8, virtual false, abstract: false, final false
  static inline void CalculateFrustumPlanes(::UnityEngine::Camera* camera, ::ArrayW<::UnityEngine::Plane> planes);

  /// @brief Method CalculateFrustumPlanes, addr 0x6ed2ec4, size 0x80, virtual false, abstract: false, final false
  static inline void CalculateFrustumPlanes(::UnityEngine::Matrix4x4 worldToProjectionMatrix, ::ArrayW<::UnityEngine::Plane> planes);

  /// @brief Method CalculateFrustumPlanes, addr 0x6ed2cd8, size 0x144, virtual false, abstract: false, final false
  static inline void CalculateFrustumPlanes(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4 const> worldToProjectionMatrix, ::System::Span_1<::UnityEngine::Plane> planes);

  /// [NativeName("ExtractPlanes")]
  /// @brief Method Internal_ExtractPlanes, addr 0x6ed2e1c, size 0xa8, virtual false, abstract: false, final false
  static inline void Internal_ExtractPlanes(::System::Span_1<::UnityEngine::Plane> planes, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4 const> worldToProjectionMatrix);

  /// @brief Method Internal_ExtractPlanes_Injected, addr 0x6ed30e8, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_ExtractPlanes_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> planes, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4 const> worldToProjectionMatrix);

  /// [NativeName("TestPlanesAABB")]
  /// @brief Method Internal_TestPlanesAABB, addr 0x6ed2f44, size 0xac, virtual false, abstract: false, final false
  static inline bool Internal_TestPlanesAABB(::System::ReadOnlySpan_1<::UnityEngine::Plane> planes, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Bounds const> bounds);

  /// @brief Method Internal_TestPlanesAABB_Injected, addr 0x6ed2ff0, size 0x44, virtual false, abstract: false, final false
  static inline bool Internal_TestPlanesAABB_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> planes, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Bounds const> bounds);

  /// @brief Method TestPlanesAABB, addr 0x6ed3034, size 0xb4, virtual false, abstract: false, final false
  static inline bool TestPlanesAABB(::ArrayW<::UnityEngine::Plane> planes, ::UnityEngine::Bounds bounds);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GeometryUtility", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeometryUtility(GeometryUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeometryUtility", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeometryUtility(GeometryUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9687 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GeometryUtility) == 0x10, "Size mismatch!");

} // namespace UnityEngine
