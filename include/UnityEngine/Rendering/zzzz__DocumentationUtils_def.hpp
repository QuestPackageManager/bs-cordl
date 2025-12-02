#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DocumentationUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DocumentationUtils)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DocumentationUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DocumentationUtils);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DocumentationUtils
class CORDL_TYPE DocumentationUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetHelpURL, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEnum> static inline ::StringW GetHelpURL(TEnum mask);

  /// @brief Method TryGetHelpURL, addr 0x6569578, size 0x90, virtual false, abstract: false, final false
  static inline bool TryGetHelpURL(::System::Type* type, ::ByRef<::StringW> url);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DocumentationUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DocumentationUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DocumentationUtils(DocumentationUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DocumentationUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DocumentationUtils(DocumentationUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12042 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DocumentationUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DocumentationUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DocumentationUtils*, "UnityEngine.Rendering", "DocumentationUtils");
