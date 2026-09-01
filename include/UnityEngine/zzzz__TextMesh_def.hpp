#pragma once
// IWYU pragma private; include "UnityEngine\TextMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TextMesh)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct TextAlignment;
}
// Forward declare root types
namespace UnityEngine {
class TextMesh;
}
// Write type traits
MARK_REF_T(::UnityEngine::TextMesh*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextMesh*, "UnityEngine", "TextMesh");
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TextMesh
class CORDL_TYPE TextMesh : public ::UnityEngine::Component {
public:
  // Declarations
  __declspec(property(get = get_alignment, put = set_alignment)) ::UnityEngine::TextAlignment alignment;

  __declspec(property(put = set_text)) ::StringW text;

  static inline ::UnityEngine::TextMesh* New_ctor();

  /// @brief Method .ctor, addr 0x6c16d3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_alignment, addr 0x6c16bac, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::TextAlignment get_alignment();

  /// @brief Method get_alignment_Injected, addr 0x6c16c2c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextAlignment get_alignment_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_alignment, addr 0x6c16c68, size 0x90, virtual false, abstract: false, final false
  inline void set_alignment(::UnityEngine::TextAlignment value);

  /// @brief Method set_alignment_Injected, addr 0x6c16cf8, size 0x44, virtual false, abstract: false, final false
  static inline void set_alignment_Injected(::System::IntPtr _unity_self, ::UnityEngine::TextAlignment value);

  /// @brief Method set_text, addr 0x6c16a00, size 0x168, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method set_text_Injected, addr 0x6c16b68, size 0x44, virtual false, abstract: false, final false
  static inline void set_text_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22423 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TextMesh) == 0x18, "Size mismatch!");

} // namespace UnityEngine
