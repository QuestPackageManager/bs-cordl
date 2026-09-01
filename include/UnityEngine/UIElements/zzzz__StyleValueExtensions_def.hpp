#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\StyleValueExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StyleValueExtensions)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutValue;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine::UIElements {
struct StyleLength;
}
namespace UnityEngine::UIElements {
struct Translate;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleValueExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::StyleValueExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleValueExtensions*, "UnityEngine.UIElements", "StyleValueExtensions");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleValueExtensions
class CORDL_TYPE StyleValueExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CopyFrom(::System::Collections::Generic::List_1<T>* list, ::System::Collections::Generic::List_1<T>* other);

  /// @brief Method DebugString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::StringW DebugString(::UnityEngine::UIElements::IStyleValue_1<T>* styleValue);

  /// @brief Method ToLayoutValue, addr 0x6c94cf0, size 0x164, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Layout::LayoutValue ToLayoutValue(::UnityEngine::UIElements::Length length);

  /// @brief Method ToLength, addr 0x6c94e54, size 0x110, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length ToLength(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method ToLength, addr 0x6c9531c, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length ToLength(::UnityEngine::UIElements::StyleLength styleLength);

  /// @brief Method ToRotate, addr 0x6c94f64, size 0x168, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Rotate ToRotate(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method ToScale, addr 0x6c950cc, size 0x10c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Scale ToScale(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method ToTranslate, addr 0x6c951d8, size 0x144, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Translate ToTranslate(::UnityEngine::UIElements::StyleKeyword keyword);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleValueExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleValueExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleValueExtensions(StyleValueExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleValueExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleValueExtensions(StyleValueExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4984 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::StyleValueExtensions) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
