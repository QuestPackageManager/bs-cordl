#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\ICustomStyle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ICustomStyle)
namespace UnityEngine::UIElements {
template <typename T> struct CustomStyleProperty_1;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ICustomStyle;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::ICustomStyle*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ICustomStyle*, "UnityEngine.UIElements", "ICustomStyle");
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ICustomStyle
class CORDL_TYPE ICustomStyle {
public:
  // Declarations
  /// @brief Method TryGetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::StringW> property, ::by_ref<::StringW> value);

  /// @brief Method TryGetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> property, ::by_ref<::UnityEngine::Color> value);

  /// @brief Method TryGetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Sprite>> property, ::by_ref<::UnityEngine::Sprite*> value);

  /// @brief Method TryGetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Texture2D>> property, ::by_ref<::UnityEngine::Texture2D*> value);

  /// @brief Method TryGetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::UIElements::VectorImage>> property, ::by_ref<::UnityEngine::UIElements::VectorImage*> value);

  /// @brief Method TryGetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> property, ::by_ref<float_t> value);

  /// @brief Method TryGetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<int32_t> property, ::by_ref<int32_t> value);

  // Ctor Parameters [CppParam { name: "", ty: "ICustomStyle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICustomStyle(ICustomStyle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4709 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
