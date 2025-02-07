#pragma once
// IWYU pragma private; include "UnityEngine/GUIWordWrapSizer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GUILayoutEntry_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GUIWordWrapSizer)
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
class GUIWordWrapSizer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUIWordWrapSizer);
// Dependencies UnityEngine.GUILayoutEntry
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUIWordWrapSizer
class CORDL_TYPE GUIWordWrapSizer : public ::UnityEngine::GUILayoutEntry {
public:
  // Declarations
  /// @brief Field m_Content, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Content, put = __cordl_internal_set_m_Content)) ::UnityEngine::GUIContent* m_Content;

  /// @brief Field m_ForcedMaxHeight, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ForcedMaxHeight, put = __cordl_internal_set_m_ForcedMaxHeight)) float_t m_ForcedMaxHeight;

  /// @brief Field m_ForcedMinHeight, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ForcedMinHeight, put = __cordl_internal_set_m_ForcedMinHeight)) float_t m_ForcedMinHeight;

  /// @brief Method CalcHeight, addr 0x48e632c, size 0xa0, virtual true, abstract: false, final false
  inline void CalcHeight();

  /// @brief Method CalcWidth, addr 0x48e62c4, size 0x68, virtual true, abstract: false, final false
  inline void CalcWidth();

  static inline ::UnityEngine::GUIWordWrapSizer* New_ctor(::UnityEngine::GUIStyle* style, ::UnityEngine::GUIContent* content,
                                                          ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  constexpr ::UnityEngine::GUIContent* const& __cordl_internal_get_m_Content() const;

  constexpr ::UnityEngine::GUIContent*& __cordl_internal_get_m_Content();

  constexpr float_t const& __cordl_internal_get_m_ForcedMaxHeight() const;

  constexpr float_t& __cordl_internal_get_m_ForcedMaxHeight();

  constexpr float_t const& __cordl_internal_get_m_ForcedMinHeight() const;

  constexpr float_t& __cordl_internal_get_m_ForcedMinHeight();

  constexpr void __cordl_internal_set_m_Content(::UnityEngine::GUIContent* value);

  constexpr void __cordl_internal_set_m_ForcedMaxHeight(float_t value);

  constexpr void __cordl_internal_set_m_ForcedMinHeight(float_t value);

  /// @brief Method .ctor, addr 0x48e0fe0, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::GUIStyle* style, ::UnityEngine::GUIContent* content, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUIWordWrapSizer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GUIWordWrapSizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUIWordWrapSizer(GUIWordWrapSizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUIWordWrapSizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUIWordWrapSizer(GUIWordWrapSizer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16655 };

  /// @brief Field m_Content, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::GUIContent* ___m_Content;

  /// @brief Field m_ForcedMinHeight, offset: 0x50, size: 0x4, def value: None
  float_t ___m_ForcedMinHeight;

  /// @brief Field m_ForcedMaxHeight, offset: 0x54, size: 0x4, def value: None
  float_t ___m_ForcedMaxHeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GUIWordWrapSizer, ___m_Content) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIWordWrapSizer, ___m_ForcedMinHeight) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIWordWrapSizer, ___m_ForcedMaxHeight) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::GUIWordWrapSizer, 0x58>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUIWordWrapSizer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUIWordWrapSizer*, "UnityEngine", "GUIWordWrapSizer");
