#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JArray)
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
namespace Newtonsoft::Json::Linq {
struct __JArray___LoadAsync_d__2;
}
namespace Newtonsoft::Json::Linq {
struct __JArray___WriteToAsync_d__0;
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
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
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
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JArray;
}
namespace Newtonsoft::Json::Linq {
struct __JArray___LoadAsync_d__2;
}
namespace Newtonsoft::Json::Linq {
struct __JArray___WriteToAsync_d__0;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JArray);
MARK_VAL_T(::Newtonsoft::Json::Linq::__JArray___LoadAsync_d__2);
MARK_VAL_T(::Newtonsoft::Json::Linq::__JArray___WriteToAsync_d__0);
// Type: ::<LoadAsync>d__2
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: true
// CS Name: ::JArray::<LoadAsync>d__2
struct CORDL_TYPE __JArray___LoadAsync_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e9800c, size 0x5fc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e98608, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JArray___LoadAsync_d__2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JArray*>", modifiers: "", def_value: None }, CppParam { name: "reader", ty:
  // "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam
  // { name: "settings", ty: "::Newtonsoft::Json::Linq::JsonLoadSettings*", modifiers: "", def_value: None }, CppParam { name: "_a_5__2", ty: "::Newtonsoft::Json::Linq::JArray*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }, CppParam {
  // name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __JArray___LoadAsync_d__2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JArray*> __t__builder,
                                      ::Newtonsoft::Json::JsonReader* reader, ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings,
                                      ::Newtonsoft::Json::Linq::JArray* _a_5__2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1,
                                      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JArray*> __t__builder;

  /// @brief Field reader, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonReader* reader;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field settings, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JsonLoadSettings* settings;

  /// @brief Field <a>5__2, offset: 0x38, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JArray* _a_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10355 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::__JArray___LoadAsync_d__2, 0x60>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JArray___LoadAsync_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JArray___LoadAsync_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JArray___LoadAsync_d__2, reader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JArray___LoadAsync_d__2, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JArray___LoadAsync_d__2, settings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JArray___LoadAsync_d__2, _a_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JArray___LoadAsync_d__2, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JArray___LoadAsync_d__2, __u__2) == 0x50, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
// Type: ::<WriteToAsync>d__0
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 100, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: true
// CS Name: ::JArray::<WriteToAsync>d__0
struct CORDL_TYPE __JArray___WriteToAsync_d__0 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3e98684, size 0x404, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3e98a88, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __JArray___WriteToAsync_d__0();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "writer", ty: "::Newtonsoft::Json::JsonWriter*", modifiers: "", def_value: None
  // }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::Linq::JArray*",
  // modifiers: "", def_value: None }, CppParam { name: "converters", ty: "::ArrayW<::Newtonsoft::Json::JsonConverter*,::Array<::Newtonsoft::Json::JsonConverter*>*>", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "_i_5__2", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr __JArray___WriteToAsync_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Newtonsoft::Json::JsonWriter* writer,
                                         ::System::Threading::CancellationToken cancellationToken, ::Newtonsoft::Json::Linq::JArray* __4__this,
                                         ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters,
                                         ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, int32_t _i_5__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field writer, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::JsonWriter* writer;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JArray* __4__this;

  /// @brief Field converters, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters;

  /// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief Field <i>5__2, offset: 0x50, size: 0x4, def value: None
  int32_t _i_5__2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10356 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::__JArray___WriteToAsync_d__0, 0x58>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JArray___WriteToAsync_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JArray___WriteToAsync_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JArray___WriteToAsync_d__0, writer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JArray___WriteToAsync_d__0, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JArray___WriteToAsync_d__0, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JArray___WriteToAsync_d__0, converters) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JArray___WriteToAsync_d__0, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::__JArray___WriteToAsync_d__0, _i_5__2) == 0x50, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
// Type: Newtonsoft.Json.Linq::JArray
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Linq::JArray*
class CORDL_TYPE JArray : public ::Newtonsoft::Json::Linq::JContainer {
public:
  // Declarations
  using _LoadAsync_d__2 = ::Newtonsoft::Json::Linq::__JArray___LoadAsync_d__2;

  using _WriteToAsync_d__0 = ::Newtonsoft::Json::Linq::__JArray___WriteToAsync_d__0;

  __declspec(property(get = get_ChildrenTokens)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* ChildrenTokens;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Item, put = set_Item)) ::Newtonsoft::Json::Linq::JToken* Item[];

  __declspec(property(get = get_Item, put = set_Item)) ::Newtonsoft::Json::Linq::JToken* Item[];

  __declspec(property(get = get_Type)) ::Newtonsoft::Json::Linq::JTokenType Type;

  /// @brief Field _values, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* _values;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr operator ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x3e97fac, size 0x10, virtual true, abstract: false, final true
  inline void Add(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method Clear, addr 0x3e97fbc, size 0x10, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method CloneToken, addr 0x3e97480, size 0x68, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings* settings);

  /// @brief Method Contains, addr 0x3e97fcc, size 0x10, virtual true, abstract: false, final true
  inline bool Contains(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method CopyTo, addr 0x3e97fdc, size 0x10, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<::Newtonsoft::Json::Linq::JToken*, ::Array<::Newtonsoft::Json::Linq::JToken*>*> array, int32_t arrayIndex);

  /// @brief Method DeepEquals, addr 0x3e973f0, size 0x90, virtual true, abstract: false, final false
  inline bool DeepEquals(::Newtonsoft::Json::Linq::JToken* node);

  /// @brief Method FromObject, addr 0x3e978a0, size 0x20, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JArray* FromObject(::System::Object* o);

  /// @brief Method FromObject, addr 0x3e978c0, size 0x188, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JArray* FromObject(::System::Object* o, ::Newtonsoft::Json::JsonSerializer* jsonSerializer);

  /// @brief Method GetDeepHashCode, addr 0x3e98004, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetDeepHashCode();

  /// @brief Method GetEnumerator, addr 0x3e97f14, size 0x98, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Linq::JToken*>* GetEnumerator();

  /// @brief Method IndexOf, addr 0x3e97edc, size 0x10, virtual true, abstract: false, final true
  inline int32_t IndexOf(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method IndexOfItem, addr 0x3e97d8c, size 0x64, virtual true, abstract: false, final false
  inline int32_t IndexOfItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method Insert, addr 0x3e97eec, size 0x18, virtual true, abstract: false, final true
  inline void Insert(int32_t index, ::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method Load, addr 0x3e974e8, size 0x8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JArray* Load(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method Load, addr 0x3e974f0, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JArray* Load(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method LoadAsync, addr 0x3e970a4, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JArray*>* LoadAsync(::Newtonsoft::Json::JsonReader* reader, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadAsync, addr 0x3e970b0, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JArray*>* LoadAsync(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings,
                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method MergeItem, addr 0x3e97df0, size 0xec, virtual true, abstract: false, final false
  inline void MergeItem(::System::Object* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings);

  static inline ::Newtonsoft::Json::Linq::JArray* New_ctor();

  static inline ::Newtonsoft::Json::Linq::JArray* New_ctor(::ArrayW<::System::Object*, ::Array<::System::Object*>*> content);

  static inline ::Newtonsoft::Json::Linq::JArray* New_ctor(::System::Object* content);

  static inline ::Newtonsoft::Json::Linq::JArray* New_ctor(::Newtonsoft::Json::Linq::JArray* other);

  static inline ::Newtonsoft::Json::Linq::JArray* New_ctor(::Newtonsoft::Json::Linq::JArray* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings);

  /// @brief Method Parse, addr 0x3e976a8, size 0x8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JArray* Parse(::StringW json);

  /// @brief Method Parse, addr 0x3e976b0, size 0x1f0, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JArray* Parse(::StringW json, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings);

  /// @brief Method Remove, addr 0x3e97ff4, size 0x10, virtual true, abstract: false, final true
  inline bool Remove(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method RemoveAt, addr 0x3e97f04, size 0x10, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  /// @brief Method WriteTo, addr 0x3e97a48, size 0xd4, virtual true, abstract: false, final false
  inline void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  /// @brief Method WriteToAsync, addr 0x3e96fb8, size 0xec, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WriteToAsync(::Newtonsoft::Json::JsonWriter* writer, ::System::Threading::CancellationToken cancellationToken,
                                                        ::ArrayW<::Newtonsoft::Json::JsonConverter*, ::Array<::Newtonsoft::Json::JsonConverter*>*> converters);

  constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*& __cordl_internal_get__values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>*> const& __cordl_internal_get__values() const;

  constexpr void __cordl_internal_set__values(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* value);

  /// @brief Method .ctor, addr 0x3e971bc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3e97354, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Object*, ::Array<::System::Object*>*> content);

  /// @brief Method .ctor, addr 0x3e97358, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* content);

  /// @brief Method .ctor, addr 0x3e97238, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JArray* other);

  /// @brief Method .ctor, addr 0x3e972c0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Linq::JArray* other, ::Newtonsoft::Json::Linq::JsonCloneSettings* settings);

  /// @brief Method get_ChildrenTokens, addr 0x3e971ac, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens();

  /// @brief Method get_IsReadOnly, addr 0x3e97fec, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Item, addr 0x3e97d6c, size 0x10, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Linq::JToken* get_Item(int32_t index);

  /// @brief Method get_Item, addr 0x3e97b1c, size 0x124, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object* key);

  /// @brief Method get_Type, addr 0x3e971b4, size 0x8, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JTokenType get_Type();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__ICollection_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IEnumerable_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>"
  constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* i___System__Collections__Generic__IList_1___Newtonsoft__Json__Linq__JToken__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Item, addr 0x3e97d7c, size 0x10, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, ::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method set_Item, addr 0x3e97c40, size 0x12c, virtual true, abstract: false, final false
  inline void set_Item(::System::Object* key, ::Newtonsoft::Json::Linq::JToken* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JArray();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JArray(JArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JArray(JArray const&) = delete;

  /// @brief Field _values, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JToken*>* ____values;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10357 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JArray, 0x60>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JArray, ____values) == 0x58, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JArray);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JArray*, "Newtonsoft.Json.Linq", "JArray");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__JArray___LoadAsync_d__2, "Newtonsoft.Json.Linq", "JArray/<LoadAsync>d__2");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::__JArray___WriteToAsync_d__0, "Newtonsoft.Json.Linq", "JArray/<WriteToAsync>d__0");
