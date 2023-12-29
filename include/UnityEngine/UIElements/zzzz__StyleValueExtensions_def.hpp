#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StyleValueExtensions)
namespace UnityEngine::UIElements {
struct StyleLength;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Yoga {
struct YogaValue;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleValueExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleValueExtensions);
// Type: UnityEngine.UIElements::StyleValueExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7387))
// CS Name: ::UnityEngine.UIElements::StyleValueExtensions*
class CORDL_TYPE StyleValueExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method DebugString addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::StringW DebugString(::UnityEngine::UIElements::IStyleValue_1<T>* styleValue);

  /// @brief Method ToYogaValue addr 0x2d07ac8 size 0x14c virtual false final false
  static inline ::UnityEngine::Yoga::YogaValue ToYogaValue(::UnityEngine::UIElements::Length length);

  /// @brief Method ToLength addr 0x2d07c14 size 0x108 virtual false final false
  static inline ::UnityEngine::UIElements::Length ToLength(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method ToRotate addr 0x2d07d2c size 0x17c virtual false final false
  static inline ::UnityEngine::UIElements::Rotate ToRotate(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method ToScale addr 0x2d07ea8 size 0x104 virtual false final false
  static inline ::UnityEngine::UIElements::Scale ToScale(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method ToTranslate addr 0x2d07fc4 size 0x150 virtual false final false
  static inline ::UnityEngine::UIElements::Translate ToTranslate(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method ToLength addr 0x2d08130 size 0x20 virtual false final false
  static inline ::UnityEngine::UIElements::Length ToLength(::UnityEngine::UIElements::StyleLength styleLength);

  /// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void CopyFrom(::System::Collections::Generic::List_1<T>* list, ::System::Collections::Generic::List_1<T>* other);

  // Ctor Parameters [CppParam { name: "", ty: "StyleValueExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleValueExtensions(StyleValueExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleValueExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleValueExtensions(StyleValueExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleValueExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleValueExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleValueExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleValueExtensions*, "UnityEngine.UIElements", "StyleValueExtensions");
