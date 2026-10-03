#pragma once
// IWYU pragma private; include "UnityEngine/SecondarySpriteTexture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SecondarySpriteTexture)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine {
struct SecondarySpriteTexture;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SecondarySpriteTexture);
DEFINE_IL2CPP_CLASS(::UnityEngine::SecondarySpriteTexture, "UnityEngine", "SecondarySpriteTexture");
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.SecondarySpriteTexture
struct CORDL_TYPE SecondarySpriteTexture {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::SecondarySpriteTexture>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::SecondarySpriteTexture>*();

  /// @brief Method Equals, addr 0x6eb4598, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6eb4530, size 0x68, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::SecondarySpriteTexture other);

  /// @brief Method GetHashCode, addr 0x6eb4618, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::SecondarySpriteTexture>"
  constexpr ::System::IEquatable_1<::UnityEngine::SecondarySpriteTexture>* i___System__IEquatable_1___UnityEngine__SecondarySpriteTexture_();

  /// @brief Method op_Equality, addr 0x6eb4694, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::SecondarySpriteTexture lhs, ::UnityEngine::SecondarySpriteTexture rhs);

  /// @brief Method op_Inequality, addr 0x6eb46c0, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::SecondarySpriteTexture lhs, ::UnityEngine::SecondarySpriteTexture rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SecondarySpriteTexture();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "",
  // def_value: None, comment: None }]
  constexpr SecondarySpriteTexture(::StringW name, ::UnityW<::UnityEngine::Texture2D> texture) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9624 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field texture, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> texture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SecondarySpriteTexture, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SecondarySpriteTexture, texture) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::SecondarySpriteTexture) == 0x10, "Size mismatch!");

} // namespace UnityEngine
