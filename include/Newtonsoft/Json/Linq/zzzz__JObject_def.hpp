#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JObject)
namespace Newtonsoft::Json::Linq {
template <typename T> struct JEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
class JPropertyKeyedCollection;
}
namespace Newtonsoft::Json::Linq {
class JProperty;
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
class __JObject___GetEnumerator_d__58;
}
namespace Newtonsoft::Json::Linq {
class __JObject____c;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
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
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
class EventDescriptorCollection;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace System::ComponentModel {
class INotifyPropertyChanging;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System::ComponentModel {
class PropertyChangingEventHandler;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System {
class Attribute;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
struct StringComparison;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JObject;
}
namespace Newtonsoft::Json::Linq {
class __JObject___GetEnumerator_d__58;
}
namespace Newtonsoft::Json::Linq {
class __JObject____c;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JObject);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::__JObject___GetEnumerator_d__58);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::__JObject____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: ::JObject::<>c*
class CORDL_TYPE __JObject____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::Linq::__JObject____c* __9;

  /// @brief Field <>9__25_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_0, put = setStaticF___9__25_0))::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, ::Newtonsoft::Json::Linq::JToken*>* __9__25_0;

  static inline ::Newtonsoft::Json::Linq::__JObject____c* New_ctor();

  /// @brief Method <PropertyValues>b__25_0, addr 0x27ec65c, size 0x18, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* _PropertyValues_b__25_0(::Newtonsoft::Json::Linq::JProperty* p);

  /// @brief Method .ctor, addr 0x27ec654, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Linq::__JObject____c* getStaticF___9();

  static inline ::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, ::Newtonsoft::Json::Linq::JToken*>* getStaticF___9__25_0();

  static inline void setStaticF___9(::Newtonsoft::Json::Linq::__JObject____c* value);

  static inline void setStaticF___9__25_0(::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, ::Newtonsoft::Json::Linq::JToken*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JObject____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JObject____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JObject____c(__JObject____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JObject____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JObject____c(__JObject____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::__JObject____c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Type: ::<GetEnumerator>d__58
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: ::JObject::<GetEnumerator>d__58*
class CORDL_TYPE __JObject___GetEnumerator_d__58 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___get_Current))::System::Collections::Generic::
      KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get___2__current,
                      put = __cordl_internal_set___2__current))::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Newtonsoft::Json::Linq::JObject* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap1;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Newtonsoft::Json::Linq::JToken*>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x27ec690, size 0x2e4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Newtonsoft::Json::Linq::__JObject___GetEnumerator_d__58* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.get_Current, addr 0x27eca24, size 0xc, virtual true,
  /// abstract: false, final true
  inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>
  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x27eca30, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x27eca70, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x27ec674, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>& __cordl_internal_get___2__current();

  constexpr ::Newtonsoft::Json::Linq::JObject*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JObject*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> value);

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JObject* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* value);

  /// @brief Method <>m__Finally1, addr 0x27ec974, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x27ebf68, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Newtonsoft::Json::Linq::JToken*>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>*
  i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___Newtonsoft__Json__Linq__JToken___() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JObject___GetEnumerator_d__58();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JObject___GetEnumerator_d__58", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JObject___GetEnumerator_d__58(__JObject___GetEnumerator_d__58&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JObject___GetEnumerator_d__58", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JObject___GetEnumerator_d__58(__JObject___GetEnumerator_d__58 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> _____2__current;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JObject* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::__JObject___GetEnumerator_d__58, 0x38>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JObject___GetEnumerator_d__58, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JObject___GetEnumerator_d__58, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JObject___GetEnumerator_d__58, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JObject___GetEnumerator_d__58, _____7__wrap1) == 0x30, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
// Type: Newtonsoft.Json.Linq::JObject
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Linq::JObject*
class CORDL_TYPE JObject : public ::Newtonsoft::Json::Linq::JContainer {
public:
  // Declarations
  using _GetEnumerator_d__58 = ::Newtonsoft::Json::Linq::__JObject___GetEnumerator_d__58;

  using __c = ::Newtonsoft::Json::Linq::__JObject____c;

  __declspec(property(get = get_ChildrenTokens))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* ChildrenTokens;

  __declspec(property(get = get_Item, put = set_Item))::Newtonsoft::Json::Linq::JToken* Item[];

  __declspec(property(get = get_Item, put = set_Item))::Newtonsoft::Json::Linq::JToken* Item[];

  /// @brief Field PropertyChanged, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyChanged, put = __cordl_internal_set_PropertyChanged))::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;

  /// @brief Field PropertyChanging, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyChanging, put = __cordl_internal_set_PropertyChanging))::System::ComponentModel::PropertyChangingEventHandler* PropertyChanging;

  __declspec(property(
      get =
          System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___get_IsReadOnly)) bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___IsReadOnly;

  __declspec(property(get = System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__get_Keys))::System::Collections::Generic::ICollection_1<
      ::StringW>* System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__Keys;

  __declspec(property(get = System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__get_Values))::System::Collections::Generic::ICollection_1<
      ::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__Values;

  __declspec(property(get = get_Type))::Newtonsoft::Json::Linq::JTokenType Type;

  /// @brief Field _properties, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__properties, put = __cordl_internal_set__properties))::Newtonsoft::Json::Linq::JPropertyKeyedCollection* _properties;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Newtonsoft::Json::Linq::JToken*>>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<::StringW,::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Newtonsoft::Json::Linq::JToken*>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr operator ::System::ComponentModel::ICustomTypeDescriptor*() noexcept;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanging"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanging*() noexcept;

  /// @brief Method Add, addr 0x27ea594, size 0x88, virtual true, abstract: false, final true
  inline void Add(::StringW propertyName, ::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method CloneToken, addr 0x27ea70c, size 0x60, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* CloneToken();

  /// @brief Method DeepEquals, addr 0x27e9dcc, size 0x9c, virtual true, abstract: false, final false
  inline bool DeepEquals(::Newtonsoft::Json::Linq::JToken* node);

  /// @brief Method FromObject, addr 0x27eaef8, size 0x20, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JObject* FromObject(::System::Object* o);

  /// @brief Method FromObject, addr 0x27eaf18, size 0x18c, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JObject* FromObject(::System::Object* o, ::Newtonsoft::Json::JsonSerializer* jsonSerializer);

  /// @brief Method GetDeepHashCode, addr 0x27ebf64, size 0x4, virtual true, abstract: false, final false
  inline int32_t GetDeepHashCode();

  /// @brief Method GetEnumerator, addr 0x27ea52c, size 0x68, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>* GetEnumerator();

  /// @brief Method GetValue, addr 0x27eb394, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* GetValue(::StringW propertyName);

  /// @brief Method GetValue, addr 0x27eb39c, size 0x380, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* GetValue(::StringW propertyName, ::System::StringComparison comparison);

  /// @brief Method IndexOfItem, addr 0x27e9e68, size 0x18, virtual true, abstract: false, final false
  inline int32_t IndexOfItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method InsertItem, addr 0x27e9e80, size 0x6c, virtual true, abstract: false, final false
  inline void InsertItem(int32_t index, ::Newtonsoft::Json::Linq::JToken* item, bool skipParentCheck);

  /// @brief Method InternalPropertyChanged, addr 0x27ea61c, size 0xcc, virtual false, abstract: false, final false
  inline void InternalPropertyChanged(::Newtonsoft::Json::Linq::JProperty* childProperty);

  /// @brief Method InternalPropertyChanging, addr 0x27ea6e8, size 0x24, virtual false, abstract: false, final false
  inline void InternalPropertyChanging(::Newtonsoft::Json::Linq::JProperty* childProperty);

  /// @brief Method Load, addr 0x27eaae8, size 0x8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JObject* Load(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method Load, addr 0x27eaaf0, size 0x1c4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JObject* Load(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method MergeItem, addr 0x27ea108, size 0x424, virtual true, abstract: false, final false
  inline void MergeItem(::System::Object* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings);

  static inline ::Newtonsoft::Json::Linq::JObject* New_ctor();

  static inline ::Newtonsoft::Json::Linq::JObject* New_ctor(::ArrayW<::System::Object*, ::Array<::System::Object*>*> content);

  static inline ::Newtonsoft::Json::Linq::JObject* New_ctor(::System::Object* content);

  static inline ::Newtonsoft::Json::Linq::JObject* New_ctor(::Newtonsoft::Json::Linq::JObject* other);

  /// @brief Method OnPropertyChanged, addr 0x27ebf90, size 0x98, virtual true, abstract: false, final false
  inline void OnPropertyChanged(::StringW propertyName);

  /// @brief Method OnPropertyChanging, addr 0x27ec028, size 0x98, virtual true, abstract: false, final false
  inline void OnPropertyChanging(::StringW propertyName);

  /// @brief Method Parse, addr 0x27eacb4, size 0x8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JObject* Parse(::StringW json);

  /// @brief Method Parse, addr 0x27eacbc, size 0x23c, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JObject* Parse(::StringW json, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method Properties, addr 0x27e3324, size 0x48, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>* Properties();

  /// @brief Method Property, addr 0x27e894c, size 0xa8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JProperty* Property(::StringW name);

  /// @brief Method PropertyValues, addr 0x27ea774, size 0x13c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> PropertyValues();

  /// @brief Method Remove, addr 0x27eb770, size 0x1c, virtual true, abstract: false, final true
  inline bool Remove(::StringW propertyName);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Add, addr 0x27eb870, size 0xa0, virtual true, abstract:
  /// false, final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Add(
      ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> item);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Clear, addr 0x27eb910, size 0x10, virtual true, abstract:
  /// false, final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Clear();

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Contains, addr 0x27eb920, size 0x74, virtual true,
  /// abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Contains(
      ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> item);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.CopyTo, addr 0x27eb994, size 0x484, virtual true,
  /// abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___CopyTo(
      ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>,
               ::Array<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>*>
          array,
      int32_t arrayIndex);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Remove, addr 0x27ebe20, size 0x144, virtual true,
  /// abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Remove(
      ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> item);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.get_IsReadOnly, addr 0x27ebe18, size 0x8, virtual true,
  /// abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___get_IsReadOnly();

  /// @brief Method System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.ContainsKey, addr 0x27eb740, size 0x18, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__ContainsKey(::StringW key);

  /// @brief Method System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.get_Keys, addr 0x27eb758, size 0x18, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<::StringW>* System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__get_Keys();

  /// @brief Method System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.get_Values, addr 0x27eb830, size 0x40, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__get_Values();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0x27ec45c, size 0x58, virtual true, abstract: false, final true
  inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0x27ec4b4, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0x27ec4bc, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0x27ec4c4, size 0x5c, virtual true, abstract: false, final true
  inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0x27ec520, size 0x8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0x27ec528, size 0x8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0x27ec530, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x27ec590, size 0x58, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x27ec538, size 0x58, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x27ec0c0, size 0x9c, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x27ec15c, size 0x300, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0x27ec5e8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);

  /// @brief Method TryGetValue, addr 0x27eb71c, size 0x24, virtual false, abstract: false, final false
  inline bool TryGetValue(::StringW propertyName, ::System::StringComparison comparison, ByRef<::Newtonsoft::Json::Linq::JToken*> value);

  /// @brief Method TryGetValue, addr 0x27eb7fc, size 0x34, virtual true, abstract: false, final true
  inline bool TryGetValue(::StringW propertyName, ByRef<::Newtonsoft::Json::Linq::JToken*> value);

  /// @brief Method ValidateToken, addr 0x27e9eec, size 0x21c, virtual true, abstract: false, final false
  inline void ValidateToken(::Newtonsoft::Json::Linq::JToken* o, ::Newtonsoft::Json::Linq::JToken* existing);

  /// @brief Method WriteTo, addr 0x27eb2ac, size 0xe8, virtual true, abstract: false, final false
  inline void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& __cordl_internal_get_PropertyChanged() const;

  constexpr ::System::ComponentModel::PropertyChangingEventHandler*& __cordl_internal_get_PropertyChanging();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangingEventHandler*> const& __cordl_internal_get_PropertyChanging() const;

  constexpr ::Newtonsoft::Json::Linq::JPropertyKeyedCollection*& __cordl_internal_get__properties();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*> const& __cordl_internal_get__properties() const;

  constexpr void __cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr void __cordl_internal_set_PropertyChanging(::System::ComponentModel::PropertyChangingEventHandler* value);

  constexpr void __cordl_internal_set__properties(::Newtonsoft::Json::Linq::JPropertyKeyedCollection* value);

  /// @brief Method .ctor, addr 0x27e88ec, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x27e9d44, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Object*, ::Array<::System::Object*>*> content);

  /// @brief Method .ctor, addr 0x27e9d48, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* content);

  /// @brief Method .ctor, addr 0x27e9cd4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JObject* other);

  /// @brief Method add_PropertyChanged, addr 0x27e9a64, size 0x9c, virtual true, abstract: false, final true
  inline void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method add_PropertyChanging, addr 0x27e9b9c, size 0x9c, virtual true, abstract: false, final true
  inline void add_PropertyChanging(::System::ComponentModel::PropertyChangingEventHandler* value);

  /// @brief Method get_ChildrenTokens, addr 0x27e9a5c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens();

  /// @brief Method get_Item, addr 0x27ea8b0, size 0x118, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object* key);

  /// @brief Method get_Item, addr 0x27e15f8, size 0x80, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* get_Item(::StringW propertyName);

  /// @brief Method get_Type, addr 0x27ea76c, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JTokenType get_Type();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Newtonsoft::Json::Linq::JToken*>>"
  constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>*
  i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2___StringW___Newtonsoft__Json__Linq__JToken___() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IDictionary_2<::StringW,::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>*
  i___System__Collections__Generic__IDictionary_2___StringW___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Newtonsoft::Json::Linq::JToken*>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>*
  i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___Newtonsoft__Json__Linq__JToken___() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr ::System::ComponentModel::ICustomTypeDescriptor* i___System__ComponentModel__ICustomTypeDescriptor() noexcept;

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

  /// @brief Convert to "::System::ComponentModel::INotifyPropertyChanging"
  constexpr ::System::ComponentModel::INotifyPropertyChanging* i___System__ComponentModel__INotifyPropertyChanging() noexcept;

  /// @brief Method remove_PropertyChanged, addr 0x27e9b00, size 0x9c, virtual true, abstract: false, final true
  inline void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method remove_PropertyChanging, addr 0x27e9c38, size 0x9c, virtual true, abstract: false, final true
  inline void remove_PropertyChanging(::System::ComponentModel::PropertyChangingEventHandler* value);

  /// @brief Method set_Item, addr 0x27ea9c8, size 0x120, virtual true, abstract: false, final false
  inline void set_Item(::System::Object* key, ::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method set_Item, addr 0x27e1764, size 0xe0, virtual true, abstract: false, final true
  inline void set_Item(::StringW propertyName, ::Newtonsoft::Json::Linq::JToken* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JObject(JObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JObject(JObject const&) = delete;

  /// @brief Field _properties, offset: 0x50, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JPropertyKeyedCollection* ____properties;

  /// @brief Field PropertyChanged, offset: 0x58, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangedEventHandler* ___PropertyChanged;

  /// @brief Field PropertyChanging, offset: 0x60, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangingEventHandler* ___PropertyChanging;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JObject, 0x68>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject, ____properties) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject, ___PropertyChanged) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject, ___PropertyChanging) == 0x60, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JObject);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JObject*, "Newtonsoft.Json.Linq", "JObject");
NEED_NO_BOX(::Newtonsoft::Json::Linq::__JObject___GetEnumerator_d__58);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__JObject___GetEnumerator_d__58*, "Newtonsoft.Json.Linq", "JObject/<GetEnumerator>d__58");
NEED_NO_BOX(::Newtonsoft::Json::Linq::__JObject____c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__JObject____c*, "Newtonsoft.Json.Linq", "JObject/<>c");
