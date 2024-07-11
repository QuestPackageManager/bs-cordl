#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JContainer)
namespace Newtonsoft::Json::Linq {
template <typename T> struct JEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
class JProperty;
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
namespace Newtonsoft::Json::Linq {
class __JContainer___GetDescendants_d__36;
}
namespace Newtonsoft::Json::Linq {
struct __JContainer___ReadContentFromAsync_d__1;
}
namespace Newtonsoft::Json::Linq {
struct __JContainer___ReadTokenFromAsync_d__0;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
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
namespace System::Collections::Specialized {
class INotifyCollectionChanged;
}
namespace System::Collections::Specialized {
class NotifyCollectionChangedEventArgs;
}
namespace System::Collections::Specialized {
class NotifyCollectionChangedEventHandler;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System::ComponentModel {
class AddingNewEventArgs;
}
namespace System::ComponentModel {
class AddingNewEventHandler;
}
namespace System::ComponentModel {
class IBindingList;
}
namespace System::ComponentModel {
class ITypedList;
}
namespace System::ComponentModel {
class ListChangedEventArgs;
}
namespace System::ComponentModel {
class ListChangedEventHandler;
}
namespace System::ComponentModel {
struct ListSortDirection;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Array;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JContainer;
}
namespace Newtonsoft::Json::Linq {
class __JContainer___GetDescendants_d__36;
}
namespace Newtonsoft::Json::Linq {
struct __JContainer___ReadContentFromAsync_d__1;
}
namespace Newtonsoft::Json::Linq {
struct __JContainer___ReadTokenFromAsync_d__0;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JContainer);
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__36);
MARK_VAL_T(::Newtonsoft::Json::Linq::__JContainer___ReadContentFromAsync_d__1);
MARK_VAL_T(::Newtonsoft::Json::Linq::__JContainer___ReadTokenFromAsync_d__0);
// Type: ::<GetDescendants>d__36
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: ::JContainer::<GetDescendants>d__36*
class CORDL_TYPE __JContainer___GetDescendants_d__36 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current))::Newtonsoft::Json::Linq::
      JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::Newtonsoft::Json::Linq::JToken* __2__current;

  /// @brief Field <>3__self, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get___3__self, put = __cordl_internal_set___3__self)) bool __3__self;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Newtonsoft::Json::Linq::JContainer* __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1))::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap1;

  /// @brief Field <>7__wrap3, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap3, put = __cordl_internal_set___7__wrap3))::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* __7__wrap3;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <o>5__3, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__o_5__3, put = __cordl_internal_set__o_5__3))::Newtonsoft::Json::Linq::JToken* _o_5__3;

  /// @brief Field self, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self)) bool self;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2a90d1c, size 0x4bc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__36* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator, addr 0x2a91388, size 0xac, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IEnumerable_Newtonsoft_Json_Linq_JToken__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current, addr 0x2a91338, size 0x8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IEnumerator_Newtonsoft_Json_Linq_JToken__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2a91434, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2a91340, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2a91380, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2a90c68, size 0xb4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get___2__current() const;

  constexpr bool const& __cordl_internal_get___3__self() const;

  constexpr bool& __cordl_internal_get___3__self();

  constexpr ::Newtonsoft::Json::Linq::JContainer*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JContainer*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get___7__wrap1();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get___7__wrap3();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>*> const& __cordl_internal_get___7__wrap3() const;

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::Newtonsoft::Json::Linq::JToken*& __cordl_internal_get__o_5__3();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Linq::JToken*> const& __cordl_internal_get__o_5__3() const;

  constexpr bool const& __cordl_internal_get_self() const;

  constexpr bool& __cordl_internal_get_self();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set___3__self(bool value);

  constexpr void __cordl_internal_set___4__this(::Newtonsoft::Json::Linq::JContainer* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr void __cordl_internal_set___7__wrap3(::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__o_5__3(::Newtonsoft::Json::Linq::JToken* value);

  constexpr void __cordl_internal_set_self(bool value);

  /// @brief Method <>m__Finally1, addr 0x2a91288, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x2a911d8, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method .ctor, addr 0x2a8d8d8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerator_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __JContainer___GetDescendants_d__36();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__JContainer___GetDescendants_d__36", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __JContainer___GetDescendants_d__36(__JContainer___GetDescendants_d__36&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__JContainer___GetDescendants_d__36", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __JContainer___GetDescendants_d__36(__JContainer___GetDescendants_d__36 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field self, offset: 0x24, size: 0x1, def value: None
  bool ___self;

  /// @brief Field <>3__self, offset: 0x25, size: 0x1, def value: None
  bool _____3__self;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JContainer* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* _____7__wrap1;

  /// @brief Field <o>5__3, offset: 0x38, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JToken* ____o_5__3;

  /// @brief Field <>7__wrap3, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* _____7__wrap3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__36, 0x48>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__36, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__36, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__36, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__36, ___self) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__36, _____3__self) == 0x25, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__36, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__36, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__36, ____o_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__36, _____7__wrap3) == 0x40, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
// Type: ::<ReadContentFromAsync>d__1
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: true
// CS Name: ::JContainer::<ReadContentFromAsync>d__1
struct CORDL_TYPE __JContainer___ReadContentFromAsync_d__1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2a91438, size 0x8a4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2a91cdc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JContainer___ReadContentFromAsync_d__1();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "reader", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: None
  // }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::Linq::JContainer*", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "::Newtonsoft::Json::Linq::JsonLoadSettings*",
  // modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_lineInfo_5__2", ty:
  // "::Newtonsoft::Json::IJsonLineInfo*", modifiers: "", def_value: None }, CppParam { name: "_parent_5__3", ty: "::Newtonsoft::Json::Linq::JContainer*", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
  constexpr __JContainer___ReadContentFromAsync_d__1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonReader* reader,
                                                     ::Newtonsoft::Json::Linq::JContainer* __4__this, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings,
                                                     ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::IJsonLineInfo* _lineInfo_5__2,
                                                     ::Newtonsoft::Json::Linq::JContainer* _parent_5__3, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1,
                                                     ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field reader, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonReader* reader;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JContainer* __4__this;

  /// @brief Field settings, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JsonLoadSettings* settings;

  /// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <lineInfo>5__2, offset: 0x40, size: 0x8, def value: None
  ::Newtonsoft::Json::IJsonLineInfo* _lineInfo_5__2;

  /// @brief Field <parent>5__3, offset: 0x48, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JContainer* _parent_5__3;

  /// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::__JContainer___ReadContentFromAsync_d__1, 0x70>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___ReadContentFromAsync_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___ReadContentFromAsync_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___ReadContentFromAsync_d__1, reader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___ReadContentFromAsync_d__1, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___ReadContentFromAsync_d__1, settings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___ReadContentFromAsync_d__1, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___ReadContentFromAsync_d__1, _lineInfo_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___ReadContentFromAsync_d__1, _parent_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___ReadContentFromAsync_d__1, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___ReadContentFromAsync_d__1, __u__2) == 0x60, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
// Type: ::<ReadTokenFromAsync>d__0
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: true
// CS Name: ::JContainer::<ReadTokenFromAsync>d__0
struct CORDL_TYPE __JContainer___ReadTokenFromAsync_d__0 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2a91ce8, size 0x4ac, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2a92194, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JContainer___ReadTokenFromAsync_d__0();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "reader", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: None
  // }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::Linq::JContainer*",
  // modifiers: "", def_value: None }, CppParam { name: "options", ty: "::Newtonsoft::Json::Linq::JsonLoadSettings*", modifiers: "", def_value: None }, CppParam { name: "_startDepth_5__2", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __JContainer___ReadTokenFromAsync_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonReader* reader,
                                                   ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::Linq::JContainer* __4__this,
                                                   ::Newtonsoft::Json::Linq::JsonLoadSettings* options, int32_t _startDepth_5__2,
                                                   ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1,
                                                   ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field reader, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonReader* reader;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JContainer* __4__this;

  /// @brief Field options, offset: 0x38, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JsonLoadSettings* options;

  /// @brief Field <startDepth>5__2, offset: 0x40, size: 0x4, def value: None
  int32_t _startDepth_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::__JContainer___ReadTokenFromAsync_d__0, 0x68>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___ReadTokenFromAsync_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___ReadTokenFromAsync_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___ReadTokenFromAsync_d__0, reader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___ReadTokenFromAsync_d__0, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___ReadTokenFromAsync_d__0, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___ReadTokenFromAsync_d__0, options) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___ReadTokenFromAsync_d__0, _startDepth_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___ReadTokenFromAsync_d__0, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JContainer___ReadTokenFromAsync_d__0, __u__2) == 0x58, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
// Type: Newtonsoft.Json.Linq::JContainer
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 81, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Linq::JContainer*
class CORDL_TYPE JContainer : public ::Newtonsoft::Json::Linq::JToken {
public:
  // Declarations
  using _GetDescendants_d__36 = ::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__36;

  using _ReadContentFromAsync_d__1 = ::Newtonsoft::Json::Linq::__JContainer___ReadContentFromAsync_d__1;

  using _ReadTokenFromAsync_d__0 = ::Newtonsoft::Json::Linq::__JContainer___ReadTokenFromAsync_d__0;

  __declspec(property(get = get_ChildrenTokens))::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* ChildrenTokens;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_First))::Newtonsoft::Json::Linq::JToken* First;

  __declspec(property(get = get_HasValues)) bool HasValues;

  __declspec(property(get = get_Last))::Newtonsoft::Json::Linq::JToken* Last;

  __declspec(property(get = System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__get_IsReadOnly)) bool System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__IsReadOnly;

  __declspec(
      property(get = System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__get_Item,
               put = System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__set_Item))::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__Item[];

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  __declspec(property(get = System_Collections_IList_get_IsReadOnly)) bool System_Collections_IList_IsReadOnly;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item))::System::Object* System_Collections_IList_Item[];

  __declspec(property(get = System_ComponentModel_IBindingList_get_AllowEdit)) bool System_ComponentModel_IBindingList_AllowEdit;

  __declspec(property(get = System_ComponentModel_IBindingList_get_AllowNew)) bool System_ComponentModel_IBindingList_AllowNew;

  __declspec(property(get = System_ComponentModel_IBindingList_get_AllowRemove)) bool System_ComponentModel_IBindingList_AllowRemove;

  __declspec(property(get = System_ComponentModel_IBindingList_get_IsSorted)) bool System_ComponentModel_IBindingList_IsSorted;

  __declspec(property(get = System_ComponentModel_IBindingList_get_SortDirection))::System::ComponentModel::ListSortDirection System_ComponentModel_IBindingList_SortDirection;

  __declspec(property(get = System_ComponentModel_IBindingList_get_SortProperty))::System::ComponentModel::PropertyDescriptor* System_ComponentModel_IBindingList_SortProperty;

  __declspec(property(get = System_ComponentModel_IBindingList_get_SupportsChangeNotification)) bool System_ComponentModel_IBindingList_SupportsChangeNotification;

  __declspec(property(get = System_ComponentModel_IBindingList_get_SupportsSearching)) bool System_ComponentModel_IBindingList_SupportsSearching;

  __declspec(property(get = System_ComponentModel_IBindingList_get_SupportsSorting)) bool System_ComponentModel_IBindingList_SupportsSorting;

  /// @brief Field _addingNew, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__addingNew, put = __cordl_internal_set__addingNew))::System::ComponentModel::AddingNewEventHandler* _addingNew;

  /// @brief Field _busy, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__busy, put = __cordl_internal_set__busy)) bool _busy;

  /// @brief Field _collectionChanged, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__collectionChanged,
                      put = __cordl_internal_set__collectionChanged))::System::Collections::Specialized::NotifyCollectionChangedEventHandler* _collectionChanged;

  /// @brief Field _listChanged, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__listChanged, put = __cordl_internal_set__listChanged))::System::ComponentModel::ListChangedEventHandler* _listChanged;

  /// @brief Field _syncRoot, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot))::System::Object* _syncRoot;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert operator to "::System::Collections::Specialized::INotifyCollectionChanged"
  constexpr operator ::System::Collections::Specialized::INotifyCollectionChanged*() noexcept;

  /// @brief Convert operator to "::System::ComponentModel::IBindingList"
  constexpr operator ::System::ComponentModel::IBindingList*() noexcept;

  /// @brief Convert operator to "::System::ComponentModel::ITypedList"
  constexpr operator ::System::ComponentModel::ITypedList*() noexcept;

  /// @brief Method Add, addr 0x2a8f4b8, size 0xd0, virtual true, abstract: false, final false
  inline void Add(::System::Object* content);

  /// @brief Method AddAndSkipParentCheck, addr 0x2a8f658, size 0xd0, virtual false, abstract: false, final false
  inline void AddAndSkipParentCheck(::Newtonsoft::Json::Linq::JToken* token);

  /// @brief Method AddFirst, addr 0x2a8f728, size 0x14, virtual false, abstract: false, final false
  inline void AddFirst(::System::Object* content);

  /// @brief Method CheckReentrancy, addr 0x2a8d238, size 0xb0, virtual false, abstract: false, final false
  inline void CheckReentrancy();

  /// @brief Method Children, addr 0x2a8d7c8, size 0x74, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> Children();

  /// @brief Method ClearItems, addr 0x2a8e9f4, size 0x420, virtual true, abstract: false, final false
  inline void ClearItems();

  /// @brief Method ContainsItem, addr 0x2a8ee78, size 0x24, virtual true, abstract: false, final false
  inline bool ContainsItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method ContentsEqual, addr 0x2a8b094, size 0x2bc, virtual false, abstract: false, final false
  inline bool ContentsEqual(::Newtonsoft::Json::Linq::JContainer* container);

  /// @brief Method ContentsHashCode, addr 0x2a8b74c, size 0x304, virtual false, abstract: false, final false
  inline int32_t ContentsHashCode();

  /// @brief Method CopyItemsTo, addr 0x2a8ee9c, size 0x440, virtual true, abstract: false, final false
  inline void CopyItemsTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method CreateChildrenCollection, addr 0x2a8d2e8, size 0x70, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* CreateChildrenCollection();

  /// @brief Method CreateFromContent, addr 0x2a8f73c, size 0xac, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* CreateFromContent(::System::Object* content);

  /// @brief Method CreateWriter, addr 0x2a8f7e8, size 0x64, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonWriter* CreateWriter();

  /// @brief Method Descendants, addr 0x2a8d83c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Descendants();

  /// @brief Method DescendantsAndSelf, addr 0x2a8d8d0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* DescendantsAndSelf();

  /// @brief Method EnsureParentToken, addr 0x2a8d9f0, size 0x104, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* EnsureParentToken(::Newtonsoft::Json::Linq::JToken* item, bool skipParentCheck, bool copyAnnotations);

  /// @brief Method EnsureValue, addr 0x2a90608, size 0xc0, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* EnsureValue(::System::Object* value);

  /// @brief Method GetDescendants, addr 0x2a8d844, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* GetDescendants(bool self);

  /// @brief Method GetItem, addr 0x2a8e3b8, size 0xbc, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* GetItem(int32_t index);

  /// @brief Method IndexOfItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t IndexOfItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method InsertItem, addr 0x2a8db0c, size 0x400, virtual true, abstract: false, final false
  inline bool InsertItem(int32_t index, ::Newtonsoft::Json::Linq::JToken* item, bool skipParentCheck, bool copyAnnotations);

  /// @brief Method IsMultiContent, addr 0x2a8d90c, size 0xe4, virtual false, abstract: false, final false
  inline bool IsMultiContent(::System::Object* content);

  /// @brief Method IsTokenUnchanged, addr 0x2a8e938, size 0xbc, virtual false, abstract: false, final false
  static inline bool IsTokenUnchanged(::Newtonsoft::Json::Linq::JToken* currentValue, ::Newtonsoft::Json::Linq::JToken* newValue);

  /// @brief Method Merge, addr 0x2a8f8a0, size 0x40, virtual false, abstract: false, final false
  inline void Merge(::System::Object* content);

  /// @brief Method Merge, addr 0x2a8fa40, size 0x44, virtual false, abstract: false, final false
  inline void Merge(::System::Object* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings);

  /// @brief Method MergeEnumerableContent, addr 0x2a89b84, size 0xd40, virtual false, abstract: false, final false
  static inline void MergeEnumerableContent(::Newtonsoft::Json::Linq::JContainer* target, ::System::Collections::IEnumerable* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings);

  /// @brief Method MergeItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void MergeItem(::System::Object* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings);

  static inline ::Newtonsoft::Json::Linq::JContainer* New_ctor();

  static inline ::Newtonsoft::Json::Linq::JContainer* New_ctor(::Newtonsoft::Json::Linq::JContainer* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings);

  /// @brief Method OnAddingNew, addr 0x2a8d358, size 0x28, virtual true, abstract: false, final false
  inline void OnAddingNew(::System::ComponentModel::AddingNewEventArgs* e);

  /// @brief Method OnCollectionChanged, addr 0x2a8d408, size 0x88, virtual true, abstract: false, final false
  inline void OnCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e);

  /// @brief Method OnListChanged, addr 0x2a8d380, size 0x88, virtual true, abstract: false, final false
  inline void OnListChanged(::System::ComponentModel::ListChangedEventArgs* e);

  /// @brief Method ReadContentFrom, addr 0x2a8fa84, size 0x424, virtual false, abstract: false, final false
  inline void ReadContentFrom(::Newtonsoft::Json::JsonReader* r, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method ReadContentFromAsync, addr 0x2a8ca14, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ReadContentFromAsync(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings,
                                                                ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadProperty, addr 0x2a8ff24, size 0x200, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JProperty* ReadProperty(::Newtonsoft::Json::JsonReader* r, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings, ::Newtonsoft::Json::IJsonLineInfo* lineInfo,
                                                                  ::Newtonsoft::Json::Linq::JContainer* parent);

  /// @brief Method ReadTokenFrom, addr 0x2a8be04, size 0x168, virtual false, abstract: false, final false
  inline void ReadTokenFrom(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* options);

  /// @brief Method ReadTokenFromAsync, addr 0x2a8c518, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ReadTokenFromAsync(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* options,
                                                              ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method RemoveAll, addr 0x2a8f890, size 0x10, virtual false, abstract: false, final false
  inline void RemoveAll();

  /// @brief Method RemoveItem, addr 0x2a8e36c, size 0x4c, virtual true, abstract: false, final false
  inline bool RemoveItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method RemoveItemAt, addr 0x2a8df0c, size 0x460, virtual true, abstract: false, final false
  inline void RemoveItemAt(int32_t index);

  /// @brief Method ReplaceAll, addr 0x2a8f84c, size 0x44, virtual false, abstract: false, final false
  inline void ReplaceAll(::System::Object* content);

  /// @brief Method ReplaceItem, addr 0x2a8ee14, size 0x64, virtual true, abstract: false, final false
  inline void ReplaceItem(::Newtonsoft::Json::Linq::JToken* existing, ::Newtonsoft::Json::Linq::JToken* replacement);

  /// @brief Method SetItem, addr 0x2a8e474, size 0x4c4, virtual true, abstract: false, final false
  inline void SetItem(int32_t index, ::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Add, addr 0x2a905b0, size 0x10, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Add(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Clear, addr 0x2a905c0, size 0x10, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Clear();

  /// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Contains, addr 0x2a905d0, size 0x10, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Contains(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.CopyTo, addr 0x2a905e0, size 0x10, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__CopyTo(::ArrayW<::Newtonsoft::Json::Linq::JToken*, ::Array<::Newtonsoft::Json::Linq::JToken*>*> array,
                                                                                         int32_t arrayIndex);

  /// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Remove, addr 0x2a905f8, size 0x10, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Remove(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.get_IsReadOnly, addr 0x2a905f0, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__get_IsReadOnly();

  /// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.IndexOf, addr 0x2a90558, size 0x10, virtual true, abstract: false, final true
  inline int32_t System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__IndexOf(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.Insert, addr 0x2a90568, size 0x18, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__Insert(int32_t index, ::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.RemoveAt, addr 0x2a90580, size 0x10, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__RemoveAt(int32_t index);

  /// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.get_Item, addr 0x2a90590, size 0x10, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__get_Item(int32_t index);

  /// @brief Method System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.set_Item, addr 0x2a905a0, size 0x10, virtual true, abstract: false, final true
  inline void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__set_Item(int32_t index, ::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x2a90838, size 0x10, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x2a90848, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x2a90850, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IList.Add, addr 0x2a906c8, size 0x38, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Clear, addr 0x2a90700, size 0x10, virtual true, abstract: false, final true
  inline void System_Collections_IList_Clear();

  /// @brief Method System.Collections.IList.Contains, addr 0x2a90710, size 0x28, virtual true, abstract: false, final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.IndexOf, addr 0x2a90738, size 0x28, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.Insert, addr 0x2a90760, size 0x44, virtual true, abstract: false, final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.Remove, addr 0x2a907b4, size 0x28, virtual true, abstract: false, final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.RemoveAt, addr 0x2a907dc, size 0x10, virtual true, abstract: false, final true
  inline void System_Collections_IList_RemoveAt(int32_t index);

  /// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x2a907a4, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsFixedSize();

  /// @brief Method System.Collections.IList.get_IsReadOnly, addr 0x2a907ac, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsReadOnly();

  /// @brief Method System.Collections.IList.get_Item, addr 0x2a907ec, size 0x10, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item, addr 0x2a907fc, size 0x3c, virtual true, abstract: false, final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  /// @brief Method System.ComponentModel.IBindingList.AddIndex, addr 0x2a908cc, size 0x4, virtual true, abstract: false, final true
  inline void System_ComponentModel_IBindingList_AddIndex(::System::ComponentModel::PropertyDescriptor* property);

  /// @brief Method System.ComponentModel.IBindingList.AddNew, addr 0x2a908d0, size 0x1c8, virtual true, abstract: false, final true
  inline ::System::Object* System_ComponentModel_IBindingList_AddNew();

  /// @brief Method System.ComponentModel.IBindingList.ApplySort, addr 0x2a90ab0, size 0x40, virtual true, abstract: false, final true
  inline void System_ComponentModel_IBindingList_ApplySort(::System::ComponentModel::PropertyDescriptor* property, ::System::ComponentModel::ListSortDirection direction);

  /// @brief Method System.ComponentModel.IBindingList.Find, addr 0x2a90af0, size 0x40, virtual true, abstract: false, final true
  inline int32_t System_ComponentModel_IBindingList_Find(::System::ComponentModel::PropertyDescriptor* property, ::System::Object* key);

  /// @brief Method System.ComponentModel.IBindingList.RemoveIndex, addr 0x2a90b38, size 0x4, virtual true, abstract: false, final true
  inline void System_ComponentModel_IBindingList_RemoveIndex(::System::ComponentModel::PropertyDescriptor* property);

  /// @brief Method System.ComponentModel.IBindingList.RemoveSort, addr 0x2a90b3c, size 0x40, virtual true, abstract: false, final true
  inline void System_ComponentModel_IBindingList_RemoveSort();

  /// @brief Method System.ComponentModel.IBindingList.get_AllowEdit, addr 0x2a90a98, size 0x8, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_AllowEdit();

  /// @brief Method System.ComponentModel.IBindingList.get_AllowNew, addr 0x2a90aa0, size 0x8, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_AllowNew();

  /// @brief Method System.ComponentModel.IBindingList.get_AllowRemove, addr 0x2a90aa8, size 0x8, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_AllowRemove();

  /// @brief Method System.ComponentModel.IBindingList.get_IsSorted, addr 0x2a90b30, size 0x8, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_IsSorted();

  /// @brief Method System.ComponentModel.IBindingList.get_SortDirection, addr 0x2a90b7c, size 0x8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::ListSortDirection System_ComponentModel_IBindingList_get_SortDirection();

  /// @brief Method System.ComponentModel.IBindingList.get_SortProperty, addr 0x2a90b84, size 0x8, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptor* System_ComponentModel_IBindingList_get_SortProperty();

  /// @brief Method System.ComponentModel.IBindingList.get_SupportsChangeNotification, addr 0x2a90b8c, size 0x8, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_SupportsChangeNotification();

  /// @brief Method System.ComponentModel.IBindingList.get_SupportsSearching, addr 0x2a90b94, size 0x8, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_SupportsSearching();

  /// @brief Method System.ComponentModel.IBindingList.get_SupportsSorting, addr 0x2a90b9c, size 0x8, virtual true, abstract: false, final true
  inline bool System_ComponentModel_IBindingList_get_SupportsSorting();

  /// @brief Method System.ComponentModel.ITypedList.GetItemProperties, addr 0x2a90404, size 0x154, virtual true, abstract: false, final true
  inline ::System::ComponentModel::PropertyDescriptorCollection*
  System_ComponentModel_ITypedList_GetItemProperties(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> listAccessors);

  /// @brief Method System.ComponentModel.ITypedList.GetListName, addr 0x2a903bc, size 0x48, virtual true, abstract: false, final true
  inline ::StringW System_ComponentModel_ITypedList_GetListName(::ArrayW<::System::ComponentModel::PropertyDescriptor*, ::Array<::System::ComponentModel::PropertyDescriptor*>*> listAccessors);

  /// @brief Method TryAdd, addr 0x2a8f588, size 0xd0, virtual false, abstract: false, final false
  inline bool TryAdd(::System::Object* content);

  /// @brief Method TryAddInternal, addr 0x2a8cea4, size 0x394, virtual false, abstract: false, final false
  inline bool TryAddInternal(int32_t index, ::System::Object* content, bool skipParentCheck, bool copyAnnotations);

  /// @brief Method ValidateContent, addr 0x2a8f8e0, size 0x160, virtual false, abstract: false, final false
  inline void ValidateContent(::System::Object* content);

  /// @brief Method ValidateToken, addr 0x2a8f390, size 0x128, virtual true, abstract: false, final false
  inline void ValidateToken(::Newtonsoft::Json::Linq::JToken* o, ::Newtonsoft::Json::Linq::JToken* existing);

  /// @brief Method Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* Values();

  constexpr ::System::ComponentModel::AddingNewEventHandler*& __cordl_internal_get__addingNew();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::AddingNewEventHandler*> const& __cordl_internal_get__addingNew() const;

  constexpr bool const& __cordl_internal_get__busy() const;

  constexpr bool& __cordl_internal_get__busy();

  constexpr ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*& __cordl_internal_get__collectionChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::NotifyCollectionChangedEventHandler*> const& __cordl_internal_get__collectionChanged() const;

  constexpr ::System::ComponentModel::ListChangedEventHandler*& __cordl_internal_get__listChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ListChangedEventHandler*> const& __cordl_internal_get__listChanged() const;

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__syncRoot() const;

  constexpr void __cordl_internal_set__addingNew(::System::ComponentModel::AddingNewEventHandler* value);

  constexpr void __cordl_internal_set__busy(bool value);

  constexpr void __cordl_internal_set__collectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* value);

  constexpr void __cordl_internal_set__listChanged(::System::ComponentModel::ListChangedEventHandler* value);

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  /// @brief Method .ctor, addr 0x2a8a954, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2a8aa48, size 0x368, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JContainer* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings);

  /// @brief Method add_AddingNew, addr 0x2a8cc0c, size 0x80, virtual false, abstract: false, final false
  inline void add_AddingNew(::System::ComponentModel::AddingNewEventHandler* value);

  /// @brief Method add_CollectionChanged, addr 0x2a8cd0c, size 0x80, virtual true, abstract: false, final true
  inline void add_CollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* value);

  /// @brief Method add_ListChanged, addr 0x2a8cb0c, size 0x80, virtual true, abstract: false, final true
  inline void add_ListChanged(::System::ComponentModel::ListChangedEventHandler* value);

  /// @brief Method get_ChildrenTokens, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens();

  /// @brief Method get_Count, addr 0x2a8f2dc, size 0xb4, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_First, addr 0x2a8d550, size 0x13c, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_First();

  /// @brief Method get_HasValues, addr 0x2a8d490, size 0xc0, virtual true, abstract: false, final false
  inline bool get_HasValues();

  /// @brief Method get_Last, addr 0x2a8d68c, size 0x13c, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Last();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__ICollection_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IList_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  /// @brief Convert to "::System::Collections::Specialized::INotifyCollectionChanged"
  constexpr ::System::Collections::Specialized::INotifyCollectionChanged* i___System__Collections__Specialized__INotifyCollectionChanged() noexcept;

  /// @brief Convert to "::System::ComponentModel::IBindingList"
  constexpr ::System::ComponentModel::IBindingList* i___System__ComponentModel__IBindingList() noexcept;

  /// @brief Convert to "::System::ComponentModel::ITypedList"
  constexpr ::System::ComponentModel::ITypedList* i___System__ComponentModel__ITypedList() noexcept;

  /// @brief Method remove_AddingNew, addr 0x2a8cc8c, size 0x80, virtual false, abstract: false, final false
  inline void remove_AddingNew(::System::ComponentModel::AddingNewEventHandler* value);

  /// @brief Method remove_CollectionChanged, addr 0x2a8cd8c, size 0x80, virtual true, abstract: false, final true
  inline void remove_CollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* value);

  /// @brief Method remove_ListChanged, addr 0x2a8cb8c, size 0x80, virtual true, abstract: false, final true
  inline void remove_ListChanged(::System::ComponentModel::ListChangedEventHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JContainer(JContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JContainer(JContainer const&) = delete;

  /// @brief Field _listChanged, offset: 0x30, size: 0x8, def value: None
  ::System::ComponentModel::ListChangedEventHandler* ____listChanged;

  /// @brief Field _addingNew, offset: 0x38, size: 0x8, def value: None
  ::System::ComponentModel::AddingNewEventHandler* ____addingNew;

  /// @brief Field _collectionChanged, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Specialized::NotifyCollectionChangedEventHandler* ____collectionChanged;

  /// @brief Field _syncRoot, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  /// @brief Field _busy, offset: 0x50, size: 0x1, def value: None
  bool ____busy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JContainer, 0x58>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JContainer, ____listChanged) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JContainer, ____addingNew) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JContainer, ____collectionChanged) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JContainer, ____syncRoot) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JContainer, ____busy) == 0x50, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JContainer);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JContainer*, "Newtonsoft.Json.Linq", "JContainer");
NEED_NO_BOX(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__36);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__JContainer___GetDescendants_d__36*, "Newtonsoft.Json.Linq", "JContainer/<GetDescendants>d__36");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__JContainer___ReadContentFromAsync_d__1, "Newtonsoft.Json.Linq", "JContainer/<ReadContentFromAsync>d__1");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__JContainer___ReadTokenFromAsync_d__0, "Newtonsoft.Json.Linq", "JContainer/<ReadTokenFromAsync>d__0");
