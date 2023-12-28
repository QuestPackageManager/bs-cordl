#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ICustomStyle)
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine::UIElements {
template <typename T> struct CustomStyleProperty_1;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ICustomStyle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ICustomStyle);
// Type: UnityEngine.UIElements::ICustomStyle
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7307))
// CS Name: ::UnityEngine.UIElements::ICustomStyle*
class CORDL_TYPE ICustomStyle {
public:
  // Declarations
  /// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> property, ByRef<float_t> value);

  /// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<int32_t> property, ByRef<int32_t> value);

  /// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> property, ByRef<::UnityEngine::Color> value);

  /// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Texture2D*> property, ByRef<::UnityEngine::Texture2D*> value);

  /// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Sprite*> property, ByRef<::UnityEngine::Sprite*> value);

  /// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::UIElements::VectorImage*> property, ByRef<::UnityEngine::UIElements::VectorImage*> value);

  /// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool TryGetValue(::UnityEngine::UIElements::CustomStyleProperty_1<::StringW> property, ByRef<::StringW> value);

  // Ctor Parameters [CppParam { name: "", ty: "ICustomStyle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICustomStyle(ICustomStyle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICustomStyle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICustomStyle(ICustomStyle const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ICustomStyle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ICustomStyle*, "UnityEngine.UIElements", "ICustomStyle");
