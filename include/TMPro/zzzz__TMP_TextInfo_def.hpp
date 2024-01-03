#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_TextInfo)
namespace TMPro {
class TMP_Text;
}
namespace TMPro {
struct TMP_PageInfo;
}
namespace TMPro {
struct TMP_MeshInfo;
}
namespace TMPro {
struct TMP_CharacterInfo;
}
namespace TMPro {
struct MaterialReference;
}
namespace TMPro {
struct TMP_WordInfo;
}
namespace TMPro {
struct TMP_LinkInfo;
}
namespace TMPro {
struct TMP_LineInfo;
}
// Forward declare root types
namespace TMPro {
class TMP_TextInfo;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_TextInfo);
// Type: TMPro::TMP_TextInfo
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12450))
// CS Name: ::TMPro::TMP_TextInfo*
class CORDL_TYPE TMP_TextInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field textComponent, offset 0x10, size 0x8
  __declspec(property(get = __get_textComponent, put = __set_textComponent))::TMPro::TMP_Text* textComponent;

  /// @brief Field characterCount, offset 0x18, size 0x4
  __declspec(property(get = __get_characterCount, put = __set_characterCount)) int32_t characterCount;

  /// @brief Field spriteCount, offset 0x1c, size 0x4
  __declspec(property(get = __get_spriteCount, put = __set_spriteCount)) int32_t spriteCount;

  /// @brief Field spaceCount, offset 0x20, size 0x4
  __declspec(property(get = __get_spaceCount, put = __set_spaceCount)) int32_t spaceCount;

  /// @brief Field wordCount, offset 0x24, size 0x4
  __declspec(property(get = __get_wordCount, put = __set_wordCount)) int32_t wordCount;

  /// @brief Field linkCount, offset 0x28, size 0x4
  __declspec(property(get = __get_linkCount, put = __set_linkCount)) int32_t linkCount;

  /// @brief Field lineCount, offset 0x2c, size 0x4
  __declspec(property(get = __get_lineCount, put = __set_lineCount)) int32_t lineCount;

  /// @brief Field pageCount, offset 0x30, size 0x4
  __declspec(property(get = __get_pageCount, put = __set_pageCount)) int32_t pageCount;

  /// @brief Field materialCount, offset 0x34, size 0x4
  __declspec(property(get = __get_materialCount, put = __set_materialCount)) int32_t materialCount;

  /// @brief Field characterInfo, offset 0x38, size 0x8
  __declspec(property(get = __get_characterInfo, put = __set_characterInfo))::ArrayW<::TMPro::TMP_CharacterInfo, ::Array<::TMPro::TMP_CharacterInfo>*> characterInfo;

  /// @brief Field wordInfo, offset 0x40, size 0x8
  __declspec(property(get = __get_wordInfo, put = __set_wordInfo))::ArrayW<::TMPro::TMP_WordInfo, ::Array<::TMPro::TMP_WordInfo>*> wordInfo;

  /// @brief Field linkInfo, offset 0x48, size 0x8
  __declspec(property(get = __get_linkInfo, put = __set_linkInfo))::ArrayW<::TMPro::TMP_LinkInfo, ::Array<::TMPro::TMP_LinkInfo>*> linkInfo;

  /// @brief Field lineInfo, offset 0x50, size 0x8
  __declspec(property(get = __get_lineInfo, put = __set_lineInfo))::ArrayW<::TMPro::TMP_LineInfo, ::Array<::TMPro::TMP_LineInfo>*> lineInfo;

  /// @brief Field pageInfo, offset 0x58, size 0x8
  __declspec(property(get = __get_pageInfo, put = __set_pageInfo))::ArrayW<::TMPro::TMP_PageInfo, ::Array<::TMPro::TMP_PageInfo>*> pageInfo;

  /// @brief Field meshInfo, offset 0x60, size 0x8
  __declspec(property(get = __get_meshInfo, put = __set_meshInfo))::ArrayW<::TMPro::TMP_MeshInfo, ::Array<::TMPro::TMP_MeshInfo>*> meshInfo;

  /// @brief Field m_CachedMeshInfo, offset 0x68, size 0x8
  __declspec(property(get = __get_m_CachedMeshInfo, put = __set_m_CachedMeshInfo))::ArrayW<::TMPro::TMP_MeshInfo, ::Array<::TMPro::TMP_MeshInfo>*> m_CachedMeshInfo;

  /// @brief Field k_InfinityVectorPositive, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_InfinityVectorPositive, put = setStaticF_k_InfinityVectorPositive))::UnityEngine::Vector2 k_InfinityVectorPositive;

  /// @brief Field k_InfinityVectorNegative, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_InfinityVectorNegative, put = setStaticF_k_InfinityVectorNegative))::UnityEngine::Vector2 k_InfinityVectorNegative;

  constexpr ::TMPro::TMP_Text*& __get_textComponent();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_Text*> const& __get_textComponent() const;

  constexpr void __set_textComponent(::TMPro::TMP_Text* value);

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

  constexpr ::ArrayW<::TMPro::TMP_CharacterInfo, ::Array<::TMPro::TMP_CharacterInfo>*>& __get_characterInfo();

  constexpr ::ArrayW<::TMPro::TMP_CharacterInfo, ::Array<::TMPro::TMP_CharacterInfo>*> const& __get_characterInfo() const;

  constexpr void __set_characterInfo(::ArrayW<::TMPro::TMP_CharacterInfo, ::Array<::TMPro::TMP_CharacterInfo>*> value);

  constexpr ::ArrayW<::TMPro::TMP_WordInfo, ::Array<::TMPro::TMP_WordInfo>*>& __get_wordInfo();

  constexpr ::ArrayW<::TMPro::TMP_WordInfo, ::Array<::TMPro::TMP_WordInfo>*> const& __get_wordInfo() const;

  constexpr void __set_wordInfo(::ArrayW<::TMPro::TMP_WordInfo, ::Array<::TMPro::TMP_WordInfo>*> value);

  constexpr ::ArrayW<::TMPro::TMP_LinkInfo, ::Array<::TMPro::TMP_LinkInfo>*>& __get_linkInfo();

  constexpr ::ArrayW<::TMPro::TMP_LinkInfo, ::Array<::TMPro::TMP_LinkInfo>*> const& __get_linkInfo() const;

  constexpr void __set_linkInfo(::ArrayW<::TMPro::TMP_LinkInfo, ::Array<::TMPro::TMP_LinkInfo>*> value);

  constexpr ::ArrayW<::TMPro::TMP_LineInfo, ::Array<::TMPro::TMP_LineInfo>*>& __get_lineInfo();

  constexpr ::ArrayW<::TMPro::TMP_LineInfo, ::Array<::TMPro::TMP_LineInfo>*> const& __get_lineInfo() const;

  constexpr void __set_lineInfo(::ArrayW<::TMPro::TMP_LineInfo, ::Array<::TMPro::TMP_LineInfo>*> value);

  constexpr ::ArrayW<::TMPro::TMP_PageInfo, ::Array<::TMPro::TMP_PageInfo>*>& __get_pageInfo();

  constexpr ::ArrayW<::TMPro::TMP_PageInfo, ::Array<::TMPro::TMP_PageInfo>*> const& __get_pageInfo() const;

  constexpr void __set_pageInfo(::ArrayW<::TMPro::TMP_PageInfo, ::Array<::TMPro::TMP_PageInfo>*> value);

  constexpr ::ArrayW<::TMPro::TMP_MeshInfo, ::Array<::TMPro::TMP_MeshInfo>*>& __get_meshInfo();

  constexpr ::ArrayW<::TMPro::TMP_MeshInfo, ::Array<::TMPro::TMP_MeshInfo>*> const& __get_meshInfo() const;

  constexpr void __set_meshInfo(::ArrayW<::TMPro::TMP_MeshInfo, ::Array<::TMPro::TMP_MeshInfo>*> value);

  constexpr ::ArrayW<::TMPro::TMP_MeshInfo, ::Array<::TMPro::TMP_MeshInfo>*>& __get_m_CachedMeshInfo();

  constexpr ::ArrayW<::TMPro::TMP_MeshInfo, ::Array<::TMPro::TMP_MeshInfo>*> const& __get_m_CachedMeshInfo() const;

  constexpr void __set_m_CachedMeshInfo(::ArrayW<::TMPro::TMP_MeshInfo, ::Array<::TMPro::TMP_MeshInfo>*> value);

  static inline void setStaticF_k_InfinityVectorPositive(::UnityEngine::Vector2 value);

  static inline ::UnityEngine::Vector2 getStaticF_k_InfinityVectorPositive();

  static inline void setStaticF_k_InfinityVectorNegative(::UnityEngine::Vector2 value);

  static inline ::UnityEngine::Vector2 getStaticF_k_InfinityVectorNegative();

  static inline ::TMPro::TMP_TextInfo* New_ctor();

  /// @brief Method .ctor, addr 0x2c47e48, size 0x128, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::TMPro::TMP_TextInfo* New_ctor(int32_t characterCount);

  /// @brief Method .ctor, addr 0x2c47f70, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(int32_t characterCount);

  static inline ::TMPro::TMP_TextInfo* New_ctor(::TMPro::TMP_Text* textComponent);

  /// @brief Method .ctor, addr 0x2c4809c, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor(::TMPro::TMP_Text* textComponent);

  /// @brief Method Clear, addr 0x2c48208, size 0x5c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ClearAllData, addr 0x2c48264, size 0x12c, virtual false, abstract: false, final false
  inline void ClearAllData();

  /// @brief Method ClearMeshInfo, addr 0x2c48390, size 0x70, virtual false, abstract: false, final false
  inline void ClearMeshInfo(bool updateMesh);

  /// @brief Method ClearAllMeshInfo, addr 0x2c48400, size 0x64, virtual false, abstract: false, final false
  inline void ClearAllMeshInfo();

  /// @brief Method ResetVertexLayout, addr 0x2c48464, size 0x74, virtual false, abstract: false, final false
  inline void ResetVertexLayout(bool isVolumetric);

  /// @brief Method ClearUnusedVertices, addr 0x2c484d8, size 0x64, virtual false, abstract: false, final false
  inline void ClearUnusedVertices(::ArrayW<::TMPro::MaterialReference, ::Array<::TMPro::MaterialReference>*> materials);

  /// @brief Method ClearLineInfo, addr 0x2c4853c, size 0x180, virtual false, abstract: false, final false
  inline void ClearLineInfo();

  /// @brief Method ClearPageInfo, addr 0x2c486bc, size 0x98, virtual false, abstract: false, final false
  inline void ClearPageInfo();

  /// @brief Method CopyMeshInfoVertexData, addr 0x2c48754, size 0x3c8, virtual false, abstract: false, final false
  inline ::ArrayW<::TMPro::TMP_MeshInfo, ::Array<::TMPro::TMP_MeshInfo>*> CopyMeshInfoVertexData();

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Resize(ByRef<::ArrayW<T, ::Array<T>*>> array, int32_t size);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Resize(ByRef<::ArrayW<T, ::Array<T>*>> array, int32_t size, bool isBlockAllocated);

  // Ctor Parameters [CppParam { name: "", ty: "TMP_TextInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_TextInfo(TMP_TextInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_TextInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_TextInfo(TMP_TextInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_TextInfo();

public:
  /// @brief Field textComponent, offset: 0x10, size: 0x8, def value: None
  ::TMPro::TMP_Text* ___textComponent;

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
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_TextInfo, 0x70>, "Size mismatch!");

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

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_TextInfo);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_TextInfo*, "TMPro", "TMP_TextInfo");
