#pragma once
// IWYU pragma private; include "UnityEngine/GUILayoutUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GUILayoutUtility)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Type;
}
namespace UnityEngineInternal {
class GenericStack;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GUILayoutGroup;
}
namespace UnityEngine {
class GUILayoutOption;
}
namespace UnityEngine {
class GUILayoutUtility_LayoutCache;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine {
class GUILayoutUtility;
}
namespace UnityEngine {
class GUILayoutUtility_LayoutCache;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUILayoutUtility);
MARK_REF_PTR_T(::UnityEngine::GUILayoutUtility_LayoutCache);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUILayoutUtility/LayoutCache
class CORDL_TYPE GUILayoutUtility_LayoutCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field <id>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__id_k__BackingField, put = __cordl_internal_set__id_k__BackingField)) int32_t _id_k__BackingField;

  __declspec(property(put = set_id)) int32_t id;

  /// @brief Field layoutGroups, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_layoutGroups, put = __cordl_internal_set_layoutGroups)) ::UnityEngineInternal::GenericStack* layoutGroups;

  /// @brief Field topLevel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_topLevel, put = __cordl_internal_set_topLevel)) ::UnityEngine::GUILayoutGroup* topLevel;

  /// @brief Field windows, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_windows, put = __cordl_internal_set_windows)) ::UnityEngine::GUILayoutGroup* windows;

  static inline ::UnityEngine::GUILayoutUtility_LayoutCache* New_ctor(int32_t instanceID);

  /// @brief Method ResetCursor, addr 0x697c4bc, size 0x2c0, virtual false, abstract: false, final false
  inline void ResetCursor();

  constexpr int32_t const& __cordl_internal_get__id_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__id_k__BackingField();

  constexpr ::UnityEngineInternal::GenericStack* const& __cordl_internal_get_layoutGroups() const;

  constexpr ::UnityEngineInternal::GenericStack*& __cordl_internal_get_layoutGroups();

  constexpr ::UnityEngine::GUILayoutGroup* const& __cordl_internal_get_topLevel() const;

  constexpr ::UnityEngine::GUILayoutGroup*& __cordl_internal_get_topLevel();

  constexpr ::UnityEngine::GUILayoutGroup* const& __cordl_internal_get_windows() const;

  constexpr ::UnityEngine::GUILayoutGroup*& __cordl_internal_get_windows();

  constexpr void __cordl_internal_set__id_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_layoutGroups(::UnityEngineInternal::GenericStack* value);

  constexpr void __cordl_internal_set_topLevel(::UnityEngine::GUILayoutGroup* value);

  constexpr void __cordl_internal_set_windows(::UnityEngine::GUILayoutGroup* value);

  /// @brief Method .ctor, addr 0x697a8f8, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(int32_t instanceID);

  /// @brief Method set_id, addr 0x697c4b4, size 0x8, virtual false, abstract: false, final false
  inline void set_id(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUILayoutUtility_LayoutCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GUILayoutUtility_LayoutCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUILayoutUtility_LayoutCache(GUILayoutUtility_LayoutCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUILayoutUtility_LayoutCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUILayoutUtility_LayoutCache(GUILayoutUtility_LayoutCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19598 };

  /// @brief Field <id>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____id_k__BackingField;

  /// @brief Field topLevel, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GUILayoutGroup* ___topLevel;

  /// @brief Field layoutGroups, offset: 0x20, size: 0x8, def value: None
  ::UnityEngineInternal::GenericStack* ___layoutGroups;

  /// @brief Field windows, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GUILayoutGroup* ___windows;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GUILayoutUtility_LayoutCache, ____id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutUtility_LayoutCache, ___topLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutUtility_LayoutCache, ___layoutGroups) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUILayoutUtility_LayoutCache, ___windows) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::GUILayoutUtility_LayoutCache, 0x30>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object, UnityEngine.Rect
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUILayoutUtility
class CORDL_TYPE GUILayoutUtility : public ::System::Object {
public:
  // Declarations
  using LayoutCache = ::UnityEngine::GUILayoutUtility_LayoutCache;

  /// @brief Field <unbalancedgroupscount>k__BackingField, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__unbalancedgroupscount_k__BackingField, put = setStaticF__unbalancedgroupscount_k__BackingField)) int32_t _unbalancedgroupscount_k__BackingField;

  /// @brief Field current, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_current, put = setStaticF_current)) ::UnityEngine::GUILayoutUtility_LayoutCache* current;

  /// @brief Field kDummyRect, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_kDummyRect, put = setStaticF_kDummyRect)) ::UnityEngine::Rect kDummyRect;

  /// @brief Field s_SpaceStyle, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SpaceStyle, put = setStaticF_s_SpaceStyle)) ::UnityEngine::GUIStyle* s_SpaceStyle;

  /// @brief Field s_StoredLayouts, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_StoredLayouts,
                      put = setStaticF_s_StoredLayouts)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::GUILayoutUtility_LayoutCache*>* s_StoredLayouts;

  /// @brief Field s_StoredWindows, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_StoredWindows,
                      put = setStaticF_s_StoredWindows)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::GUILayoutUtility_LayoutCache*>* s_StoredWindows;

  /// @brief Method Begin, addr 0x697aabc, size 0x1b0, virtual false, abstract: false, final false
  static inline void Begin(int32_t instanceID);

  /// @brief Method BeginContainer, addr 0x697ad80, size 0x13c, virtual false, abstract: false, final false
  static inline void BeginContainer(::UnityEngine::GUILayoutUtility_LayoutCache* cache);

  /// @brief Method BeginLayoutArea, addr 0x697a010, size 0x308, virtual false, abstract: false, final false
  static inline ::UnityEngine::GUILayoutGroup* BeginLayoutArea(::UnityEngine::GUIStyle* style, ::System::Type* layoutType);

  /// @brief Method BeginLayoutGroup, addr 0x69794fc, size 0x340, virtual false, abstract: false, final false
  static inline ::UnityEngine::GUILayoutGroup* BeginLayoutGroup(::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options,
                                                                ::System::Type* layoutType);

  /// @brief Method BeginWindow, addr 0x6977efc, size 0x260, virtual false, abstract: false, final false
  static inline void BeginWindow(int32_t windowID, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method CreateGUILayoutGroupInstanceOfType, addr 0x697b5ec, size 0x140, virtual false, abstract: false, final false
  static inline ::UnityEngine::GUILayoutGroup* CreateGUILayoutGroupInstanceOfType(::System::Type* LayoutType);

  /// @brief Method DoGetRect, addr 0x697bb58, size 0x334, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect DoGetRect(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style,
                                              ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method DoGetRect, addr 0x697c0b0, size 0x19c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect DoGetRect(float_t minWidth, float_t maxWidth, float_t minHeight, float_t maxHeight, ::UnityEngine::GUIStyle* style,
                                              ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method EndLayoutArea, addr 0x697a418, size 0x1ac, virtual false, abstract: false, final false
  static inline void EndLayoutArea();

  /// @brief Method EndLayoutGroup, addr 0x6979acc, size 0x2b0, virtual false, abstract: false, final false
  static inline void EndLayoutGroup();

  /// @brief Method GetLayoutCache, addr 0x697a838, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::GUILayoutUtility_LayoutCache* GetLayoutCache(int32_t instanceID, bool isWindow);

  /// @brief Method GetRect, addr 0x6978ec8, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect GetRect(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style,
                                            ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method GetRect, addr 0x6979234, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect GetRect(float_t width, float_t height, ::UnityEngine::GUIStyle* style,
                                            ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method Internal_GetWindowRect, addr 0x697a5d0, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect Internal_GetWindowRect(int32_t windowID);

  /// @brief Method Internal_GetWindowRect_Injected, addr 0x697a664, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_GetWindowRect_Injected(int32_t windowID, ::ByRef<::UnityEngine::Rect> ret);

  /// @brief Method Internal_MoveWindow, addr 0x697a6a8, size 0x90, virtual false, abstract: false, final false
  static inline void Internal_MoveWindow(int32_t windowID, ::UnityEngine::Rect r);

  /// @brief Method Internal_MoveWindow_Injected, addr 0x697a738, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_MoveWindow_Injected(int32_t windowID, ::ByRef<::UnityEngine::Rect> r);

  /// @brief Method Layout, addr 0x697815c, size 0x278, virtual false, abstract: false, final false
  static inline void Layout();

  /// @brief Method LayoutFreeGroup, addr 0x697aef4, size 0x188, virtual false, abstract: false, final false
  static inline void LayoutFreeGroup(::UnityEngine::GUILayoutGroup* toplevel);

  /// @brief Method LayoutFromContainer, addr 0x697b44c, size 0x198, virtual false, abstract: false, final false
  static inline void LayoutFromContainer(float_t w, float_t h);

  /// @brief Method LayoutFromEditorWindow, addr 0x697b1f8, size 0x254, virtual false, abstract: false, final false
  static inline void LayoutFromEditorWindow();

  /// @brief Method LayoutSingleGroup, addr 0x697b07c, size 0x17c, virtual false, abstract: false, final false
  static inline void LayoutSingleGroup(::UnityEngine::GUILayoutGroup* i);

  /// @brief Method RemoveSelectedIdList, addr 0x697a9c0, size 0xfc, virtual false, abstract: false, final false
  static inline void RemoveSelectedIdList(int32_t instanceID, bool isWindow);

  /// @brief Method SelectIDList, addr 0x6977ca8, size 0x150, virtual false, abstract: false, final false
  static inline ::UnityEngine::GUILayoutUtility_LayoutCache* SelectIDList(int32_t instanceID, bool isWindow);

  static inline int32_t getStaticF__unbalancedgroupscount_k__BackingField();

  static inline ::UnityEngine::GUILayoutUtility_LayoutCache* getStaticF_current();

  static inline ::UnityEngine::Rect getStaticF_kDummyRect();

  static inline ::UnityEngine::GUIStyle* getStaticF_s_SpaceStyle();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::GUILayoutUtility_LayoutCache*>* getStaticF_s_StoredLayouts();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::GUILayoutUtility_LayoutCache*>* getStaticF_s_StoredWindows();

  /// @brief Method get_spaceStyle, addr 0x697915c, size 0xd8, virtual false, abstract: false, final false
  static inline ::UnityEngine::GUIStyle* get_spaceStyle();

  /// @brief Method get_unbalancedgroupscount, addr 0x697a77c, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t get_unbalancedgroupscount();

  static inline void setStaticF__unbalancedgroupscount_k__BackingField(int32_t value);

  static inline void setStaticF_current(::UnityEngine::GUILayoutUtility_LayoutCache* value);

  static inline void setStaticF_kDummyRect(::UnityEngine::Rect value);

  static inline void setStaticF_s_SpaceStyle(::UnityEngine::GUIStyle* value);

  static inline void setStaticF_s_StoredLayouts(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::GUILayoutUtility_LayoutCache*>* value);

  static inline void setStaticF_s_StoredWindows(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::GUILayoutUtility_LayoutCache*>* value);

  /// @brief Method set_unbalancedgroupscount, addr 0x697a7d8, size 0x60, virtual false, abstract: false, final false
  static inline void set_unbalancedgroupscount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUILayoutUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GUILayoutUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUILayoutUtility(GUILayoutUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUILayoutUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUILayoutUtility(GUILayoutUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19599 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUILayoutUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUILayoutUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayoutUtility*, "UnityEngine", "GUILayoutUtility");
NEED_NO_BOX(::UnityEngine::GUILayoutUtility_LayoutCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayoutUtility_LayoutCache*, "UnityEngine", "GUILayoutUtility/LayoutCache");
