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
namespace System {
class IDisposable;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json::Linq {
class JsonMergeSettings;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json::Linq {
class __JProperty__JPropertyList;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace GlobalNamespace {
class __JProperty__JPropertyList___GetEnumerator_d__1;
}
namespace System::Collections {
class IEnumerable;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12003))
// CS Name: ::JProperty::JPropertyList::<GetEnumerator>d__1*
class CORDL_TYPE __JProperty__JPropertyList___GetEnumerator_d__1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::Newtonsoft::Json::Linq::JToken* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Newtonsoft::Json::Linq::__JProperty__JPropertyList* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current))::Newtonsoft::Json::Linq::
      JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::Newtonsoft::Json::Linq::JToken*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __get___2__current() const;

  constexpr void __set___2__current(::Newtonsoft::Json::Linq::JToken* value);

  constexpr ::Newtonsoft::Json::Linq::__JProperty__JPropertyList*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::__JProperty__JPropertyList*> const& __get___4__this() const;

  constexpr void __set___4__this(::Newtonsoft::Json::Linq::__JProperty__JPropertyList* value);

  static inline ::GlobalNamespace::__JProperty__JPropertyList___GetEnumerator_d__1* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x26a8aa8 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x26a8bd4 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x26a8bd8 size 0x60 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current addr 0x26a8c38 size 0x8 virtual true final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x26a8c40 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x26a8c80 size 0x8 virtual true final true
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

} // namespace GlobalNamespace
// Type: ::JPropertyList
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12004))
// CS Name: ::JProperty::JPropertyList*
class CORDL_TYPE __JProperty__JPropertyList : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__1 = ::GlobalNamespace::__JProperty__JPropertyList___GetEnumerator_d__1;

  /// @brief Field _token, offset 0x10, size 0x8
  __declspec(property(get = __get__token, put = __set__token))::Newtonsoft::Json::Linq::JToken* _token;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Item, put = set_Item))::Newtonsoft::Json::Linq::JToken* Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __get__token();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __get__token() const;

  constexpr void __set__token(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method GetEnumerator addr 0x26a8a40 size 0x68 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x26a8ad0 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method Add addr 0x26a8ad4 size 0x8 virtual true final true
  inline void Add(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method Clear addr 0x26a8adc size 0x8 virtual true final true
  inline void Clear();

  /// @brief Method Contains addr 0x26a8ae4 size 0x10 virtual true final true
  inline bool Contains(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method CopyTo addr 0x26a8af4 size 0x64 virtual true final true
  inline void CopyTo(::ArrayW<::Newtonsoft::Json::Linq::JToken*, ::Array<::Newtonsoft::Json::Linq::JToken*>*> array, int32_t arrayIndex);

  /// @brief Method Remove addr 0x26a8b58 size 0x20 virtual true final true
  inline bool Remove(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method get_Count addr 0x26a8b78 size 0x10 virtual true final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly addr 0x26a8b88 size 0x8 virtual true final true
  inline bool get_IsReadOnly();

  /// @brief Method IndexOf addr 0x26a81e0 size 0x10 virtual true final true
  inline int32_t IndexOf(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method Insert addr 0x26a8b90 size 0x10 virtual true final true
  inline void Insert(int32_t index, ::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method RemoveAt addr 0x26a8ba0 size 0x10 virtual true final true
  inline void RemoveAt(int32_t index);

  /// @brief Method get_Item addr 0x26a8bb0 size 0x14 virtual true final true
  inline ::Newtonsoft::Json::Linq::JToken* get_Item(int32_t index);

  /// @brief Method set_Item addr 0x26a8bc4 size 0x10 virtual true final true
  inline void set_Item(int32_t index, ::Newtonsoft::Json::Linq::JToken* value);

  static inline ::Newtonsoft::Json::Linq::__JProperty__JPropertyList* New_ctor();

  /// @brief Method .ctor addr 0x26a7e9c size 0x8 virtual false final false
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

} // namespace Newtonsoft::Json::Linq
// Type: Newtonsoft.Json.Linq::JProperty
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11988))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12005))
// CS Name: ::Newtonsoft.Json.Linq::JProperty*
class CORDL_TYPE JProperty : public ::Newtonsoft::Json::Linq::JContainer {
public:
  // Declarations
  using JPropertyList = ::Newtonsoft::Json::Linq::__JProperty__JPropertyList;

  /// @brief Field _content, offset 0x50, size 0x8
  __declspec(property(get = __get__content, put = __set__content))::Newtonsoft::Json::Linq::__JProperty__JPropertyList* _content;

  /// @brief Field _name, offset 0x58, size 0x8
  __declspec(property(get = __get__name, put = __set__name))::StringW _name;

  __declspec(property(get = get_ChildrenTokens))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* ChildrenTokens;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_Value, put = set_Value))::Newtonsoft::Json::Linq::JToken* Value;

  __declspec(property(get = get_Type))::Newtonsoft::Json::Linq::JTokenType Type;

  constexpr ::Newtonsoft::Json::Linq::__JProperty__JPropertyList*& __get__content();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::__JProperty__JPropertyList*> const& __get__content() const;

  constexpr void __set__content(::Newtonsoft::Json::Linq::__JProperty__JPropertyList* value);

  constexpr ::StringW& __get__name();

  constexpr ::StringW const& __get__name() const;

  constexpr void __set__name(::StringW value);

  /// @brief Method get_ChildrenTokens addr 0x26a7d08 size 0x8 virtual true final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens();

  /// @brief Method get_Name addr 0x26a7d10 size 0x8 virtual false final false
  inline ::StringW get_Name();

  /// @brief Method get_Value addr 0x26a7d18 size 0x1c virtual false final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Value();

  /// @brief Method set_Value addr 0x26a7d34 size 0x80 virtual false final false
  inline void set_Value(::Newtonsoft::Json::Linq::JToken* value);

  static inline ::Newtonsoft::Json::Linq::JProperty* New_ctor(::Newtonsoft::Json::Linq::JProperty* other);

  /// @brief Method .ctor addr 0x26a7e14 size 0x88 virtual false final false
  inline void _ctor(::Newtonsoft::Json::Linq::JProperty* other);

  /// @brief Method GetItem addr 0x26a7ea4 size 0x5c virtual true final false
  inline ::Newtonsoft::Json::Linq::JToken* GetItem(int32_t index);

  /// @brief Method SetItem addr 0x26a7f00 size 0x154 virtual true final false
  inline void SetItem(int32_t index, ::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method RemoveItem addr 0x26a8054 size 0xb4 virtual true final false
  inline bool RemoveItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method RemoveItemAt addr 0x26a8108 size 0xb4 virtual true final false
  inline void RemoveItemAt(int32_t index);

  /// @brief Method IndexOfItem addr 0x26a81bc size 0x24 virtual true final false
  inline int32_t IndexOfItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method InsertItem addr 0x26a81f0 size 0x11c virtual true final false
  inline void InsertItem(int32_t index, ::Newtonsoft::Json::Linq::JToken* item, bool skipParentCheck);

  /// @brief Method ContainsItem addr 0x26a830c size 0x24 virtual true final false
  inline bool ContainsItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method MergeItem addr 0x26a8330 size 0xc4 virtual true final false
  inline void MergeItem(::System::Object* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings);

  /// @brief Method ClearItems addr 0x26a83f4 size 0xb4 virtual true final false
  inline void ClearItems();

  /// @brief Method DeepEquals addr 0x26a84a8 size 0xb0 virtual true final false
  inline bool DeepEquals(::Newtonsoft::Json::Linq::JToken* node);

  /// @brief Method CloneToken addr 0x26a8558 size 0x60 virtual true final false
  inline ::Newtonsoft::Json::Linq::JToken* CloneToken();

  /// @brief Method get_Type addr 0x26a85b8 size 0x8 virtual true final false
  inline ::Newtonsoft::Json::Linq::JTokenType get_Type();

  static inline ::Newtonsoft::Json::Linq::JProperty* New_ctor(::StringW name);

  /// @brief Method .ctor addr 0x26a85c0 size 0xa0 virtual false final false
  inline void _ctor(::StringW name);

  static inline ::Newtonsoft::Json::Linq::JProperty* New_ctor(::StringW name, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> content);

  /// @brief Method .ctor addr 0x26a8660 size 0x4 virtual false final false
  inline void _ctor(::StringW name, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> content);

  static inline ::Newtonsoft::Json::Linq::JProperty* New_ctor(::StringW name, ::System::Object* content);

  /// @brief Method .ctor addr 0x26a8664 size 0x104 virtual false final false
  inline void _ctor(::StringW name, ::System::Object* content);

  /// @brief Method WriteTo addr 0x26a8768 size 0x80 virtual true final false
  inline void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method GetDeepHashCode addr 0x26a87e8 size 0x50 virtual true final false
  inline int32_t GetDeepHashCode();

  /// @brief Method Load addr 0x26a8838 size 0x8 virtual false final false
  static inline ::Newtonsoft::Json::Linq::JProperty* Load(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method Load addr 0x26a8840 size 0x200 virtual false final false
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

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::GlobalNamespace::__JProperty__JPropertyList___GetEnumerator_d__1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__JProperty__JPropertyList___GetEnumerator_d__1*, "Newtonsoft.Json.Linq", "JProperty/JPropertyList/<GetEnumerator>d__1");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JProperty);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JProperty*, "Newtonsoft.Json.Linq", "JProperty");
NEED_NO_BOX(::Newtonsoft::Json::Linq::__JProperty__JPropertyList);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__JProperty__JPropertyList*, "Newtonsoft.Json.Linq", "JProperty/JPropertyList");
