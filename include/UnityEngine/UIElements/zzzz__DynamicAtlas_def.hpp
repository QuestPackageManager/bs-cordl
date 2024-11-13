#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DynamicAtlas.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__Allocator2D_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__AtlasBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicAtlasFilters_def.hpp"
#include "UnityEngine/zzzz__ColorSpace_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicAtlas)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class LinkedPool_1;
}
namespace UnityEngine::UIElements {
class DynamicAtlasCustomFilter;
}
namespace UnityEngine::UIElements {
struct DynamicAtlasFilters;
}
namespace UnityEngine::UIElements {
class DynamicAtlasPage;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __DynamicAtlas__TextureInfo;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DynamicAtlas;
}
namespace UnityEngine::UIElements {
class __DynamicAtlas__TextureInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DynamicAtlas);
MARK_REF_PTR_T(::UnityEngine::UIElements::__DynamicAtlas__TextureInfo);
// Type: ::TextureInfo
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::DynamicAtlas::TextureInfo*
class CORDL_TYPE __DynamicAtlas__TextureInfo : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::__DynamicAtlas__TextureInfo*> {
public:
  // Declarations
  /// @brief Field alloc, offset 0x28, size 0x30
  __declspec(property(get = __cordl_internal_get_alloc, put = __cordl_internal_set_alloc)) ::UnityEngine::UIElements::UIR::__Allocator2D__Alloc2D alloc;

  /// @brief Field counter, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_counter, put = __cordl_internal_set_counter)) int32_t counter;

  /// @brief Field page, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_page, put = __cordl_internal_set_page)) ::UnityEngine::UIElements::DynamicAtlasPage* page;

  /// @brief Field pool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_pool, put = setStaticF_pool)) ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::__DynamicAtlas__TextureInfo*>* pool;

  /// @brief Field rect, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_rect, put = __cordl_internal_set_rect)) ::UnityEngine::RectInt rect;

  /// @brief Method Create, addr 0x49092d0, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::__DynamicAtlas__TextureInfo* Create();

  static inline ::UnityEngine::UIElements::__DynamicAtlas__TextureInfo* New_ctor();

  /// @brief Method Reset, addr 0x4909368, size 0x30, virtual false, abstract: false, final false
  static inline void Reset(::UnityEngine::UIElements::__DynamicAtlas__TextureInfo* info);

  constexpr ::UnityEngine::UIElements::UIR::__Allocator2D__Alloc2D const& __cordl_internal_get_alloc() const;

  constexpr ::UnityEngine::UIElements::UIR::__Allocator2D__Alloc2D& __cordl_internal_get_alloc();

  constexpr int32_t const& __cordl_internal_get_counter() const;

  constexpr int32_t& __cordl_internal_get_counter();

  constexpr ::UnityEngine::UIElements::DynamicAtlasPage*& __cordl_internal_get_page();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::DynamicAtlasPage*> const& __cordl_internal_get_page() const;

  constexpr ::UnityEngine::RectInt const& __cordl_internal_get_rect() const;

  constexpr ::UnityEngine::RectInt& __cordl_internal_get_rect();

  constexpr void __cordl_internal_set_alloc(::UnityEngine::UIElements::UIR::__Allocator2D__Alloc2D value);

  constexpr void __cordl_internal_set_counter(int32_t value);

  constexpr void __cordl_internal_set_page(::UnityEngine::UIElements::DynamicAtlasPage* value);

  constexpr void __cordl_internal_set_rect(::UnityEngine::RectInt value);

  /// @brief Method .ctor, addr 0x4909320, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::__DynamicAtlas__TextureInfo*>* getStaticF_pool();

  static inline void setStaticF_pool(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::__DynamicAtlas__TextureInfo*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DynamicAtlas__TextureInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DynamicAtlas__TextureInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DynamicAtlas__TextureInfo(__DynamicAtlas__TextureInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DynamicAtlas__TextureInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DynamicAtlas__TextureInfo(__DynamicAtlas__TextureInfo const&) = delete;

  /// @brief Field page, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::DynamicAtlasPage* ___page;

  /// @brief Field counter, offset: 0x20, size: 0x4, def value: None
  int32_t ___counter;

  /// @brief Field alloc, offset: 0x28, size: 0x30, def value: None
  ::UnityEngine::UIElements::UIR::__Allocator2D__Alloc2D ___alloc;

  /// @brief Field rect, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::RectInt ___rect;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5423 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__DynamicAtlas__TextureInfo, 0x68>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__DynamicAtlas__TextureInfo, ___page) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__DynamicAtlas__TextureInfo, ___counter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__DynamicAtlas__TextureInfo, ___alloc) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__DynamicAtlas__TextureInfo, ___rect) == 0x58, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::DynamicAtlas
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::DynamicAtlas*
class CORDL_TYPE DynamicAtlas : public ::UnityEngine::UIElements::AtlasBase {
public:
  // Declarations
  using TextureInfo = ::UnityEngine::UIElements::__DynamicAtlas__TextureInfo;

  __declspec(property(put = set_activeFilters)) ::UnityEngine::UIElements::DynamicAtlasFilters activeFilters;

  __declspec(property(put = set_customFilter)) ::UnityEngine::UIElements::DynamicAtlasCustomFilter* customFilter;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  /// @brief Field m_ActiveFilters, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ActiveFilters, put = __cordl_internal_set_m_ActiveFilters)) ::UnityEngine::UIElements::DynamicAtlasFilters m_ActiveFilters;

  /// @brief Field m_BilinearPage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BilinearPage, put = __cordl_internal_set_m_BilinearPage)) ::UnityEngine::UIElements::DynamicAtlasPage* m_BilinearPage;

  /// @brief Field m_ColorSpace, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ColorSpace, put = __cordl_internal_set_m_ColorSpace)) ::UnityEngine::ColorSpace m_ColorSpace;

  /// @brief Field m_CustomFilter, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CustomFilter, put = __cordl_internal_set_m_CustomFilter)) ::UnityEngine::UIElements::DynamicAtlasCustomFilter* m_CustomFilter;

  /// @brief Field m_Database, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_Database,
      put = __cordl_internal_set_m_Database)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>, ::UnityEngine::UIElements::__DynamicAtlas__TextureInfo*>* m_Database;

  /// @brief Field m_MaxAtlasSize, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxAtlasSize, put = __cordl_internal_set_m_MaxAtlasSize)) int32_t m_MaxAtlasSize;

  /// @brief Field m_MaxSubTextureSize, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxSubTextureSize, put = __cordl_internal_set_m_MaxSubTextureSize)) int32_t m_MaxSubTextureSize;

  /// @brief Field m_MinAtlasSize, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MinAtlasSize, put = __cordl_internal_set_m_MinAtlasSize)) int32_t m_MinAtlasSize;

  /// @brief Field m_Panels, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Panels, put = __cordl_internal_set_m_Panels)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IPanel*>* m_Panels;

  /// @brief Field m_PointPage, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointPage, put = __cordl_internal_set_m_PointPage)) ::UnityEngine::UIElements::DynamicAtlasPage* m_PointPage;

  __declspec(property(put = set_maxAtlasSize)) int32_t maxAtlasSize;

  __declspec(property(get = get_maxSubTextureSize, put = set_maxSubTextureSize)) int32_t maxSubTextureSize;

  __declspec(property(put = set_minAtlasSize)) int32_t minAtlasSize;

  /// @brief Method DestroyPages, addr 0x4908894, size 0x78, virtual false, abstract: false, final false
  inline void DestroyPages();

  /// @brief Method InitPages, addr 0x49089b8, size 0xfc, virtual false, abstract: false, final false
  inline void InitPages();

  /// @brief Method IsTextureFormatSupported, addr 0x4908fbc, size 0x34, virtual false, abstract: false, final false
  static inline bool IsTextureFormatSupported(::UnityEngine::TextureFormat format);

  /// @brief Method IsTextureValid, addr 0x4908ff0, size 0x138, virtual true, abstract: false, final false
  inline bool IsTextureValid(::UnityEngine::Texture2D* texture, ::UnityEngine::FilterMode atlasFilterMode);

  static inline ::UnityEngine::UIElements::DynamicAtlas* New_ctor();

  /// @brief Method OnAssignedToPanel, addr 0x4908730, size 0xcc, virtual true, abstract: false, final false
  inline void OnAssignedToPanel(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method OnRemovedFromPanel, addr 0x49087fc, size 0x98, virtual true, abstract: false, final false
  inline void OnRemovedFromPanel(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method OnUpdateDynamicTextures, addr 0x4908f54, size 0x68, virtual true, abstract: false, final false
  inline void OnUpdateDynamicTextures(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method Reset, addr 0x490890c, size 0xac, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ReturnAtlas, addr 0x4908e18, size 0x13c, virtual true, abstract: false, final false
  inline void ReturnAtlas(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::Texture2D* src, ::UnityEngine::UIElements::TextureId atlas);

  /// @brief Method TryGetAtlas, addr 0x4908ab4, size 0x364, virtual true, abstract: false, final false
  inline bool TryGetAtlas(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::Texture2D* src, ByRef<::UnityEngine::UIElements::TextureId> atlas, ByRef<::UnityEngine::RectInt> atlasRect);

  constexpr ::UnityEngine::UIElements::DynamicAtlasFilters const& __cordl_internal_get_m_ActiveFilters() const;

  constexpr ::UnityEngine::UIElements::DynamicAtlasFilters& __cordl_internal_get_m_ActiveFilters();

  constexpr ::UnityEngine::UIElements::DynamicAtlasPage*& __cordl_internal_get_m_BilinearPage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::DynamicAtlasPage*> const& __cordl_internal_get_m_BilinearPage() const;

  constexpr ::UnityEngine::ColorSpace const& __cordl_internal_get_m_ColorSpace() const;

  constexpr ::UnityEngine::ColorSpace& __cordl_internal_get_m_ColorSpace();

  constexpr ::UnityEngine::UIElements::DynamicAtlasCustomFilter*& __cordl_internal_get_m_CustomFilter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::DynamicAtlasCustomFilter*> const& __cordl_internal_get_m_CustomFilter() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>, ::UnityEngine::UIElements::__DynamicAtlas__TextureInfo*>*& __cordl_internal_get_m_Database();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>, ::UnityEngine::UIElements::__DynamicAtlas__TextureInfo*>*> const&
  __cordl_internal_get_m_Database() const;

  constexpr int32_t const& __cordl_internal_get_m_MaxAtlasSize() const;

  constexpr int32_t& __cordl_internal_get_m_MaxAtlasSize();

  constexpr int32_t const& __cordl_internal_get_m_MaxSubTextureSize() const;

  constexpr int32_t& __cordl_internal_get_m_MaxSubTextureSize();

  constexpr int32_t const& __cordl_internal_get_m_MinAtlasSize() const;

  constexpr int32_t& __cordl_internal_get_m_MinAtlasSize();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IPanel*>*& __cordl_internal_get_m_Panels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IPanel*>*> const& __cordl_internal_get_m_Panels() const;

  constexpr ::UnityEngine::UIElements::DynamicAtlasPage*& __cordl_internal_get_m_PointPage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::DynamicAtlasPage*> const& __cordl_internal_get_m_PointPage() const;

  constexpr void __cordl_internal_set_m_ActiveFilters(::UnityEngine::UIElements::DynamicAtlasFilters value);

  constexpr void __cordl_internal_set_m_BilinearPage(::UnityEngine::UIElements::DynamicAtlasPage* value);

  constexpr void __cordl_internal_set_m_ColorSpace(::UnityEngine::ColorSpace value);

  constexpr void __cordl_internal_set_m_CustomFilter(::UnityEngine::UIElements::DynamicAtlasCustomFilter* value);

  constexpr void __cordl_internal_set_m_Database(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>, ::UnityEngine::UIElements::__DynamicAtlas__TextureInfo*>* value);

  constexpr void __cordl_internal_set_m_MaxAtlasSize(int32_t value);

  constexpr void __cordl_internal_set_m_MaxSubTextureSize(int32_t value);

  constexpr void __cordl_internal_set_m_MinAtlasSize(int32_t value);

  constexpr void __cordl_internal_set_m_Panels(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IPanel*>* value);

  constexpr void __cordl_internal_set_m_PointPage(::UnityEngine::UIElements::DynamicAtlasPage* value);

  /// @brief Method .ctor, addr 0x4909200, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_defaultFilters, addr 0x4909170, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::DynamicAtlasFilters get_defaultFilters();

  /// @brief Method get_isInitialized, addr 0x4908710, size 0x20, virtual false, abstract: false, final false
  inline bool get_isInitialized();

  /// @brief Method get_maxSubTextureSize, addr 0x4909128, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxSubTextureSize();

  /// @brief Method set_activeFilters, addr 0x4909178, size 0x20, virtual false, abstract: false, final false
  inline void set_activeFilters(::UnityEngine::UIElements::DynamicAtlasFilters value);

  /// @brief Method set_customFilter, addr 0x49091b8, size 0x48, virtual false, abstract: false, final false
  inline void set_customFilter(::UnityEngine::UIElements::DynamicAtlasCustomFilter* value);

  /// @brief Method set_maxAtlasSize, addr 0x4909150, size 0x20, virtual false, abstract: false, final false
  inline void set_maxAtlasSize(int32_t value);

  /// @brief Method set_maxSubTextureSize, addr 0x4909198, size 0x20, virtual false, abstract: false, final false
  inline void set_maxSubTextureSize(int32_t value);

  /// @brief Method set_minAtlasSize, addr 0x4909130, size 0x20, virtual false, abstract: false, final false
  inline void set_minAtlasSize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicAtlas();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicAtlas", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicAtlas(DynamicAtlas&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicAtlas", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicAtlas(DynamicAtlas const&) = delete;

  /// @brief Field m_Database, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>, ::UnityEngine::UIElements::__DynamicAtlas__TextureInfo*>* ___m_Database;

  /// @brief Field m_PointPage, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::DynamicAtlasPage* ___m_PointPage;

  /// @brief Field m_BilinearPage, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::DynamicAtlasPage* ___m_BilinearPage;

  /// @brief Field m_ColorSpace, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::ColorSpace ___m_ColorSpace;

  /// @brief Field m_Panels, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IPanel*>* ___m_Panels;

  /// @brief Field m_MinAtlasSize, offset: 0x40, size: 0x4, def value: None
  int32_t ___m_MinAtlasSize;

  /// @brief Field m_MaxAtlasSize, offset: 0x44, size: 0x4, def value: None
  int32_t ___m_MaxAtlasSize;

  /// @brief Field m_MaxSubTextureSize, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_MaxSubTextureSize;

  /// @brief Field m_ActiveFilters, offset: 0x4c, size: 0x4, def value: None
  ::UnityEngine::UIElements::DynamicAtlasFilters ___m_ActiveFilters;

  /// @brief Field m_CustomFilter, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::DynamicAtlasCustomFilter* ___m_CustomFilter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5424 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DynamicAtlas, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlas, ___m_Database) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlas, ___m_PointPage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlas, ___m_BilinearPage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlas, ___m_ColorSpace) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlas, ___m_Panels) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlas, ___m_MinAtlasSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlas, ___m_MaxAtlasSize) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlas, ___m_MaxSubTextureSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlas, ___m_ActiveFilters) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlas, ___m_CustomFilter) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DynamicAtlas);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DynamicAtlas*, "UnityEngine.UIElements", "DynamicAtlas");
NEED_NO_BOX(::UnityEngine::UIElements::__DynamicAtlas__TextureInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__DynamicAtlas__TextureInfo*, "UnityEngine.UIElements", "DynamicAtlas/TextureInfo");
