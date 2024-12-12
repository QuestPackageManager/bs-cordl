#pragma once
// IWYU pragma private; include "UnityEngine/TextMesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TextMesh)
namespace UnityEngine {
struct TextAlignment;
}
// Forward declare root types
namespace UnityEngine {
class TextMesh;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextMesh);
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TextMesh
class CORDL_TYPE TextMesh : public ::UnityEngine::Component {
public:
  // Declarations
  __declspec(property(get = get_alignment, put = set_alignment)) ::UnityEngine::TextAlignment alignment;

  __declspec(property(put = set_text)) ::StringW text;

  /// @brief Method get_alignment, addr 0x4951ff8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::TextAlignment get_alignment();

  /// @brief Method set_alignment, addr 0x4952034, size 0x44, virtual false, abstract: false, final false
  inline void set_alignment(::UnityEngine::TextAlignment value);

  /// @brief Method set_text, addr 0x4951fb4, size 0x44, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextMesh();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextMesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextMesh(TextMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextMesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextMesh(TextMesh const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18401 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextMesh, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::TextMesh);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextMesh*, "UnityEngine", "TextMesh");
