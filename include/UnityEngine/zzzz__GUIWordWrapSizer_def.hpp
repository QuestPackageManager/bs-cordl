#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GUILayoutEntry_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GUIWordWrapSizer)
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GUILayoutOption;
}
// Forward declare root types
namespace UnityEngine {
class GUIWordWrapSizer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUIWordWrapSizer);
// Type: UnityEngine::GUIWordWrapSizer
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14809))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14810))
// CS Name: ::UnityEngine::GUIWordWrapSizer*
class CORDL_TYPE GUIWordWrapSizer : public ::UnityEngine::GUILayoutEntry {
public:
  // Declarations
  /// @brief Field m_Content, offset 0x48, size 0x8
  __declspec(property(get = __get_m_Content, put = __set_m_Content))::UnityEngine::GUIContent* m_Content;

  /// @brief Field m_ForcedMinHeight, offset 0x50, size 0x4
  __declspec(property(get = __get_m_ForcedMinHeight, put = __set_m_ForcedMinHeight)) float_t m_ForcedMinHeight;

  /// @brief Field m_ForcedMaxHeight, offset 0x54, size 0x4
  __declspec(property(get = __get_m_ForcedMaxHeight, put = __set_m_ForcedMaxHeight)) float_t m_ForcedMaxHeight;

  constexpr ::UnityEngine::GUIContent*& __get_m_Content();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIContent*> const& __get_m_Content() const;

  constexpr void __set_m_Content(::UnityEngine::GUIContent* value);

  constexpr float_t& __get_m_ForcedMinHeight();

  constexpr float_t const& __get_m_ForcedMinHeight() const;

  constexpr void __set_m_ForcedMinHeight(float_t value);

  constexpr float_t& __get_m_ForcedMaxHeight();

  constexpr float_t const& __get_m_ForcedMaxHeight() const;

  constexpr void __set_m_ForcedMaxHeight(float_t value);

  static inline ::UnityEngine::GUIWordWrapSizer* New_ctor(::UnityEngine::GUIStyle* style, ::UnityEngine::GUIContent* content,
                                                          ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method .ctor addr 0x2b93bfc size 0xdc virtual false final false
  inline void _ctor(::UnityEngine::GUIStyle* style, ::UnityEngine::GUIContent* content, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method CalcWidth addr 0x2b93d5c size 0x84 virtual true final false
  inline void CalcWidth();

  /// @brief Method CalcHeight addr 0x2b93de0 size 0x70 virtual true final false
  inline void CalcHeight();

  // Ctor Parameters [CppParam { name: "", ty: "GUIWordWrapSizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUIWordWrapSizer(GUIWordWrapSizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUIWordWrapSizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUIWordWrapSizer(GUIWordWrapSizer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUIWordWrapSizer();

public:
  /// @brief Field m_Content, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::GUIContent* ___m_Content;

  /// @brief Field m_ForcedMinHeight, offset: 0x50, size: 0x4, def value: None
  float_t ___m_ForcedMinHeight;

  /// @brief Field m_ForcedMaxHeight, offset: 0x54, size: 0x4, def value: None
  float_t ___m_ForcedMaxHeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUIWordWrapSizer, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::GUIWordWrapSizer, ___m_Content) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIWordWrapSizer, ___m_ForcedMinHeight) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIWordWrapSizer, ___m_ForcedMaxHeight) == 0x54, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUIWordWrapSizer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUIWordWrapSizer*, "UnityEngine", "GUIWordWrapSizer");
