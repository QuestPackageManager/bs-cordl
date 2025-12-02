#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextBackingContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextBackingContainer)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextBackingContainer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TextBackingContainer);
// Dependencies
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.TextBackingContainer
struct CORDL_TYPE TextBackingContainer {
public:
  // Declarations
  __declspec(property(get = get_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Count, put = set_Count)) int32_t Count;

  __declspec(property(get = get_Item, put = set_Item)) uint32_t Item[];

  /// @brief Method Resize, addr 0x69d3150, size 0x70, virtual false, abstract: false, final false
  inline void Resize(int32_t size);

  /// @brief Method .ctor, addr 0x69d31c0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(int32_t size);

  /// @brief Method get_Capacity, addr 0x69d3098, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_Count, addr 0x69d30b0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x69d30c0, size 0x30, virtual false, abstract: false, final false
  inline uint32_t get_Item(int32_t index);

  /// @brief Method set_Count, addr 0x69d30b8, size 0x8, virtual false, abstract: false, final false
  inline void set_Count(int32_t value);

  /// @brief Method set_Item, addr 0x69d30f0, size 0x60, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextBackingContainer();

  // Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<uint32_t,::Array<uint32_t>*>", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value:
  // None }]
  constexpr TextBackingContainer(::ArrayW<uint32_t, ::Array<uint32_t>*> m_Array, int32_t m_Count) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17216 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Array, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> m_Array;

  /// @brief Field m_Count, offset: 0x8, size: 0x4, def value: None
  int32_t m_Count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextBackingContainer, m_Array) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextBackingContainer, m_Count) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextBackingContainer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextBackingContainer, "UnityEngine.TextCore.Text", "TextBackingContainer");
