#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleMaterialDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MaterialDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleMaterialDefinition)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct MaterialDefinition;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleMaterialDefinition;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleMaterialDefinition);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleMaterialDefinition, "UnityEngine.UIElements", "StyleMaterialDefinition");
// Dependencies UnityEngine.UIElements.MaterialDefinition, UnityEngine.UIElements.StyleKeyword
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleMaterialDefinition
struct CORDL_TYPE StyleMaterialDefinition {
public:
  // Declarations
  __declspec(property(get = get_keyword, put = set_keyword)) ::UnityEngine::UIElements::StyleKeyword keyword;

  __declspec(property(get = get_value, put = set_value)) ::UnityEngine::UIElements::MaterialDefinition value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleMaterialDefinition>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleMaterialDefinition>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::MaterialDefinition>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::MaterialDefinition>*();

  /// @brief Method Equals, addr 0x7109808, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x71097e0, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleMaterialDefinition other);

  /// @brief Method GetHashCode, addr 0x7109898, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x71098e0, size 0x84, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x710979c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor, addr 0x7109784, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::MaterialDefinition m);

  /// @brief Method .ctor, addr 0x7109790, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::MaterialDefinition m, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor, addr 0x71052d0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* obj, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method get_keyword, addr 0x7109774, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method get_value, addr 0x710975c, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::MaterialDefinition get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleMaterialDefinition>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleMaterialDefinition>* i___System__IEquatable_1___UnityEngine__UIElements__StyleMaterialDefinition_();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::MaterialDefinition>"
  constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::MaterialDefinition>* i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__UIElements__MaterialDefinition_();

  /// @brief Method op_Equality, addr 0x71097a8, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleMaterialDefinition lhs, ::UnityEngine::UIElements::StyleMaterialDefinition rhs);

  /// @brief Method op_Implicit, addr 0x71052fc, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleMaterialDefinition op_Implicit___UnityEngine__UIElements__StyleMaterialDefinition(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method op_Implicit, addr 0x71097d4, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleMaterialDefinition op_Implicit___UnityEngine__UIElements__StyleMaterialDefinition(::UnityEngine::UIElements::MaterialDefinition m);

  /// @brief Method set_keyword, addr 0x710977c, size 0x8, virtual true, abstract: false, final true
  inline void set_keyword(::UnityEngine::UIElements::StyleKeyword value);

  /// @brief Method set_value, addr 0x7109768, size 0xc, virtual true, abstract: false, final true
  inline void set_value(::UnityEngine::UIElements::MaterialDefinition value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleMaterialDefinition();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::MaterialDefinition", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Keyword", ty:
  // "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None, comment: None }]
  constexpr StyleMaterialDefinition(::UnityEngine::UIElements::MaterialDefinition m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5046 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// [SerializeField]
  /// @brief Field m_Value, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::UIElements::MaterialDefinition m_Value;

  /// [SerializeField]
  /// @brief Field m_Keyword, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleMaterialDefinition, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleMaterialDefinition, m_Keyword) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleMaterialDefinition) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
