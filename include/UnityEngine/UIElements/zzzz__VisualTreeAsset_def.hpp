#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeAsset)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IBaseUxmlObjectFactory;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct TemplateAsset_AttributeOverride;
}
namespace UnityEngine::UIElements {
class TemplateAsset;
}
namespace UnityEngine::UIElements {
class TemplateContainer;
}
namespace UnityEngine::UIElements {
class UxmlObjectAsset;
}
namespace UnityEngine::UIElements {
class VisualElementAsset;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct VisualTreeAsset_AssetEntry;
}
namespace UnityEngine::UIElements {
struct VisualTreeAsset_SlotDefinition;
}
namespace UnityEngine::UIElements {
struct VisualTreeAsset_SlotUsageEntry;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset_UsingEntryComparer;
}
namespace UnityEngine::UIElements {
struct VisualTreeAsset_UsingEntry;
}
namespace UnityEngine::UIElements {
struct VisualTreeAsset_UxmlObjectEntry;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset___c__DisplayClass61_0;
}
namespace UnityEngine::UIElements {
struct VisualTreeAsset___c__DisplayClass65_0;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset__get_stylesheets_d__23;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset__get_templateDependencies_d__19;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset_UsingEntryComparer;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset___c__DisplayClass61_0;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset__get_stylesheets_d__23;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset__get_templateDependencies_d__19;
}
namespace UnityEngine::UIElements {
struct VisualTreeAsset_AssetEntry;
}
namespace UnityEngine::UIElements {
struct VisualTreeAsset_SlotDefinition;
}
namespace UnityEngine::UIElements {
struct VisualTreeAsset_SlotUsageEntry;
}
namespace UnityEngine::UIElements {
struct VisualTreeAsset_UsingEntry;
}
namespace UnityEngine::UIElements {
struct VisualTreeAsset_UxmlObjectEntry;
}
namespace UnityEngine::UIElements {
struct VisualTreeAsset___c__DisplayClass65_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeAsset);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass61_0);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__23);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__19);
MARK_VAL_T(::UnityEngine::UIElements::VisualTreeAsset_AssetEntry);
MARK_VAL_T(::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition);
MARK_VAL_T(::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry);
MARK_VAL_T(::UnityEngine::UIElements::VisualTreeAsset_UsingEntry);
MARK_VAL_T(::UnityEngine::UIElements::VisualTreeAsset_UxmlObjectEntry);
MARK_VAL_T(::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass65_0);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualTreeAsset/UsingEntry
struct CORDL_TYPE VisualTreeAsset_UsingEntry {
public:
  // Declarations
  /// @brief Field comparer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_comparer, put = setStaticF_comparer)) ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>* comparer;

  /// @brief Method .ctor, addr 0x499cadc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW alias, ::StringW path);

  static inline ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>* getStaticF_comparer();

  static inline void setStaticF_comparer(::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeAsset_UsingEntry();

  // Ctor Parameters [CppParam { name: "alias", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "asset",
  // ty: "::UnityW<::UnityEngine::UIElements::VisualTreeAsset>", modifiers: "", def_value: None }]
  constexpr VisualTreeAsset_UsingEntry(::StringW alias, ::StringW path, ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> asset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6286 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field alias, offset: 0x0, size: 0x8, def value: None
  ::StringW alias;

  /// @brief Field path, offset: 0x8, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field asset, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> asset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset_UsingEntry, alias) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset_UsingEntry, path) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset_UsingEntry, asset) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Collections.Generic.IComparer`1<T>, System.Object, UnityEngine.UIElements.VisualTreeAsset::UsingEntry
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeAsset/UsingEntryComparer
class CORDL_TYPE VisualTreeAsset_UsingEntryComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>*() noexcept;

  /// @brief Method Compare, addr 0x499cb60, size 0x10, virtual true, abstract: false, final true
  inline int32_t Compare(::UnityEngine::UIElements::VisualTreeAsset_UsingEntry x, ::UnityEngine::UIElements::VisualTreeAsset_UsingEntry y);

  static inline ::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer* New_ctor();

  /// @brief Method .ctor, addr 0x499cb58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>"
  constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>*
  i___System__Collections__Generic__IComparer_1___UnityEngine__UIElements__VisualTreeAsset_UsingEntry_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeAsset_UsingEntryComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset_UsingEntryComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeAsset_UsingEntryComparer(VisualTreeAsset_UsingEntryComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset_UsingEntryComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeAsset_UsingEntryComparer(VisualTreeAsset_UsingEntryComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6287 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualTreeAsset/SlotDefinition
struct CORDL_TYPE VisualTreeAsset_SlotDefinition {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeAsset_SlotDefinition();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "insertionPointId", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VisualTreeAsset_SlotDefinition(::StringW name, int32_t insertionPointId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6288 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field insertionPointId, offset: 0x8, size: 0x4, def value: None
  int32_t insertionPointId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition, insertionPointId) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualTreeAsset/SlotUsageEntry
struct CORDL_TYPE VisualTreeAsset_SlotUsageEntry {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeAsset_SlotUsageEntry();

  // Ctor Parameters [CppParam { name: "slotName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assetId", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VisualTreeAsset_SlotUsageEntry(::StringW slotName, int32_t assetId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6289 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field slotName, offset: 0x0, size: 0x8, def value: None
  ::StringW slotName;

  /// @brief Field assetId, offset: 0x8, size: 0x4, def value: None
  int32_t assetId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry, slotName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry, assetId) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualTreeAsset/UxmlObjectEntry
struct CORDL_TYPE VisualTreeAsset_UxmlObjectEntry {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x499cb70, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t parentId, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>* uxmlObjectAssets);

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeAsset_UxmlObjectEntry();

  // Ctor Parameters [CppParam { name: "parentId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "uxmlObjectAssets", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>*", modifiers: "", def_value: None }]
  constexpr VisualTreeAsset_UxmlObjectEntry(int32_t parentId, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>* uxmlObjectAssets) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6290 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field parentId, offset: 0x0, size: 0x4, def value: None
  int32_t parentId;

  /// @brief Field uxmlObjectAssets, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>* uxmlObjectAssets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset_UxmlObjectEntry, parentId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset_UxmlObjectEntry, uxmlObjectAssets) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeAsset_UxmlObjectEntry, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualTreeAsset/AssetEntry
struct CORDL_TYPE VisualTreeAsset_AssetEntry {
public:
  // Declarations
  __declspec(property(get = get_type)) ::System::Type* type;

  /// @brief Method .ctor, addr 0x499cc14, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::System::Type* type, ::UnityEngine::Object* asset);

  /// @brief Method get_type, addr 0x499cb7c, size 0x98, virtual false, abstract: false, final false
  inline ::System::Type* get_type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeAsset_AssetEntry();

  // Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "typeFullName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "asset", ty: "::UnityW<::UnityEngine::Object>", modifiers: "", def_value: None }, CppParam { name: "m_CachedType", ty: "::System::Type*", modifiers: "", def_value: None }]
  constexpr VisualTreeAsset_AssetEntry(::StringW path, ::StringW typeFullName, ::UnityW<::UnityEngine::Object> asset, ::System::Type* m_CachedType) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6291 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field path, offset: 0x0, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field typeFullName, offset: 0x8, size: 0x8, def value: None
  ::StringW typeFullName;

  /// @brief Field asset, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> asset;

  /// @brief Field m_CachedType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* m_CachedType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset_AssetEntry, path) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset_AssetEntry, typeFullName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset_AssetEntry, asset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset_AssetEntry, m_CachedType) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeAsset/<>c__DisplayClass61_0
class CORDL_TYPE VisualTreeAsset___c__DisplayClass61_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field childVea, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_childVea, put = __cordl_internal_set_childVea)) ::UnityEngine::UIElements::VisualElementAsset* childVea;

  static inline ::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass61_0* New_ctor();

  /// @brief Method <CloneSetupRecursively>b__0, addr 0x499cc64, size 0x24, virtual false, abstract: false, final false
  inline bool _CloneSetupRecursively_b__0(::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry u);

  constexpr ::UnityEngine::UIElements::VisualElementAsset* const& __cordl_internal_get_childVea() const;

  constexpr ::UnityEngine::UIElements::VisualElementAsset*& __cordl_internal_get_childVea();

  constexpr void __cordl_internal_set_childVea(::UnityEngine::UIElements::VisualElementAsset* value);

  /// @brief Method .ctor, addr 0x499cc5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeAsset___c__DisplayClass61_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset___c__DisplayClass61_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeAsset___c__DisplayClass61_0(VisualTreeAsset___c__DisplayClass61_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset___c__DisplayClass61_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeAsset___c__DisplayClass61_0(VisualTreeAsset___c__DisplayClass61_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6292 };

  /// @brief Field childVea, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElementAsset* ___childVea;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass61_0, ___childVea) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass61_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualTreeAsset/<>c__DisplayClass65_0
struct CORDL_TYPE VisualTreeAsset___c__DisplayClass65_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeAsset___c__DisplayClass65_0();

  // Ctor Parameters [CppParam { name: "asset", ty: "::UnityEngine::UIElements::VisualElementAsset*", modifiers: "", def_value: None }]
  constexpr VisualTreeAsset___c__DisplayClass65_0(::UnityEngine::UIElements::VisualElementAsset* asset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6293 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field asset, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElementAsset* asset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass65_0, asset) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass65_0, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.Generic.List`1::Enumerator<T>, System.Collections.IEnumerable,
// System.Collections.IEnumerator, System.IDisposable, System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeAsset/<get_stylesheets>d__23
class CORDL_TYPE VisualTreeAsset__get_stylesheets_d__23 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__get_Current)) ::UnityW<::UnityEngine::UIElements::StyleSheet>
      System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityW<::UnityEngine::UIElements::StyleSheet> __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>s__2, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get___s__2, put = __cordl_internal_set___s__2)) ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::VisualElementAsset*> __s__2;

  /// @brief Field <>s__4, offset 0x58, size 0x18
  __declspec(property(get = __cordl_internal_get___s__4, put = __cordl_internal_set___s__4)) ::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>> __s__4;

  /// @brief Field <>s__6, offset 0x78, size 0x18
  __declspec(property(get = __cordl_internal_get___s__6, put = __cordl_internal_set___s__6)) ::System::Collections::Generic::List_1_Enumerator<::StringW> __s__6;

  /// @brief Field <sent>5__1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sent_5__1,
                      put = __cordl_internal_set__sent_5__1)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* _sent_5__1;

  /// @brief Field <stylesheetPath>5__7, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__stylesheetPath_5__7, put = __cordl_internal_set__stylesheetPath_5__7)) ::StringW _stylesheetPath_5__7;

  /// @brief Field <stylesheet>5__5, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__stylesheet_5__5, put = __cordl_internal_set__stylesheet_5__5)) ::UnityW<::UnityEngine::UIElements::StyleSheet> _stylesheet_5__5;

  /// @brief Field <stylesheet>5__8, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__stylesheet_5__8, put = __cordl_internal_set__stylesheet_5__8)) ::UnityW<::UnityEngine::UIElements::StyleSheet> _stylesheet_5__8;

  /// @brief Field <vea>5__3, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__vea_5__3, put = __cordl_internal_set__vea_5__3)) ::UnityEngine::UIElements::VisualElementAsset* _vea_5__3;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x499cda8, size 0x610, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__23* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.StyleSheet>.GetEnumerator, addr 0x499d4f0, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StyleSheet__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.StyleSheet>.get_Current, addr 0x499d4a8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::UIElements::StyleSheet> System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x499d58c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x499d4b0, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x499d4e8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x499ccbc, size 0xec, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::VisualElementAsset*> const& __cordl_internal_get___s__2() const;

  constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::VisualElementAsset*>& __cordl_internal_get___s__2();

  constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>> const& __cordl_internal_get___s__4() const;

  constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>>& __cordl_internal_get___s__4();

  constexpr ::System::Collections::Generic::List_1_Enumerator<::StringW> const& __cordl_internal_get___s__6() const;

  constexpr ::System::Collections::Generic::List_1_Enumerator<::StringW>& __cordl_internal_get___s__6();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* const& __cordl_internal_get__sent_5__1() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*& __cordl_internal_get__sent_5__1();

  constexpr ::StringW const& __cordl_internal_get__stylesheetPath_5__7() const;

  constexpr ::StringW& __cordl_internal_get__stylesheetPath_5__7();

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& __cordl_internal_get__stylesheet_5__5() const;

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& __cordl_internal_get__stylesheet_5__5();

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& __cordl_internal_get__stylesheet_5__8() const;

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& __cordl_internal_get__stylesheet_5__8();

  constexpr ::UnityEngine::UIElements::VisualElementAsset* const& __cordl_internal_get__vea_5__3() const;

  constexpr ::UnityEngine::UIElements::VisualElementAsset*& __cordl_internal_get__vea_5__3();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::UnityEngine::UIElements::StyleSheet> value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set___s__2(::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::VisualElementAsset*> value);

  constexpr void __cordl_internal_set___s__4(::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>> value);

  constexpr void __cordl_internal_set___s__6(::System::Collections::Generic::List_1_Enumerator<::StringW> value);

  constexpr void __cordl_internal_set__sent_5__1(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* value);

  constexpr void __cordl_internal_set__stylesheetPath_5__7(::StringW value);

  constexpr void __cordl_internal_set__stylesheet_5__5(::UnityW<::UnityEngine::UIElements::StyleSheet> value);

  constexpr void __cordl_internal_set__stylesheet_5__8(::UnityW<::UnityEngine::UIElements::StyleSheet> value);

  constexpr void __cordl_internal_set__vea_5__3(::UnityEngine::UIElements::VisualElementAsset* value);

  /// @brief Method <>m__Finally1, addr 0x499d458, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x499d3b8, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method <>m__Finally3, addr 0x499d408, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally3();

  /// @brief Method .ctor, addr 0x499cc88, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*
  i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__UIElements__StyleSheet__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*
  i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__UIElements__StyleSheet__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeAsset__get_stylesheets_d__23();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset__get_stylesheets_d__23", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeAsset__get_stylesheets_d__23(VisualTreeAsset__get_stylesheets_d__23&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset__get_stylesheets_d__23", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeAsset__get_stylesheets_d__23(VisualTreeAsset__get_stylesheets_d__23 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6294 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::StyleSheet> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> _____4__this;

  /// @brief Field <sent>5__1, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* ____sent_5__1;

  /// @brief Field <>s__2, offset: 0x38, size: 0x18, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::VisualElementAsset*> _____s__2;

  /// @brief Field <vea>5__3, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElementAsset* ____vea_5__3;

  /// @brief Field <>s__4, offset: 0x58, size: 0x18, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>> _____s__4;

  /// @brief Field <stylesheet>5__5, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::StyleSheet> ____stylesheet_5__5;

  /// @brief Field <>s__6, offset: 0x78, size: 0x18, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::StringW> _____s__6;

  /// @brief Field <stylesheetPath>5__7, offset: 0x90, size: 0x8, def value: None
  ::StringW ____stylesheetPath_5__7;

  /// @brief Field <stylesheet>5__8, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::StyleSheet> ____stylesheet_5__8;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__23, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__23, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__23, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__23, ____sent_5__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__23, _____s__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__23, ____vea_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__23, _____s__4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__23, ____stylesheet_5__5) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__23, _____s__6) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__23, ____stylesheetPath_5__7) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__23, ____stylesheet_5__8) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__23, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.Generic.List`1::Enumerator<T>, System.Collections.IEnumerable,
// System.Collections.IEnumerator, System.IDisposable, System.Object, UnityEngine.UIElements.VisualTreeAsset::UsingEntry
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeAsset/<get_templateDependencies>d__19
class CORDL_TYPE VisualTreeAsset__get_templateDependencies_d__19 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__get_Current)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>
      System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>s__2, offset 0x38, size 0x28
  __declspec(property(get = __cordl_internal_get___s__2, put = __cordl_internal_set___s__2)) ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>
      __s__2;

  /// @brief Field <entry>5__3, offset 0x60, size 0x18
  __declspec(property(get = __cordl_internal_get__entry_5__3, put = __cordl_internal_set__entry_5__3)) ::UnityEngine::UIElements::VisualTreeAsset_UsingEntry _entry_5__3;

  /// @brief Field <sent>5__1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sent_5__1,
                      put = __cordl_internal_set__sent_5__1)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* _sent_5__1;

  /// @brief Field <vta>5__4, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__vta_5__4, put = __cordl_internal_set__vta_5__4)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> _vta_5__4;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x499d5f0, size 0x500, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__19* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualTreeAsset>.GetEnumerator, addr 0x499db88, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*
  System_Collections_Generic_IEnumerable_UnityEngine_UIElements_VisualTreeAsset__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualTreeAsset>.get_Current, addr 0x499db40, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x499dc24, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x499db48, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x499db80, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x499d5c4, size 0x2c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry> const& __cordl_internal_get___s__2() const;

  constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>& __cordl_internal_get___s__2();

  constexpr ::UnityEngine::UIElements::VisualTreeAsset_UsingEntry const& __cordl_internal_get__entry_5__3() const;

  constexpr ::UnityEngine::UIElements::VisualTreeAsset_UsingEntry& __cordl_internal_get__entry_5__3();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* const& __cordl_internal_get__sent_5__1() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*& __cordl_internal_get__sent_5__1();

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get__vta_5__4() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get__vta_5__4();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set___s__2(::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry> value);

  constexpr void __cordl_internal_set__entry_5__3(::UnityEngine::UIElements::VisualTreeAsset_UsingEntry value);

  constexpr void __cordl_internal_set__sent_5__1(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* value);

  constexpr void __cordl_internal_set__vta_5__4(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value);

  /// @brief Method <>m__Finally1, addr 0x499daf0, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x499d590, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*
  i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__UIElements__VisualTreeAsset__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*
  i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__UIElements__VisualTreeAsset__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeAsset__get_templateDependencies_d__19();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset__get_templateDependencies_d__19", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeAsset__get_templateDependencies_d__19(VisualTreeAsset__get_templateDependencies_d__19&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset__get_templateDependencies_d__19", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeAsset__get_templateDependencies_d__19(VisualTreeAsset__get_templateDependencies_d__19 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6295 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> _____4__this;

  /// @brief Field <sent>5__1, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* ____sent_5__1;

  /// @brief Field <>s__2, offset: 0x38, size: 0x28, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry> _____s__2;

  /// @brief Field <entry>5__3, offset: 0x60, size: 0x18, def value: None
  ::UnityEngine::UIElements::VisualTreeAsset_UsingEntry ____entry_5__3;

  /// @brief Field <vta>5__4, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> ____vta_5__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__19, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__19, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__19, ____sent_5__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__19, _____s__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__19, ____entry_5__3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__19, ____vta_5__4) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__19, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeAsset
class CORDL_TYPE VisualTreeAsset : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using AssetEntry = ::UnityEngine::UIElements::VisualTreeAsset_AssetEntry;

  using SlotDefinition = ::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition;

  using SlotUsageEntry = ::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry;

  using UsingEntry = ::UnityEngine::UIElements::VisualTreeAsset_UsingEntry;

  using UsingEntryComparer = ::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer;

  using UxmlObjectEntry = ::UnityEngine::UIElements::VisualTreeAsset_UxmlObjectEntry;

  using __c__DisplayClass61_0 = ::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass61_0;

  using __c__DisplayClass65_0 = ::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass65_0;

  using _get_stylesheets_d__23 = ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__23;

  using _get_templateDependencies_d__19 = ::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__19;

  /// @brief Field LinkedVEAInTemplatePropertyName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_LinkedVEAInTemplatePropertyName, put = setStaticF_LinkedVEAInTemplatePropertyName)) ::StringW LinkedVEAInTemplatePropertyName;

  __declspec(property(get = get_contentContainerId, put = set_contentContainerId)) int32_t contentContainerId;

  __declspec(property(get = get_contentHash, put = set_contentHash)) int32_t contentHash;

  __declspec(property(get = get_importedWithErrors, put = set_importedWithErrors)) bool importedWithErrors;

  __declspec(property(get = get_importedWithWarnings, put = set_importedWithWarnings)) bool importedWithWarnings;

  /// @brief Field inlineSheet, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_inlineSheet, put = __cordl_internal_set_inlineSheet)) ::UnityW<::UnityEngine::UIElements::StyleSheet> inlineSheet;

  /// @brief Field m_AssetEntries, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AssetEntries,
                      put = __cordl_internal_set_m_AssetEntries)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry>* m_AssetEntries;

  /// @brief Field m_ContentContainerId, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ContentContainerId, put = __cordl_internal_set_m_ContentContainerId)) int32_t m_ContentContainerId;

  /// @brief Field m_ContentHash, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ContentHash, put = __cordl_internal_set_m_ContentHash)) int32_t m_ContentHash;

  /// @brief Field m_ImportedWithErrors, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ImportedWithErrors, put = __cordl_internal_set_m_ImportedWithErrors)) bool m_ImportedWithErrors;

  /// @brief Field m_ImportedWithWarnings, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ImportedWithWarnings, put = __cordl_internal_set_m_ImportedWithWarnings)) bool m_ImportedWithWarnings;

  /// @brief Field m_Slots, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Slots,
                      put = __cordl_internal_set_m_Slots)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition>* m_Slots;

  /// @brief Field m_TemplateAssets, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TemplateAssets,
                      put = __cordl_internal_set_m_TemplateAssets)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* m_TemplateAssets;

  /// @brief Field m_Usings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Usings,
                      put = __cordl_internal_set_m_Usings)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>* m_Usings;

  /// @brief Field m_UxmlObjectEntries, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UxmlObjectEntries,
                      put = __cordl_internal_set_m_UxmlObjectEntries)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UxmlObjectEntry>* m_UxmlObjectEntries;

  /// @brief Field m_UxmlObjectIds, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UxmlObjectIds, put = __cordl_internal_set_m_UxmlObjectIds)) ::System::Collections::Generic::List_1<int32_t>* m_UxmlObjectIds;

  /// @brief Field m_VisualElementAssets, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisualElementAssets,
                      put = __cordl_internal_set_m_VisualElementAssets)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* m_VisualElementAssets;

  /// @brief Field s_TemporarySlotInsertionPoints, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_s_TemporarySlotInsertionPoints,
      put = setStaticF_s_TemporarySlotInsertionPoints)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* s_TemporarySlotInsertionPoints;

  __declspec(property(get = get_slots, put = set_slots)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition>* slots;

  __declspec(property(get = get_stylesheets)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* stylesheets;

  __declspec(property(get = get_templateAssets, put = set_templateAssets)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* templateAssets;

  __declspec(property(get = get_templateDependencies)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* templateDependencies;

  __declspec(property(get = get_uxmlObjectEntries)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UxmlObjectEntry>* uxmlObjectEntries;

  __declspec(property(get = get_uxmlObjectIds)) ::System::Collections::Generic::List_1<int32_t>* uxmlObjectIds;

  __declspec(property(get = get_visualElementAssets, put = set_visualElementAssets)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* visualElementAssets;

  /// @brief Method AssetEntryExists, addr 0x4aa7ee4, size 0x204, virtual false, abstract: false, final false
  inline bool AssetEntryExists(::StringW path, ::System::Type* type);

  /// @brief Method AssignClassListFromAssetToElement, addr 0x4aa8980, size 0x6c, virtual false, abstract: false, final false
  static inline void AssignClassListFromAssetToElement(::UnityEngine::UIElements::VisualElementAsset* asset, ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method AssignStyleSheetFromAssetToElement, addr 0x4aa89ec, size 0x1b8, virtual false, abstract: false, final false
  static inline void AssignStyleSheetFromAssetToElement(::UnityEngine::UIElements::VisualElementAsset* asset, ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method CloneSetupRecursively, addr 0x4aa8ba4, size 0xa60, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement*
  CloneSetupRecursively(::UnityEngine::UIElements::VisualElementAsset* root,
                        ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*>* idToChildren,
                        ::UnityEngine::UIElements::CreationContext context);

  /// @brief Method CloneTree, addr 0x4aa8768, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TemplateContainer* CloneTree();

  /// @brief Method CloneTree, addr 0x4aa876c, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TemplateContainer* CloneTree(::StringW bindingPath);

  /// @brief Method CloneTree, addr 0x4aa878c, size 0x1c, virtual false, abstract: false, final false
  inline void CloneTree(::UnityEngine::UIElements::VisualElement* target);

  /// @brief Method CloneTree, addr 0x4aa87a8, size 0x1d8, virtual false, abstract: false, final false
  inline void CloneTree(::UnityEngine::UIElements::VisualElement* target, ::ByRef<int32_t> firstElementIndex, ::ByRef<int32_t> elementAddedCount);

  /// @brief Method CloneTree, addr 0x4a91804, size 0x668, virtual false, abstract: false, final false
  inline void CloneTree(::UnityEngine::UIElements::VisualElement* target, ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints,
                        ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* attributeOverrides);

  /// @brief Method CompareForOrder, addr 0x4aa9c30, size 0x30, virtual false, abstract: false, final false
  static inline int32_t CompareForOrder(::UnityEngine::UIElements::VisualElementAsset* a, ::UnityEngine::UIElements::VisualElementAsset* b);

  /// @brief Method Create, addr 0x4aa9604, size 0x57c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::VisualElementAsset* asset, ::UnityEngine::UIElements::CreationContext ctx);

  /// @brief Method GetAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetAsset(::StringW path);

  /// @brief Method GetNextChildSerialNumber, addr 0x4aa78fc, size 0x7c, virtual false, abstract: false, final false
  inline int32_t GetNextChildSerialNumber();

  /// @brief Method GetUxmlObjectEntry, addr 0x4aa7d70, size 0x174, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualTreeAsset_UxmlObjectEntry GetUxmlObjectEntry(int32_t id);

  /// @brief Method GetUxmlObjectFactory, addr 0x4aa821c, size 0x38c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IBaseUxmlObjectFactory* GetUxmlObjectFactory(::UnityEngine::UIElements::UxmlObjectAsset* uxmlObjectAsset);

  /// @brief Method GetUxmlObjects, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Collections::Generic::List_1<T>* GetUxmlObjects(::UnityEngine::UIElements::IUxmlAttributes* asset, ::UnityEngine::UIElements::CreationContext cc);

  /// @brief Method Instantiate, addr 0x4aa85c8, size 0x180, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TemplateContainer* Instantiate();

  /// @brief Method Instantiate, addr 0x4aa8748, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TemplateContainer* Instantiate(::StringW bindingPath);

  static inline ::UnityEngine::UIElements::VisualTreeAsset* New_ctor();

  /// @brief Method RegisterAssetEntry, addr 0x4aa80e8, size 0x134, virtual false, abstract: false, final false
  inline void RegisterAssetEntry(::StringW path, ::System::Type* type, ::UnityEngine::Object* asset);

  /// @brief Method RegisterUxmlObject, addr 0x4aa7a78, size 0x2f8, virtual false, abstract: false, final false
  inline void RegisterUxmlObject(::UnityEngine::UIElements::UxmlObjectAsset* uxmlObjectAsset);

  /// @brief Method ResolveTemplate, addr 0x4a914dc, size 0x2b0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> ResolveTemplate(::StringW templateName);

  /// @brief Method TryGetSlotInsertionPoint, addr 0x4aa9b80, size 0xb0, virtual false, abstract: false, final false
  inline bool TryGetSlotInsertionPoint(int32_t insertionPointId, ::ByRef<::StringW> slotName);

  /// @brief Method <Create>g__CreateError|65_0, addr 0x4aa9c60, size 0x144, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* _Create_g__CreateError_65_0(::ByRef<::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass65_0> _cordl_fixed_empty_name_whitespace);

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& __cordl_internal_get_inlineSheet() const;

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& __cordl_internal_get_inlineSheet();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry>* const& __cordl_internal_get_m_AssetEntries() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry>*& __cordl_internal_get_m_AssetEntries();

  constexpr int32_t const& __cordl_internal_get_m_ContentContainerId() const;

  constexpr int32_t& __cordl_internal_get_m_ContentContainerId();

  constexpr int32_t const& __cordl_internal_get_m_ContentHash() const;

  constexpr int32_t& __cordl_internal_get_m_ContentHash();

  constexpr bool const& __cordl_internal_get_m_ImportedWithErrors() const;

  constexpr bool& __cordl_internal_get_m_ImportedWithErrors();

  constexpr bool const& __cordl_internal_get_m_ImportedWithWarnings() const;

  constexpr bool& __cordl_internal_get_m_ImportedWithWarnings();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition>* const& __cordl_internal_get_m_Slots() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition>*& __cordl_internal_get_m_Slots();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* const& __cordl_internal_get_m_TemplateAssets() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*& __cordl_internal_get_m_TemplateAssets();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>* const& __cordl_internal_get_m_Usings() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>*& __cordl_internal_get_m_Usings();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UxmlObjectEntry>* const& __cordl_internal_get_m_UxmlObjectEntries() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UxmlObjectEntry>*& __cordl_internal_get_m_UxmlObjectEntries();

  constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_UxmlObjectIds() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_UxmlObjectIds();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* const& __cordl_internal_get_m_VisualElementAssets() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*& __cordl_internal_get_m_VisualElementAssets();

  constexpr void __cordl_internal_set_inlineSheet(::UnityW<::UnityEngine::UIElements::StyleSheet> value);

  constexpr void __cordl_internal_set_m_AssetEntries(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry>* value);

  constexpr void __cordl_internal_set_m_ContentContainerId(int32_t value);

  constexpr void __cordl_internal_set_m_ContentHash(int32_t value);

  constexpr void __cordl_internal_set_m_ImportedWithErrors(bool value);

  constexpr void __cordl_internal_set_m_ImportedWithWarnings(bool value);

  constexpr void __cordl_internal_set_m_Slots(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition>* value);

  constexpr void __cordl_internal_set_m_TemplateAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* value);

  constexpr void __cordl_internal_set_m_Usings(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>* value);

  constexpr void __cordl_internal_set_m_UxmlObjectEntries(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UxmlObjectEntry>* value);

  constexpr void __cordl_internal_set_m_UxmlObjectIds(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_VisualElementAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* value);

  /// @brief Method .ctor, addr 0x4aa9db4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_LinkedVEAInTemplatePropertyName();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* getStaticF_s_TemporarySlotInsertionPoints();

  /// @brief Method get_contentContainerId, addr 0x4aa85b8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_contentContainerId();

  /// @brief Method get_contentHash, addr 0x4aa9da4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_contentHash();

  /// @brief Method get_importedWithErrors, addr 0x4aa78d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_importedWithErrors();

  /// @brief Method get_importedWithWarnings, addr 0x4aa78e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_importedWithWarnings();

  /// @brief Method get_slots, addr 0x4aa85a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition>* get_slots();

  /// @brief Method get_stylesheets, addr 0x4aa79e0, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* get_stylesheets();

  /// @brief Method get_templateAssets, addr 0x4aa7a58, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* get_templateAssets();

  /// @brief Method get_templateDependencies, addr 0x4aa7978, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* get_templateDependencies();

  /// @brief Method get_uxmlObjectEntries, addr 0x4aa7a68, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UxmlObjectEntry>* get_uxmlObjectEntries();

  /// @brief Method get_uxmlObjectIds, addr 0x4aa7a70, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<int32_t>* get_uxmlObjectIds();

  /// @brief Method get_visualElementAssets, addr 0x4aa7a48, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* get_visualElementAssets();

  static inline void setStaticF_LinkedVEAInTemplatePropertyName(::StringW value);

  static inline void setStaticF_s_TemporarySlotInsertionPoints(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method set_contentContainerId, addr 0x4aa85c0, size 0x8, virtual false, abstract: false, final false
  inline void set_contentContainerId(int32_t value);

  /// @brief Method set_contentHash, addr 0x4aa9dac, size 0x8, virtual false, abstract: false, final false
  inline void set_contentHash(int32_t value);

  /// @brief Method set_importedWithErrors, addr 0x4aa78dc, size 0xc, virtual false, abstract: false, final false
  inline void set_importedWithErrors(bool value);

  /// @brief Method set_importedWithWarnings, addr 0x4aa78f0, size 0xc, virtual false, abstract: false, final false
  inline void set_importedWithWarnings(bool value);

  /// @brief Method set_slots, addr 0x4aa85b0, size 0x8, virtual false, abstract: false, final false
  inline void set_slots(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition>* value);

  /// @brief Method set_templateAssets, addr 0x4aa7a60, size 0x8, virtual false, abstract: false, final false
  inline void set_templateAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* value);

  /// @brief Method set_visualElementAssets, addr 0x4aa7a50, size 0x8, virtual false, abstract: false, final false
  inline void set_visualElementAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeAsset(VisualTreeAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeAsset(VisualTreeAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6296 };

  /// @brief Field m_ImportedWithErrors, offset: 0x18, size: 0x1, def value: None
  bool ___m_ImportedWithErrors;

  /// @brief Field m_ImportedWithWarnings, offset: 0x19, size: 0x1, def value: None
  bool ___m_ImportedWithWarnings;

  /// @brief Field m_Usings, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>* ___m_Usings;

  /// @brief Field inlineSheet, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::StyleSheet> ___inlineSheet;

  /// @brief Field m_VisualElementAssets, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* ___m_VisualElementAssets;

  /// @brief Field m_TemplateAssets, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* ___m_TemplateAssets;

  /// @brief Field m_UxmlObjectEntries, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UxmlObjectEntry>* ___m_UxmlObjectEntries;

  /// @brief Field m_UxmlObjectIds, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___m_UxmlObjectIds;

  /// @brief Field m_AssetEntries, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry>* ___m_AssetEntries;

  /// @brief Field m_Slots, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition>* ___m_Slots;

  /// @brief Field m_ContentContainerId, offset: 0x60, size: 0x4, def value: None
  int32_t ___m_ContentContainerId;

  /// @brief Field m_ContentHash, offset: 0x64, size: 0x4, def value: None
  int32_t ___m_ContentHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_ImportedWithErrors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_ImportedWithWarnings) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_Usings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___inlineSheet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_VisualElementAssets) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_TemplateAssets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_UxmlObjectEntries) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_UxmlObjectIds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_AssetEntries) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_Slots) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_ContentContainerId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_ContentHash) == 0x64, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeAsset, 0x68>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset*, "UnityEngine.UIElements", "VisualTreeAsset");
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer*, "UnityEngine.UIElements", "VisualTreeAsset/UsingEntryComparer");
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass61_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass61_0*, "UnityEngine.UIElements", "VisualTreeAsset/<>c__DisplayClass61_0");
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__23);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__23*, "UnityEngine.UIElements", "VisualTreeAsset/<get_stylesheets>d__23");
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__19);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__19*, "UnityEngine.UIElements", "VisualTreeAsset/<get_templateDependencies>d__19");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset_AssetEntry, "UnityEngine.UIElements", "VisualTreeAsset/AssetEntry");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition, "UnityEngine.UIElements", "VisualTreeAsset/SlotDefinition");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry, "UnityEngine.UIElements", "VisualTreeAsset/SlotUsageEntry");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset_UsingEntry, "UnityEngine.UIElements", "VisualTreeAsset/UsingEntry");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset_UxmlObjectEntry, "UnityEngine.UIElements", "VisualTreeAsset/UxmlObjectEntry");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass65_0, "UnityEngine.UIElements", "VisualTreeAsset/<>c__DisplayClass65_0");
