#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleFontDefinition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleFontDefinition)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleFontDefinition;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleFontDefinition);
// Type: UnityEngine.UIElements::StyleFontDefinition
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::StyleFontDefinition
struct CORDL_TYPE StyleFontDefinition {
public:
  // Declarations
  __declspec(property(get = get_keyword)) ::UnityEngine::UIElements::StyleKeyword keyword;

  __declspec(property(get = get_value)) ::UnityEngine::UIElements::FontDefinition value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleFontDefinition>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleFontDefinition>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::FontDefinition>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::FontDefinition>*();

  /// @brief Method Equals, addr 0x4a0a428, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a0a3fc, size 0x2c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleFontDefinition other);

  /// @brief Method GetHashCode, addr 0x4a0a4b4, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x4a0a3d8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::FontDefinition f);

  /// @brief Method .ctor, addr 0x4a0a3e4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::FontDefinition f, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method get_keyword, addr 0x4a0a3d0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method get_value, addr 0x4a0a39c, size 0x34, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::FontDefinition get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleFontDefinition>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleFontDefinition>* i___System__IEquatable_1___UnityEngine__UIElements__StyleFontDefinition_();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::FontDefinition>"
  constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::FontDefinition>* i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__UIElements__FontDefinition_();

  /// @brief Method op_Implicit, addr 0x4a0a3f0, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleFontDefinition op_Implicit___UnityEngine__UIElements__StyleFontDefinition(::UnityEngine::UIElements::FontDefinition f);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleFontDefinition();

  // Ctor Parameters [CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }, CppParam { name: "m_Value", ty:
  // "::UnityEngine::UIElements::FontDefinition", modifiers: "", def_value: None }]
  constexpr StyleFontDefinition(::UnityEngine::UIElements::StyleKeyword m_Keyword, ::UnityEngine::UIElements::FontDefinition m_Value) noexcept;

  /// @brief Field m_Keyword, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  /// @brief Field m_Value, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::UIElements::FontDefinition m_Value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6068 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleFontDefinition, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleFontDefinition, m_Keyword) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleFontDefinition, m_Value) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleFontDefinition, "UnityEngine.UIElements", "StyleFontDefinition");
