#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LazyLoadReference_1_def.hpp"
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
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
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
class TemplateAsset;
}
namespace UnityEngine::UIElements {
class TemplateContainer;
}
namespace UnityEngine::UIElements {
class UxmlAsset;
}
namespace UnityEngine::UIElements {
struct UxmlNamespaceDefinition;
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
class VisualTreeAsset___c__DisplayClass76_0;
}
namespace UnityEngine::UIElements {
struct VisualTreeAsset___c__DisplayClass81_0;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset__get_stylesheets_d__31;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset__get_templateDependencies_d__27;
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
class VisualTreeAsset___c__DisplayClass76_0;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset__get_stylesheets_d__31;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset__get_templateDependencies_d__27;
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
struct VisualTreeAsset___c__DisplayClass81_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeAsset);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass76_0);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27);
MARK_VAL_T(::UnityEngine::UIElements::VisualTreeAsset_AssetEntry);
MARK_VAL_T(::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition);
MARK_VAL_T(::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry);
MARK_VAL_T(::UnityEngine::UIElements::VisualTreeAsset_UsingEntry);
MARK_VAL_T(::UnityEngine::UIElements::VisualTreeAsset_UxmlObjectEntry);
MARK_VAL_T(::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass81_0);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualTreeAsset/UsingEntry
struct CORDL_TYPE VisualTreeAsset_UsingEntry {
public:
  // Declarations
  /// @brief Field comparer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_comparer, put = setStaticF_comparer)) ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>* comparer;

  /// @brief Method .ctor, addr 0x6a92f78, size 0xc, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5199 };

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
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeAsset/UsingEntryComparer
class CORDL_TYPE VisualTreeAsset_UsingEntryComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>*() noexcept;

  /// @brief Method Compare, addr 0x6a9352c, size 0x10, virtual true, abstract: false, final true
  inline int32_t Compare(::UnityEngine::UIElements::VisualTreeAsset_UsingEntry x, ::UnityEngine::UIElements::VisualTreeAsset_UsingEntry y);

  static inline ::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer* New_ctor();

  /// @brief Method .ctor, addr 0x6a93528, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5200 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5201 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5202 };

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
  /// @brief Method GetField, addr 0x6a903d0, size 0x130, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UxmlObjectAsset* GetField(::StringW fieldName);

  /// @brief Method ToString, addr 0x6a9353c, size 0x104, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6a8ff60, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t parentId, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>* uxmlObjectAssets);

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeAsset_UxmlObjectEntry();

  // Ctor Parameters [CppParam { name: "parentId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "uxmlObjectAssets", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>*", modifiers: "", def_value: None }]
  constexpr VisualTreeAsset_UxmlObjectEntry(int32_t parentId, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>* uxmlObjectAssets) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5203 };

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
// Dependencies UnityEngine.LazyLoadReference`1<T>
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualTreeAsset/AssetEntry
struct CORDL_TYPE VisualTreeAsset_AssetEntry {
public:
  // Declarations
  __declspec(property(get = get_asset)) ::UnityW<::UnityEngine::Object> asset;

  __declspec(property(get = get_path)) ::StringW path;

  __declspec(property(get = get_type)) ::System::Type* type;

  /// @brief Method .ctor, addr 0x6a90fe0, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::System::Type* type, ::UnityEngine::Object* asset);

  /// @brief Method get_asset, addr 0x6a9114c, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> get_asset();

  /// @brief Method get_path, addr 0x6a93640, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_path();

  /// @brief Method get_type, addr 0x6a90e60, size 0x90, virtual false, abstract: false, final false
  inline ::System::Type* get_type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeAsset_AssetEntry();

  // Ctor Parameters [CppParam { name: "m_Path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_TypeFullName", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "m_AssetReference", ty: "::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::Object>>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceID", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "m_CachedType", ty: "::System::Type*", modifiers: "", def_value: None }]
  constexpr VisualTreeAsset_AssetEntry(::StringW m_Path, ::StringW m_TypeFullName, ::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::Object>> m_AssetReference, int32_t m_InstanceID,
                                       ::System::Type* m_CachedType) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5204 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_Path, offset: 0x0, size: 0x8, def value: None
  ::StringW m_Path;

  /// @brief Field m_TypeFullName, offset: 0x8, size: 0x8, def value: None
  ::StringW m_TypeFullName;

  /// @brief Field m_AssetReference, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::Object>> m_AssetReference;

  /// @brief Field m_InstanceID, offset: 0x14, size: 0x4, def value: None
  int32_t m_InstanceID;

  /// @brief Field m_CachedType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* m_CachedType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset_AssetEntry, m_Path) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset_AssetEntry, m_TypeFullName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset_AssetEntry, m_AssetReference) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset_AssetEntry, m_InstanceID) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset_AssetEntry, m_CachedType) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeAsset/<>c__DisplayClass76_0
class CORDL_TYPE VisualTreeAsset___c__DisplayClass76_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field childVea, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_childVea, put = __cordl_internal_set_childVea)) ::UnityEngine::UIElements::VisualElementAsset* childVea;

  static inline ::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass76_0* New_ctor();

  /// @brief Method <CloneSetupRecursively>b__0, addr 0x6a93648, size 0x20, virtual false, abstract: false, final false
  inline bool _CloneSetupRecursively_b__0(::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry u);

  constexpr ::UnityEngine::UIElements::VisualElementAsset* const& __cordl_internal_get_childVea() const;

  constexpr ::UnityEngine::UIElements::VisualElementAsset*& __cordl_internal_get_childVea();

  constexpr void __cordl_internal_set_childVea(::UnityEngine::UIElements::VisualElementAsset* value);

  /// @brief Method .ctor, addr 0x6a92df4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeAsset___c__DisplayClass76_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset___c__DisplayClass76_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeAsset___c__DisplayClass76_0(VisualTreeAsset___c__DisplayClass76_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset___c__DisplayClass76_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeAsset___c__DisplayClass76_0(VisualTreeAsset___c__DisplayClass76_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5205 };

  /// @brief Field childVea, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElementAsset* ___childVea;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass76_0, ___childVea) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass76_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualTreeAsset/<>c__DisplayClass81_0
struct CORDL_TYPE VisualTreeAsset___c__DisplayClass81_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeAsset___c__DisplayClass81_0();

  // Ctor Parameters [CppParam { name: "asset", ty: "::UnityEngine::UIElements::VisualElementAsset*", modifiers: "", def_value: None }]
  constexpr VisualTreeAsset___c__DisplayClass81_0(::UnityEngine::UIElements::VisualElementAsset* asset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5206 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field asset, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElementAsset* asset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass81_0, asset) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass81_0, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeAsset/<get_stylesheets>d__31
class CORDL_TYPE VisualTreeAsset__get_stylesheets_d__31 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x6a937fc, size 0x620, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.StyleSheet>.GetEnumerator, addr 0x6a93f3c, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StyleSheet__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.StyleSheet>.get_Current, addr 0x6a93ef4, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::UIElements::StyleSheet> System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x6a93fd4, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x6a93efc, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x6a93f34, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x6a93668, size 0x194, virtual true, abstract: false, final true
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

  /// @brief Method <>m__Finally1, addr 0x6a93eac, size 0x48, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x6a93e1c, size 0x48, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method <>m__Finally3, addr 0x6a93e64, size 0x48, virtual false, abstract: false, final false
  inline void __m__Finally3();

  /// @brief Method .ctor, addr 0x6a8f6ec, size 0x20, virtual false, abstract: false, final false
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
  constexpr VisualTreeAsset__get_stylesheets_d__31();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset__get_stylesheets_d__31", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeAsset__get_stylesheets_d__31(VisualTreeAsset__get_stylesheets_d__31&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset__get_stylesheets_d__31", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeAsset__get_stylesheets_d__31(VisualTreeAsset__get_stylesheets_d__31 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5207 };

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
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, ____sent_5__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, _____s__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, ____vea_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, _____s__4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, ____stylesheet_5__5) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, _____s__6) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, ____stylesheetPath_5__7) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, ____stylesheet_5__8) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Object, UnityEngine.UIElements.VisualTreeAsset::UsingEntry
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeAsset/<get_templateDependencies>d__27
class CORDL_TYPE VisualTreeAsset__get_templateDependencies_d__27 : public ::System::Object {
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

  /// @brief Method MoveNext, addr 0x6a94044, size 0x4e4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualTreeAsset>.GetEnumerator, addr 0x6a945b8, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*
  System_Collections_Generic_IEnumerable_UnityEngine_UIElements_VisualTreeAsset__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualTreeAsset>.get_Current, addr 0x6a94570, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x6a94650, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x6a94578, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x6a945b0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x6a93fd8, size 0x6c, virtual true, abstract: false, final true
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

  /// @brief Method <>m__Finally1, addr 0x6a94528, size 0x48, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x6a8f65c, size 0x20, virtual false, abstract: false, final false
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
  constexpr VisualTreeAsset__get_templateDependencies_d__27();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset__get_templateDependencies_d__27", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeAsset__get_templateDependencies_d__27(VisualTreeAsset__get_templateDependencies_d__27&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset__get_templateDependencies_d__27", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeAsset__get_templateDependencies_d__27(VisualTreeAsset__get_templateDependencies_d__27 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5208 };

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
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27, ____sent_5__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27, _____s__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27, ____entry_5__3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27, ____vta_5__4) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27, 0x80>, "Size mismatch!");

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

  using __c__DisplayClass76_0 = ::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass76_0;

  using __c__DisplayClass81_0 = ::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass81_0;

  using _get_stylesheets_d__31 = ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31;

  using _get_templateDependencies_d__27 = ::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27;

  /// @brief Field LinkedVEAInTemplatePropertyName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_LinkedVEAInTemplatePropertyName, put = setStaticF_LinkedVEAInTemplatePropertyName)) ::StringW LinkedVEAInTemplatePropertyName;

  /// @brief Field NoRegisteredFactoryErrorMessage, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NoRegisteredFactoryErrorMessage, put = setStaticF_NoRegisteredFactoryErrorMessage)) ::StringW NoRegisteredFactoryErrorMessage;

  __declspec(property(get = get_contentContainerId, put = set_contentContainerId)) int32_t contentContainerId;

  __declspec(property(get = get_contentHash, put = set_contentHash)) int32_t contentHash;

  __declspec(property(get = get_importedWithErrors, put = set_importedWithErrors)) bool importedWithErrors;

  __declspec(property(get = get_importedWithWarnings, put = set_importedWithWarnings)) bool importedWithWarnings;

  __declspec(property(get = get_importerWithUpdatedUrls, put = set_importerWithUpdatedUrls)) bool importerWithUpdatedUrls;

  /// @brief Field inlineSheet, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_inlineSheet, put = __cordl_internal_set_inlineSheet)) ::UnityW<::UnityEngine::UIElements::StyleSheet> inlineSheet;

  /// @brief Field m_AssetEntries, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AssetEntries,
                      put = __cordl_internal_set_m_AssetEntries)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry>* m_AssetEntries;

  /// @brief Field m_ContentContainerId, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ContentContainerId, put = __cordl_internal_set_m_ContentContainerId)) int32_t m_ContentContainerId;

  /// @brief Field m_ContentHash, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ContentHash, put = __cordl_internal_set_m_ContentHash)) int32_t m_ContentHash;

  /// @brief Field m_HasUpdatedUrls, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasUpdatedUrls, put = __cordl_internal_set_m_HasUpdatedUrls)) bool m_HasUpdatedUrls;

  /// @brief Field m_ImportedWithErrors, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ImportedWithErrors, put = __cordl_internal_set_m_ImportedWithErrors)) bool m_ImportedWithErrors;

  /// @brief Field m_ImportedWithWarnings, offset 0x1a, size 0x1
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

  /// @brief Field s_VeaIdsPath, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_VeaIdsPath, put = setStaticF_s_VeaIdsPath)) ::System::Collections::Generic::List_1<int32_t>* s_VeaIdsPath;

  __declspec(property(get = get_slots)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition>* slots;

  __declspec(property(get = get_stylesheets)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* stylesheets;

  __declspec(property(get = get_templateAssets)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* templateAssets;

  __declspec(property(get = get_templateDependencies)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* templateDependencies;

  __declspec(property(get = get_usings)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>* usings;

  __declspec(property(get = get_uxmlObjectEntries)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UxmlObjectEntry>* uxmlObjectEntries;

  __declspec(property(get = get_uxmlObjectIds)) ::System::Collections::Generic::List_1<int32_t>* uxmlObjectIds;

  __declspec(property(get = get_visualElementAssets)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* visualElementAssets;

  /// @brief Method AddUxmlObject, addr 0x6a8ff6c, size 0x40c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UxmlObjectAsset* AddUxmlObject(::UnityEngine::UIElements::UxmlAsset* parent, ::StringW fieldUxmlName, ::StringW fullTypeName,
                                                                   ::UnityEngine::UIElements::UxmlNamespaceDefinition xmlNamespace);

  /// @brief Method AssetEntryExists, addr 0x6a90cec, size 0x174, virtual false, abstract: false, final false
  inline bool AssetEntryExists(::StringW path, ::System::Type* type);

  /// @brief Method AssignClassListFromAssetToElement, addr 0x6a91a04, size 0x6c, virtual false, abstract: false, final false
  static inline void AssignClassListFromAssetToElement(::UnityEngine::UIElements::VisualElementAsset* asset, ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method AssignStyleSheetFromAssetToElement, addr 0x6a91a70, size 0x1c4, virtual false, abstract: false, final false
  static inline void AssignStyleSheetFromAssetToElement(::UnityEngine::UIElements::VisualElementAsset* asset, ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method CloneSetupRecursively, addr 0x6a91c34, size 0xb20, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement*
  CloneSetupRecursively(::UnityEngine::UIElements::VisualElementAsset* root,
                        ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*>* idToChildren,
                        ::UnityEngine::UIElements::CreationContext context);

  /// @brief Method CloneTree, addr 0x6a917dc, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TemplateContainer* CloneTree();

  /// @brief Method CloneTree, addr 0x6a917e0, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TemplateContainer* CloneTree(::StringW bindingPath);

  /// @brief Method CloneTree, addr 0x6a91800, size 0x18, virtual false, abstract: false, final false
  inline void CloneTree(::UnityEngine::UIElements::VisualElement* target);

  /// @brief Method CloneTree, addr 0x6a88328, size 0x80c, virtual false, abstract: false, final false
  inline void CloneTree(::UnityEngine::UIElements::VisualElement* target, ::UnityEngine::UIElements::CreationContext cc);

  /// @brief Method CloneTree, addr 0x6a91818, size 0x1ec, virtual false, abstract: false, final false
  inline void CloneTree(::UnityEngine::UIElements::VisualElement* target, ::ByRef<int32_t> firstElementIndex, ::ByRef<int32_t> elementAddedCount);

  /// @brief Method CollectUxmlObjectAssets, addr 0x6a90730, size 0x298, virtual false, abstract: false, final false
  inline void CollectUxmlObjectAssets(::UnityEngine::UIElements::UxmlAsset* parent, ::StringW fieldName,
                                      ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>* foundEntries);

  /// @brief Method CompareForOrder, addr 0x6a92df8, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t CompareForOrder(::UnityEngine::UIElements::VisualElementAsset* a, ::UnityEngine::UIElements::VisualElementAsset* b);

  /// @brief Method Create, addr 0x6a92754, size 0x5dc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::VisualElementAsset* asset, ::UnityEngine::UIElements::CreationContext ctx);

  /// @brief Method GetAsset, addr 0x6a8b95c, size 0x178, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> GetAsset(::StringW path, ::System::Type* type);

  /// @brief Method GetAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetAsset(::StringW path);

  /// @brief Method GetAssetType, addr 0x6a8b830, size 0x12c, virtual false, abstract: false, final false
  inline ::System::Type* GetAssetType(::StringW path);

  /// @brief Method GetNextChildSerialNumber, addr 0x6a8f470, size 0x174, virtual false, abstract: false, final false
  inline int32_t GetNextChildSerialNumber();

  /// @brief Method GetNextUxmlAssetId, addr 0x6a90378, size 0x58, virtual false, abstract: false, final false
  inline int32_t GetNextUxmlAssetId(int32_t parentId);

  /// @brief Method GetUxmlObjectEntry, addr 0x6a8fe54, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualTreeAsset_UxmlObjectEntry GetUxmlObjectEntry(int32_t id);

  /// @brief Method GetUxmlObjectFactory, addr 0x6a911c4, size 0x354, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IBaseUxmlObjectFactory* GetUxmlObjectFactory(::UnityEngine::UIElements::UxmlObjectAsset* uxmlObjectAsset);

  /// @brief Method GetUxmlObjects, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Collections::Generic::List_1<T>* GetUxmlObjects(::UnityEngine::UIElements::IUxmlAttributes* asset, ::UnityEngine::UIElements::CreationContext cc);

  /// @brief Method Instantiate, addr 0x6a915a0, size 0x21c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TemplateContainer* Instantiate();

  /// @brief Method Instantiate, addr 0x6a917bc, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TemplateContainer* Instantiate(::StringW bindingPath);

  static inline ::UnityEngine::UIElements::VisualTreeAsset* New_ctor();

  /// @brief Method RegisterAssetEntry, addr 0x6a90ef0, size 0xf0, virtual false, abstract: false, final false
  inline void RegisterAssetEntry(::StringW path, ::System::Type* type, ::UnityEngine::Object* asset);

  /// @brief Method RegisterUxmlObject, addr 0x6a8fbf8, size 0x25c, virtual false, abstract: false, final false
  inline void RegisterUxmlObject(::UnityEngine::UIElements::UxmlObjectAsset* uxmlObjectAsset);

  /// @brief Method RemoveElementAndDependencies, addr 0x6a8f72c, size 0x84, virtual false, abstract: false, final false
  inline void RemoveElementAndDependencies(::UnityEngine::UIElements::VisualElementAsset* asset);

  /// @brief Method RemoveUxmlObject, addr 0x6a90500, size 0x230, virtual false, abstract: false, final false
  inline void RemoveUxmlObject(int32_t id, bool onlyIfIsField);

  /// @brief Method RemoveUxmlObjectEntryDependencies, addr 0x6a8f7b0, size 0x448, virtual false, abstract: false, final false
  inline void RemoveUxmlObjectEntryDependencies(int32_t parentId);

  /// @brief Method ResolveTemplate, addr 0x6a880fc, size 0x174, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> ResolveTemplate(::StringW templateName);

  /// @brief Method SetUxmlObjectAssets, addr 0x6a909c8, size 0x324, virtual false, abstract: false, final false
  inline void SetUxmlObjectAssets(::UnityEngine::UIElements::UxmlAsset* parent, ::StringW fieldName, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>* entries);

  /// @brief Method TransferAssetEntries, addr 0x6a91094, size 0xb8, virtual false, abstract: false, final false
  inline void TransferAssetEntries(::UnityEngine::UIElements::VisualTreeAsset* otherVta);

  /// @brief Method TryGetSlotInsertionPoint, addr 0x6a92d30, size 0xc4, virtual false, abstract: false, final false
  inline bool TryGetSlotInsertionPoint(int32_t insertionPointId, ::ByRef<::StringW> slotName);

  /// @brief Method TryGetUsingEntry, addr 0x6a92e24, size 0x154, virtual false, abstract: false, final false
  inline bool TryGetUsingEntry(::StringW templateName, ::ByRef<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry> entry);

  /// @brief Method <Create>g__CreateError|81_0, addr 0x6a92f84, size 0x1a8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* _Create_g__CreateError_81_0(::ByRef<::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass81_0> _cordl_fixed_empty_name_whitespace);

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& __cordl_internal_get_inlineSheet() const;

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& __cordl_internal_get_inlineSheet();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry>* const& __cordl_internal_get_m_AssetEntries() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_AssetEntry>*& __cordl_internal_get_m_AssetEntries();

  constexpr int32_t const& __cordl_internal_get_m_ContentContainerId() const;

  constexpr int32_t& __cordl_internal_get_m_ContentContainerId();

  constexpr int32_t const& __cordl_internal_get_m_ContentHash() const;

  constexpr int32_t& __cordl_internal_get_m_ContentHash();

  constexpr bool const& __cordl_internal_get_m_HasUpdatedUrls() const;

  constexpr bool& __cordl_internal_get_m_HasUpdatedUrls();

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

  constexpr void __cordl_internal_set_m_HasUpdatedUrls(bool value);

  constexpr void __cordl_internal_set_m_ImportedWithErrors(bool value);

  constexpr void __cordl_internal_set_m_ImportedWithWarnings(bool value);

  constexpr void __cordl_internal_set_m_Slots(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition>* value);

  constexpr void __cordl_internal_set_m_TemplateAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* value);

  constexpr void __cordl_internal_set_m_Usings(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>* value);

  constexpr void __cordl_internal_set_m_UxmlObjectEntries(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UxmlObjectEntry>* value);

  constexpr void __cordl_internal_set_m_UxmlObjectIds(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_VisualElementAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* value);

  /// @brief Method .ctor, addr 0x6a9313c, size 0x22c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_LinkedVEAInTemplatePropertyName();

  static inline ::StringW getStaticF_NoRegisteredFactoryErrorMessage();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* getStaticF_s_TemporarySlotInsertionPoints();

  static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_s_VeaIdsPath();

  /// @brief Method get_contentContainerId, addr 0x6a91590, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_contentContainerId();

  /// @brief Method get_contentHash, addr 0x6a9312c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_contentHash();

  /// @brief Method get_importedWithErrors, addr 0x6a8f440, size 0x8, virtual false, abstract: false, final false
  inline bool get_importedWithErrors();

  /// @brief Method get_importedWithWarnings, addr 0x6a8f460, size 0x8, virtual false, abstract: false, final false
  inline bool get_importedWithWarnings();

  /// @brief Method get_importerWithUpdatedUrls, addr 0x6a8f450, size 0x8, virtual false, abstract: false, final false
  inline bool get_importerWithUpdatedUrls();

  /// @brief Method get_slots, addr 0x6a91588, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition>* get_slots();

  /// @brief Method get_stylesheets, addr 0x6a8f67c, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* get_stylesheets();

  /// @brief Method get_templateAssets, addr 0x6a8f714, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* get_templateAssets();

  /// @brief Method get_templateDependencies, addr 0x6a8f5ec, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* get_templateDependencies();

  /// @brief Method get_usings, addr 0x6a8f5e4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UsingEntry>* get_usings();

  /// @brief Method get_uxmlObjectEntries, addr 0x6a8f71c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualTreeAsset_UxmlObjectEntry>* get_uxmlObjectEntries();

  /// @brief Method get_uxmlObjectIds, addr 0x6a8f724, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<int32_t>* get_uxmlObjectIds();

  /// @brief Method get_visualElementAssets, addr 0x6a8f70c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* get_visualElementAssets();

  static inline void setStaticF_LinkedVEAInTemplatePropertyName(::StringW value);

  static inline void setStaticF_NoRegisteredFactoryErrorMessage(::StringW value);

  static inline void setStaticF_s_TemporarySlotInsertionPoints(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* value);

  static inline void setStaticF_s_VeaIdsPath(::System::Collections::Generic::List_1<int32_t>* value);

  /// @brief Method set_contentContainerId, addr 0x6a91598, size 0x8, virtual false, abstract: false, final false
  inline void set_contentContainerId(int32_t value);

  /// @brief Method set_contentHash, addr 0x6a93134, size 0x8, virtual false, abstract: false, final false
  inline void set_contentHash(int32_t value);

  /// @brief Method set_importedWithErrors, addr 0x6a8f448, size 0x8, virtual false, abstract: false, final false
  inline void set_importedWithErrors(bool value);

  /// @brief Method set_importedWithWarnings, addr 0x6a8f468, size 0x8, virtual false, abstract: false, final false
  inline void set_importedWithWarnings(bool value);

  /// @brief Method set_importerWithUpdatedUrls, addr 0x6a8f458, size 0x8, virtual false, abstract: false, final false
  inline void set_importerWithUpdatedUrls(bool value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5209 };

  /// @brief Field m_ImportedWithErrors, offset: 0x18, size: 0x1, def value: None
  bool ___m_ImportedWithErrors;

  /// @brief Field m_HasUpdatedUrls, offset: 0x19, size: 0x1, def value: None
  bool ___m_HasUpdatedUrls;

  /// @brief Field m_ImportedWithWarnings, offset: 0x1a, size: 0x1, def value: None
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

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_HasUpdatedUrls) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_ImportedWithWarnings) == 0x1a, "Offset mismatch!");

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
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass76_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass76_0*, "UnityEngine.UIElements", "VisualTreeAsset/<>c__DisplayClass76_0");
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31*, "UnityEngine.UIElements", "VisualTreeAsset/<get_stylesheets>d__31");
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27*, "UnityEngine.UIElements", "VisualTreeAsset/<get_templateDependencies>d__27");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset_AssetEntry, "UnityEngine.UIElements", "VisualTreeAsset/AssetEntry");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset_SlotDefinition, "UnityEngine.UIElements", "VisualTreeAsset/SlotDefinition");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset_SlotUsageEntry, "UnityEngine.UIElements", "VisualTreeAsset/SlotUsageEntry");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset_UsingEntry, "UnityEngine.UIElements", "VisualTreeAsset/UsingEntry");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset_UxmlObjectEntry, "UnityEngine.UIElements", "VisualTreeAsset/UxmlObjectEntry");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass81_0, "UnityEngine.UIElements", "VisualTreeAsset/<>c__DisplayClass81_0");
