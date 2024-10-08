#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleBackgroundSize.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BackgroundSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleBackgroundSize)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct BackgroundSize;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleBackgroundSize;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleBackgroundSize);
// Type: UnityEngine.UIElements::StyleBackgroundSize
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::StyleBackgroundSize
struct CORDL_TYPE StyleBackgroundSize {
public:
  // Declarations
  __declspec(property(get = get_keyword)) ::UnityEngine::UIElements::StyleKeyword keyword;

  __declspec(property(get = get_value)) ::UnityEngine::UIElements::BackgroundSize value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundSize>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundSize>*();

  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundSize>"
  constexpr operator ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundSize>*();

  /// @brief Method Equals, addr 0x4a098e0, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a09864, size 0x7c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleBackgroundSize other);

  /// @brief Method GetHashCode, addr 0x4a09970, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4a09998, size 0x88, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4a097d4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method .ctor, addr 0x4a097e0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BackgroundSize v, ::UnityEngine::UIElements::StyleKeyword keyword);

  /// @brief Method get_keyword, addr 0x4a097cc, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleKeyword get_keyword();

  /// @brief Method get_value, addr 0x4a0978c, size 0x40, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::BackgroundSize get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundSize>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleBackgroundSize>* i___System__IEquatable_1___UnityEngine__UIElements__StyleBackgroundSize_();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundSize>"
  constexpr ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::BackgroundSize>* i___UnityEngine__UIElements__IStyleValue_1___UnityEngine__UIElements__BackgroundSize_();

  /// @brief Method op_Equality, addr 0x4a097f8, size 0x60, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleBackgroundSize lhs, ::UnityEngine::UIElements::StyleBackgroundSize rhs);

  /// @brief Method op_Implicit, addr 0x4a09858, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleBackgroundSize op_Implicit___UnityEngine__UIElements__StyleBackgroundSize(::UnityEngine::UIElements::StyleKeyword keyword);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleBackgroundSize();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::BackgroundSize", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty:
  // "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
  constexpr StyleBackgroundSize(::UnityEngine::UIElements::BackgroundSize m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept;

  /// @brief Field m_Value, offset: 0x0, size: 0x14, def value: None
  ::UnityEngine::UIElements::BackgroundSize m_Value;

  /// @brief Field m_Keyword, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleKeyword m_Keyword;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6060 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleBackgroundSize, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleBackgroundSize, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleBackgroundSize, m_Keyword) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleBackgroundSize, "UnityEngine.UIElements", "StyleBackgroundSize");
