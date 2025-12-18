#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/BitmapAllocator32.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitmapAllocator32)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
namespace UnityEngine::UIElements::UIR {
class BaseShaderInfoStorage;
}
namespace UnityEngine::UIElements::UIR {
struct BitmapAllocator32_Page;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct BitmapAllocator32;
}
namespace UnityEngine::UIElements::UIR {
struct BitmapAllocator32_Page;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::BitmapAllocator32);
MARK_VAL_T(::UnityEngine::UIElements::UIR::BitmapAllocator32_Page);
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.BitmapAllocator32/Page
struct CORDL_TYPE BitmapAllocator32_Page {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BitmapAllocator32_Page();

  // Ctor Parameters [CppParam { name: "x", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "freeSlots", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr BitmapAllocator32_Page(uint16_t x, uint16_t y, int32_t freeSlots) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5357 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field x, offset: 0x0, size: 0x2, def value: None
  uint16_t x;

  /// @brief Field y, offset: 0x2, size: 0x2, def value: None
  uint16_t y;

  /// @brief Field freeSlots, offset: 0x4, size: 0x4, def value: None
  int32_t freeSlots;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::BitmapAllocator32_Page, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BitmapAllocator32_Page, y) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BitmapAllocator32_Page, freeSlots) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::BitmapAllocator32_Page, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.BitmapAllocator32
struct CORDL_TYPE BitmapAllocator32 {
public:
  // Declarations
  using Page = ::UnityEngine::UIElements::UIR::BitmapAllocator32_Page;

  __declspec(property(get = get_entryHeight)) int32_t entryHeight;

  __declspec(property(get = get_entryWidth)) int32_t entryWidth;

  /// @brief Method Allocate, addr 0x6b289bc, size 0x4b0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::BMPAlloc Allocate(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage* storage);

  /// @brief Method Construct, addr 0x6b286e0, size 0x114, virtual false, abstract: false, final false
  inline void Construct(int32_t pageHeight, int32_t entryWidth, int32_t entryHeight);

  /// @brief Method CountTrailingZeroes, addr 0x6b28e6c, size 0x64, virtual false, abstract: false, final false
  static inline uint8_t CountTrailingZeroes(uint32_t val);

  /// @brief Method ForceFirstAlloc, addr 0x6b287f4, size 0x1c8, virtual false, abstract: false, final false
  inline void ForceFirstAlloc(uint16_t firstPageX, uint16_t firstPageY);

  /// @brief Method Free, addr 0x6b28ed0, size 0x150, virtual false, abstract: false, final false
  inline void Free(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method GetAllocPageAtlasLocation, addr 0x6b29030, size 0x84, virtual false, abstract: false, final false
  inline void GetAllocPageAtlasLocation(int32_t page, ::ByRef<uint16_t> x, ::ByRef<uint16_t> y);

  /// @brief Method get_entryHeight, addr 0x6b29028, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_entryHeight();

  /// @brief Method get_entryWidth, addr 0x6b29020, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_entryWidth();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BitmapAllocator32();

  // Ctor Parameters [CppParam { name: "m_PageHeight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Pages", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::BitmapAllocator32_Page>*", modifiers: "", def_value: None }, CppParam { name: "m_AllocMap", ty:
  // "::System::Collections::Generic::List_1<uint32_t>*", modifiers: "", def_value: None }, CppParam { name: "m_EntryWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_EntryHeight", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BitmapAllocator32(int32_t m_PageHeight, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::BitmapAllocator32_Page>* m_Pages,
                              ::System::Collections::Generic::List_1<uint32_t>* m_AllocMap, int32_t m_EntryWidth, int32_t m_EntryHeight) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5358 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_PageHeight, offset: 0x0, size: 0x4, def value: None
  int32_t m_PageHeight;

  /// @brief Field m_Pages, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::BitmapAllocator32_Page>* m_Pages;

  /// @brief Field m_AllocMap, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* m_AllocMap;

  /// @brief Field m_EntryWidth, offset: 0x18, size: 0x4, def value: None
  int32_t m_EntryWidth;

  /// @brief Field m_EntryHeight, offset: 0x1c, size: 0x4, def value: None
  int32_t m_EntryHeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::BitmapAllocator32, m_PageHeight) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BitmapAllocator32, m_Pages) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BitmapAllocator32, m_AllocMap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BitmapAllocator32, m_EntryWidth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::BitmapAllocator32, m_EntryHeight) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::BitmapAllocator32, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::BitmapAllocator32, "UnityEngine.UIElements.UIR", "BitmapAllocator32");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::BitmapAllocator32_Page, "UnityEngine.UIElements.UIR", "BitmapAllocator32/Page");
