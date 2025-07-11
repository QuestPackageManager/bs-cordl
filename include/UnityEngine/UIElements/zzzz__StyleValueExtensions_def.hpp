#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleValueExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StyleValueExtensions)
namespace System::Collections::Generic {
template <typename T> class List_1;
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
namespace UnityEngine::Yoga {
struct YogaValue;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleValueExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleValueExtensions);
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

  /// @brief Method ToLength, addr 0x4a87164, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length ToLength(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method ToLength, addr 0x4a87600, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length ToLength(::UnityEngine::UIElements::StyleLength styleLength);

  /// @brief Method ToRotate, addr 0x4a87264, size 0x158, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Rotate ToRotate(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method ToScale, addr 0x4a873bc, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Scale ToScale(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method ToTranslate, addr 0x4a874c0, size 0x140, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Translate ToTranslate(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method ToYogaValue, addr 0x4a87018, size 0x14c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Yoga::YogaValue ToYogaValue(::UnityEngine::UIElements::Length length);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6113 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleValueExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleValueExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleValueExtensions*, "UnityEngine.UIElements", "StyleValueExtensions");
