#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IDebugDisplaySettingsQuery.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDebugDisplaySettingsQuery)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsQuery;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IDebugDisplaySettingsQuery);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IDebugDisplaySettingsQuery
class CORDL_TYPE IDebugDisplaySettingsQuery {
public:
  // Declarations
  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  __declspec(property(get = get_IsLightingActive)) bool IsLightingActive;

  __declspec(property(get = get_IsPostProcessingAllowed)) bool IsPostProcessingAllowed;

  /// @brief Method TryGetScreenClearColor, addr 0x65b66d4, size 0x8, virtual true, abstract: false, final false
  inline bool TryGetScreenClearColor(::ByRef<::UnityEngine::Color> color);

  /// @brief Method get_AreAnySettingsActive, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_AreAnySettingsActive();

  /// @brief Method get_IsLightingActive, addr 0x65b66cc, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsLightingActive();

  /// @brief Method get_IsPostProcessingAllowed, addr 0x65b66c4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPostProcessingAllowed();

  // Ctor Parameters [CppParam { name: "", ty: "IDebugDisplaySettingsQuery", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDebugDisplaySettingsQuery(IDebugDisplaySettingsQuery const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12021 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IDebugDisplaySettingsQuery);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IDebugDisplaySettingsQuery*, "UnityEngine.Rendering", "IDebugDisplaySettingsQuery");
