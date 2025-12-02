#pragma once
// IWYU pragma private; include "TMPro/TMP_TextInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_TextInfo)
namespace TMPro {
struct MaterialReference;
}
namespace TMPro {
struct TMP_CharacterInfo;
}
namespace TMPro {
struct TMP_LineInfo;
}
namespace TMPro {
struct TMP_LinkInfo;
}
namespace TMPro {
struct TMP_MeshInfo;
}
namespace TMPro {
struct TMP_PageInfo;
}
namespace TMPro {
class TMP_Text;
}
namespace TMPro {
struct TMP_WordInfo;
}
// Forward declare root types
namespace TMPro {
class TMP_TextInfo;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_TextInfo);
// Dependencies System.Object, UnityEngine.Vector2
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMP_TextInfo
class CORDL_TYPE TMP_TextInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field characterCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_characterCount, put = __cordl_internal_set_characterCount)) int32_t characterCount;

  /// @brief Field characterInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_characterInfo, put = __cordl_internal_set_characterInfo)) ::ArrayW<::TMPro::TMP_CharacterInfo, ::Array<::TMPro::TMP_CharacterInfo>*> characterInfo;

  /// @brief Field k_InfinityVectorNegative, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_InfinityVectorNegative, put = setStaticF_k_InfinityVectorNegative)) ::UnityEngine::Vector2 k_InfinityVectorNegative;

  /// @brief Field k_InfinityVectorPositive, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_InfinityVectorPositive, put = setStaticF_k_InfinityVectorPositive)) ::UnityEngine::Vector2 k_InfinityVectorPositive;

  /// @brief Field lineCount, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_lineCount, put = __cordl_internal_set_lineCount)) int32_t lineCount;

  /// @brief Field lineInfo, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_lineInfo, put = __cordl_internal_set_lineInfo)) ::ArrayW<::TMPro::TMP_LineInfo, ::Array<::TMPro::TMP_LineInfo>*> lineInfo;

  /// @brief Field linkCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_linkCount, put = __cordl_internal_set_linkCount)) int32_t linkCount;

  /// @brief Field linkInfo, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_linkInfo, put = __cordl_internal_set_linkInfo)) ::ArrayW<::TMPro::TMP_LinkInfo, ::Array<::TMPro::TMP_LinkInfo>*> linkInfo;

  /// @brief Field m_CachedMeshInfo, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedMeshInfo, put = __cordl_internal_set_m_CachedMeshInfo)) ::ArrayW<::TMPro::TMP_MeshInfo, ::Array<::TMPro::TMP_MeshInfo>*> m_CachedMeshInfo;

  /// @brief Field materialCount, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_materialCount, put = __cordl_internal_set_materialCount)) int32_t materialCount;

  /// @brief Field meshInfo, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_meshInfo, put = __cordl_internal_set_meshInfo)) ::ArrayW<::TMPro::TMP_MeshInfo, ::Array<::TMPro::TMP_MeshInfo>*> meshInfo;

  /// @brief Field pageCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_pageCount, put = __cordl_internal_set_pageCount)) int32_t pageCount;

  /// @brief Field pageInfo, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_pageInfo, put = __cordl_internal_set_pageInfo)) ::ArrayW<::TMPro::TMP_PageInfo, ::Array<::TMPro::TMP_PageInfo>*> pageInfo;

  /// @brief Field spaceCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_spaceCount, put = __cordl_internal_set_spaceCount)) int32_t spaceCount;

  /// @brief Field spriteCount, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_spriteCount, put = __cordl_internal_set_spriteCount)) int32_t spriteCount;

  /// @brief Field textComponent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_textComponent, put = __cordl_internal_set_textComponent)) ::UnityW<::TMPro::TMP_Text> textComponent;

  /// @brief Field wordCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_wordCount, put = __cordl_internal_set_wordCount)) int32_t wordCount;

  /// @brief Field wordInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_wordInfo, put = __cordl_internal_set_wordInfo)) ::ArrayW<::TMPro::TMP_WordInfo, ::Array<::TMPro::TMP_WordInfo>*> wordInfo;

  /// @brief Method Clear, addr 0x6785840, size 0x54, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ClearAllData, addr 0x6785894, size 0x13c, virtual false, abstract: false, final false
  inline void ClearAllData();

  /// @brief Method ClearAllMeshInfo, addr 0x6785a8c, size 0xb8, virtual false, abstract: false, final false
  inline void ClearAllMeshInfo();

  /// @brief Method ClearLineInfo, addr 0x6785cbc, size 0x188, virtual false, abstract: false, final false
  inline void ClearLineInfo();

  /// @brief Method ClearMeshInfo, addr 0x67859d0, size 0xbc, virtual false, abstract: false, final false
  inline void ClearMeshInfo(bool updateMesh);

  /// @brief Method ClearPageInfo, addr 0x6785e44, size 0x9c, virtual false, abstract: false, final false
  inline void ClearPageInfo();

  /// @brief Method ClearUnusedVertices, addr 0x6785c04, size 0xb8, virtual false, abstract: false, final false
  inline void ClearUnusedVertices(::ArrayW<::TMPro::MaterialReference, ::Array<::TMPro::MaterialReference>*> materials);

  /// @brief Method CopyMeshInfoVertexData, addr 0x6785ee0, size 0x400, virtual false, abstract: false, final false
  inline ::ArrayW<::TMPro::TMP_MeshInfo, ::Array<::TMPro::TMP_MeshInfo>*> CopyMeshInfoVertexData();

  static inline ::TMPro::TMP_TextInfo* New_ctor();

  static inline ::TMPro::TMP_TextInfo* New_ctor(int32_t characterCount);

  static inline ::TMPro::TMP_TextInfo* New_ctor(::TMPro::TMP_Text* textComponent);

  /// @brief Method ResetVertexLayout, addr 0x6785b44, size 0xc0, virtual false, abstract: false, final false
  inline void ResetVertexLayout(bool isVolumetric);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Resize(::ByRef<::ArrayW<T, ::Array<T>*>> array, int32_t size);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Resize(::ByRef<::ArrayW<T, ::Array<T>*>> array, int32_t size, bool isBlockAllocated);

  constexpr int32_t const& __cordl_internal_get_characterCount() const;

  constexpr int32_t& __cordl_internal_get_characterCount();

  constexpr ::ArrayW<::TMPro::TMP_CharacterInfo, ::Array<::TMPro::TMP_CharacterInfo>*> const& __cordl_internal_get_characterInfo() const;

  constexpr ::ArrayW<::TMPro::TMP_CharacterInfo, ::Array<::TMPro::TMP_CharacterInfo>*>& __cordl_internal_get_characterInfo();

  constexpr int32_t const& __cordl_internal_get_lineCount() const;

  constexpr int32_t& __cordl_internal_get_lineCount();

  constexpr ::ArrayW<::TMPro::TMP_LineInfo, ::Array<::TMPro::TMP_LineInfo>*> const& __cordl_internal_get_lineInfo() const;

  constexpr ::ArrayW<::TMPro::TMP_LineInfo, ::Array<::TMPro::TMP_LineInfo>*>& __cordl_internal_get_lineInfo();

  constexpr int32_t const& __cordl_internal_get_linkCount() const;

  constexpr int32_t& __cordl_internal_get_linkCount();

  constexpr ::ArrayW<::TMPro::TMP_LinkInfo, ::Array<::TMPro::TMP_LinkInfo>*> const& __cordl_internal_get_linkInfo() const;

  constexpr ::ArrayW<::TMPro::TMP_LinkInfo, ::Array<::TMPro::TMP_LinkInfo>*>& __cordl_internal_get_linkInfo();

  constexpr ::ArrayW<::TMPro::TMP_MeshInfo, ::Array<::TMPro::TMP_MeshInfo>*> const& __cordl_internal_get_m_CachedMeshInfo() const;

  constexpr ::ArrayW<::TMPro::TMP_MeshInfo, ::Array<::TMPro::TMP_MeshInfo>*>& __cordl_internal_get_m_CachedMeshInfo();

  constexpr int32_t const& __cordl_internal_get_materialCount() const;

  constexpr int32_t& __cordl_internal_get_materialCount();

  constexpr ::ArrayW<::TMPro::TMP_MeshInfo, ::Array<::TMPro::TMP_MeshInfo>*> const& __cordl_internal_get_meshInfo() const;

  constexpr ::ArrayW<::TMPro::TMP_MeshInfo, ::Array<::TMPro::TMP_MeshInfo>*>& __cordl_internal_get_meshInfo();

  constexpr int32_t const& __cordl_internal_get_pageCount() const;

  constexpr int32_t& __cordl_internal_get_pageCount();

  constexpr ::ArrayW<::TMPro::TMP_PageInfo, ::Array<::TMPro::TMP_PageInfo>*> const& __cordl_internal_get_pageInfo() const;

  constexpr ::ArrayW<::TMPro::TMP_PageInfo, ::Array<::TMPro::TMP_PageInfo>*>& __cordl_internal_get_pageInfo();

  constexpr int32_t const& __cordl_internal_get_spaceCount() const;

  constexpr int32_t& __cordl_internal_get_spaceCount();

  constexpr int32_t const& __cordl_internal_get_spriteCount() const;

  constexpr int32_t& __cordl_internal_get_spriteCount();

  constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_textComponent() const;

  constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_textComponent();

  constexpr int32_t const& __cordl_internal_get_wordCount() const;

  constexpr int32_t& __cordl_internal_get_wordCount();

  constexpr ::ArrayW<::TMPro::TMP_WordInfo, ::Array<::TMPro::TMP_WordInfo>*> const& __cordl_internal_get_wordInfo() const;

  constexpr ::ArrayW<::TMPro::TMP_WordInfo, ::Array<::TMPro::TMP_WordInfo>*>& __cordl_internal_get_wordInfo();

  constexpr void __cordl_internal_set_characterCount(int32_t value);

  constexpr void __cordl_internal_set_characterInfo(::ArrayW<::TMPro::TMP_CharacterInfo, ::Array<::TMPro::TMP_CharacterInfo>*> value);

  constexpr void __cordl_internal_set_lineCount(int32_t value);

  constexpr void __cordl_internal_set_lineInfo(::ArrayW<::TMPro::TMP_LineInfo, ::Array<::TMPro::TMP_LineInfo>*> value);

  constexpr void __cordl_internal_set_linkCount(int32_t value);

  constexpr void __cordl_internal_set_linkInfo(::ArrayW<::TMPro::TMP_LinkInfo, ::Array<::TMPro::TMP_LinkInfo>*> value);

  constexpr void __cordl_internal_set_m_CachedMeshInfo(::ArrayW<::TMPro::TMP_MeshInfo, ::Array<::TMPro::TMP_MeshInfo>*> value);

  constexpr void __cordl_internal_set_materialCount(int32_t value);

  constexpr void __cordl_internal_set_meshInfo(::ArrayW<::TMPro::TMP_MeshInfo, ::Array<::TMPro::TMP_MeshInfo>*> value);

  constexpr void __cordl_internal_set_pageCount(int32_t value);

  constexpr void __cordl_internal_set_pageInfo(::ArrayW<::TMPro::TMP_PageInfo, ::Array<::TMPro::TMP_PageInfo>*> value);

  constexpr void __cordl_internal_set_spaceCount(int32_t value);

  constexpr void __cordl_internal_set_spriteCount(int32_t value);

  constexpr void __cordl_internal_set_textComponent(::UnityW<::TMPro::TMP_Text> value);

  constexpr void __cordl_internal_set_wordCount(int32_t value);

  constexpr void __cordl_internal_set_wordInfo(::ArrayW<::TMPro::TMP_WordInfo, ::Array<::TMPro::TMP_WordInfo>*> value);

  /// @brief Method .ctor, addr 0x6785458, size 0x130, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6785588, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(int32_t characterCount);

  /// @brief Method .ctor, addr 0x67856c4, size 0x17c, virtual false, abstract: false, final false
  inline void _ctor(::TMPro::TMP_Text* textComponent);

  static inline ::UnityEngine::Vector2 getStaticF_k_InfinityVectorNegative();

  static inline ::UnityEngine::Vector2 getStaticF_k_InfinityVectorPositive();

  static inline void setStaticF_k_InfinityVectorNegative(::UnityEngine::Vector2 value);

  static inline void setStaticF_k_InfinityVectorPositive(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_TextInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMP_TextInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_TextInfo(TMP_TextInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_TextInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_TextInfo(TMP_TextInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15967 };

  /// @brief Field textComponent, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Text> ___textComponent;

  /// @brief Field characterCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___characterCount;

  /// @brief Field spriteCount, offset: 0x1c, size: 0x4, def value: None
  int32_t ___spriteCount;

  /// @brief Field spaceCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___spaceCount;

  /// @brief Field wordCount, offset: 0x24, size: 0x4, def value: None
  int32_t ___wordCount;

  /// @brief Field linkCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___linkCount;

  /// @brief Field lineCount, offset: 0x2c, size: 0x4, def value: None
  int32_t ___lineCount;

  /// @brief Field pageCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___pageCount;

  /// @brief Field materialCount, offset: 0x34, size: 0x4, def value: None
  int32_t ___materialCount;

  /// @brief Field characterInfo, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::TMPro::TMP_CharacterInfo, ::Array<::TMPro::TMP_CharacterInfo>*> ___characterInfo;

  /// @brief Field wordInfo, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::TMPro::TMP_WordInfo, ::Array<::TMPro::TMP_WordInfo>*> ___wordInfo;

  /// @brief Field linkInfo, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::TMPro::TMP_LinkInfo, ::Array<::TMPro::TMP_LinkInfo>*> ___linkInfo;

  /// @brief Field lineInfo, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::TMPro::TMP_LineInfo, ::Array<::TMPro::TMP_LineInfo>*> ___lineInfo;

  /// @brief Field pageInfo, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::TMPro::TMP_PageInfo, ::Array<::TMPro::TMP_PageInfo>*> ___pageInfo;

  /// @brief Field meshInfo, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::TMPro::TMP_MeshInfo, ::Array<::TMPro::TMP_MeshInfo>*> ___meshInfo;

  /// @brief Field m_CachedMeshInfo, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::TMPro::TMP_MeshInfo, ::Array<::TMPro::TMP_MeshInfo>*> ___m_CachedMeshInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_TextInfo, ___textComponent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextInfo, ___characterCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextInfo, ___spriteCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextInfo, ___spaceCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextInfo, ___wordCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextInfo, ___linkCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextInfo, ___lineCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextInfo, ___pageCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextInfo, ___materialCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextInfo, ___characterInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextInfo, ___wordInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextInfo, ___linkInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextInfo, ___lineInfo) == 0x50, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextInfo, ___pageInfo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextInfo, ___meshInfo) == 0x60, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_TextInfo, ___m_CachedMeshInfo) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_TextInfo, 0x70>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_TextInfo);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_TextInfo*, "TMPro", "TMP_TextInfo");
