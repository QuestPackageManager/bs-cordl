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
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json::Linq {
class JProperty;
}
namespace Newtonsoft::Json::Linq {
class __JObject____c;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace System::ComponentModel {
class AttributeCollection;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::Collections {
class IEnumerable;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::ComponentModel {
class PropertyChangingEventHandler;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace Newtonsoft::Json::Linq {
class JsonMergeSettings;
}
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace System::ComponentModel {
class INotifyPropertyChanging;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace System {
struct StringComparison;
}
namespace System::ComponentModel {
class EventDescriptorCollection;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace Newtonsoft::Json::Linq {
class __JObject___GetEnumerator_d__58;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System {
class Attribute;
}
namespace Newtonsoft::Json::Linq {
class JPropertyKeyedCollection;
}
namespace Newtonsoft::Json::Linq {
template <typename T> struct JEnumerable_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11990))
// CS Name: ::JObject::<>c*
class CORDL_TYPE __JObject____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::Linq::__JObject____c* __9;

  /// @brief Field <>9__25_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_0, put = setStaticF___9__25_0))::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, ::Newtonsoft::Json::Linq::JToken*>* __9__25_0;

  static inline void setStaticF___9(::Newtonsoft::Json::Linq::__JObject____c* value);

  static inline ::Newtonsoft::Json::Linq::__JObject____c* getStaticF___9();

  static inline void setStaticF___9__25_0(::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, ::Newtonsoft::Json::Linq::JToken*>* value);

  static inline ::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, ::Newtonsoft::Json::Linq::JToken*>* getStaticF___9__25_0();

  static inline ::Newtonsoft::Json::Linq::__JObject____c* New_ctor();

  /// @brief Method .ctor addr 0x269aa90 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <PropertyValues>b__25_0 addr 0x269aa98 size 0x18 virtual false final false
  inline ::Newtonsoft::Json::Linq::JToken* _PropertyValues_b__25_0(::Newtonsoft::Json::Linq::JProperty* p);

  // Ctor Parameters [CppParam { name: "", ty: "__JObject____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JObject____c(__JObject____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JObject____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JObject____c(__JObject____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JObject____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::__JObject____c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Type: ::<GetEnumerator>d__58
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3841), inst: 1430 }), TypeDefinitionIndex(TypeDefinitionIndex(3841)),
// TypeDefinitionIndex(TypeDefinitionIndex(12002)), TypeDefinitionIndex(TypeDefinitionIndex(2613))} Self: TypeDefinitionIndex(TypeDefinitionIndex(11991)) CS Name: ::JObject::<GetEnumerator>d__58*
class CORDL_TYPE __JObject___GetEnumerator_d__58 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Newtonsoft::Json::Linq::JObject* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x8
  __declspec(property(get = __get___7__wrap1, put = __set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap1;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___get_Current))::System::Collections::Generic::
      KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Newtonsoft::Json::Linq::JToken*>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>& __get___2__current();

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> value);

  constexpr ::Newtonsoft::Json::Linq::JObject*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JObject*> const& __get___4__this() const;

  constexpr void __set___4__this(::Newtonsoft::Json::Linq::JObject* value);

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*& __get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*> const& __get___7__wrap1() const;

  constexpr void __set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* value);

  static inline ::Newtonsoft::Json::Linq::__JObject___GetEnumerator_d__58* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x269a3a4 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x269aab0 size 0x1c virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x269aacc size 0x2e4 virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x269adb0 size 0xb0 virtual false final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.get_Current addr 0x269ae60 size 0xc virtual true final
  /// true
  inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>
  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x269ae6c size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x269aeac size 0x5c virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__JObject___GetEnumerator_d__58", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JObject___GetEnumerator_d__58(__JObject___GetEnumerator_d__58&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JObject___GetEnumerator_d__58", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JObject___GetEnumerator_d__58(__JObject___GetEnumerator_d__58 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JObject___GetEnumerator_d__58();

public:
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

} // namespace Newtonsoft::Json::Linq
// Type: Newtonsoft.Json.Linq::JObject
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11988))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11992))
// CS Name: ::Newtonsoft.Json.Linq::JObject*
class CORDL_TYPE JObject : public ::Newtonsoft::Json::Linq::JContainer {
public:
  // Declarations
  using _GetEnumerator_d__58 = ::Newtonsoft::Json::Linq::__JObject___GetEnumerator_d__58;

  using __c = ::Newtonsoft::Json::Linq::__JObject____c;

  /// @brief Field _properties, offset 0x50, size 0x8
  __declspec(property(get = __get__properties, put = __set__properties))::Newtonsoft::Json::Linq::JPropertyKeyedCollection* _properties;

  /// @brief Field PropertyChanged, offset 0x58, size 0x8
  __declspec(property(get = __get_PropertyChanged, put = __set_PropertyChanged))::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;

  /// @brief Field PropertyChanging, offset 0x60, size 0x8
  __declspec(property(get = __get_PropertyChanging, put = __set_PropertyChanging))::System::ComponentModel::PropertyChangingEventHandler* PropertyChanging;

  __declspec(property(get = get_ChildrenTokens))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* ChildrenTokens;

  __declspec(property(get = get_Type))::Newtonsoft::Json::Linq::JTokenType Type;

  __declspec(property(get = get_Item, put = set_Item))::Newtonsoft::Json::Linq::JToken* Item[];

  __declspec(property(get = get_Item, put = set_Item))::Newtonsoft::Json::Linq::JToken* Item[];

  __declspec(property(get = System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__get_Keys))::System::Collections::Generic::ICollection_1<
      ::StringW>* System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__Keys;

  __declspec(property(get = System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__get_Values))::System::Collections::Generic::ICollection_1<
      ::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__Values;

  __declspec(property(
      get =
          System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___get_IsReadOnly)) bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___IsReadOnly;

  /// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<::StringW,::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Newtonsoft::Json::Linq::JToken*>>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Newtonsoft::Json::Linq::JToken*>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

  /// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
  constexpr operator ::System::ComponentModel::ICustomTypeDescriptor*() noexcept;

  /// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanging"
  constexpr operator ::System::ComponentModel::INotifyPropertyChanging*() noexcept;

  constexpr ::Newtonsoft::Json::Linq::JPropertyKeyedCollection*& __get__properties();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JPropertyKeyedCollection*> const& __get__properties() const;

  constexpr void __set__properties(::Newtonsoft::Json::Linq::JPropertyKeyedCollection* value);

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __get_PropertyChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangedEventHandler*> const& __get_PropertyChanged() const;

  constexpr void __set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr ::System::ComponentModel::PropertyChangingEventHandler*& __get_PropertyChanging();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyChangingEventHandler*> const& __get_PropertyChanging() const;

  constexpr void __set_PropertyChanging(::System::ComponentModel::PropertyChangingEventHandler* value);

  /// @brief Method get_ChildrenTokens addr 0x2697e98 size 0x8 virtual true final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens();

  /// @brief Method add_PropertyChanged addr 0x2697ea0 size 0x9c virtual true final true
  inline void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method remove_PropertyChanged addr 0x2697f3c size 0x9c virtual true final true
  inline void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method add_PropertyChanging addr 0x2697fd8 size 0x9c virtual true final true
  inline void add_PropertyChanging(::System::ComponentModel::PropertyChangingEventHandler* value);

  /// @brief Method remove_PropertyChanging addr 0x2698074 size 0x9c virtual true final true
  inline void remove_PropertyChanging(::System::ComponentModel::PropertyChangingEventHandler* value);

  static inline ::Newtonsoft::Json::Linq::JObject* New_ctor();

  /// @brief Method .ctor addr 0x2696d28 size 0x60 virtual false final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Linq::JObject* New_ctor(::Newtonsoft::Json::Linq::JObject* other);

  /// @brief Method .ctor addr 0x2698110 size 0x70 virtual false final false
  inline void _ctor(::Newtonsoft::Json::Linq::JObject* other);

  static inline ::Newtonsoft::Json::Linq::JObject* New_ctor(::ArrayW<::System::Object*, ::Array<::System::Object*>*> content);

  /// @brief Method .ctor addr 0x2698180 size 0x4 virtual false final false
  inline void _ctor(::ArrayW<::System::Object*, ::Array<::System::Object*>*> content);

  static inline ::Newtonsoft::Json::Linq::JObject* New_ctor(::System::Object* content);

  /// @brief Method .ctor addr 0x2698184 size 0x84 virtual false final false
  inline void _ctor(::System::Object* content);

  /// @brief Method DeepEquals addr 0x2698208 size 0x9c virtual true final false
  inline bool DeepEquals(::Newtonsoft::Json::Linq::JToken* node);

  /// @brief Method IndexOfItem addr 0x26982a4 size 0x18 virtual true final false
  inline int32_t IndexOfItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method InsertItem addr 0x26982bc size 0x6c virtual true final false
  inline void InsertItem(int32_t index, ::Newtonsoft::Json::Linq::JToken* item, bool skipParentCheck);

  /// @brief Method ValidateToken addr 0x2698328 size 0x21c virtual true final false
  inline void ValidateToken(::Newtonsoft::Json::Linq::JToken* o, ::Newtonsoft::Json::Linq::JToken* existing);

  /// @brief Method MergeItem addr 0x2698544 size 0x424 virtual true final false
  inline void MergeItem(::System::Object* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings);

  /// @brief Method InternalPropertyChanged addr 0x2698a58 size 0xcc virtual false final false
  inline void InternalPropertyChanged(::Newtonsoft::Json::Linq::JProperty* childProperty);

  /// @brief Method InternalPropertyChanging addr 0x2698b24 size 0x24 virtual false final false
  inline void InternalPropertyChanging(::Newtonsoft::Json::Linq::JProperty* childProperty);

  /// @brief Method CloneToken addr 0x2698b48 size 0x60 virtual true final false
  inline ::Newtonsoft::Json::Linq::JToken* CloneToken();

  /// @brief Method get_Type addr 0x2698ba8 size 0x8 virtual true final false
  inline ::Newtonsoft::Json::Linq::JTokenType get_Type();

  /// @brief Method Properties addr 0x2691760 size 0x48 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>* Properties();

  /// @brief Method Property addr 0x2696d88 size 0xa8 virtual false final false
  inline ::Newtonsoft::Json::Linq::JProperty* Property(::StringW name);

  /// @brief Method PropertyValues addr 0x2698bb0 size 0x13c virtual false final false
  inline ::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> PropertyValues();

  /// @brief Method get_Item addr 0x2698cec size 0x118 virtual true final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object* key);

  /// @brief Method set_Item addr 0x2698e04 size 0x120 virtual true final false
  inline void set_Item(::System::Object* key, ::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method get_Item addr 0x268fa34 size 0x80 virtual true final true
  inline ::Newtonsoft::Json::Linq::JToken* get_Item(::StringW propertyName);

  /// @brief Method set_Item addr 0x268fba0 size 0xe0 virtual true final true
  inline void set_Item(::StringW propertyName, ::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method Load addr 0x2698f24 size 0x8 virtual false final false
  static inline ::Newtonsoft::Json::Linq::JObject* Load(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method Load addr 0x2698f2c size 0x1c4 virtual false final false
  static inline ::Newtonsoft::Json::Linq::JObject* Load(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method Parse addr 0x26990f0 size 0x8 virtual false final false
  static inline ::Newtonsoft::Json::Linq::JObject* Parse(::StringW json);

  /// @brief Method Parse addr 0x26990f8 size 0x23c virtual false final false
  static inline ::Newtonsoft::Json::Linq::JObject* Parse(::StringW json, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method FromObject addr 0x2699334 size 0x20 virtual false final false
  static inline ::Newtonsoft::Json::Linq::JObject* FromObject(::System::Object* o);

  /// @brief Method FromObject addr 0x2699354 size 0x18c virtual false final false
  static inline ::Newtonsoft::Json::Linq::JObject* FromObject(::System::Object* o, ::Newtonsoft::Json::JsonSerializer* jsonSerializer);

  /// @brief Method WriteTo addr 0x26996e8 size 0xe8 virtual true final false
  inline void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method GetValue addr 0x26997d0 size 0x8 virtual false final false
  inline ::Newtonsoft::Json::Linq::JToken* GetValue(::StringW propertyName);

  /// @brief Method GetValue addr 0x26997d8 size 0x380 virtual false final false
  inline ::Newtonsoft::Json::Linq::JToken* GetValue(::StringW propertyName, ::System::StringComparison comparison);

  /// @brief Method TryGetValue addr 0x2699b58 size 0x24 virtual false final false
  inline bool TryGetValue(::StringW propertyName, ::System::StringComparison comparison, ByRef<::Newtonsoft::Json::Linq::JToken*> value);

  /// @brief Method Add addr 0x26989d0 size 0x88 virtual true final true
  inline void Add(::StringW propertyName, ::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.ContainsKey addr 0x2699b7c size 0x18 virtual true final true
  inline bool System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__ContainsKey(::StringW key);

  /// @brief Method System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.get_Keys addr 0x2699b94 size 0x18 virtual true final true
  inline ::System::Collections::Generic::ICollection_1<::StringW>* System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__get_Keys();

  /// @brief Method Remove addr 0x2699bac size 0x1c virtual true final true
  inline bool Remove(::StringW propertyName);

  /// @brief Method TryGetValue addr 0x2699c38 size 0x34 virtual true final true
  inline bool TryGetValue(::StringW propertyName, ByRef<::Newtonsoft::Json::Linq::JToken*> value);

  /// @brief Method System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.get_Values addr 0x2699c6c size 0x40 virtual true final true
  inline ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__get_Values();

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Add addr 0x2699cac size 0xa0 virtual true final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Add(
      ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> item);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Clear addr 0x2699d4c size 0x10 virtual true final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Clear();

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Contains addr 0x2699d5c size 0x74 virtual true final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Contains(
      ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> item);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.CopyTo addr 0x2699dd0 size 0x484 virtual true final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___CopyTo(
      ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>,
               ::Array<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>*>
          array,
      int32_t arrayIndex);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.get_IsReadOnly addr 0x269a254 size 0x8 virtual true final
  /// true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___get_IsReadOnly();

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Remove addr 0x269a25c size 0x144 virtual true final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Remove(
      ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> item);

  /// @brief Method GetDeepHashCode addr 0x269a3a0 size 0x4 virtual true final false
  inline int32_t GetDeepHashCode();

  /// @brief Method GetEnumerator addr 0x2698968 size 0x68 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>* GetEnumerator();

  /// @brief Method OnPropertyChanged addr 0x269a3cc size 0x98 virtual true final false
  inline void OnPropertyChanged(::StringW propertyName);

  /// @brief Method OnPropertyChanging addr 0x269a464 size 0x98 virtual true final false
  inline void OnPropertyChanging(::StringW propertyName);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties addr 0x269a4fc size 0x9c virtual true final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties addr 0x269a598 size 0x300 virtual true final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes addr 0x269a898 size 0x58 virtual true final true
  inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName addr 0x269a8f0 size 0x8 virtual true final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName addr 0x269a8f8 size 0x8 virtual true final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter addr 0x269a900 size 0x5c virtual true final true
  inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent addr 0x269a95c size 0x8 virtual true final true
  inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty addr 0x269a964 size 0x8 virtual true final true
  inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor addr 0x269a96c size 0x8 virtual true final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents addr 0x269a974 size 0x58 virtual true final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents addr 0x269a9cc size 0x58 virtual true final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner addr 0x269aa24 size 0x8 virtual true final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);

  // Ctor Parameters [CppParam { name: "", ty: "JObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JObject(JObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JObject(JObject const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JObject();

public:
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

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JObject);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JObject*, "Newtonsoft.Json.Linq", "JObject");
NEED_NO_BOX(::Newtonsoft::Json::Linq::__JObject___GetEnumerator_d__58);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__JObject___GetEnumerator_d__58*, "Newtonsoft.Json.Linq", "JObject/<GetEnumerator>d__58");
NEED_NO_BOX(::Newtonsoft::Json::Linq::__JObject____c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__JObject____c*, "Newtonsoft.Json.Linq", "JObject/<>c");
