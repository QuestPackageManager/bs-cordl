#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GUILayoutUtility)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngineInternal {
class GenericStack;
}
namespace UnityEngine {
class GUILayoutGroup;
}
namespace UnityEngine {
class GUILayoutOption;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class __GUILayoutUtility__LayoutCache;
}
// Forward declare root types
namespace UnityEngine {
class GUILayoutUtility;
}
namespace UnityEngine {
class __GUILayoutUtility__LayoutCache;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUILayoutUtility);
MARK_REF_PTR_T(::UnityEngine::__GUILayoutUtility__LayoutCache);
// Type: ::LayoutCache
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::GUILayoutUtility::LayoutCache*
class CORDL_TYPE __GUILayoutUtility__LayoutCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field <id>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__id_k__BackingField, put = __cordl_internal_set__id_k__BackingField)) int32_t _id_k__BackingField;

  __declspec(property(put = set_id)) int32_t id;

  /// @brief Field layoutGroups, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_layoutGroups, put = __cordl_internal_set_layoutGroups))::UnityEngineInternal::GenericStack* layoutGroups;

  /// @brief Field topLevel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_topLevel, put = __cordl_internal_set_topLevel))::UnityEngine::GUILayoutGroup* topLevel;

  /// @brief Field windows, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_windows, put = __cordl_internal_set_windows))::UnityEngine::GUILayoutGroup* windows;

  static inline ::UnityEngine::__GUILayoutUtility__LayoutCache* New_ctor(int32_t instanceID);

  /// @brief Method ResetCursor, addr 0x323cd70, size 0x2e0, virtual false, abstract: false, final false
  inline void ResetCursor();

  constexpr int32_t const& __cordl_internal_get__id_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__id_k__BackingField();

  constexpr ::UnityEngineInternal::GenericStack*& __cordl_internal_get_layoutGroups();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngineInternal::GenericStack*> const& __cordl_internal_get_layoutGroups() const;

  constexpr ::UnityEngine::GUILayoutGroup*& __cordl_internal_get_topLevel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUILayoutGroup*> const& __cordl_internal_get_topLevel() const;

  constexpr ::UnityEngine::GUILayoutGroup*& __cordl_internal_get_windows();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUILayoutGroup*> const& __cordl_internal_get_windows() const;

  constexpr void __cordl_internal_set__id_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_layoutGroups(::UnityEngineInternal::GenericStack* value);

  constexpr void __cordl_internal_set_topLevel(::UnityEngine::GUILayoutGroup* value);

  constexpr void __cordl_internal_set_windows(::UnityEngine::GUILayoutGroup* value);

  /// @brief Method .ctor, addr 0x323bff8, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(int32_t instanceID);

  /// @brief Method set_id, addr 0x323cd68, size 0x8, virtual false, abstract: false, final false
  inline void set_id(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GUILayoutUtility__LayoutCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GUILayoutUtility__LayoutCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GUILayoutUtility__LayoutCache(__GUILayoutUtility__LayoutCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GUILayoutUtility__LayoutCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GUILayoutUtility__LayoutCache(__GUILayoutUtility__LayoutCache const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::UnityEngine::__GUILayoutUtility__LayoutCache, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__GUILayoutUtility__LayoutCache, ____id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__GUILayoutUtility__LayoutCache, ___topLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__GUILayoutUtility__LayoutCache, ___layoutGroups) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::__GUILayoutUtility__LayoutCache, ___windows) == 0x28, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::GUILayoutUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::GUILayoutUtility*
class CORDL_TYPE GUILayoutUtility : public ::System::Object {
public:
  // Declarations
  using LayoutCache = ::UnityEngine::__GUILayoutUtility__LayoutCache;

  /// @brief Field current, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_current, put = setStaticF_current))::UnityEngine::__GUILayoutUtility__LayoutCache* current;

  /// @brief Field kDummyRect, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_kDummyRect, put = setStaticF_kDummyRect))::UnityEngine::Rect kDummyRect;

  /// @brief Field s_StoredLayouts, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_StoredLayouts,
                             put = setStaticF_s_StoredLayouts))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::__GUILayoutUtility__LayoutCache*>* s_StoredLayouts;

  /// @brief Field s_StoredWindows, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_StoredWindows,
                             put = setStaticF_s_StoredWindows))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::__GUILayoutUtility__LayoutCache*>* s_StoredWindows;

  /// @brief Method Begin, addr 0x323c0d0, size 0x1cc, virtual false, abstract: false, final false
  static inline void Begin(int32_t instanceID);

  /// @brief Method BeginContainer, addr 0x323c3b4, size 0x15c, virtual false, abstract: false, final false
  static inline void BeginContainer(::UnityEngine::__GUILayoutUtility__LayoutCache* cache);

  /// @brief Method BeginWindow, addr 0x3237a70, size 0x278, virtual false, abstract: false, final false
  static inline void BeginWindow(int32_t windowID, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options);

  /// @brief Method Internal_GetWindowRect, addr 0x323be54, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect Internal_GetWindowRect(int32_t windowID);

  /// @brief Method Internal_GetWindowRect_Injected, addr 0x323bee4, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_GetWindowRect_Injected(int32_t windowID, ByRef<::UnityEngine::Rect> ret);

  /// @brief Method Internal_MoveWindow, addr 0x323bf28, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_MoveWindow(int32_t windowID, ::UnityEngine::Rect r);

  /// @brief Method Internal_MoveWindow_Injected, addr 0x323bfb4, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_MoveWindow_Injected(int32_t windowID, ByRef<::UnityEngine::Rect> r);

  /// @brief Method Layout, addr 0x3237ce8, size 0x1f8, virtual false, abstract: false, final false
  static inline void Layout();

  /// @brief Method LayoutFreeGroup, addr 0x323c538, size 0x1bc, virtual false, abstract: false, final false
  static inline void LayoutFreeGroup(::UnityEngine::GUILayoutGroup* toplevel);

  /// @brief Method LayoutFromContainer, addr 0x323cab0, size 0x188, virtual false, abstract: false, final false
  static inline void LayoutFromContainer(float_t w, float_t h);

  /// @brief Method LayoutFromEditorWindow, addr 0x323c8c4, size 0x1ec, virtual false, abstract: false, final false
  static inline void LayoutFromEditorWindow();

  /// @brief Method LayoutSingleGroup, addr 0x323c6f4, size 0x1d0, virtual false, abstract: false, final false
  static inline void LayoutSingleGroup(::UnityEngine::GUILayoutGroup* i);

  /// @brief Method SelectIDList, addr 0x32377f0, size 0x148, virtual false, abstract: false, final false
  static inline ::UnityEngine::__GUILayoutUtility__LayoutCache* SelectIDList(int32_t instanceID, bool isWindow);

  static inline ::UnityEngine::__GUILayoutUtility__LayoutCache* getStaticF_current();

  static inline ::UnityEngine::Rect getStaticF_kDummyRect();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::__GUILayoutUtility__LayoutCache*>* getStaticF_s_StoredLayouts();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::__GUILayoutUtility__LayoutCache*>* getStaticF_s_StoredWindows();

  static inline void setStaticF_current(::UnityEngine::__GUILayoutUtility__LayoutCache* value);

  static inline void setStaticF_kDummyRect(::UnityEngine::Rect value);

  static inline void setStaticF_s_StoredLayouts(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::__GUILayoutUtility__LayoutCache*>* value);

  static inline void setStaticF_s_StoredWindows(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::__GUILayoutUtility__LayoutCache*>* value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUILayoutUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUILayoutUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayoutUtility*, "UnityEngine", "GUILayoutUtility");
NEED_NO_BOX(::UnityEngine::__GUILayoutUtility__LayoutCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__GUILayoutUtility__LayoutCache*, "UnityEngine", "GUILayoutUtility/LayoutCache");
