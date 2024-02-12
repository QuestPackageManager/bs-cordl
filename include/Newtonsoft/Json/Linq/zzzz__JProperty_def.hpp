#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JProperty)
namespace GlobalNamespace {
class __JProperty__JPropertyList___GetEnumerator_d__1;
}
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace Newtonsoft::Json::Linq {
class JsonMergeSettings;
}
namespace Newtonsoft::Json::Linq {
class __JProperty__JPropertyList;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
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
// Forward declare root types
namespace GlobalNamespace {
class __JProperty__JPropertyList___GetEnumerator_d__1;
}
namespace Newtonsoft::Json::Linq {
class JProperty;
}
namespace Newtonsoft::Json::Linq {
class __JProperty__JPropertyList;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__JProperty__JPropertyList___GetEnumerator_d__1);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JProperty);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::__JProperty__JPropertyList);
// Type: ::<GetEnumerator>d__1
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11901))
// CS Name: ::JProperty::JPropertyList::<GetEnumerator>d__1*
class CORDL_TYPE __JProperty__JPropertyList___GetEnumerator_d__1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::Newtonsoft::Json::Linq::JToken* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Newtonsoft::Json::Linq::__JProperty__JPropertyList* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current))::Newtonsoft::Json::Linq::
      JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerator_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::Newtonsoft::Json::Linq::JToken* value);

  constexpr ::Newtonsoft::Json::Linq::__JProperty__JPropertyList*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::__JProperty__JPropertyList*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::__JProperty__JPropertyList* value);

  static inline ::GlobalNamespace::__JProperty__JPropertyList___GetEnumerator_d__1* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x26cac64, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x26cad90, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x26cad94, size 0x60, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current, addr 0x26cadf4, size 0x8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x26cadfc, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x26cae3c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__JProperty__JPropertyList___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JProperty__JPropertyList___GetEnumerator_d__1(__JProperty__JPropertyList___GetEnumerator_d__1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JProperty__JPropertyList___GetEnumerator_d__1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JProperty__JPropertyList___GetEnumerator_d__1(__JProperty__JPropertyList___GetEnumerator_d__1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JProperty__JPropertyList___GetEnumerator_d__1();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::__JProperty__JPropertyList* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__JProperty__JPropertyList___GetEnumerator_d__1, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__JProperty__JPropertyList___GetEnumerator_d__1, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__JProperty__JPropertyList___GetEnumerator_d__1, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__JProperty__JPropertyList___GetEnumerator_d__1, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::JPropertyList
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11902))
// CS Name: ::JProperty::JPropertyList*
class CORDL_TYPE __JProperty__JPropertyList : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__1 = ::GlobalNamespace::__JProperty__JPropertyList___GetEnumerator_d__1;

  /// @brief Field _token, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__token, put = __cordl_internal_set__token))::Newtonsoft::Json::Linq::JToken* _token;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Item, put = set_Item))::Newtonsoft::Json::Linq::JToken* Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IList_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__ICollection_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__token();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get__token() const;

  constexpr void __cordl_internal_set__token(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method GetEnumerator, addr 0x26cabfc, size 0x68, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x26cac8c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method Add, addr 0x26cac90, size 0x8, virtual true, abstract: false, final true
  inline void Add(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method Clear, addr 0x26cac98, size 0x8, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x26caca0, size 0x10, virtual true, abstract: false, final true
  inline bool Contains(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method CopyTo, addr 0x26cacb0, size 0x64, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<::Newtonsoft::Json::Linq::JToken*, ::Array<::Newtonsoft::Json::Linq::JToken*>*> array, int32_t arrayIndex);

  /// @brief Method Remove, addr 0x26cad14, size 0x20, virtual true, abstract: false, final true
  inline bool Remove(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method get_Count, addr 0x26cad34, size 0x10, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x26cad44, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method IndexOf, addr 0x26ca39c, size 0x10, virtual true, abstract: false, final true
  inline int32_t IndexOf(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method Insert, addr 0x26cad4c, size 0x10, virtual true, abstract: false, final true
  inline void Insert(int32_t index, ::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method RemoveAt, addr 0x26cad5c, size 0x10, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  /// @brief Method get_Item, addr 0x26cad6c, size 0x14, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x26cad80, size 0x10, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, ::Newtonsoft::Json::Linq::JToken* value);

  static inline ::Newtonsoft::Json::Linq::__JProperty__JPropertyList* New_ctor();

  /// @brief Method .ctor, addr 0x26ca058, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__JProperty__JPropertyList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JProperty__JPropertyList(__JProperty__JPropertyList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JProperty__JPropertyList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JProperty__JPropertyList(__JProperty__JPropertyList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JProperty__JPropertyList();

public:
  /// @brief Field _token, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____token;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::__JProperty__JPropertyList, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JProperty__JPropertyList, ____token) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
// Type: Newtonsoft.Json.Linq::JProperty
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11886))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11903))
// CS Name: ::Newtonsoft.Json.Linq::JProperty*
class CORDL_TYPE JProperty : public ::Newtonsoft::Json::Linq::JContainer {
public:
  // Declarations
  using JPropertyList = ::Newtonsoft::Json::Linq::__JProperty__JPropertyList;

  /// @brief Field _content, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__content, put = __cordl_internal_set__content))::Newtonsoft::Json::Linq::__JProperty__JPropertyList* _content;

  /// @brief Field _name, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name))::StringW _name;

  __declspec(property(get = get_ChildrenTokens))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* ChildrenTokens;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_Value, put = set_Value))::Newtonsoft::Json::Linq::JToken* Value;

  __declspec(property(get = get_Type))::Newtonsoft::Json::Linq::JTokenType Type;

  constexpr ::Newtonsoft::Json::Linq::__JProperty__JPropertyList*& __cordl_internal_get__content();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::__JProperty__JPropertyList*> const& __cordl_internal_get__content() const;

  constexpr void __cordl_internal_set__content(::Newtonsoft::Json::Linq::__JProperty__JPropertyList* value);

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr void __cordl_internal_set__name(::StringW value);

  /// @brief Method get_ChildrenTokens, addr 0x26c9ec4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens();

  /// @brief Method get_Name, addr 0x26c9ecc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Value, addr 0x26c9ed4, size 0x1c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Value();

  /// @brief Method set_Value, addr 0x26c9ef0, size 0x80, virtual false, abstract: false, final false
  inline void set_Value(::Newtonsoft::Json::Linq::JToken* value);

  static inline ::Newtonsoft::Json::Linq::JProperty* New_ctor(::Newtonsoft::Json::Linq::JProperty* other);

  /// @brief Method .ctor, addr 0x26c9fd0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JProperty* other);

  /// @brief Method GetItem, addr 0x26ca060, size 0x5c, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* GetItem(int32_t index);

  /// @brief Method SetItem, addr 0x26ca0bc, size 0x154, virtual true, abstract: false, final false
  inline void SetItem(int32_t index, ::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method RemoveItem, addr 0x26ca210, size 0xb4, virtual true, abstract: false, final false
  inline bool RemoveItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method RemoveItemAt, addr 0x26ca2c4, size 0xb4, virtual true, abstract: false, final false
  inline void RemoveItemAt(int32_t index);

  /// @brief Method IndexOfItem, addr 0x26ca378, size 0x24, virtual true, abstract: false, final false
  inline int32_t IndexOfItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method InsertItem, addr 0x26ca3ac, size 0x11c, virtual true, abstract: false, final false
  inline void InsertItem(int32_t index, ::Newtonsoft::Json::Linq::JToken* item, bool skipParentCheck);

  /// @brief Method ContainsItem, addr 0x26ca4c8, size 0x24, virtual true, abstract: false, final false
  inline bool ContainsItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method MergeItem, addr 0x26ca4ec, size 0xc4, virtual true, abstract: false, final false
  inline void MergeItem(::System::Object* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings);

  /// @brief Method ClearItems, addr 0x26ca5b0, size 0xb4, virtual true, abstract: false, final false
  inline void ClearItems();

  /// @brief Method DeepEquals, addr 0x26ca664, size 0xb0, virtual true, abstract: false, final false
  inline bool DeepEquals(::Newtonsoft::Json::Linq::JToken* node);

  /// @brief Method CloneToken, addr 0x26ca714, size 0x60, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* CloneToken();

  /// @brief Method get_Type, addr 0x26ca774, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JTokenType get_Type();

  static inline ::Newtonsoft::Json::Linq::JProperty* New_ctor(::StringW name);

  /// @brief Method .ctor, addr 0x26ca77c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  static inline ::Newtonsoft::Json::Linq::JProperty* New_ctor(::StringW name, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> content);

  /// @brief Method .ctor, addr 0x26ca81c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> content);

  static inline ::Newtonsoft::Json::Linq::JProperty* New_ctor(::StringW name, ::System::Object* content);

  /// @brief Method .ctor, addr 0x26ca820, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Object* content);

  /// @brief Method WriteTo, addr 0x26ca924, size 0x80, virtual true, abstract: false, final false
  inline void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method GetDeepHashCode, addr 0x26ca9a4, size 0x50, virtual true, abstract: false, final false
  inline int32_t GetDeepHashCode();

  /// @brief Method Load, addr 0x26ca9f4, size 0x8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JProperty* Load(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method Load, addr 0x26ca9fc, size 0x200, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JProperty* Load(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  // Ctor Parameters [CppParam { name: "", ty: "JProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JProperty(JProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JProperty(JProperty const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JProperty();

public:
  /// @brief Field _content, offset: 0x50, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::__JProperty__JPropertyList* ____content;

  /// @brief Field _name, offset: 0x58, size: 0x8, def value: None
  ::StringW ____name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JProperty, 0x60>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty, ____content) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty, ____name) == 0x58, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::GlobalNamespace::__JProperty__JPropertyList___GetEnumerator_d__1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__JProperty__JPropertyList___GetEnumerator_d__1*, "Newtonsoft.Json.Linq", "JProperty/JPropertyList/<GetEnumerator>d__1");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JProperty);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JProperty*, "Newtonsoft.Json.Linq", "JProperty");
NEED_NO_BOX(::Newtonsoft::Json::Linq::__JProperty__JPropertyList);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__JProperty__JPropertyList*, "Newtonsoft.Json.Linq", "JProperty/JPropertyList");
