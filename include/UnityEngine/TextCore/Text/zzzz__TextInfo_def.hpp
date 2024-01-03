#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: UnityEngine.TextCore.Text::TextInfo
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 97, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13713))
// CS Name: ::UnityEngine.TextCore.Text::TextInfo*
class CORDL_TYPE TextInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field characterCount, offset 0x10, size 0x4
  __declspec(property(get = __get_characterCount, put = __set_characterCount)) int32_t characterCount;

  /// @brief Field spriteCount, offset 0x14, size 0x4
  __declspec(property(get = __get_spriteCount, put = __set_spriteCount)) int32_t spriteCount;

  /// @brief Field spaceCount, offset 0x18, size 0x4
  __declspec(property(get = __get_spaceCount, put = __set_spaceCount)) int32_t spaceCount;

  /// @brief Field wordCount, offset 0x1c, size 0x4
  __declspec(property(get = __get_wordCount, put = __set_wordCount)) int32_t wordCount;

  /// @brief Field linkCount, offset 0x20, size 0x4
  __declspec(property(get = __get_linkCount, put = __set_linkCount)) int32_t linkCount;

  /// @brief Field lineCount, offset 0x24, size 0x4
  __declspec(property(get = __get_lineCount, put = __set_lineCount)) int32_t lineCount;

  /// @brief Field pageCount, offset 0x28, size 0x4
  __declspec(property(get = __get_pageCount, put = __set_pageCount)) int32_t pageCount;

  /// @brief Field materialCount, offset 0x2c, size 0x4
  __declspec(property(get = __get_materialCount, put = __set_materialCount)) int32_t materialCount;

  /// @brief Field textElementInfo, offset 0x30, size 0x8
  __declspec(property(get = __get_textElementInfo,
                      put = __set_textElementInfo))::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> textElementInfo;

  /// @brief Field wordInfo, offset 0x38, size 0x8
  __declspec(property(get = __get_wordInfo, put = __set_wordInfo))::ArrayW<::UnityEngine::TextCore::Text::WordInfo, ::Array<::UnityEngine::TextCore::Text::WordInfo>*> wordInfo;

  /// @brief Field linkInfo, offset 0x40, size 0x8
  __declspec(property(get = __get_linkInfo, put = __set_linkInfo))::ArrayW<::UnityEngine::TextCore::Text::LinkInfo, ::Array<::UnityEngine::TextCore::Text::LinkInfo>*> linkInfo;

  /// @brief Field lineInfo, offset 0x48, size 0x8
  __declspec(property(get = __get_lineInfo, put = __set_lineInfo))::ArrayW<::UnityEngine::TextCore::Text::LineInfo, ::Array<::UnityEngine::TextCore::Text::LineInfo>*> lineInfo;

  /// @brief Field pageInfo, offset 0x50, size 0x8
  __declspec(property(get = __get_pageInfo, put = __set_pageInfo))::ArrayW<::UnityEngine::TextCore::Text::PageInfo, ::Array<::UnityEngine::TextCore::Text::PageInfo>*> pageInfo;

  /// @brief Field meshInfo, offset 0x58, size 0x8
  __declspec(property(get = __get_meshInfo, put = __set_meshInfo))::ArrayW<::UnityEngine::TextCore::Text::MeshInfo, ::Array<::UnityEngine::TextCore::Text::MeshInfo>*> meshInfo;

  /// @brief Field isDirty, offset 0x60, size 0x1
  __declspec(property(get = __get_isDirty, put = __set_isDirty)) bool isDirty;

  /// @brief Field s_InfinityVectorPositive, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InfinityVectorPositive, put = setStaticF_s_InfinityVectorPositive))::UnityEngine::Vector2 s_InfinityVectorPositive;

  /// @brief Field s_InfinityVectorNegative, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InfinityVectorNegative, put = setStaticF_s_InfinityVectorNegative))::UnityEngine::Vector2 s_InfinityVectorNegative;

  constexpr int32_t& __get_characterCount();

  constexpr int32_t const& __get_characterCount() const;

  constexpr void __set_characterCount(int32_t value);

  constexpr int32_t& __get_spriteCount();

  constexpr int32_t const& __get_spriteCount() const;

  constexpr void __set_spriteCount(int32_t value);

  constexpr int32_t& __get_spaceCount();

  constexpr int32_t const& __get_spaceCount() const;

  constexpr void __set_spaceCount(int32_t value);

  constexpr int32_t& __get_wordCount();

  constexpr int32_t const& __get_wordCount() const;

  constexpr void __set_wordCount(int32_t value);

  constexpr int32_t& __get_linkCount();

  constexpr int32_t const& __get_linkCount() const;

  constexpr void __set_linkCount(int32_t value);

  constexpr int32_t& __get_lineCount();

  constexpr int32_t const& __get_lineCount() const;

  constexpr void __set_lineCount(int32_t value);

  constexpr int32_t& __get_pageCount();

  constexpr int32_t const& __get_pageCount() const;

  constexpr void __set_pageCount(int32_t value);

  constexpr int32_t& __get_materialCount();

  constexpr int32_t const& __get_materialCount() const;

  constexpr void __set_materialCount(int32_t value);

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*>& __get_textElementInfo();

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> const& __get_textElementInfo() const;

  constexpr void __set_textElementInfo(::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> value);

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::WordInfo, ::Array<::UnityEngine::TextCore::Text::WordInfo>*>& __get_wordInfo();

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::WordInfo, ::Array<::UnityEngine::TextCore::Text::WordInfo>*> const& __get_wordInfo() const;

  constexpr void __set_wordInfo(::ArrayW<::UnityEngine::TextCore::Text::WordInfo, ::Array<::UnityEngine::TextCore::Text::WordInfo>*> value);

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::LinkInfo, ::Array<::UnityEngine::TextCore::Text::LinkInfo>*>& __get_linkInfo();

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::LinkInfo, ::Array<::UnityEngine::TextCore::Text::LinkInfo>*> const& __get_linkInfo() const;

  constexpr void __set_linkInfo(::ArrayW<::UnityEngine::TextCore::Text::LinkInfo, ::Array<::UnityEngine::TextCore::Text::LinkInfo>*> value);

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::LineInfo, ::Array<::UnityEngine::TextCore::Text::LineInfo>*>& __get_lineInfo();

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::LineInfo, ::Array<::UnityEngine::TextCore::Text::LineInfo>*> const& __get_lineInfo() const;

  constexpr void __set_lineInfo(::ArrayW<::UnityEngine::TextCore::Text::LineInfo, ::Array<::UnityEngine::TextCore::Text::LineInfo>*> value);

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::PageInfo, ::Array<::UnityEngine::TextCore::Text::PageInfo>*>& __get_pageInfo();

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::PageInfo, ::Array<::UnityEngine::TextCore::Text::PageInfo>*> const& __get_pageInfo() const;

  constexpr void __set_pageInfo(::ArrayW<::UnityEngine::TextCore::Text::PageInfo, ::Array<::UnityEngine::TextCore::Text::PageInfo>*> value);

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::MeshInfo, ::Array<::UnityEngine::TextCore::Text::MeshInfo>*>& __get_meshInfo();

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::MeshInfo, ::Array<::UnityEngine::TextCore::Text::MeshInfo>*> const& __get_meshInfo() const;

  constexpr void __set_meshInfo(::ArrayW<::UnityEngine::TextCore::Text::MeshInfo, ::Array<::UnityEngine::TextCore::Text::MeshInfo>*> value);

  constexpr bool& __get_isDirty();

  constexpr bool const& __get_isDirty() const;

  constexpr void __set_isDirty(bool value);

  static inline void setStaticF_s_InfinityVectorPositive(::UnityEngine::Vector2 value);

  static inline ::UnityEngine::Vector2 getStaticF_s_InfinityVectorPositive();

  static inline void setStaticF_s_InfinityVectorNegative(::UnityEngine::Vector2 value);

  static inline ::UnityEngine::Vector2 getStaticF_s_InfinityVectorNegative();

  static inline ::UnityEngine::TextCore::Text::TextInfo* New_ctor();

  /// @brief Method .ctor, addr 0x2d47fa8, size 0x134, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Clear, addr 0x2d480dc, size 0x5c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ClearMeshInfo, addr 0x2d48138, size 0x80, virtual false, abstract: false, final false
  inline void ClearMeshInfo(bool updateMesh);

  /// @brief Method ClearLineInfo, addr 0x2d481e4, size 0x16c, virtual false, abstract: false, final false
  inline void ClearLineInfo();

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Resize(ByRef<::ArrayW<T, ::Array<T>*>> array, int32_t size);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Resize(ByRef<::ArrayW<T, ::Array<T>*>> array, int32_t size, bool isBlockAllocated);

  // Ctor Parameters [CppParam { name: "", ty: "TextInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextInfo(TextInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextInfo(TextInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextInfo();

public:
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextInfo, 0x68>, "Size mismatch!");

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

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextInfo*, "UnityEngine.TextCore.Text", "TextInfo");
