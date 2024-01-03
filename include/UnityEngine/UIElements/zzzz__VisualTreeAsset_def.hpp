#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementAsset_def.hpp"
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7003))
// CS Name: ::VisualTreeAsset::UsingEntry
struct CORDL_TYPE __VisualTreeAsset__UsingEntry {
public:
  // Declarations
  /// @brief Field comparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_comparer, put = setStaticF_comparer))::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>* comparer;

  static inline void setStaticF_comparer(::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>* value);

  static inline ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>* getStaticF_comparer();

  /// @brief Method .ctor, addr 0x2e13448, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW alias, ::StringW path);

  // Ctor Parameters [CppParam { name: "alias", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "asset",
  // ty: "::UnityEngine::UIElements::VisualTreeAsset*", modifiers: "", def_value: None }]
  constexpr __VisualTreeAsset__UsingEntry(::StringW alias, ::StringW path, ::UnityEngine::UIElements::VisualTreeAsset* asset) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualTreeAsset__UsingEntry();

  /// @brief Field alias, offset: 0x0, size: 0x8, def value: None
  ::StringW alias;

  /// @brief Field path, offset: 0x8, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field asset, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualTreeAsset* asset;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7004))
// CS Name: ::VisualTreeAsset::UsingEntryComparer*
class CORDL_TYPE __VisualTreeAsset__UsingEntryComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>"
  constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*
  i___System__Collections__Generic__IComparer_1___UnityEngine__UIElements____VisualTreeAsset__UsingEntry_() noexcept;

  /// @brief Method Compare, addr 0x2e138d0, size 0x10, virtual true, abstract: false, final true
  inline int32_t Compare(::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry x, ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry y);

  static inline ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer* New_ctor();

  /// @brief Method .ctor, addr 0x2e138c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeAsset__UsingEntryComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualTreeAsset__UsingEntryComparer(__VisualTreeAsset__UsingEntryComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeAsset__UsingEntryComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualTreeAsset__UsingEntryComparer(__VisualTreeAsset__UsingEntryComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualTreeAsset__UsingEntryComparer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::SlotDefinition
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7005))
// CS Name: ::VisualTreeAsset::SlotDefinition
struct CORDL_TYPE __VisualTreeAsset__SlotDefinition {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "insertionPointId", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __VisualTreeAsset__SlotDefinition(::StringW name, int32_t insertionPointId) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualTreeAsset__SlotDefinition();

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7006))
// CS Name: ::VisualTreeAsset::SlotUsageEntry
struct CORDL_TYPE __VisualTreeAsset__SlotUsageEntry {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "slotName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assetId", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __VisualTreeAsset__SlotUsageEntry(::StringW slotName, int32_t assetId) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualTreeAsset__SlotUsageEntry();

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3842)), TypeDefinitionIndex(TypeDefinitionIndex(7003)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3842), inst: 1698 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(7007)) CS Name:
// ::VisualTreeAsset::<get_templateDependencies>d__17*
class CORDL_TYPE __VisualTreeAsset___get_templateDependencies_d__17 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::UnityEngine::UIElements::VisualTreeAsset* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::UnityEngine::UIElements::VisualTreeAsset* __4__this;

  /// @brief Field <sent>5__1, offset 0x30, size 0x8
  __declspec(property(get = __get__sent_5__1, put = __set__sent_5__1))::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualTreeAsset*>* _sent_5__1;

  /// @brief Field <>s__2, offset 0x38, size 0x28
  __declspec(property(get = __get___s__2, put = __set___s__2))::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry> __s__2;

  /// @brief Field <entry>5__3, offset 0x60, size 0x18
  __declspec(property(get = __get__entry_5__3, put = __set__entry_5__3))::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry _entry_5__3;

  /// @brief Field <vta>5__4, offset 0x78, size 0x8
  __declspec(property(get = __get__vta_5__4, put = __set__vta_5__4))::UnityEngine::UIElements::VisualTreeAsset* _vta_5__4;

  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__get_Current))::UnityEngine::UIElements::
      VisualTreeAsset* System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualTreeAsset*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualTreeAsset*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualTreeAsset*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualTreeAsset*>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__UIElements__VisualTreeAsset__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::VisualTreeAsset*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::VisualTreeAsset*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::VisualTreeAsset*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::VisualTreeAsset*>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__UIElements__VisualTreeAsset__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::UnityEngine::UIElements::VisualTreeAsset*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualTreeAsset*> const& __get___2__current() const;

  constexpr void __set___2__current(::UnityEngine::UIElements::VisualTreeAsset* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::UnityEngine::UIElements::VisualTreeAsset*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualTreeAsset*> const& __get___4__this() const;

  constexpr void __set___4__this(::UnityEngine::UIElements::VisualTreeAsset* value);

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualTreeAsset*>*& __get__sent_5__1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualTreeAsset*>*> const& __get__sent_5__1() const;

  constexpr void __set__sent_5__1(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualTreeAsset*>* value);

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>& __get___s__2();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry> const& __get___s__2() const;

  constexpr void __set___s__2(::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry> value);

  constexpr ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry& __get__entry_5__3();

  constexpr ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry const& __get__entry_5__3() const;

  constexpr void __set__entry_5__3(::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry value);

  constexpr ::UnityEngine::UIElements::VisualTreeAsset*& __get__vta_5__4();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualTreeAsset*> const& __get__vta_5__4() const;

  constexpr void __set__vta_5__4(::UnityEngine::UIElements::VisualTreeAsset* value);

  static inline ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2e1152c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2e138e0, size 0x2c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2e1390c, size 0x4e0, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1, addr 0x2e13dec, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualTreeAsset>.get_Current, addr 0x2e13e3c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::VisualTreeAsset* System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2e13e44, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2e13e84, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualTreeAsset>.GetEnumerator, addr 0x2e13e8c, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::VisualTreeAsset*>* System_Collections_Generic_IEnumerable_UnityEngine_UIElements_VisualTreeAsset__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2e13f2c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeAsset___get_templateDependencies_d__17", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualTreeAsset___get_templateDependencies_d__17(__VisualTreeAsset___get_templateDependencies_d__17&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeAsset___get_templateDependencies_d__17", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualTreeAsset___get_templateDependencies_d__17(__VisualTreeAsset___get_templateDependencies_d__17 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualTreeAsset___get_templateDependencies_d__17();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualTreeAsset* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualTreeAsset* _____4__this;

  /// @brief Field <sent>5__1, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualTreeAsset*>* ____sent_5__1;

  /// @brief Field <>s__2, offset: 0x38, size: 0x28, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry> _____s__2;

  /// @brief Field <entry>5__3, offset: 0x60, size: 0x18, def value: None
  ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry ____entry_5__3;

  /// @brief Field <vta>5__4, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualTreeAsset* ____vta_5__4;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7279)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3842), inst: 397 }), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(3842), inst: 1696 }), TypeDefinitionIndex(TypeDefinitionIndex(7013)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3842)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3842), inst: 1694 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(7008)) CS Name: ::VisualTreeAsset::<get_stylesheets>d__21*
class CORDL_TYPE __VisualTreeAsset___get_stylesheets_d__21 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::UnityEngine::UIElements::StyleSheet* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::UnityEngine::UIElements::VisualTreeAsset* __4__this;

  /// @brief Field <sent>5__1, offset 0x30, size 0x8
  __declspec(property(get = __get__sent_5__1, put = __set__sent_5__1))::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheet*>* _sent_5__1;

  /// @brief Field <>s__2, offset 0x38, size 0x18
  __declspec(property(get = __get___s__2, put = __set___s__2))::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::VisualElementAsset*> __s__2;

  /// @brief Field <vea>5__3, offset 0x50, size 0x8
  __declspec(property(get = __get__vea_5__3, put = __set__vea_5__3))::UnityEngine::UIElements::VisualElementAsset* _vea_5__3;

  /// @brief Field <>s__4, offset 0x58, size 0x18
  __declspec(property(get = __get___s__4, put = __set___s__4))::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::StyleSheet*> __s__4;

  /// @brief Field <stylesheet>5__5, offset 0x70, size 0x8
  __declspec(property(get = __get__stylesheet_5__5, put = __set__stylesheet_5__5))::UnityEngine::UIElements::StyleSheet* _stylesheet_5__5;

  /// @brief Field <>s__6, offset 0x78, size 0x18
  __declspec(property(get = __get___s__6, put = __set___s__6))::System::Collections::Generic::__List_1__Enumerator<::StringW> __s__6;

  /// @brief Field <stylesheetPath>5__7, offset 0x90, size 0x8
  __declspec(property(get = __get__stylesheetPath_5__7, put = __set__stylesheetPath_5__7))::StringW _stylesheetPath_5__7;

  /// @brief Field <stylesheet>5__8, offset 0x98, size 0x8
  __declspec(property(get = __get__stylesheet_5__8, put = __set__stylesheet_5__8))::UnityEngine::UIElements::StyleSheet* _stylesheet_5__8;

  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__get_Current))::UnityEngine::UIElements::
      StyleSheet* System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StyleSheet*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StyleSheet*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StyleSheet*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StyleSheet*>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__UIElements__StyleSheet__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StyleSheet*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StyleSheet*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StyleSheet*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StyleSheet*>* i___System__Collections__Generic__IEnumerator_1___UnityEngine__UIElements__StyleSheet__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::UnityEngine::UIElements::StyleSheet*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheet*> const& __get___2__current() const;

  constexpr void __set___2__current(::UnityEngine::UIElements::StyleSheet* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::UnityEngine::UIElements::VisualTreeAsset*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualTreeAsset*> const& __get___4__this() const;

  constexpr void __set___4__this(::UnityEngine::UIElements::VisualTreeAsset* value);

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheet*>*& __get__sent_5__1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheet*>*> const& __get__sent_5__1() const;

  constexpr void __set__sent_5__1(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheet*>* value);

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::VisualElementAsset*>& __get___s__2();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::VisualElementAsset*> const& __get___s__2() const;

  constexpr void __set___s__2(::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::VisualElementAsset*> value);

  constexpr ::UnityEngine::UIElements::VisualElementAsset*& __get__vea_5__3();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElementAsset*> const& __get__vea_5__3() const;

  constexpr void __set__vea_5__3(::UnityEngine::UIElements::VisualElementAsset* value);

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::StyleSheet*>& __get___s__4();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::StyleSheet*> const& __get___s__4() const;

  constexpr void __set___s__4(::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::StyleSheet*> value);

  constexpr ::UnityEngine::UIElements::StyleSheet*& __get__stylesheet_5__5();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheet*> const& __get__stylesheet_5__5() const;

  constexpr void __set__stylesheet_5__5(::UnityEngine::UIElements::StyleSheet* value);

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW>& __get___s__6();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::StringW> const& __get___s__6() const;

  constexpr void __set___s__6(::System::Collections::Generic::__List_1__Enumerator<::StringW> value);

  constexpr ::StringW& __get__stylesheetPath_5__7();

  constexpr ::StringW const& __get__stylesheetPath_5__7() const;

  constexpr void __set__stylesheetPath_5__7(::StringW value);

  constexpr ::UnityEngine::UIElements::StyleSheet*& __get__stylesheet_5__8();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheet*> const& __get__stylesheet_5__8() const;

  constexpr void __set__stylesheet_5__8(::UnityEngine::UIElements::StyleSheet* value);

  static inline ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2e115d4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2e13f30, size 0xec, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2e1401c, size 0x5bc, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1, addr 0x2e14678, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x2e145d8, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method <>m__Finally3, addr 0x2e14628, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally3();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.StyleSheet>.get_Current, addr 0x2e146c8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::StyleSheet* System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2e146d0, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2e14710, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.StyleSheet>.GetEnumerator, addr 0x2e14718, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::StyleSheet*>* System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StyleSheet__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2e147b8, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeAsset___get_stylesheets_d__21", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualTreeAsset___get_stylesheets_d__21(__VisualTreeAsset___get_stylesheets_d__21&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeAsset___get_stylesheets_d__21", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualTreeAsset___get_stylesheets_d__21(__VisualTreeAsset___get_stylesheets_d__21 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualTreeAsset___get_stylesheets_d__21();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleSheet* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualTreeAsset* _____4__this;

  /// @brief Field <sent>5__1, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheet*>* ____sent_5__1;

  /// @brief Field <>s__2, offset: 0x38, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::VisualElementAsset*> _____s__2;

  /// @brief Field <vea>5__3, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElementAsset* ____vea_5__3;

  /// @brief Field <>s__4, offset: 0x58, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::UIElements::StyleSheet*> _____s__4;

  /// @brief Field <stylesheet>5__5, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleSheet* ____stylesheet_5__5;

  /// @brief Field <>s__6, offset: 0x78, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::StringW> _____s__6;

  /// @brief Field <stylesheetPath>5__7, offset: 0x90, size: 0x8, def value: None
  ::StringW ____stylesheetPath_5__7;

  /// @brief Field <stylesheet>5__8, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleSheet* ____stylesheet_5__8;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7009))
// CS Name: ::VisualTreeAsset::<>c__DisplayClass45_0*
class CORDL_TYPE __VisualTreeAsset____c__DisplayClass45_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field childVea, offset 0x10, size 0x8
  __declspec(property(get = __get_childVea, put = __set_childVea))::UnityEngine::UIElements::VisualElementAsset* childVea;

  constexpr ::UnityEngine::UIElements::VisualElementAsset*& __get_childVea();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElementAsset*> const& __get_childVea() const;

  constexpr void __set_childVea(::UnityEngine::UIElements::VisualElementAsset* value);

  static inline ::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0* New_ctor();

  /// @brief Method .ctor, addr 0x2e13194, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <CloneSetupRecursively>b__0, addr 0x2e147bc, size 0x24, virtual false, abstract: false, final false
  inline bool _CloneSetupRecursively_b__0(::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry u);

  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeAsset____c__DisplayClass45_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualTreeAsset____c__DisplayClass45_0(__VisualTreeAsset____c__DisplayClass45_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualTreeAsset____c__DisplayClass45_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualTreeAsset____c__DisplayClass45_0(__VisualTreeAsset____c__DisplayClass45_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualTreeAsset____c__DisplayClass45_0();

public:
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7010))
// CS Name: ::VisualTreeAsset::<>c__DisplayClass49_0
struct CORDL_TYPE __VisualTreeAsset____c__DisplayClass49_0 {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "asset", ty: "::UnityEngine::UIElements::VisualElementAsset*", modifiers: "", def_value: None }]
  constexpr __VisualTreeAsset____c__DisplayClass49_0(::UnityEngine::UIElements::VisualElementAsset* asset) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualTreeAsset____c__DisplayClass49_0();

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7011))
// CS Name: ::UnityEngine.UIElements::VisualTreeAsset*
class CORDL_TYPE VisualTreeAsset : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using __c__DisplayClass49_0 = ::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass49_0;

  using __c__DisplayClass45_0 = ::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass45_0;

  using _get_stylesheets_d__21 = ::UnityEngine::UIElements::__VisualTreeAsset___get_stylesheets_d__21;

  using _get_templateDependencies_d__17 = ::UnityEngine::UIElements::__VisualTreeAsset___get_templateDependencies_d__17;

  using SlotUsageEntry = ::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry;

  using SlotDefinition = ::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition;

  using UsingEntryComparer = ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntryComparer;

  using UsingEntry = ::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry;

  /// @brief Field m_ImportedWithErrors, offset 0x18, size 0x1
  __declspec(property(get = __get_m_ImportedWithErrors, put = __set_m_ImportedWithErrors)) bool m_ImportedWithErrors;

  /// @brief Field m_ImportedWithWarnings, offset 0x19, size 0x1
  __declspec(property(get = __get_m_ImportedWithWarnings, put = __set_m_ImportedWithWarnings)) bool m_ImportedWithWarnings;

  /// @brief Field m_Usings, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Usings, put = __set_m_Usings))::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>* m_Usings;

  /// @brief Field inlineSheet, offset 0x28, size 0x8
  __declspec(property(get = __get_inlineSheet, put = __set_inlineSheet))::UnityEngine::UIElements::StyleSheet* inlineSheet;

  /// @brief Field m_VisualElementAssets, offset 0x30, size 0x8
  __declspec(property(get = __get_m_VisualElementAssets,
                      put = __set_m_VisualElementAssets))::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* m_VisualElementAssets;

  /// @brief Field m_TemplateAssets, offset 0x38, size 0x8
  __declspec(property(get = __get_m_TemplateAssets, put = __set_m_TemplateAssets))::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* m_TemplateAssets;

  /// @brief Field m_Slots, offset 0x40, size 0x8
  __declspec(property(get = __get_m_Slots, put = __set_m_Slots))::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>* m_Slots;

  /// @brief Field m_ContentContainerId, offset 0x48, size 0x4
  __declspec(property(get = __get_m_ContentContainerId, put = __set_m_ContentContainerId)) int32_t m_ContentContainerId;

  /// @brief Field m_ContentHash, offset 0x4c, size 0x4
  __declspec(property(get = __get_m_ContentHash, put = __set_m_ContentHash)) int32_t m_ContentHash;

  /// @brief Field LinkedVEAInTemplatePropertyName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_LinkedVEAInTemplatePropertyName, put = setStaticF_LinkedVEAInTemplatePropertyName))::StringW LinkedVEAInTemplatePropertyName;

  /// @brief Field s_TemporarySlotInsertionPoints, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_s_TemporarySlotInsertionPoints,
               put = setStaticF_s_TemporarySlotInsertionPoints))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* s_TemporarySlotInsertionPoints;

  __declspec(property(get = get_importedWithErrors, put = set_importedWithErrors)) bool importedWithErrors;

  __declspec(property(get = get_importedWithWarnings, put = set_importedWithWarnings)) bool importedWithWarnings;

  __declspec(property(get = get_templateDependencies))::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualTreeAsset*>* templateDependencies;

  __declspec(property(get = get_stylesheets))::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StyleSheet*>* stylesheets;

  __declspec(property(get = get_visualElementAssets, put = set_visualElementAssets))::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* visualElementAssets;

  __declspec(property(get = get_templateAssets, put = set_templateAssets))::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* templateAssets;

  __declspec(property(get = get_slots, put = set_slots))::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>* slots;

  __declspec(property(get = get_contentContainerId, put = set_contentContainerId)) int32_t contentContainerId;

  __declspec(property(get = get_contentHash, put = set_contentHash)) int32_t contentHash;

  constexpr bool& __get_m_ImportedWithErrors();

  constexpr bool const& __get_m_ImportedWithErrors() const;

  constexpr void __set_m_ImportedWithErrors(bool value);

  constexpr bool& __get_m_ImportedWithWarnings();

  constexpr bool const& __get_m_ImportedWithWarnings() const;

  constexpr void __set_m_ImportedWithWarnings(bool value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*& __get_m_Usings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>*> const& __get_m_Usings() const;

  constexpr void __set_m_Usings(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>* value);

  constexpr ::UnityEngine::UIElements::StyleSheet*& __get_inlineSheet();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheet*> const& __get_inlineSheet() const;

  constexpr void __set_inlineSheet(::UnityEngine::UIElements::StyleSheet* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*& __get_m_VisualElementAssets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*> const& __get_m_VisualElementAssets() const;

  constexpr void __set_m_VisualElementAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*& __get_m_TemplateAssets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*> const& __get_m_TemplateAssets() const;

  constexpr void __set_m_TemplateAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>*& __get_m_Slots();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>*> const& __get_m_Slots() const;

  constexpr void __set_m_Slots(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>* value);

  constexpr int32_t& __get_m_ContentContainerId();

  constexpr int32_t const& __get_m_ContentContainerId() const;

  constexpr void __set_m_ContentContainerId(int32_t value);

  constexpr int32_t& __get_m_ContentHash();

  constexpr int32_t const& __get_m_ContentHash() const;

  constexpr void __set_m_ContentHash(int32_t value);

  static inline void setStaticF_LinkedVEAInTemplatePropertyName(::StringW value);

  static inline ::StringW getStaticF_LinkedVEAInTemplatePropertyName();

  static inline void setStaticF_s_TemporarySlotInsertionPoints(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* getStaticF_s_TemporarySlotInsertionPoints();

  /// @brief Method get_importedWithErrors, addr 0x2e11440, size 0x8, virtual false, abstract: false, final false
  inline bool get_importedWithErrors();

  /// @brief Method set_importedWithErrors, addr 0x2e11448, size 0xc, virtual false, abstract: false, final false
  inline void set_importedWithErrors(bool value);

  /// @brief Method get_importedWithWarnings, addr 0x2e11454, size 0x8, virtual false, abstract: false, final false
  inline bool get_importedWithWarnings();

  /// @brief Method set_importedWithWarnings, addr 0x2e1145c, size 0xc, virtual false, abstract: false, final false
  inline void set_importedWithWarnings(bool value);

  /// @brief Method GetNextChildSerialNumber, addr 0x2e11468, size 0x60, virtual false, abstract: false, final false
  inline int32_t GetNextChildSerialNumber();

  /// @brief Method get_templateDependencies, addr 0x2e114c8, size 0x64, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::VisualTreeAsset*>* get_templateDependencies();

  /// @brief Method get_stylesheets, addr 0x2e11570, size 0x64, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::StyleSheet*>* get_stylesheets();

  /// @brief Method get_visualElementAssets, addr 0x2e11618, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* get_visualElementAssets();

  /// @brief Method set_visualElementAssets, addr 0x2e11620, size 0x8, virtual false, abstract: false, final false
  inline void set_visualElementAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* value);

  /// @brief Method get_templateAssets, addr 0x2e11628, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* get_templateAssets();

  /// @brief Method set_templateAssets, addr 0x2e11630, size 0x8, virtual false, abstract: false, final false
  inline void set_templateAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* value);

  /// @brief Method get_slots, addr 0x2e11638, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>* get_slots();

  /// @brief Method set_slots, addr 0x2e11640, size 0x8, virtual false, abstract: false, final false
  inline void set_slots(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotDefinition>* value);

  /// @brief Method get_contentContainerId, addr 0x2e11648, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_contentContainerId();

  /// @brief Method set_contentContainerId, addr 0x2e11650, size 0x8, virtual false, abstract: false, final false
  inline void set_contentContainerId(int32_t value);

  /// @brief Method Instantiate, addr 0x2e11658, size 0x180, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TemplateContainer* Instantiate();

  /// @brief Method Instantiate, addr 0x2e11e58, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TemplateContainer* Instantiate(::StringW bindingPath);

  /// @brief Method CloneTree, addr 0x2e11e78, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TemplateContainer* CloneTree();

  /// @brief Method CloneTree, addr 0x2e11e7c, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TemplateContainer* CloneTree(::StringW bindingPath);

  /// @brief Method CloneTree, addr 0x2e11e9c, size 0x1c, virtual false, abstract: false, final false
  inline void CloneTree(::UnityEngine::UIElements::VisualElement* target);

  /// @brief Method CloneTree, addr 0x2e11eb8, size 0x1dc, virtual false, abstract: false, final false
  inline void CloneTree(::UnityEngine::UIElements::VisualElement* target, ByRef<int32_t> firstElementIndex, ByRef<int32_t> elementAddedCount);

  /// @brief Method CloneTree, addr 0x2e117d8, size 0x680, virtual false, abstract: false, final false
  inline void CloneTree(::UnityEngine::UIElements::VisualElement* target, ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::VisualElement*>* slotInsertionPoints,
                        ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>* attributeOverrides);

  /// @brief Method CloneSetupRecursively, addr 0x2e122d4, size 0x848, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement*
  CloneSetupRecursively(::UnityEngine::UIElements::VisualElementAsset* root,
                        ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*>* idToChildren,
                        ::UnityEngine::UIElements::CreationContext context);

  /// @brief Method CompareForOrder, addr 0x2e1319c, size 0x34, virtual false, abstract: false, final false
  static inline int32_t CompareForOrder(::UnityEngine::UIElements::VisualElementAsset* a, ::UnityEngine::UIElements::VisualElementAsset* b);

  /// @brief Method TryGetSlotInsertionPoint, addr 0x2e130dc, size 0xb0, virtual false, abstract: false, final false
  inline bool TryGetSlotInsertionPoint(int32_t insertionPointId, ByRef<::StringW> slotName);

  /// @brief Method ResolveTemplate, addr 0x2e131d8, size 0x270, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualTreeAsset* ResolveTemplate(::StringW templateName);

  /// @brief Method Create, addr 0x2e12b1c, size 0x5c0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::VisualElementAsset* asset, ::UnityEngine::UIElements::CreationContext ctx);

  /// @brief Method AssignClassListFromAssetToElement, addr 0x2e1209c, size 0x6c, virtual false, abstract: false, final false
  static inline void AssignClassListFromAssetToElement(::UnityEngine::UIElements::VisualElementAsset* asset, ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method AssignStyleSheetFromAssetToElement, addr 0x2e12108, size 0x1b8, virtual false, abstract: false, final false
  static inline void AssignStyleSheetFromAssetToElement(::UnityEngine::UIElements::VisualElementAsset* asset, ::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method get_contentHash, addr 0x2e13780, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_contentHash();

  /// @brief Method set_contentHash, addr 0x2e13788, size 0x8, virtual false, abstract: false, final false
  inline void set_contentHash(int32_t value);

  static inline ::UnityEngine::UIElements::VisualTreeAsset* New_ctor();

  /// @brief Method .ctor, addr 0x2e13790, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Create>g__CreateError|49_0, addr 0x2e1345c, size 0x144, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* _Create_g__CreateError_49_0(ByRef<::UnityEngine::UIElements::__VisualTreeAsset____c__DisplayClass49_0> _cordl_fixed_empty_name_whitespace);

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualTreeAsset(VisualTreeAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualTreeAsset(VisualTreeAsset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualTreeAsset();

public:
  /// @brief Field m_ImportedWithErrors, offset: 0x18, size: 0x1, def value: None
  bool ___m_ImportedWithErrors;

  /// @brief Field m_ImportedWithWarnings, offset: 0x19, size: 0x1, def value: None
  bool ___m_ImportedWithWarnings;

  /// @brief Field m_Usings, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__UsingEntry>* ___m_Usings;

  /// @brief Field inlineSheet, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleSheet* ___inlineSheet;

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
