#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/BackendHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BackendHelpers)
namespace System {
class Type;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct RayTracingBackend;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
class BackendHelpers;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::BackendHelpers*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::BackendHelpers*, "UnityEngine.Rendering.UnifiedRayTracing", "BackendHelpers");
// Dependencies System.Object
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.BackendHelpers
class CORDL_TYPE BackendHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetFileNameOfShader, addr 0x6e07ca8, size 0x114, virtual false, abstract: false, final false
  static inline ::StringW GetFileNameOfShader(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend backend, ::StringW fileName);

  /// @brief Method GetTypeOfShader, addr 0x6e07dbc, size 0x10c, virtual false, abstract: false, final false
  static inline ::System::Type* GetTypeOfShader(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend backend);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BackendHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BackendHelpers", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BackendHelpers(BackendHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BackendHelpers", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BackendHelpers(BackendHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20474 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::BackendHelpers) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
