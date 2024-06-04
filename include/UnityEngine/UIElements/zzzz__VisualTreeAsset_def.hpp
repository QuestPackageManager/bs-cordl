#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
namespace UnityEngine::UIElements {
struct CreationContext;
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
class VisualElementAsset;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct __TemplateAsset__AttributeOverride;
}
namespace UnityEngine::UIElements {
struct __VisualTreeAsset__SlotDefinition;
}
namespace UnityEngine::UIElements {
struct __VisualTreeAsset__SlotUsageEntry;
}
namespace UnityEngine::UIElements {
class __VisualTreeAsset__UsingEntryComparer;
}
namespace UnityEngine::UIElements {
struct __VisualTreeAsset__UsingEntry;
}
namespace UnityEngine::UIElements {
class __VisualTreeAsset____c__DisplayClass45_0;
}
namespace UnityEngine::UIElements {
struct __VisualTreeAsset____c__DisplayClass49_0;
}
namespace UnityEngine::UIElements {
class __VisualTreeAsset___get_stylesheets_d__21;
}
namespace UnityEngine::UIElements {
class __VisualTreeAsset___get_templateDependencies_d__17;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
namespace UnityEngine::UIElements {
class __VisualTreeAsset__UsingEntryComparer;
}
namespace UnityEngine::UIElements {
class __VisualTreeAsset____c__DisplayClass45_0;
}
namespace UnityEngine::UIElements {
class __VisualTreeAsset___get_stylesheets_d__21;
}
namespace UnityEngine::UIElements {
class __VisualTreeAsset___get_templateDependencies_d__17;
}
namespace UnityEngine::UIElements {
struct __VisualTreeAsset__SlotDefinition;
}
namespace UnityEngine::UIElements {
struct __VisualTreeAsset__SlotUsageEntry;
}
namespace UnityEngine::UIElements {
struct __VisualTreeAsset__UsingEntry;
}
namespace UnityEngine::UIElements {
struct __VisualTreeAsset____c__DisplayClass49_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualTreeAsset);
MARK_REF_PTR_T(::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer);
MARK_REF_PTR_T(::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0);
MARK_REF_PTR_T(::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21);
MARK_REF_PTR_T(::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17);
MARK_VAL_T(::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition);
MARK_VAL_T(::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry);
MARK_VAL_T(::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry);
MARK_VAL_T(::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass49_0);
// Type: ::UsingEntry
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::VisualTreeAsset::UsingEntry
struct CORDL_TYPE __VisualTreeAsset__UsingEntry {
public:
  // Declarations
  /// @brief Field comparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_comparer, put = setStaticF_comparer))::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>* comparer;

  /// @brief Method .ctor, addr 0x35937e0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW alias, ::StringW path);

  static inline ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>* getStaticF_comparer();

  static inline void setStaticF_comparer(::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualTreeAsset__UsingEntry();

  // Ctor Parameters [CppParam { name: "alias", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "asset",
  // ty: "::UnityW<::UnityEngine::UIElements::VisualTreeAsset>", modifiers: "", def_value: None }]
  constexpr __VisualTreeAsset__UsingEntry(::StringW alias, ::StringW path, ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> asset) noexcept;

  /// @brief Field alias, offset: 0x0, size: 0x8, def value: None
  ::StringW alias;

  /// @brief Field path, offset: 0x8, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field asset, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> asset;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry, alias) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry, path) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry, asset) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UsingEntryComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::VisualTreeAsset::UsingEntryComparer*
class CORDL_TYPE __VisualTreeAsset__UsingEntryComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*() noexcept;

  /// @brief Method Compare, addr 0x3593c68, size 0x10, virtual true, abstract: false, final true
  inline int32_t Compare(::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry x, ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry y);

  static inline ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer* New_ctor();

  /// @brief Method .ctor, addr 0x3593c60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>"
  constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*
  i___System__Collections__Generic__IComparer_1___UnityEngine__UIElements____VisualTreeAsset__UsingEntry_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualTreeAsset__UsingEntryComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeAsset__UsingEntryComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualTreeAsset__UsingEntryComparer(__VisualTreeAsset__UsingEntryComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeAsset__UsingEntryComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualTreeAsset__UsingEntryComparer(__VisualTreeAsset__UsingEntryComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::SlotDefinition
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::VisualTreeAsset::SlotDefinition
struct CORDL_TYPE __VisualTreeAsset__SlotDefinition {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualTreeAsset__SlotDefinition();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "insertionPointId", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __VisualTreeAsset__SlotDefinition(::StringW name, int32_t insertionPointId) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field insertionPointId, offset: 0x8, size: 0x4, def value: None
  int32_t insertionPointId;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition, insertionPointId) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::SlotUsageEntry
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::VisualTreeAsset::SlotUsageEntry
struct CORDL_TYPE __VisualTreeAsset__SlotUsageEntry {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualTreeAsset__SlotUsageEntry();

  // Ctor Parameters [CppParam { name: "slotName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assetId", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __VisualTreeAsset__SlotUsageEntry(::StringW slotName, int32_t assetId) noexcept;

  /// @brief Field slotName, offset: 0x0, size: 0x8, def value: None
  ::StringW slotName;

  /// @brief Field assetId, offset: 0x8, size: 0x4, def value: None
  int32_t assetId;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry, slotName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry, assetId) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::<get_templateDependencies>d__17
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::VisualTreeAsset::<get_templateDependencies>d__17*
class CORDL_TYPE __VisualTreeAsset___get_templateDependencies_d__17 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__get_Current))::UnityW<
      ::UnityEngine::UIElements::VisualTreeAsset> System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::UnityW<::UnityEngine::UIElements::VisualTreeAsset> __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::UnityEngine::UIElements::VisualTreeAsset> __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>s__2, offset 0x38, size 0x28
  __declspec(property(get = __cordl_internal_get___s__2,
                      put = __cordl_internal_set___s__2))::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry> __s__2;

  /// @brief Field <entry>5__3, offset 0x60, size 0x18
  __declspec(property(get = __cordl_internal_get__entry_5__3, put = __cordl_internal_set__entry_5__3))::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry _entry_5__3;

  /// @brief Field <sent>5__1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sent_5__1,
                      put = __cordl_internal_set__sent_5__1))::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* _sent_5__1;

  /// @brief Field <vta>5__4, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__vta_5__4, put = __cordl_internal_set__vta_5__4))::UnityW<::UnityEngine::UIElements::VisualTreeAsset> _vta_5__4;

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

  /// @brief Method MoveNext, addr 0x3593ca4, size 0x4e0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualTreeAsset>.GetEnumerator, addr 0x3594224, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*
  System_Collections_Generic_IEnumerable_UnityEngine_UIElements_VisualTreeAsset__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualTreeAsset>.get_Current, addr 0x35941d4, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x35942c4, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x35941dc, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x359421c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3593c78, size 0x2c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry> const& __cordl_internal_get___s__2() const;

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>& __cordl_internal_get___s__2();

  constexpr ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry const& __cordl_internal_get__entry_5__3() const;

  constexpr ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry& __cordl_internal_get__entry_5__3();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*& __cordl_internal_get__sent_5__1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*> const& __cordl_internal_get__sent_5__1() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get__vta_5__4() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get__vta_5__4();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set___s__2(::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry> value);

  constexpr void __cordl_internal_set__entry_5__3(::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry value);

  constexpr void __cordl_internal_set__sent_5__1(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* value);

  constexpr void __cordl_internal_set__vta_5__4(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value);

  /// @brief Method <>m__Finally1, addr 0x3594184, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x35918c4, size 0x44, virtual false, abstract: false, final false
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
  constexpr __VisualTreeAsset___get_templateDependencies_d__17();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeAsset___get_templateDependencies_d__17", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualTreeAsset___get_templateDependencies_d__17(__VisualTreeAsset___get_templateDependencies_d__17&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeAsset___get_templateDependencies_d__17", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualTreeAsset___get_templateDependencies_d__17(__VisualTreeAsset___get_templateDependencies_d__17 const&) = delete;

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
  ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry> _____s__2;

  /// @brief Field <entry>5__3, offset: 0x60, size: 0x18, def value: None
  ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry ____entry_5__3;

  /// @brief Field <vta>5__4, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> ____vta_5__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17, ____sent_5__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17, _____s__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17, ____entry_5__3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17, ____vta_5__4) == 0x78, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::<get_stylesheets>d__21
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::VisualTreeAsset::<get_stylesheets>d__21*
class CORDL_TYPE __VisualTreeAsset___get_stylesheets_d__21 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__get_Current))::UnityW<
      ::UnityEngine::UIElements::StyleSheet> System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::UnityW<::UnityEngine::UIElements::StyleSheet> __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::UnityEngine::UIElements::VisualTreeAsset> __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>s__2, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get___s__2, put = __cordl_internal_set___s__2))::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::VisualElementAsset*> __s__2;

  /// @brief Field <>s__4, offset 0x58, size 0x18
  __declspec(property(get = __cordl_internal_get___s__4,
                      put = __cordl_internal_set___s__4))::System::Collections::Generic::__List_1__Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>> __s__4;

  /// @brief Field <>s__6, offset 0x78, size 0x18
  __declspec(property(get = __cordl_internal_get___s__6, put = __cordl_internal_set___s__6))::System::Collections::Generic::__List_1__Enumerator<::StringW> __s__6;

  /// @brief Field <sent>5__1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sent_5__1,
                      put = __cordl_internal_set__sent_5__1))::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* _sent_5__1;

  /// @brief Field <stylesheetPath>5__7, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__stylesheetPath_5__7, put = __cordl_internal_set__stylesheetPath_5__7))::StringW _stylesheetPath_5__7;

  /// @brief Field <stylesheet>5__5, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__stylesheet_5__5, put = __cordl_internal_set__stylesheet_5__5))::UnityW<::UnityEngine::UIElements::StyleSheet> _stylesheet_5__5;

  /// @brief Field <stylesheet>5__8, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__stylesheet_5__8, put = __cordl_internal_set__stylesheet_5__8))::UnityW<::UnityEngine::UIElements::StyleSheet> _stylesheet_5__8;

  /// @brief Field <vea>5__3, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__vea_5__3, put = __cordl_internal_set__vea_5__3))::UnityEngine::UIElements::VisualElementAsset* _vea_5__3;

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

  /// @brief Method MoveNext, addr 0x35943b4, size 0x5bc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.StyleSheet>.GetEnumerator, addr 0x3594ab0, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StyleSheet__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.StyleSheet>.get_Current, addr 0x3594a60, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::UIElements::StyleSheet> System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3594b50, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3594a68, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3594aa8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x35942c8, size 0xec, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::VisualElementAsset*> const& __cordl_internal_get___s__2() const;

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::VisualElementAsset*>& __cordl_internal_get___s__2();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>> const& __cordl_internal_get___s__4() const;

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>>& __cordl_internal_get___s__4();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW> const& __cordl_internal_get___s__6() const;

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW>& __cordl_internal_get___s__6();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*& __cordl_internal_get__sent_5__1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*> const& __cordl_internal_get__sent_5__1() const;

  constexpr ::StringW const& __cordl_internal_get__stylesheetPath_5__7() const;

  constexpr ::StringW& __cordl_internal_get__stylesheetPath_5__7();

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& __cordl_internal_get__stylesheet_5__5() const;

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& __cordl_internal_get__stylesheet_5__5();

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& __cordl_internal_get__stylesheet_5__8() const;

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& __cordl_internal_get__stylesheet_5__8();

  constexpr ::UnityEngine::UIElements::VisualElementAsset*& __cordl_internal_get__vea_5__3();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElementAsset*> const& __cordl_internal_get__vea_5__3() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::UnityEngine::UIElements::StyleSheet> value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set___s__2(::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::VisualElementAsset*> value);

  constexpr void __cordl_internal_set___s__4(::System::Collections::Generic::__List_1__Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>> value);

  constexpr void __cordl_internal_set___s__6(::System::Collections::Generic::__List_1__Enumerator<::StringW> value);

  constexpr void __cordl_internal_set__sent_5__1(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* value);

  constexpr void __cordl_internal_set__stylesheetPath_5__7(::StringW value);

  constexpr void __cordl_internal_set__stylesheet_5__5(::UnityW<::UnityEngine::UIElements::StyleSheet> value);

  constexpr void __cordl_internal_set__stylesheet_5__8(::UnityW<::UnityEngine::UIElements::StyleSheet> value);

  constexpr void __cordl_internal_set__vea_5__3(::UnityEngine::UIElements::VisualElementAsset* value);

  /// @brief Method <>m__Finally1, addr 0x3594a10, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x3594970, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method <>m__Finally3, addr 0x35949c0, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally3();

  /// @brief Method .ctor, addr 0x359196c, size 0x44, virtual false, abstract: false, final false
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
  constexpr __VisualTreeAsset___get_stylesheets_d__21();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeAsset___get_stylesheets_d__21", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualTreeAsset___get_stylesheets_d__21(__VisualTreeAsset___get_stylesheets_d__21&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeAsset___get_stylesheets_d__21", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualTreeAsset___get_stylesheets_d__21(__VisualTreeAsset___get_stylesheets_d__21 const&) = delete;

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
  ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::VisualElementAsset*> _____s__2;

  /// @brief Field <vea>5__3, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElementAsset* ____vea_5__3;

  /// @brief Field <>s__4, offset: 0x58, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>> _____s__4;

  /// @brief Field <stylesheet>5__5, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::StyleSheet> ____stylesheet_5__5;

  /// @brief Field <>s__6, offset: 0x78, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::StringW> _____s__6;

  /// @brief Field <stylesheetPath>5__7, offset: 0x90, size: 0x8, def value: None
  ::StringW ____stylesheetPath_5__7;

  /// @brief Field <stylesheet>5__8, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::StyleSheet> ____stylesheet_5__8;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21, ____sent_5__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21, _____s__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21, ____vea_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21, _____s__4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21, ____stylesheet_5__5) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21, _____s__6) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21, ____stylesheetPath_5__7) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21, ____stylesheet_5__8) == 0x98, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::<>c__DisplayClass45_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::VisualTreeAsset::<>c__DisplayClass45_0*
class CORDL_TYPE __VisualTreeAsset____c__DisplayClass45_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field childVea, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_childVea, put = __cordl_internal_set_childVea))::UnityEngine::UIElements::VisualElementAsset* childVea;

  static inline ::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0* New_ctor();

  /// @brief Method <CloneSetupRecursively>b__0, addr 0x3594b54, size 0x24, virtual false, abstract: false, final false
  inline bool _CloneSetupRecursively_b__0(::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry u);

  constexpr ::UnityEngine::UIElements::VisualElementAsset*& __cordl_internal_get_childVea();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElementAsset*> const& __cordl_internal_get_childVea() const;

  constexpr void __cordl_internal_set_childVea(::UnityEngine::UIElements::VisualElementAsset* value);

  /// @brief Method .ctor, addr 0x359352c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualTreeAsset____c__DisplayClass45_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeAsset____c__DisplayClass45_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualTreeAsset____c__DisplayClass45_0(__VisualTreeAsset____c__DisplayClass45_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeAsset____c__DisplayClass45_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualTreeAsset____c__DisplayClass45_0(__VisualTreeAsset____c__DisplayClass45_0 const&) = delete;

  /// @brief Field childVea, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElementAsset* ___childVea;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0, ___childVea) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::<>c__DisplayClass49_0
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::VisualTreeAsset::<>c__DisplayClass49_0
struct CORDL_TYPE __VisualTreeAsset____c__DisplayClass49_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualTreeAsset____c__DisplayClass49_0();

  // Ctor Parameters [CppParam { name: "asset", ty: "::UnityEngine::UIElements::VisualElementAsset*", modifiers: "", def_value: None }]
  constexpr __VisualTreeAsset____c__DisplayClass49_0(::UnityEngine::UIElements::VisualElementAsset* asset) noexcept;

  /// @brief Field asset, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElementAsset* asset;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass49_0, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass49_0, asset) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::VisualTreeAsset
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::VisualTreeAsset*
class CORDL_TYPE VisualTreeAsset : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using SlotDefinition = ::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition;

  using SlotUsageEntry = ::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry;

  using UsingEntry = ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry;

  using UsingEntryComparer = ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer;

  using __c__DisplayClass45_0 = ::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0;

  using __c__DisplayClass49_0 = ::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass49_0;

  using _get_stylesheets_d__21 = ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21;

  using _get_templateDependencies_d__17 = ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17;

  /// @brief Field LinkedVEAInTemplatePropertyName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_LinkedVEAInTemplatePropertyName, put = setStaticF_LinkedVEAInTemplatePropertyName))::StringW LinkedVEAInTemplatePropertyName;

  __declspec(property(get = get_contentContainerId, put = set_contentContainerId)) int32_t contentContainerId;

  __declspec(property(get = get_contentHash, put = set_contentHash)) int32_t contentHash;

  __declspec(property(get = get_importedWithErrors, put = set_importedWithErrors)) bool importedWithErrors;

  __declspec(property(get = get_importedWithWarnings, put = set_importedWithWarnings)) bool importedWithWarnings;

  /// @brief Field inlineSheet, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_inlineSheet, put = __cordl_internal_set_inlineSheet))::UnityW<::UnityEngine::UIElements::StyleSheet> inlineSheet;

  /// @brief Field m_ContentContainerId, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ContentContainerId, put = __cordl_internal_set_m_ContentContainerId)) int32_t m_ContentContainerId;

  /// @brief Field m_ContentHash, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ContentHash, put = __cordl_internal_set_m_ContentHash)) int32_t m_ContentHash;

  /// @brief Field m_ImportedWithErrors, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ImportedWithErrors, put = __cordl_internal_set_m_ImportedWithErrors)) bool m_ImportedWithErrors;

  /// @brief Field m_ImportedWithWarnings, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ImportedWithWarnings, put = __cordl_internal_set_m_ImportedWithWarnings)) bool m_ImportedWithWarnings;

  /// @brief Field m_Slots, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Slots,
                      put = __cordl_internal_set_m_Slots))::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>* m_Slots;

  /// @brief Field m_TemplateAssets, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TemplateAssets,
                      put = __cordl_internal_set_m_TemplateAssets))::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* m_TemplateAssets;

  /// @brief Field m_Usings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Usings,
                      put = __cordl_internal_set_m_Usings))::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>* m_Usings;

  /// @brief Field m_VisualElementAssets, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisualElementAssets,
                      put = __cordl_internal_set_m_VisualElementAssets))::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* m_VisualElementAssets;

  /// @brief Field s_TemporarySlotInsertionPoints, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_s_TemporarySlotInsertionPoints,
               put = setStaticF_s_TemporarySlotInsertionPoints))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* s_TemporarySlotInsertionPoints;

  __declspec(property(get = get_slots, put = set_slots))::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>* slots;

  __declspec(property(get = get_stylesheets))::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* stylesheets;

  __declspec(property(get = get_templateAssets, put = set_templateAssets))::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* templateAssets;

  __declspec(property(get = get_templateDependencies))::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* templateDependencies;

  __declspec(property(get = get_visualElementAssets, put = set_visualElementAssets))::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* visualElementAssets;

  /// @brief Method AssignClassListFromAssetToElement, addr 0x3592434, size 0x6c, virtual false, abstract: false, final false
  static inline void AssignClassListFromAssetToElement(::UnityEngine::UIElements::VisualElementAsset* asset, ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method AssignStyleSheetFromAssetToElement, addr 0x35924a0, size 0x1b8, virtual false, abstract: false, final false
  static inline void AssignStyleSheetFromAssetToElement(::UnityEngine::UIElements::VisualElementAsset* asset, ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method CloneSetupRecursively, addr 0x359266c, size 0x848, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement*
  CloneSetupRecursively(::UnityEngine::UIElements::VisualElementAsset* root,
                        ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*>* idToChildren,
                        ::UnityEngine::UIElements::CreationContext context);

  /// @brief Method CloneTree, addr 0x3592210, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TemplateContainer* CloneTree();

  /// @brief Method CloneTree, addr 0x3592214, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TemplateContainer* CloneTree(::StringW bindingPath);

  /// @brief Method CloneTree, addr 0x3592234, size 0x1c, virtual false, abstract: false, final false
  inline void CloneTree(::UnityEngine::UIElements::VisualElement* target);

  /// @brief Method CloneTree, addr 0x3592250, size 0x1dc, virtual false, abstract: false, final false
  inline void CloneTree(::UnityEngine::UIElements::VisualElement* target, ByRef<int32_t> firstElementIndex, ByRef<int32_t> elementAddedCount);

  /// @brief Method CloneTree, addr 0x3591b70, size 0x680, virtual false, abstract: false, final false
  inline void CloneTree(::UnityEngine::UIElements::VisualElement* target, ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints,
                        ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>* attributeOverrides);

  /// @brief Method CompareForOrder, addr 0x3593534, size 0x34, virtual false, abstract: false, final false
  static inline int32_t CompareForOrder(::UnityEngine::UIElements::VisualElementAsset* a, ::UnityEngine::UIElements::VisualElementAsset* b);

  /// @brief Method Create, addr 0x3592eb4, size 0x5c0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::VisualElementAsset* asset, ::UnityEngine::UIElements::CreationContext ctx);

  /// @brief Method GetNextChildSerialNumber, addr 0x3591800, size 0x60, virtual false, abstract: false, final false
  inline int32_t GetNextChildSerialNumber();

  /// @brief Method Instantiate, addr 0x35919f0, size 0x180, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TemplateContainer* Instantiate();

  /// @brief Method Instantiate, addr 0x35921f0, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TemplateContainer* Instantiate(::StringW bindingPath);

  static inline ::UnityEngine::UIElements::VisualTreeAsset* New_ctor();

  /// @brief Method ResolveTemplate, addr 0x3593570, size 0x270, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> ResolveTemplate(::StringW templateName);

  /// @brief Method TryGetSlotInsertionPoint, addr 0x3593474, size 0xb0, virtual false, abstract: false, final false
  inline bool TryGetSlotInsertionPoint(int32_t insertionPointId, ByRef<::StringW> slotName);

  /// @brief Method <Create>g__CreateError|49_0, addr 0x35937f4, size 0x144, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* _Create_g__CreateError_49_0(ByRef<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass49_0> _cordl_fixed_empty_name_whitespace);

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& __cordl_internal_get_inlineSheet() const;

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& __cordl_internal_get_inlineSheet();

  constexpr int32_t const& __cordl_internal_get_m_ContentContainerId() const;

  constexpr int32_t& __cordl_internal_get_m_ContentContainerId();

  constexpr int32_t const& __cordl_internal_get_m_ContentHash() const;

  constexpr int32_t& __cordl_internal_get_m_ContentHash();

  constexpr bool const& __cordl_internal_get_m_ImportedWithErrors() const;

  constexpr bool& __cordl_internal_get_m_ImportedWithErrors();

  constexpr bool const& __cordl_internal_get_m_ImportedWithWarnings() const;

  constexpr bool& __cordl_internal_get_m_ImportedWithWarnings();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>*& __cordl_internal_get_m_Slots();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>*> const& __cordl_internal_get_m_Slots() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*& __cordl_internal_get_m_TemplateAssets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*> const& __cordl_internal_get_m_TemplateAssets() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*& __cordl_internal_get_m_Usings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*> const& __cordl_internal_get_m_Usings() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*& __cordl_internal_get_m_VisualElementAssets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*> const& __cordl_internal_get_m_VisualElementAssets() const;

  constexpr void __cordl_internal_set_inlineSheet(::UnityW<::UnityEngine::UIElements::StyleSheet> value);

  constexpr void __cordl_internal_set_m_ContentContainerId(int32_t value);

  constexpr void __cordl_internal_set_m_ContentHash(int32_t value);

  constexpr void __cordl_internal_set_m_ImportedWithErrors(bool value);

  constexpr void __cordl_internal_set_m_ImportedWithWarnings(bool value);

  constexpr void __cordl_internal_set_m_Slots(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>* value);

  constexpr void __cordl_internal_set_m_TemplateAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* value);

  constexpr void __cordl_internal_set_m_Usings(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>* value);

  constexpr void __cordl_internal_set_m_VisualElementAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* value);

  /// @brief Method .ctor, addr 0x3593b28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_LinkedVEAInTemplatePropertyName();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* getStaticF_s_TemporarySlotInsertionPoints();

  /// @brief Method get_contentContainerId, addr 0x35919e0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_contentContainerId();

  /// @brief Method get_contentHash, addr 0x3593b18, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_contentHash();

  /// @brief Method get_importedWithErrors, addr 0x35917d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_importedWithErrors();

  /// @brief Method get_importedWithWarnings, addr 0x35917ec, size 0x8, virtual false, abstract: false, final false
  inline bool get_importedWithWarnings();

  /// @brief Method get_slots, addr 0x35919d0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>* get_slots();

  /// @brief Method get_stylesheets, addr 0x3591908, size 0x64, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* get_stylesheets();

  /// @brief Method get_templateAssets, addr 0x35919c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* get_templateAssets();

  /// @brief Method get_templateDependencies, addr 0x3591860, size 0x64, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* get_templateDependencies();

  /// @brief Method get_visualElementAssets, addr 0x35919b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* get_visualElementAssets();

  static inline void setStaticF_LinkedVEAInTemplatePropertyName(::StringW value);

  static inline void setStaticF_s_TemporarySlotInsertionPoints(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method set_contentContainerId, addr 0x35919e8, size 0x8, virtual false, abstract: false, final false
  inline void set_contentContainerId(int32_t value);

  /// @brief Method set_contentHash, addr 0x3593b20, size 0x8, virtual false, abstract: false, final false
  inline void set_contentHash(int32_t value);

  /// @brief Method set_importedWithErrors, addr 0x35917e0, size 0xc, virtual false, abstract: false, final false
  inline void set_importedWithErrors(bool value);

  /// @brief Method set_importedWithWarnings, addr 0x35917f4, size 0xc, virtual false, abstract: false, final false
  inline void set_importedWithWarnings(bool value);

  /// @brief Method set_slots, addr 0x35919d8, size 0x8, virtual false, abstract: false, final false
  inline void set_slots(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>* value);

  /// @brief Method set_templateAssets, addr 0x35919c8, size 0x8, virtual false, abstract: false, final false
  inline void set_templateAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* value);

  /// @brief Method set_visualElementAssets, addr 0x35919b8, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field m_ImportedWithErrors, offset: 0x18, size: 0x1, def value: None
  bool ___m_ImportedWithErrors;

  /// @brief Field m_ImportedWithWarnings, offset: 0x19, size: 0x1, def value: None
  bool ___m_ImportedWithWarnings;

  /// @brief Field m_Usings, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>* ___m_Usings;

  /// @brief Field inlineSheet, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::StyleSheet> ___inlineSheet;

  /// @brief Field m_VisualElementAssets, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* ___m_VisualElementAssets;

  /// @brief Field m_TemplateAssets, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* ___m_TemplateAssets;

  /// @brief Field m_Slots, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>* ___m_Slots;

  /// @brief Field m_ContentContainerId, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_ContentContainerId;

  /// @brief Field m_ContentHash, offset: 0x4c, size: 0x4, def value: None
  int32_t ___m_ContentHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualTreeAsset, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_ImportedWithErrors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_ImportedWithWarnings) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_Usings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___inlineSheet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_VisualElementAssets) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_TemplateAssets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_Slots) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_ContentContainerId) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_ContentHash) == 0x4c, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset*, "UnityEngine.UIElements", "VisualTreeAsset");
NEED_NO_BOX(::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer*, "UnityEngine.UIElements", "VisualTreeAsset/UsingEntryComparer");
NEED_NO_BOX(::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0*, "UnityEngine.UIElements", "VisualTreeAsset/<>c__DisplayClass45_0");
NEED_NO_BOX(::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21*, "UnityEngine.UIElements", "VisualTreeAsset/<get_stylesheets>d__21");
NEED_NO_BOX(::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17*, "UnityEngine.UIElements", "VisualTreeAsset/<get_templateDependencies>d__17");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition, "UnityEngine.UIElements", "VisualTreeAsset/SlotDefinition");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry, "UnityEngine.UIElements", "VisualTreeAsset/SlotUsageEntry");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry, "UnityEngine.UIElements", "VisualTreeAsset/UsingEntry");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass49_0, "UnityEngine.UIElements", "VisualTreeAsset/<>c__DisplayClass49_0");
