#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Documentation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__DocumentationInfo_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Documentation)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class Documentation;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::Documentation*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Documentation*, "UnityEngine.Rendering.Universal", "Documentation");
// Dependencies UnityEngine.Rendering.DocumentationInfo
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Documentation
class CORDL_TYPE Documentation : public ::UnityEngine::Rendering::DocumentationInfo {
public:
  // Declarations
  /// @brief Method GetPageLink, addr 0x686f320, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW GetPageLink(::StringW pageName);

  static inline ::UnityEngine::Rendering::Universal::Documentation* New_ctor();

  /// @brief Method .ctor, addr 0x686f370, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Documentation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Documentation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Documentation(Documentation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Documentation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Documentation(Documentation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12723 };

  /// @brief Field packageName offset 0xffffffff size 0x8
  static constexpr ::ConstString packageName{ u"com.unity.render-pipelines.universal" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::Documentation) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
