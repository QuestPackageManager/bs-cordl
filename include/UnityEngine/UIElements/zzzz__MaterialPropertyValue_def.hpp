#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MaterialPropertyValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MaterialPropertyValueType_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyValue)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct MaterialPropertyValue;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::MaterialPropertyValue);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::MaterialPropertyValue, "UnityEngine.UIElements", "MaterialPropertyValue");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies UnityEngine.UIElements.MaterialPropertyValueType, UnityEngine.Vector4
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.MaterialPropertyValue
struct CORDL_TYPE MaterialPropertyValue {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::MaterialPropertyValue>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::MaterialPropertyValue>*();

  /// @brief Method Equals, addr 0x7106b50, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x7106a54, size 0xfc, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::MaterialPropertyValue other);

  /// @brief Method GetColor, addr 0x7106084, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color GetColor();

  /// @brief Method GetFloat, addr 0x7106070, size 0x8, virtual false, abstract: false, final false
  inline float_t GetFloat();

  /// @brief Method GetHashCode, addr 0x710646c, size 0x14c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetVector, addr 0x7106078, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 GetVector();

  /// @brief Method ToString, addr 0x7106788, size 0x180, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::MaterialPropertyValue>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::MaterialPropertyValue>* i___System__IEquatable_1___UnityEngine__UIElements__MaterialPropertyValue_();

  /// @brief Method op_Inequality, addr 0x710622c, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::MaterialPropertyValue lhs, ::UnityEngine::UIElements::MaterialPropertyValue rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyValue();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "::UnityEngine::UIElements::MaterialPropertyValueType",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "packedValue", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "textureValue",
  // ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None, comment: None }]
  constexpr MaterialPropertyValue(::StringW name, ::UnityEngine::UIElements::MaterialPropertyValueType type, ::UnityEngine::Vector4 packedValue,
                                  ::UnityW<::UnityEngine::Texture> textureValue) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5019 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field type, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::UIElements::MaterialPropertyValueType type;

  /// @brief Field packedValue, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Vector4 packedValue;

  /// @brief Field textureValue, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> textureValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MaterialPropertyValue, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MaterialPropertyValue, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MaterialPropertyValue, packedValue) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MaterialPropertyValue, textureValue) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::MaterialPropertyValue) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements
