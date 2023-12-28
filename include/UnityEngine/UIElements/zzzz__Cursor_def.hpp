#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Cursor)
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Cursor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Cursor);
// Type: UnityEngine.UIElements::Cursor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6808))
// CS Name: ::UnityEngine.UIElements::Cursor
struct CORDL_TYPE Cursor {
public:
  // Declarations
  __declspec(property(get = get_texture, put = set_texture))::UnityEngine::Texture2D* texture;

  __declspec(property(get = get_hotspot, put = set_hotspot))::UnityEngine::Vector2 hotspot;

  __declspec(property(get = get_defaultCursorId, put = set_defaultCursorId)) int32_t defaultCursorId;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Cursor>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::Cursor>*();

  /// @brief Method get_texture addr 0x2dbf064 size 0x8 virtual false final false
  inline ::UnityEngine::Texture2D* get_texture();

  /// @brief Method set_texture addr 0x2dbf06c size 0x8 virtual false final false
  inline void set_texture(::UnityEngine::Texture2D* value);

  /// @brief Method get_hotspot addr 0x2dbf074 size 0x8 virtual false final false
  inline ::UnityEngine::Vector2 get_hotspot();

  /// @brief Method set_hotspot addr 0x2dbf07c size 0x8 virtual false final false
  inline void set_hotspot(::UnityEngine::Vector2 value);

  /// @brief Method get_defaultCursorId addr 0x2dbf084 size 0x8 virtual false final false
  inline int32_t get_defaultCursorId();

  /// @brief Method set_defaultCursorId addr 0x2dbf08c size 0x8 virtual false final false
  inline void set_defaultCursorId(int32_t value);

  /// @brief Method Equals addr 0x2dbf094 size 0x90 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x2dbf124 size 0xb0 virtual true final true
  inline bool Equals(::UnityEngine::UIElements::Cursor other);

  /// @brief Method GetHashCode addr 0x2dbf1d4 size 0xd8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0x2dbf2ac size 0x30 virtual false final false
  static inline bool op_Equality(::UnityEngine::UIElements::Cursor style1, ::UnityEngine::UIElements::Cursor style2);

  /// @brief Method ToString addr 0x2dbf2dc size 0x88 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "_texture_k__BackingField", ty: "::UnityEngine::Texture2D*", modifiers: "", def_value: None }, CppParam { name: "_hotspot_k__BackingField", ty:
  // "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_defaultCursorId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Cursor(::UnityEngine::Texture2D* _texture_k__BackingField, ::UnityEngine::Vector2 _hotspot_k__BackingField, int32_t _defaultCursorId_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Cursor();

  /// @brief Field <texture>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Texture2D* _texture_k__BackingField;

  /// @brief Field <hotspot>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 _hotspot_k__BackingField;

  /// @brief Field <defaultCursorId>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t _defaultCursorId_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Cursor, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Cursor, "UnityEngine.UIElements", "Cursor");
