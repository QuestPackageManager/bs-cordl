#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Cursor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Cursor)
namespace System {
class Object;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Cursor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Cursor);
// Dependencies System.IEquatable`1<T>, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Cursor
struct CORDL_TYPE Cursor {
public:
  // Declarations
  __declspec(property(get = get_defaultCursorId, put = set_defaultCursorId)) int32_t defaultCursorId;

  __declspec(property(get = get_hotspot, put = set_hotspot)) ::UnityEngine::Vector2 hotspot;

  __declspec(property(get = get_texture, put = set_texture)) ::UnityW<::UnityEngine::Texture2D> texture;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Cursor>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::Cursor>*();

  /// @brief Method Equals, addr 0x4a1418c, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a1421c, size 0xb0, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::Cursor other);

  /// @brief Method GetHashCode, addr 0x4a142cc, size 0xd4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4a143d0, size 0x8c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_defaultCursorId, addr 0x4a1417c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_defaultCursorId();

  /// @brief Method get_hotspot, addr 0x4a1416c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_hotspot();

  /// @brief Method get_texture, addr 0x4a1415c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_texture();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::Cursor>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::Cursor>* i___System__IEquatable_1___UnityEngine__UIElements__Cursor_();

  /// @brief Method op_Equality, addr 0x4a143a0, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::Cursor style1, ::UnityEngine::UIElements::Cursor style2);

  /// @brief Method set_defaultCursorId, addr 0x4a14184, size 0x8, virtual false, abstract: false, final false
  inline void set_defaultCursorId(int32_t value);

  /// @brief Method set_hotspot, addr 0x4a14174, size 0x8, virtual false, abstract: false, final false
  inline void set_hotspot(::UnityEngine::Vector2 value);

  /// @brief Method set_texture, addr 0x4a14164, size 0x8, virtual false, abstract: false, final false
  inline void set_texture(::UnityEngine::Texture2D* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Cursor();

  // Ctor Parameters [CppParam { name: "_texture_k__BackingField", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None }, CppParam { name: "_hotspot_k__BackingField", ty:
  // "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_defaultCursorId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Cursor(::UnityW<::UnityEngine::Texture2D> _texture_k__BackingField, ::UnityEngine::Vector2 _hotspot_k__BackingField, int32_t _defaultCursorId_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5733 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field <texture>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> _texture_k__BackingField;

  /// @brief Field <hotspot>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 _hotspot_k__BackingField;

  /// @brief Field <defaultCursorId>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t _defaultCursorId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Cursor, _texture_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Cursor, _hotspot_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Cursor, _defaultCursorId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Cursor, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Cursor, "UnityEngine.UIElements", "Cursor");
