#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__DynamicProxy_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/ComponentModel/zzzz__ICustomTypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__INotifyPropertyChanged_def.hpp"
#include "System/ComponentModel/zzzz__INotifyPropertyChanging_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JObject)
namespace Newtonsoft::Json::Linq {
template <typename T> struct JEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
class JObjectDynamicProxy_JObject___c;
}
namespace Newtonsoft::Json::Linq {
class JObject_JObjectDynamicProxy;
}
namespace Newtonsoft::Json::Linq {
class JObject__GetEnumerator_d__64;
}
namespace Newtonsoft::Json::Linq {
struct JObject__LoadAsync_d__2;
}
namespace Newtonsoft::Json::Linq {
struct JObject___WriteToAsync_g__AwaitProperties_0_0_d;
}
namespace Newtonsoft::Json::Linq {
class JObject___c;
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
class JsonCloneSettings;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace Newtonsoft::Json::Linq {
class JsonMergeSettings;
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
namespace System::Dynamic {
class DynamicMetaObject;
}
namespace System::Dynamic {
class GetMemberBinder;
}
namespace System::Dynamic {
class SetMemberBinder;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Attribute;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
class JObjectDynamicProxy_JObject___c;
}
namespace Newtonsoft::Json::Linq {
class JObject_JObjectDynamicProxy;
}
namespace Newtonsoft::Json::Linq {
class JObject__GetEnumerator_d__64;
}
namespace Newtonsoft::Json::Linq {
class JObject___c;
}
namespace Newtonsoft::Json::Linq {
struct JObject__LoadAsync_d__2;
}
namespace Newtonsoft::Json::Linq {
struct JObject___WriteToAsync_g__AwaitProperties_0_0_d;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JObject);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JObjectDynamicProxy_JObject___c);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JObject_JObjectDynamicProxy);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JObject__GetEnumerator_d__64);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JObject___c);
MARK_VAL_T(::Newtonsoft::Json::Linq::JObject__LoadAsync_d__2);
MARK_VAL_T(::Newtonsoft::Json::Linq::JObject___WriteToAsync_g__AwaitProperties_0_0_d);
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy/<>c
class CORDL_TYPE JObjectDynamicProxy_JObject___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Newtonsoft::Json::Linq::JObjectDynamicProxy_JObject___c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, ::StringW>* __9__2_0;

  static inline ::Newtonsoft::Json::Linq::JObjectDynamicProxy_JObject___c* New_ctor();

  /// @brief Method <GetDynamicMemberNames>b__2_0, addr 0x3f28564, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _GetDynamicMemberNames_b__2_0(::Newtonsoft::Json::Linq::JProperty* p);

  /// @brief Method .ctor, addr 0x3f2855c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Linq::JObjectDynamicProxy_JObject___c* getStaticF___9();

  static inline ::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, ::StringW>* getStaticF___9__2_0();

  static inline void setStaticF___9(::Newtonsoft::Json::Linq::JObjectDynamicProxy_JObject___c* value);

  static inline void setStaticF___9__2_0(::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JObjectDynamicProxy_JObject___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JObjectDynamicProxy_JObject___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JObjectDynamicProxy_JObject___c(JObjectDynamicProxy_JObject___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JObjectDynamicProxy_JObject___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JObjectDynamicProxy_JObject___c(JObjectDynamicProxy_JObject___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10401 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JObjectDynamicProxy_JObject___c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Dependencies Newtonsoft.Json.Utilities.DynamicProxy`1<T>
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy
class CORDL_TYPE JObject_JObjectDynamicProxy : public ::Newtonsoft::Json::Utilities::DynamicProxy_1<::Newtonsoft::Json::Linq::JObject*> {
public:
  // Declarations
  using __c = ::Newtonsoft::Json::Linq::JObjectDynamicProxy_JObject___c;

  /// @brief Method GetDynamicMemberNames, addr 0x3f283f4, size 0x10c, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetDynamicMemberNames(::Newtonsoft::Json::Linq::JObject* instance);

  static inline ::Newtonsoft::Json::Linq::JObject_JObjectDynamicProxy* New_ctor();

  /// @brief Method TryGetMember, addr 0x3f282ec, size 0x38, virtual true, abstract: false, final false
  inline bool TryGetMember(::Newtonsoft::Json::Linq::JObject* instance, ::System::Dynamic::GetMemberBinder* binder, ::ByRef<::System::Object*> result);

  /// @brief Method TrySetMember, addr 0x3f28324, size 0xd0, virtual true, abstract: false, final false
  inline bool TrySetMember(::Newtonsoft::Json::Linq::JObject* instance, ::System::Dynamic::SetMemberBinder* binder, ::System::Object* value);

  /// @brief Method .ctor, addr 0x3f282a4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JObject_JObjectDynamicProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JObject_JObjectDynamicProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JObject_JObjectDynamicProxy(JObject_JObjectDynamicProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JObject_JObjectDynamicProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JObject_JObjectDynamicProxy(JObject_JObjectDynamicProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10402 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JObject_JObjectDynamicProxy, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json::Linq {
// Is value type: true
// CS Name: Newtonsoft.Json.Linq.JObject/<<WriteToAsync>g__AwaitProperties|0_0>d
struct CORDL_TYPE JObject___WriteToAsync_g__AwaitProperties_0_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3f2857c, size 0x3fc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3f28978, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JObject___WriteToAsync_g__AwaitProperties_0_0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None
  // }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::Linq::JObject*", modifiers: "", def_value: None }, CppParam { name: "i", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "Writer", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value: None }, CppParam { name: "CancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
  // def_value: None }, CppParam { name: "Converters", ty: "::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr JObject___WriteToAsync_g__AwaitProperties_0_0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* task,
                                                            ::Newtonsoft::Json::Linq::JObject* __4__this, int32_t i, ::Newtonsoft::Json::JsonWriter* Writer,
                                                            ::System::Threading::CancellationToken CancellationToken,
                                                            ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> Converters,
                                                            ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10403 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field task, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* task;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JObject* __4__this;

  /// @brief Field i, offset: 0x30, size: 0x4, def value: None
  int32_t i;

  /// @brief Field Writer, offset: 0x38, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonWriter* Writer;

  /// @brief Field CancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken CancellationToken;

  /// @brief Field Converters, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> Converters;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JObject___WriteToAsync_g__AwaitProperties_0_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject___WriteToAsync_g__AwaitProperties_0_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject___WriteToAsync_g__AwaitProperties_0_0_d, task) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject___WriteToAsync_g__AwaitProperties_0_0_d, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject___WriteToAsync_g__AwaitProperties_0_0_d, i) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject___WriteToAsync_g__AwaitProperties_0_0_d, Writer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject___WriteToAsync_g__AwaitProperties_0_0_d, CancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject___WriteToAsync_g__AwaitProperties_0_0_d, Converters) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject___WriteToAsync_g__AwaitProperties_0_0_d, __u__1) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JObject___WriteToAsync_g__AwaitProperties_0_0_d, 0x60>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JObject/<>c
class CORDL_TYPE JObject___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Newtonsoft::Json::Linq::JObject___c* __9;

  /// @brief Field <>9__31_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__31_0, put = setStaticF___9__31_0)) ::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, ::Newtonsoft::Json::Linq::JToken*>* __9__31_0;

  static inline ::Newtonsoft::Json::Linq::JObject___c* New_ctor();

  /// @brief Method <PropertyValues>b__31_0, addr 0x3f28a44, size 0x20, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* _PropertyValues_b__31_0(::Newtonsoft::Json::Linq::JProperty* p);

  /// @brief Method .ctor, addr 0x3f28a3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Linq::JObject___c* getStaticF___9();

  static inline ::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, ::Newtonsoft::Json::Linq::JToken*>* getStaticF___9__31_0();

  static inline void setStaticF___9(::Newtonsoft::Json::Linq::JObject___c* value);

  static inline void setStaticF___9__31_0(::System::Func_2<::Newtonsoft::Json::Linq::JProperty*, ::Newtonsoft::Json::Linq::JToken*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JObject___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JObject___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JObject___c(JObject___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JObject___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JObject___c(JObject___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10404 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JObject___c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.Generic.KeyValuePair`2<TKey, TValue>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__64
class CORDL_TYPE JObject__GetEnumerator_d__64 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___get_Current)) ::System::Collections::Generic::
      KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>
          System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>
      __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Newtonsoft::Json::Linq::JObject* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap1;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::Newtonsoft::Json::Linq::JToken*>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3f28a80, size 0x2e0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Newtonsoft::Json::Linq::JObject__GetEnumerator_d__64* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.get_Current, addr 0x3f28e10, size 0xc, virtual true,
  /// abstract: false, final true
  inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>
  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3f28e1c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3f28e54, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3f28a64, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>& __cordl_internal_get___2__current();

  constexpr ::Newtonsoft::Json::Linq::JObject* const& __cordl_internal_get___4__this() const;

  constexpr ::Newtonsoft::Json::Linq::JObject*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get___7__wrap1();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> value);

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JObject* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* value);

  /// @brief Method <>m__Finally1, addr 0x3f28d60, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x3f27ab4, size 0x28, virtual false, abstract: false, final false
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
  constexpr JObject__GetEnumerator_d__64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JObject__GetEnumerator_d__64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JObject__GetEnumerator_d__64(JObject__GetEnumerator_d__64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JObject__GetEnumerator_d__64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JObject__GetEnumerator_d__64(JObject__GetEnumerator_d__64 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10405 };

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
static_assert(offsetof(::Newtonsoft::Json::Linq::JObject__GetEnumerator_d__64, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject__GetEnumerator_d__64, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject__GetEnumerator_d__64, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject__GetEnumerator_d__64, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JObject__GetEnumerator_d__64, 0x38>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Threading.CancellationToken
namespace Newtonsoft::Json::Linq {
// Is value type: true
// CS Name: Newtonsoft.Json.Linq.JObject/<LoadAsync>d__2
struct CORDL_TYPE JObject__LoadAsync_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3f28eb0, size 0x61c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3f294cc, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JObject__LoadAsync_d__2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JObject*>", modifiers: "", def_value: None }, CppParam { name: "reader", ty:
  // "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam
  // { name: "settings", ty: "::Newtonsoft::Json::Linq::JsonLoadSettings*", modifiers: "", def_value: None }, CppParam { name: "_o_5__2", ty: "::Newtonsoft::Json::Linq::JObject*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }, CppParam { name:
  // "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr JObject__LoadAsync_d__2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JObject*> __t__builder,
                                    ::Newtonsoft::Json::JsonReader* reader, ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings,
                                    ::Newtonsoft::Json::Linq::JObject* _o_5__2, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1,
                                    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10406 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JObject*> __t__builder;

  /// @brief Field reader, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonReader* reader;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field settings, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JsonLoadSettings* settings;

  /// @brief Field <o>5__2, offset: 0x38, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JObject* _o_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JObject__LoadAsync_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject__LoadAsync_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject__LoadAsync_d__2, reader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject__LoadAsync_d__2, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject__LoadAsync_d__2, settings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject__LoadAsync_d__2, _o_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject__LoadAsync_d__2, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject__LoadAsync_d__2, __u__2) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JObject__LoadAsync_d__2, 0x60>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Dependencies Newtonsoft.Json.Linq.JContainer, System.Collections.Generic.ICollection`1<T>, System.Collections.Generic.IDictionary`2<TKey, TValue>, System.Collections.Generic.IEnumerable`1<T>,
// System.Collections.Generic.KeyValuePair`2<TKey, TValue>, System.Collections.IEnumerable, System.ComponentModel.ICustomTypeDescriptor, System.ComponentModel.INotifyPropertyChanged,
// System.ComponentModel.INotifyPropertyChanging
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JObject
class CORDL_TYPE JObject : public ::Newtonsoft::Json::Linq::JContainer {
public:
  // Declarations
  using JObjectDynamicProxy = ::Newtonsoft::Json::Linq::JObject_JObjectDynamicProxy;

  using _GetEnumerator_d__64 = ::Newtonsoft::Json::Linq::JObject__GetEnumerator_d__64;

  using _LoadAsync_d__2 = ::Newtonsoft::Json::Linq::JObject__LoadAsync_d__2;

  using __WriteToAsync_g__AwaitProperties_0_0_d = ::Newtonsoft::Json::Linq::JObject___WriteToAsync_g__AwaitProperties_0_0_d;

  using __c = ::Newtonsoft::Json::Linq::JObject___c;

  __declspec(property(get = get_ChildrenTokens)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* ChildrenTokens;

  __declspec(property(get = get_Item, put = set_Item)) ::Newtonsoft::Json::Linq::JToken* Item[];

  __declspec(property(get = get_Item, put = set_Item)) ::Newtonsoft::Json::Linq::JToken* Item[];

  /// @brief Field PropertyChanged, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyChanged, put = __cordl_internal_set_PropertyChanged)) ::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged;

  /// @brief Field PropertyChanging, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyChanging, put = __cordl_internal_set_PropertyChanging)) ::System::ComponentModel::PropertyChangingEventHandler* PropertyChanging;

  __declspec(property(get = System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___get_IsReadOnly)) bool
      System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___IsReadOnly;

  __declspec(property(get = System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__get_Keys)) ::System::Collections::Generic::ICollection_1<::StringW>*
      System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__Keys;

  __declspec(property(
      get = System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__get_Values)) ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*
      System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__Values;

  __declspec(property(get = get_Type)) ::Newtonsoft::Json::Linq::JTokenType Type;

  /// @brief Field _properties, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__properties, put = __cordl_internal_set__properties)) ::Newtonsoft::Json::Linq::JPropertyKeyedCollection* _properties;

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

  /// @brief Method Add, addr 0x3f25f50, size 0x7c, virtual true, abstract: false, final true
  inline void Add(::StringW propertyName, ::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method CloneToken, addr 0x3f26264, size 0x68, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings* settings);

  /// @brief Method ContainsKey, addr 0x3f27148, size 0x6c, virtual true, abstract: false, final true
  inline bool ContainsKey(::StringW propertyName);

  /// @brief Method DeepEquals, addr 0x3f2530c, size 0x94, virtual true, abstract: false, final false
  inline bool DeepEquals(::Newtonsoft::Json::Linq::JToken* node);

  /// @brief Method FromObject, addr 0x3f26b54, size 0x20, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JObject* FromObject(::System::Object* o);

  /// @brief Method FromObject, addr 0x3f26b74, size 0x184, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JObject* FromObject(::System::Object* o, ::Newtonsoft::Json::JsonSerializer* jsonSerializer);

  /// @brief Method GetDeepHashCode, addr 0x3f27ab0, size 0x4, virtual true, abstract: false, final false
  inline int32_t GetDeepHashCode();

  /// @brief Method GetEnumerator, addr 0x3f25ef0, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>* GetEnumerator();

  /// @brief Method GetMetaObject, addr 0x3f281f4, size 0xb0, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* GetMetaObject(::System::Linq::Expressions::Expression* parameter);

  /// @brief Method GetValue, addr 0x3f26ffc, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* GetValue(::StringW propertyName);

  /// @brief Method GetValue, addr 0x3f27004, size 0x30, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* GetValue(::StringW propertyName, ::System::StringComparison comparison);

  /// @brief Method IndexOfItem, addr 0x3f25700, size 0x28, virtual true, abstract: false, final false
  inline int32_t IndexOfItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method InsertItem, addr 0x3f257cc, size 0x74, virtual true, abstract: false, final false
  inline bool InsertItem(int32_t index, ::Newtonsoft::Json::Linq::JToken* item, bool skipParentCheck, bool copyAnnotations);

  /// @brief Method InternalPropertyChanged, addr 0x3f260f4, size 0x14c, virtual false, abstract: false, final false
  inline void InternalPropertyChanged(::Newtonsoft::Json::Linq::JProperty* childProperty);

  /// @brief Method InternalPropertyChanging, addr 0x3f26240, size 0x24, virtual false, abstract: false, final false
  inline void InternalPropertyChanging(::Newtonsoft::Json::Linq::JProperty* childProperty);

  /// @brief Method IsNull, addr 0x3f25fcc, size 0xa4, virtual false, abstract: false, final false
  static inline bool IsNull(::Newtonsoft::Json::Linq::JToken* token);

  /// @brief Method Load, addr 0x3f26780, size 0x8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JObject* Load(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method Load, addr 0x3f26788, size 0x1d4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JObject* Load(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method LoadAsync, addr 0x3f24da0, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JObject*>* LoadAsync(::Newtonsoft::Json::JsonReader* reader, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadAsync, addr 0x3f24dac, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JObject*>* LoadAsync(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings,
                                                                                                  ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method MergeItem, addr 0x3f25acc, size 0x424, virtual true, abstract: false, final false
  inline void MergeItem(::System::Object* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings);

  static inline ::Newtonsoft::Json::Linq::JObject* New_ctor();

  static inline ::Newtonsoft::Json::Linq::JObject* New_ctor(::ArrayW<::System::Object*, ::Array<::System::Object*>*> content);

  static inline ::Newtonsoft::Json::Linq::JObject* New_ctor(::System::Object* content);

  static inline ::Newtonsoft::Json::Linq::JObject* New_ctor(::Newtonsoft::Json::Linq::JObject* other);

  static inline ::Newtonsoft::Json::Linq::JObject* New_ctor(::Newtonsoft::Json::Linq::JObject* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings);

  /// @brief Method OnPropertyChanged, addr 0x3f27adc, size 0x90, virtual true, abstract: false, final false
  inline void OnPropertyChanged(::StringW propertyName);

  /// @brief Method OnPropertyChanging, addr 0x3f27b6c, size 0x90, virtual true, abstract: false, final false
  inline void OnPropertyChanging(::StringW propertyName);

  /// @brief Method Parse, addr 0x3f2695c, size 0x8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JObject* Parse(::StringW json);

  /// @brief Method Parse, addr 0x3f26964, size 0x1f0, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JObject* Parse(::StringW json, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method Properties, addr 0x3f262d4, size 0x48, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JProperty*>* Properties();

  /// @brief Method Property, addr 0x3f2631c, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JProperty* Property(::StringW name);

  /// @brief Method Property, addr 0x3f22968, size 0x188, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JProperty* Property(::StringW name, ::System::StringComparison comparison);

  /// @brief Method PropertyValues, addr 0x3f26324, size 0x13c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> PropertyValues();

  /// @brief Method Remove, addr 0x3f272d0, size 0x2c, virtual true, abstract: false, final true
  inline bool Remove(::StringW propertyName);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Add, addr 0x3f273e0, size 0x94, virtual true, abstract:
  /// false, final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Add(
      ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> item);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Clear, addr 0x3f27474, size 0x10, virtual true, abstract:
  /// false, final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Clear();

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Contains, addr 0x3f27484, size 0x80, virtual true,
  /// abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Contains(
      ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> item);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.CopyTo, addr 0x3f27504, size 0x464, virtual true,
  /// abstract: false, final true
  inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___CopyTo(
      ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>,
               ::Array<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>>*>
          array,
      int32_t arrayIndex);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Remove, addr 0x3f27970, size 0x140, virtual true,
  /// abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Remove(
      ::System::Collections::Generic::KeyValuePair_2<::StringW, ::Newtonsoft::Json::Linq::JToken*> item);

  /// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.get_IsReadOnly, addr 0x3f27968, size 0x8, virtual true,
  /// abstract: false, final true
  inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___get_IsReadOnly();

  /// @brief Method System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.get_Keys, addr 0x3f27260, size 0x18, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<::StringW>* System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__get_Keys();

  /// @brief Method System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.get_Values, addr 0x3f273a8, size 0x38, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__get_Values();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetAttributes, addr 0x3f27ff4, size 0x58, virtual true, abstract: false, final true
  inline ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetClassName, addr 0x3f2804c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetClassName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetComponentName, addr 0x3f28054, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ICustomTypeDescriptor_GetComponentName();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetConverter, addr 0x3f2805c, size 0x54, virtual true, abstract: false, final true
  inline ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent, addr 0x3f280b0, size 0x8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty, addr 0x3f280b8, size 0x8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEditor, addr 0x3f280c0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x3f28120, size 0x58, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetEvents, addr 0x3f280c8, size 0x58, virtual true, abstract: false, final true
  inline ::System::ComponentModel::EventDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x3f27bfc, size 0x9c, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetProperties, addr 0x3f27c98, size 0x350, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner, addr 0x3f28178, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);

  /// @brief Method TryGetValue, addr 0x3f27034, size 0x24, virtual false, abstract: false, final false
  inline bool TryGetValue(::StringW propertyName, ::System::StringComparison comparison, ::ByRef<::Newtonsoft::Json::Linq::JToken*> value);

  /// @brief Method TryGetValue, addr 0x3f27368, size 0x40, virtual true, abstract: false, final true
  inline bool TryGetValue(::StringW propertyName, ::ByRef<::Newtonsoft::Json::Linq::JToken*> value);

  /// @brief Method ValidateToken, addr 0x3f25840, size 0x214, virtual true, abstract: false, final false
  inline void ValidateToken(::Newtonsoft::Json::Linq::JToken* o, ::Newtonsoft::Json::Linq::JToken* existing);

  /// @brief Method WriteTo, addr 0x3f26f0c, size 0xf0, virtual true, abstract: false, final false
  inline void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method WriteToAsync, addr 0x3f24b00, size 0x1a0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteToAsync(::Newtonsoft::Json::JsonWriter* writer, ::System::Threading::CancellationToken cancellationToken,
                                                        ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method <WriteToAsync>g__AwaitProperties|0_0, addr 0x3f24ca0, size 0x100, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _WriteToAsync_g__AwaitProperties_0_0(::System::Threading::Tasks::Task* task, int32_t i, ::Newtonsoft::Json::JsonWriter* Writer,
                                                                                ::System::Threading::CancellationToken CancellationToken,
                                                                                ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> Converters);

  constexpr ::System::ComponentModel::PropertyChangedEventHandler* const& __cordl_internal_get_PropertyChanged() const;

  constexpr ::System::ComponentModel::PropertyChangedEventHandler*& __cordl_internal_get_PropertyChanged();

  constexpr ::System::ComponentModel::PropertyChangingEventHandler* const& __cordl_internal_get_PropertyChanging() const;

  constexpr ::System::ComponentModel::PropertyChangingEventHandler*& __cordl_internal_get_PropertyChanging();

  constexpr ::Newtonsoft::Json::Linq::JPropertyKeyedCollection* const& __cordl_internal_get__properties() const;

  constexpr ::Newtonsoft::Json::Linq::JPropertyKeyedCollection*& __cordl_internal_get__properties();

  constexpr void __cordl_internal_set_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  constexpr void __cordl_internal_set_PropertyChanging(::System::ComponentModel::PropertyChangingEventHandler* value);

  constexpr void __cordl_internal_set__properties(::Newtonsoft::Json::Linq::JPropertyKeyedCollection* value);

  /// @brief Method .ctor, addr 0x3f22738, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3f2528c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Object*, ::Array<::System::Object*>*> content);

  /// @brief Method .ctor, addr 0x3f25290, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* content);

  /// @brief Method .ctor, addr 0x3f251b0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JObject* other);

  /// @brief Method .ctor, addr 0x3f2521c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JObject* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings);

  /// @brief Method add_PropertyChanged, addr 0x3f24eb0, size 0x9c, virtual true, abstract: false, final true
  inline void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method add_PropertyChanging, addr 0x3f24fe8, size 0x9c, virtual true, abstract: false, final true
  inline void add_PropertyChanging(::System::ComponentModel::PropertyChangingEventHandler* value);

  /// @brief Method get_ChildrenTokens, addr 0x3f24ea8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens();

  /// @brief Method get_Item, addr 0x3f26460, size 0x110, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object* key);

  /// @brief Method get_Item, addr 0x3f26570, size 0x80, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* get_Item(::StringW propertyName);

  /// @brief Method get_Type, addr 0x3f262cc, size 0x8, virtual true, abstract: false, final false
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

  /// @brief Method remove_PropertyChanged, addr 0x3f24f4c, size 0x9c, virtual true, abstract: false, final true
  inline void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value);

  /// @brief Method remove_PropertyChanging, addr 0x3f25084, size 0x9c, virtual true, abstract: false, final true
  inline void remove_PropertyChanging(::System::ComponentModel::PropertyChangingEventHandler* value);

  /// @brief Method set_Item, addr 0x3f265f0, size 0x118, virtual true, abstract: false, final false
  inline void set_Item(::System::Object* key, ::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method set_Item, addr 0x3f26708, size 0x78, virtual true, abstract: false, final true
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10407 };

  /// @brief Field _properties, offset: 0x58, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JPropertyKeyedCollection* ____properties;

  /// @brief Field PropertyChanged, offset: 0x60, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangedEventHandler* ___PropertyChanged;

  /// @brief Field PropertyChanging, offset: 0x68, size: 0x8, def value: None
  ::System::ComponentModel::PropertyChangingEventHandler* ___PropertyChanging;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JObject, ____properties) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject, ___PropertyChanged) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JObject, ___PropertyChanging) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JObject, 0x70>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JObject);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JObject*, "Newtonsoft.Json.Linq", "JObject");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JObjectDynamicProxy_JObject___c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JObjectDynamicProxy_JObject___c*, "Newtonsoft.Json.Linq", "JObject/JObjectDynamicProxy/<>c");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JObject_JObjectDynamicProxy);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JObject_JObjectDynamicProxy*, "Newtonsoft.Json.Linq", "JObject/JObjectDynamicProxy");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JObject__GetEnumerator_d__64);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JObject__GetEnumerator_d__64*, "Newtonsoft.Json.Linq", "JObject/<GetEnumerator>d__64");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JObject___c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JObject___c*, "Newtonsoft.Json.Linq", "JObject/<>c");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JObject__LoadAsync_d__2, "Newtonsoft.Json.Linq", "JObject/<LoadAsync>d__2");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JObject___WriteToAsync_g__AwaitProperties_0_0_d, "Newtonsoft.Json.Linq", "JObject/<<WriteToAsync>g__AwaitProperties|0_0>d");
