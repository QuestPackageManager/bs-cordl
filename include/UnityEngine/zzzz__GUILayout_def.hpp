#pragma once
// IWYU pragma private; include "UnityEngine/GUILayout.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GUILayout)
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GUILayoutOption;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine {
class GUILayout;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUILayout);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUILayout
class CORDL_TYPE GUILayout : public ::System::Object {
public:
  // Declarations
  /// @brief Method BeginArea, addr 0x6979d7c, size 0xc4, virtual false, abstract: false, final false
  static inline void BeginArea(::UnityEngine::Rect screenRect);

  /// @brief Method BeginArea, addr 0x6979e40, size 0x1d0, virtual false, abstract: false, final false
  static inline void BeginArea(::UnityEngine::Rect screenRect, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style);

  /// @brief Method BeginHorizontal, addr 0x6979358, size 0x1a4, virtual false, abstract: false, final false
  static inline void BeginHorizontal(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method BeginHorizontal, addr 0x69792bc, size 0x9c, virtual false, abstract: false, final false
  static inline void BeginHorizontal(::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method BeginVertical, addr 0x69798d8, size 0x1a4, virtual false, abstract: false, final false
  static inline void BeginVertical(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method BeginVertical, addr 0x697983c, size 0x9c, virtual false, abstract: false, final false
  static inline void BeginVertical(::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method DoLabel, addr 0x6978df4, size 0xd4, virtual false, abstract: false, final false
  static inline void DoLabel(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method EndArea, addr 0x697a318, size 0x100, virtual false, abstract: false, final false
  static inline void EndArea();

  /// @brief Method EndVertical, addr 0x6979a7c, size 0x50, virtual false, abstract: false, final false
  static inline void EndVertical();

  /// @brief Method Height, addr 0x6977e78, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::GUILayoutOption* Height(float_t height);

  /// @brief Method Label, addr 0x6978d44, size 0xb0, virtual false, abstract: false, final false
  static inline void Label(::StringW text, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method Space, addr 0x6978f38, size 0x224, virtual false, abstract: false, final false
  static inline void Space(float_t pixels);

  /// @brief Method Width, addr 0x6977df8, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::GUILayoutOption* Width(float_t width);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUILayout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GUILayout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUILayout(GUILayout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUILayout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUILayout(GUILayout const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19595 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUILayout, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUILayout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayout*, "UnityEngine", "GUILayout");
