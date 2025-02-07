#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextInfo)
namespace UnityEngine::TextCore::Text {
struct LineInfo;
}
namespace UnityEngine::TextCore::Text {
struct LinkInfo;
}
namespace UnityEngine::TextCore::Text {
struct MeshInfo;
}
namespace UnityEngine::TextCore::Text {
struct PageInfo;
}
namespace UnityEngine::TextCore::Text {
struct TextElementInfo;
}
namespace UnityEngine::TextCore::Text {
struct WordInfo;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextInfo);
// Dependencies System.Object, UnityEngine.Vector2
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextInfo
class CORDL_TYPE TextInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field characterCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_characterCount, put = __cordl_internal_set_characterCount)) int32_t characterCount;

  /// @brief Field hasMultipleColors, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_hasMultipleColors, put = __cordl_internal_set_hasMultipleColors)) bool hasMultipleColors;

  /// @brief Field isDirty, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_isDirty, put = __cordl_internal_set_isDirty)) bool isDirty;

  /// @brief Field lineCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_lineCount, put = __cordl_internal_set_lineCount)) int32_t lineCount;

  /// @brief Field lineInfo, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_lineInfo, put = __cordl_internal_set_lineInfo)) ::ArrayW<::UnityEngine::TextCore::Text::LineInfo, ::Array<::UnityEngine::TextCore::Text::LineInfo>*>
      lineInfo;

  /// @brief Field linkCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_linkCount, put = __cordl_internal_set_linkCount)) int32_t linkCount;

  /// @brief Field linkInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_linkInfo, put = __cordl_internal_set_linkInfo)) ::ArrayW<::UnityEngine::TextCore::Text::LinkInfo, ::Array<::UnityEngine::TextCore::Text::LinkInfo>*>
      linkInfo;

  /// @brief Field materialCount, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_materialCount, put = __cordl_internal_set_materialCount)) int32_t materialCount;

  /// @brief Field meshInfo, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_meshInfo, put = __cordl_internal_set_meshInfo)) ::ArrayW<::UnityEngine::TextCore::Text::MeshInfo, ::Array<::UnityEngine::TextCore::Text::MeshInfo>*>
      meshInfo;

  /// @brief Field pageCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_pageCount, put = __cordl_internal_set_pageCount)) int32_t pageCount;

  /// @brief Field pageInfo, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_pageInfo, put = __cordl_internal_set_pageInfo)) ::ArrayW<::UnityEngine::TextCore::Text::PageInfo, ::Array<::UnityEngine::TextCore::Text::PageInfo>*>
      pageInfo;

  /// @brief Field s_InfinityVectorNegative, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InfinityVectorNegative, put = setStaticF_s_InfinityVectorNegative)) ::UnityEngine::Vector2 s_InfinityVectorNegative;

  /// @brief Field s_InfinityVectorPositive, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InfinityVectorPositive, put = setStaticF_s_InfinityVectorPositive)) ::UnityEngine::Vector2 s_InfinityVectorPositive;

  /// @brief Field spaceCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_spaceCount, put = __cordl_internal_set_spaceCount)) int32_t spaceCount;

  /// @brief Field spriteCount, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_spriteCount, put = __cordl_internal_set_spriteCount)) int32_t spriteCount;

  /// @brief Field textElementInfo, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_textElementInfo,
                      put = __cordl_internal_set_textElementInfo)) ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>
      textElementInfo;

  /// @brief Field wordCount, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_wordCount, put = __cordl_internal_set_wordCount)) int32_t wordCount;

  /// @brief Field wordInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_wordInfo, put = __cordl_internal_set_wordInfo)) ::ArrayW<::UnityEngine::TextCore::Text::WordInfo, ::Array<::UnityEngine::TextCore::Text::WordInfo>*>
      wordInfo;

  /// @brief Method Clear, addr 0x4953618, size 0x60, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ClearLineInfo, addr 0x4953734, size 0x170, virtual false, abstract: false, final false
  inline void ClearLineInfo();

  /// @brief Method ClearMeshInfo, addr 0x4953678, size 0xbc, virtual false, abstract: false, final false
  inline void ClearMeshInfo(bool updateMesh);

  /// @brief Method ClearPageInfo, addr 0x49538a4, size 0x98, virtual false, abstract: false, final false
  inline void ClearPageInfo();

  static inline ::UnityEngine::TextCore::Text::TextInfo* New_ctor();

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Resize(::ByRef<::ArrayW<T, ::Array<T>*>> array, int32_t size);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Resize(::ByRef<::ArrayW<T, ::Array<T>*>> array, int32_t size, bool isBlockAllocated);

  constexpr int32_t const& __cordl_internal_get_characterCount() const;

  constexpr int32_t& __cordl_internal_get_characterCount();

  constexpr bool const& __cordl_internal_get_hasMultipleColors() const;

  constexpr bool& __cordl_internal_get_hasMultipleColors();

  constexpr bool const& __cordl_internal_get_isDirty() const;

  constexpr bool& __cordl_internal_get_isDirty();

  constexpr int32_t const& __cordl_internal_get_lineCount() const;

  constexpr int32_t& __cordl_internal_get_lineCount();

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::LineInfo, ::Array<::UnityEngine::TextCore::Text::LineInfo>*> const& __cordl_internal_get_lineInfo() const;

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::LineInfo, ::Array<::UnityEngine::TextCore::Text::LineInfo>*>& __cordl_internal_get_lineInfo();

  constexpr int32_t const& __cordl_internal_get_linkCount() const;

  constexpr int32_t& __cordl_internal_get_linkCount();

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::LinkInfo, ::Array<::UnityEngine::TextCore::Text::LinkInfo>*> const& __cordl_internal_get_linkInfo() const;

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::LinkInfo, ::Array<::UnityEngine::TextCore::Text::LinkInfo>*>& __cordl_internal_get_linkInfo();

  constexpr int32_t const& __cordl_internal_get_materialCount() const;

  constexpr int32_t& __cordl_internal_get_materialCount();

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::MeshInfo, ::Array<::UnityEngine::TextCore::Text::MeshInfo>*> const& __cordl_internal_get_meshInfo() const;

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::MeshInfo, ::Array<::UnityEngine::TextCore::Text::MeshInfo>*>& __cordl_internal_get_meshInfo();

  constexpr int32_t const& __cordl_internal_get_pageCount() const;

  constexpr int32_t& __cordl_internal_get_pageCount();

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::PageInfo, ::Array<::UnityEngine::TextCore::Text::PageInfo>*> const& __cordl_internal_get_pageInfo() const;

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::PageInfo, ::Array<::UnityEngine::TextCore::Text::PageInfo>*>& __cordl_internal_get_pageInfo();

  constexpr int32_t const& __cordl_internal_get_spaceCount() const;

  constexpr int32_t& __cordl_internal_get_spaceCount();

  constexpr int32_t const& __cordl_internal_get_spriteCount() const;

  constexpr int32_t& __cordl_internal_get_spriteCount();

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> const& __cordl_internal_get_textElementInfo() const;

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>& __cordl_internal_get_textElementInfo();

  constexpr int32_t const& __cordl_internal_get_wordCount() const;

  constexpr int32_t& __cordl_internal_get_wordCount();

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::WordInfo, ::Array<::UnityEngine::TextCore::Text::WordInfo>*> const& __cordl_internal_get_wordInfo() const;

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::WordInfo, ::Array<::UnityEngine::TextCore::Text::WordInfo>*>& __cordl_internal_get_wordInfo();

  constexpr void __cordl_internal_set_characterCount(int32_t value);

  constexpr void __cordl_internal_set_hasMultipleColors(bool value);

  constexpr void __cordl_internal_set_isDirty(bool value);

  constexpr void __cordl_internal_set_lineCount(int32_t value);

  constexpr void __cordl_internal_set_lineInfo(::ArrayW<::UnityEngine::TextCore::Text::LineInfo, ::Array<::UnityEngine::TextCore::Text::LineInfo>*> value);

  constexpr void __cordl_internal_set_linkCount(int32_t value);

  constexpr void __cordl_internal_set_linkInfo(::ArrayW<::UnityEngine::TextCore::Text::LinkInfo, ::Array<::UnityEngine::TextCore::Text::LinkInfo>*> value);

  constexpr void __cordl_internal_set_materialCount(int32_t value);

  constexpr void __cordl_internal_set_meshInfo(::ArrayW<::UnityEngine::TextCore::Text::MeshInfo, ::Array<::UnityEngine::TextCore::Text::MeshInfo>*> value);

  constexpr void __cordl_internal_set_pageCount(int32_t value);

  constexpr void __cordl_internal_set_pageInfo(::ArrayW<::UnityEngine::TextCore::Text::PageInfo, ::Array<::UnityEngine::TextCore::Text::PageInfo>*> value);

  constexpr void __cordl_internal_set_spaceCount(int32_t value);

  constexpr void __cordl_internal_set_spriteCount(int32_t value);

  constexpr void __cordl_internal_set_textElementInfo(::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> value);

  constexpr void __cordl_internal_set_wordCount(int32_t value);

  constexpr void __cordl_internal_set_wordInfo(::ArrayW<::UnityEngine::TextCore::Text::WordInfo, ::Array<::UnityEngine::TextCore::Text::WordInfo>*> value);

  /// @brief Method .ctor, addr 0x4951d6c, size 0x138, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Vector2 getStaticF_s_InfinityVectorNegative();

  static inline ::UnityEngine::Vector2 getStaticF_s_InfinityVectorPositive();

  static inline void setStaticF_s_InfinityVectorNegative(::UnityEngine::Vector2 value);

  static inline void setStaticF_s_InfinityVectorPositive(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextInfo(TextInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextInfo(TextInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15285 };

  /// @brief Field characterCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___characterCount;

  /// @brief Field spriteCount, offset: 0x14, size: 0x4, def value: None
  int32_t ___spriteCount;

  /// @brief Field spaceCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___spaceCount;

  /// @brief Field wordCount, offset: 0x1c, size: 0x4, def value: None
  int32_t ___wordCount;

  /// @brief Field linkCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___linkCount;

  /// @brief Field lineCount, offset: 0x24, size: 0x4, def value: None
  int32_t ___lineCount;

  /// @brief Field pageCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___pageCount;

  /// @brief Field materialCount, offset: 0x2c, size: 0x4, def value: None
  int32_t ___materialCount;

  /// @brief Field textElementInfo, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> ___textElementInfo;

  /// @brief Field wordInfo, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::TextCore::Text::WordInfo, ::Array<::UnityEngine::TextCore::Text::WordInfo>*> ___wordInfo;

  /// @brief Field linkInfo, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::TextCore::Text::LinkInfo, ::Array<::UnityEngine::TextCore::Text::LinkInfo>*> ___linkInfo;

  /// @brief Field lineInfo, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::TextCore::Text::LineInfo, ::Array<::UnityEngine::TextCore::Text::LineInfo>*> ___lineInfo;

  /// @brief Field pageInfo, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::TextCore::Text::PageInfo, ::Array<::UnityEngine::TextCore::Text::PageInfo>*> ___pageInfo;

  /// @brief Field meshInfo, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::TextCore::Text::MeshInfo, ::Array<::UnityEngine::TextCore::Text::MeshInfo>*> ___meshInfo;

  /// @brief Field isDirty, offset: 0x60, size: 0x1, def value: None
  bool ___isDirty;

  /// @brief Field hasMultipleColors, offset: 0x61, size: 0x1, def value: None
  bool ___hasMultipleColors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextInfo, ___characterCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextInfo, ___spriteCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextInfo, ___spaceCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextInfo, ___wordCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextInfo, ___linkCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextInfo, ___lineCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextInfo, ___pageCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextInfo, ___materialCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextInfo, ___textElementInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextInfo, ___wordInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextInfo, ___linkInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextInfo, ___lineInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextInfo, ___pageInfo) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextInfo, ___meshInfo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextInfo, ___isDirty) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextInfo, ___hasMultipleColors) == 0x61, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextInfo, 0x68>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextInfo*, "UnityEngine.TextCore.Text", "TextInfo");
