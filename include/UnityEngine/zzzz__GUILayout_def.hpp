#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Forward declare root types
namespace UnityEngine {
class GUILayout;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUILayout);
// Type: UnityEngine::GUILayout
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14623))
// CS Name: ::UnityEngine::GUILayout*
class CORDL_TYPE GUILayout : public ::System::Object {
public:
  // Declarations
  /// @brief Method Label, addr 0x2d13ef4, size 0xa8, virtual false, abstract: false, final false
  static inline void Label(::StringW text, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method DoLabel, addr 0x2d13f9c, size 0xcc, virtual false, abstract: false, final false
  static inline void DoLabel(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method Width, addr 0x2d08f80, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GUILayoutOption* Width(float_t width);

  /// @brief Method Height, addr 0x2d0901c, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GUILayoutOption* Height(float_t height);

  // Ctor Parameters [CppParam { name: "", ty: "GUILayout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUILayout(GUILayout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUILayout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUILayout(GUILayout const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUILayout();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUILayout, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUILayout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayout*, "UnityEngine", "GUILayout");
