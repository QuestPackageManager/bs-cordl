#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JProperty.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JProperty)
namespace Newtonsoft::Json::Linq {
class JPropertyList_JProperty__GetEnumerator_d__1;
}
namespace Newtonsoft::Json::Linq {
class JProperty_JPropertyList;
}
namespace Newtonsoft::Json::Linq {
struct JProperty__LoadAsync_d__4;
}
namespace Newtonsoft::Json::Linq {
struct JProperty__WriteToAsync_d__1;
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
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JProperty;
}
namespace Newtonsoft::Json::Linq {
class JPropertyList_JProperty__GetEnumerator_d__1;
}
namespace Newtonsoft::Json::Linq {
class JProperty_JPropertyList;
}
namespace Newtonsoft::Json::Linq {
struct JProperty__LoadAsync_d__4;
}
namespace Newtonsoft::Json::Linq {
struct JProperty__WriteToAsync_d__1;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JProperty);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JProperty_JPropertyList);
MARK_VAL_T(::Newtonsoft::Json::Linq::JProperty__LoadAsync_d__4);
MARK_VAL_T(::Newtonsoft::Json::Linq::JProperty__WriteToAsync_d__1);
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1
class CORDL_TYPE JPropertyList_JProperty__GetEnumerator_d__1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current)) ::Newtonsoft::Json::Linq::JToken*
      System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::Newtonsoft::Json::Linq::JToken* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Newtonsoft::Json::Linq::JProperty_JPropertyList* __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5bca4c8, size 0x54, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current, addr 0x5bca51c, size 0x8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5bca524, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5bca55c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5bca4c4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get___2__current() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___2__current();

  constexpr ::Newtonsoft::Json::Linq::JProperty_JPropertyList* const& __cordl_internal_get___4__this() const;

  constexpr ::Newtonsoft::Json::Linq::JProperty_JPropertyList*& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JProperty_JPropertyList* value);

  /// @brief Method .ctor, addr 0x5bca358, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerator_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JPropertyList_JProperty__GetEnumerator_d__1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JPropertyList_JProperty__GetEnumerator_d__1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JPropertyList_JProperty__GetEnumerator_d__1(JPropertyList_JProperty__GetEnumerator_d__1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JPropertyList_JProperty__GetEnumerator_d__1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JPropertyList_JProperty__GetEnumerator_d__1(JPropertyList_JProperty__GetEnumerator_d__1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13566 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JProperty_JPropertyList* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1, 0x28>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JProperty/JPropertyList
class CORDL_TYPE JProperty_JPropertyList : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__1 = ::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Item, put = set_Item)) ::Newtonsoft::Json::Linq::JToken* Item[];

  /// @brief Field _token, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__token, put = __cordl_internal_set__token)) ::Newtonsoft::Json::Linq::JToken* _token;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x5bca364, size 0x8, virtual true, abstract: false, final true
  inline void Add(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method Clear, addr 0x5bca36c, size 0x8, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x5bca374, size 0x10, virtual true, abstract: false, final true
  inline bool Contains(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method CopyTo, addr 0x5bca384, size 0x64, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<::Newtonsoft::Json::Linq::JToken*, ::Array<::Newtonsoft::Json::Linq::JToken*>*> array, int32_t arrayIndex);

  /// @brief Method GetEnumerator, addr 0x5bca304, size 0x54, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* GetEnumerator();

  /// @brief Method IndexOf, addr 0x5bc9c54, size 0x10, virtual true, abstract: false, final true
  inline int32_t IndexOf(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method Insert, addr 0x5bca41c, size 0x10, virtual true, abstract: false, final true
  inline void Insert(int32_t index, ::Newtonsoft::Json::Linq::JToken* item);

  static inline ::Newtonsoft::Json::Linq::JProperty_JPropertyList* New_ctor();

  /// @brief Method Remove, addr 0x5bca3e8, size 0x1c, virtual true, abstract: false, final true
  inline bool Remove(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method RemoveAt, addr 0x5bca42c, size 0x10, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5bca360, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::Newtonsoft::Json::Linq::JToken* const& __cordl_internal_get__token() const;

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__token();

  constexpr void __cordl_internal_set__token(::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method .ctor, addr 0x5bc98b0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x5bca404, size 0x10, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x5bca414, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Item, addr 0x5bca43c, size 0x44, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__ICollection_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IList_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Item, addr 0x5bca480, size 0x44, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, ::Newtonsoft::Json::Linq::JToken* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JProperty_JPropertyList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JProperty_JPropertyList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JProperty_JPropertyList(JProperty_JPropertyList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JProperty_JPropertyList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JProperty_JPropertyList(JProperty_JPropertyList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13567 };

  /// @brief Field _token, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____token;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty_JPropertyList, ____token) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JProperty_JPropertyList, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter,
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace Newtonsoft::Json::Linq {
// Is value type: true
// CS Name: Newtonsoft.Json.Linq.JProperty/<LoadAsync>d__4
struct CORDL_TYPE JProperty__LoadAsync_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5bca564, size 0x6a0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5bcac04, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JProperty__LoadAsync_d__4();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JProperty*>", modifiers: "", def_value: None }, CppParam { name: "reader", ty:
  // "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam
  // { name: "settings", ty: "::Newtonsoft::Json::Linq::JsonLoadSettings*", modifiers: "", def_value: None }, CppParam { name: "_p_5__2", ty: "::Newtonsoft::Json::Linq::JProperty*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }, CppParam { name:
  // "__u__2", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr JProperty__LoadAsync_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JProperty*> __t__builder,
                                      ::Newtonsoft::Json::JsonReader* reader, ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings,
                                      ::Newtonsoft::Json::Linq::JProperty* _p_5__2, ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1,
                                      ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13568 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JProperty*> __t__builder;

  /// @brief Field reader, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonReader* reader;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field settings, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JsonLoadSettings* settings;

  /// @brief Field <p>5__2, offset: 0x38, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JProperty* _p_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty__LoadAsync_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty__LoadAsync_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty__LoadAsync_d__4, reader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty__LoadAsync_d__4, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty__LoadAsync_d__4, settings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty__LoadAsync_d__4, _p_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty__LoadAsync_d__4, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty__LoadAsync_d__4, __u__2) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JProperty__LoadAsync_d__4, 0x60>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Threading.CancellationToken
namespace Newtonsoft::Json::Linq {
// Is value type: true
// CS Name: Newtonsoft.Json.Linq.JProperty/<WriteToAsync>d__1
struct CORDL_TYPE JProperty__WriteToAsync_d__1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5bcac84, size 0x274, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5bcaef8, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr JProperty__WriteToAsync_d__1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None
  // }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::Linq::JProperty*", modifiers: "", def_value: None }, CppParam { name: "writer", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "",
  // def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "converters", ty:
  // "::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr JProperty__WriteToAsync_d__1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* task,
                                         ::Newtonsoft::Json::Linq::JProperty* __4__this, ::Newtonsoft::Json::JsonWriter* writer, ::System::Threading::CancellationToken cancellationToken,
                                         ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters,
                                         ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13569 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field task, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* task;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JProperty* __4__this;

  /// @brief Field writer, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonWriter* writer;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field converters, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty__WriteToAsync_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty__WriteToAsync_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty__WriteToAsync_d__1, task) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty__WriteToAsync_d__1, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty__WriteToAsync_d__1, writer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty__WriteToAsync_d__1, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty__WriteToAsync_d__1, converters) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty__WriteToAsync_d__1, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JProperty__WriteToAsync_d__1, 0x58>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
// Dependencies Newtonsoft.Json.Linq.JContainer
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JProperty
class CORDL_TYPE JProperty : public ::Newtonsoft::Json::Linq::JContainer {
public:
  // Declarations
  using JPropertyList = ::Newtonsoft::Json::Linq::JProperty_JPropertyList;

  using _LoadAsync_d__4 = ::Newtonsoft::Json::Linq::JProperty__LoadAsync_d__4;

  using _WriteToAsync_d__1 = ::Newtonsoft::Json::Linq::JProperty__WriteToAsync_d__1;

  __declspec(property(get = get_ChildrenTokens)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* ChildrenTokens;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_Type)) ::Newtonsoft::Json::Linq::JTokenType Type;

  __declspec(property(get = get_Value, put = set_Value)) ::Newtonsoft::Json::Linq::JToken* Value;

  /// @brief Field _content, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__content, put = __cordl_internal_set__content)) ::Newtonsoft::Json::Linq::JProperty_JPropertyList* _content;

  /// @brief Field _name, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  /// @brief Method ClearItems, addr 0x5bc9e68, size 0xac, virtual true, abstract: false, final false
  inline void ClearItems();

  /// @brief Method CloneToken, addr 0x5bc9fc0, size 0x6c, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings* settings);

  /// @brief Method ContainsItem, addr 0x5bc9d80, size 0x20, virtual true, abstract: false, final false
  inline bool ContainsItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method DeepEquals, addr 0x5bc9f14, size 0xac, virtual true, abstract: false, final false
  inline bool DeepEquals(::Newtonsoft::Json::Linq::JToken* node);

  /// @brief Method GetDeepHashCode, addr 0x5bca0b8, size 0x50, virtual true, abstract: false, final false
  inline int32_t GetDeepHashCode();

  /// @brief Method GetItem, addr 0x5bc9934, size 0x54, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* GetItem(int32_t index);

  /// @brief Method IndexOfItem, addr 0x5bc9c28, size 0x2c, virtual true, abstract: false, final false
  inline int32_t IndexOfItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method InsertItem, addr 0x5bc9c64, size 0x11c, virtual true, abstract: false, final false
  inline bool InsertItem(int32_t index, ::Newtonsoft::Json::Linq::JToken* item, bool skipParentCheck, bool copyAnnotations);

  /// @brief Method Load, addr 0x5bca108, size 0x8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JProperty* Load(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method Load, addr 0x5bca110, size 0x1f4, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JProperty* Load(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method LoadAsync, addr 0x5bc9724, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JProperty*>* LoadAsync(::Newtonsoft::Json::JsonReader* reader, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadAsync, addr 0x5bc9730, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JProperty*>* LoadAsync(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings,
                                                                                                    ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method MergeItem, addr 0x5bc9da0, size 0xc8, virtual true, abstract: false, final false
  inline void MergeItem(::System::Object* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings);

  static inline ::Newtonsoft::Json::Linq::JProperty* New_ctor(::StringW name);

  static inline ::Newtonsoft::Json::Linq::JProperty* New_ctor(::StringW name, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> content);

  static inline ::Newtonsoft::Json::Linq::JProperty* New_ctor(::StringW name, ::System::Object* content);

  static inline ::Newtonsoft::Json::Linq::JProperty* New_ctor(::Newtonsoft::Json::Linq::JProperty* other);

  static inline ::Newtonsoft::Json::Linq::JProperty* New_ctor(::Newtonsoft::Json::Linq::JProperty* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings);

  /// @brief Method RemoveItem, addr 0x5bc9ad0, size 0xac, virtual true, abstract: false, final false
  inline bool RemoveItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method RemoveItemAt, addr 0x5bc9b7c, size 0xac, virtual true, abstract: false, final false
  inline void RemoveItemAt(int32_t index);

  /// @brief Method SetItem, addr 0x5bc9988, size 0x148, virtual true, abstract: false, final false
  inline void SetItem(int32_t index, ::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method WriteTo, addr 0x5bca038, size 0x80, virtual true, abstract: false, final false
  inline void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method WriteToAsync, addr 0x5bc9644, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteToAsync(::System::Threading::Tasks::Task* task, ::Newtonsoft::Json::JsonWriter* writer, ::System::Threading::CancellationToken cancellationToken,
                                                        ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method WriteToAsync, addr 0x5bc950c, size 0xec, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteToAsync(::Newtonsoft::Json::JsonWriter* writer, ::System::Threading::CancellationToken cancellationToken,
                                                        ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method WriteValueAsync, addr 0x5bc95f8, size 0x4c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteValueAsync(::Newtonsoft::Json::JsonWriter* writer, ::System::Threading::CancellationToken cancellationToken,
                                                           ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  constexpr ::Newtonsoft::Json::Linq::JProperty_JPropertyList* const& __cordl_internal_get__content() const;

  constexpr ::Newtonsoft::Json::Linq::JProperty_JPropertyList*& __cordl_internal_get__content();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr void __cordl_internal_set__content(::Newtonsoft::Json::Linq::JProperty_JPropertyList* value);

  constexpr void __cordl_internal_set__name(::StringW value);

  /// @brief Method .ctor, addr 0x5bc28c0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x5bca034, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> content);

  /// @brief Method .ctor, addr 0x5bc6fcc, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Object* content);

  /// @brief Method .ctor, addr 0x5bc9834, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JProperty* other);

  /// @brief Method .ctor, addr 0x5bc98b4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JProperty* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings);

  /// @brief Method get_ChildrenTokens, addr 0x5bc9824, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens();

  /// @brief Method get_Name, addr 0x5bc982c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Type, addr 0x5bca02c, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JTokenType get_Type();

  /// @brief Method get_Value, addr 0x5bc24e0, size 0x18, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Value();

  /// @brief Method set_Value, addr 0x5bc6038, size 0x84, virtual false, abstract: false, final false
  inline void set_Value(::Newtonsoft::Json::Linq::JToken* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JProperty(JProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JProperty(JProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13570 };

  /// @brief Field _content, offset: 0x58, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JProperty_JPropertyList* ____content;

  /// @brief Field _name, offset: 0x60, size: 0x8, def value: None
  ::StringW ____name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty, ____content) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JProperty, ____name) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JProperty, 0x68>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JProperty);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JProperty*, "Newtonsoft.Json.Linq", "JProperty");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JPropertyList_JProperty__GetEnumerator_d__1*, "Newtonsoft.Json.Linq", "JProperty/JPropertyList/<GetEnumerator>d__1");
NEED_NO_BOX(::Newtonsoft::Json::Linq::JProperty_JPropertyList);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JProperty_JPropertyList*, "Newtonsoft.Json.Linq", "JProperty/JPropertyList");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JProperty__LoadAsync_d__4, "Newtonsoft.Json.Linq", "JProperty/<LoadAsync>d__4");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JProperty__WriteToAsync_d__1, "Newtonsoft.Json.Linq", "JProperty/<WriteToAsync>d__1");
