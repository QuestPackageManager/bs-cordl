#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/AccelerationStructureOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BuildFlags_def.hpp"
CORDL_MODULE_EXPORT(AccelerationStructureOptions)
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
class AccelerationStructureOptions;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions*, "UnityEngine.Rendering.UnifiedRayTracing", "AccelerationStructureOptions");
// Dependencies System.Object, UnityEngine.Rendering.UnifiedRayTracing.BuildFlags
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.AccelerationStructureOptions
class CORDL_TYPE AccelerationStructureOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field buildFlags, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_buildFlags, put = __cordl_internal_set_buildFlags)) ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags buildFlags;

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions* New_ctor();

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags const& __cordl_internal_get_buildFlags() const;

  constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags& __cordl_internal_get_buildFlags();

  constexpr void __cordl_internal_set_buildFlags(::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags value);

  /// @brief Method .ctor, addr 0x6e0d590, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AccelerationStructureOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AccelerationStructureOptions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AccelerationStructureOptions(AccelerationStructureOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AccelerationStructureOptions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AccelerationStructureOptions(AccelerationStructureOptions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20499 };

  /// @brief Field buildFlags, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags ___buildFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions, ___buildFlags) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
