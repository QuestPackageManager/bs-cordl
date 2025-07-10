#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/MessageDictionary.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageDictionary)
namespace System::Collections {
struct DictionaryEntry;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Runtime::Remoting::Messaging {
class MessageDictionary_DictionaryEnumerator;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class MessageDictionary;
}
namespace System::Runtime::Remoting::Messaging {
class MessageDictionary_DictionaryEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::MessageDictionary);
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator);
// Dependencies System.Collections.IDictionaryEnumerator, System.Collections.IEnumerator, System.Object
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: System.Runtime.Remoting.Messaging.MessageDictionary/DictionaryEnumerator
class CORDL_TYPE MessageDictionary_DictionaryEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  __declspec(property(get = get_Entry)) ::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key)) ::System::Object* Key;

  __declspec(property(get = get_Value)) ::System::Object* Value;

  /// @brief Field _hashtableEnum, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__hashtableEnum, put = __cordl_internal_set__hashtableEnum)) ::System::Collections::IDictionaryEnumerator* _hashtableEnum;

  /// @brief Field _methodDictionary, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__methodDictionary, put = __cordl_internal_set__methodDictionary)) ::System::Runtime::Remoting::Messaging::MessageDictionary* _methodDictionary;

  /// @brief Field _posMethod, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__posMethod, put = __cordl_internal_set__posMethod)) int32_t _posMethod;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x3cef154, size 0x1d0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator* New_ctor(::System::Runtime::Remoting::Messaging::MessageDictionary* methodDictionary);

  /// @brief Method Reset, addr 0x3cef324, size 0xac, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::System::Collections::IDictionaryEnumerator* const& __cordl_internal_get__hashtableEnum() const;

  constexpr ::System::Collections::IDictionaryEnumerator*& __cordl_internal_get__hashtableEnum();

  constexpr ::System::Runtime::Remoting::Messaging::MessageDictionary* const& __cordl_internal_get__methodDictionary() const;

  constexpr ::System::Runtime::Remoting::Messaging::MessageDictionary*& __cordl_internal_get__methodDictionary();

  constexpr int32_t const& __cordl_internal_get__posMethod() const;

  constexpr int32_t& __cordl_internal_get__posMethod();

  constexpr void __cordl_internal_set__hashtableEnum(::System::Collections::IDictionaryEnumerator* value);

  constexpr void __cordl_internal_set__methodDictionary(::System::Runtime::Remoting::Messaging::MessageDictionary* value);

  constexpr void __cordl_internal_set__posMethod(int32_t value);

  /// @brief Method .ctor, addr 0x3ceeea4, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::MessageDictionary* methodDictionary);

  /// @brief Method get_Current, addr 0x3ceef88, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Method get_Entry, addr 0x3ceefec, size 0x168, virtual true, abstract: false, final true
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x3cef3d0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x3cef3d4, size 0x14, virtual true, abstract: false, final true
  inline ::System::Object* get_Value();

  /// @brief Convert to "::System::Collections::IDictionaryEnumerator"
  constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageDictionary_DictionaryEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageDictionary_DictionaryEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageDictionary_DictionaryEnumerator(MessageDictionary_DictionaryEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageDictionary_DictionaryEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageDictionary_DictionaryEnumerator(MessageDictionary_DictionaryEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3175 };

  /// @brief Field _methodDictionary, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::MessageDictionary* ____methodDictionary;

  /// @brief Field _hashtableEnum, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IDictionaryEnumerator* ____hashtableEnum;

  /// @brief Field _posMethod, offset: 0x20, size: 0x4, def value: None
  int32_t ____posMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator, ____methodDictionary) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator, ____hashtableEnum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator, ____posMethod) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
// Dependencies System.Collections.ICollection, System.Collections.IDictionary, System.Collections.IEnumerable, System.Object
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: System.Runtime.Remoting.Messaging.MessageDictionary
class CORDL_TYPE MessageDictionary : public ::System::Object {
public:
  // Declarations
  using DictionaryEnumerator = ::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_InternalDictionary)) ::System::Collections::IDictionary* InternalDictionary;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item)) ::System::Object* Item[];

  __declspec(property(get = get_Keys)) ::System::Collections::ICollection* Keys;

  __declspec(property(put = set_MethodKeys)) ::ArrayW<::StringW, ::Array<::StringW>*> MethodKeys;

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  __declspec(property(get = get_Values)) ::System::Collections::ICollection* Values;

  /// @brief Field _internalProperties, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__internalProperties, put = __cordl_internal_set__internalProperties)) ::System::Collections::IDictionary* _internalProperties;

  /// @brief Field _message, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__message, put = __cordl_internal_set__message)) ::System::Runtime::Remoting::Messaging::IMethodMessage* _message;

  /// @brief Field _methodKeys, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__methodKeys, put = __cordl_internal_set__methodKeys)) ::ArrayW<::StringW, ::Array<::StringW>*> _methodKeys;

  /// @brief Field _ownProperties, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__ownProperties, put = __cordl_internal_set__ownProperties)) bool _ownProperties;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x3cedf1c, size 0x168, virtual true, abstract: false, final true
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method AllocInternalProperties, addr 0x3cedce0, size 0x60, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* AllocInternalProperties();

  /// @brief Method Clear, addr 0x3cee8ec, size 0xac, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x3cee998, size 0x13c, virtual true, abstract: false, final true
  inline bool Contains(::System::Object* key);

  /// @brief Method CopyTo, addr 0x3ceed2c, size 0xc0, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator, addr 0x3ceee48, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method GetInternalProperties, addr 0x3ceaba4, size 0x30, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionary* GetInternalProperties();

  /// @brief Method GetMethodProperty, addr 0x3cebea4, size 0x564, virtual true, abstract: false, final false
  inline ::System::Object* GetMethodProperty(::StringW key);

  /// @brief Method HasUserData, addr 0x3ce8930, size 0xfc, virtual false, abstract: false, final false
  inline bool HasUserData();

  /// @brief Method IsOverridenKey, addr 0x3cedd40, size 0x88, virtual false, abstract: false, final false
  inline bool IsOverridenKey(::StringW key);

  static inline ::System::Runtime::Remoting::Messaging::MessageDictionary* New_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* message);

  /// @brief Method Remove, addr 0x3ceead4, size 0x184, virtual true, abstract: false, final true
  inline void Remove(::System::Object* key);

  /// @brief Method SetMethodProperty, addr 0x3cec670, size 0x2e0, virtual true, abstract: false, final false
  inline void SetMethodProperty(::StringW key, ::System::Object* value);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3ceedec, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get__internalProperties() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get__internalProperties();

  constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage* const& __cordl_internal_get__message() const;

  constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage*& __cordl_internal_get__message();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__methodKeys() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__methodKeys();

  constexpr bool const& __cordl_internal_get__ownProperties() const;

  constexpr bool& __cordl_internal_get__ownProperties();

  constexpr void __cordl_internal_set__internalProperties(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set__message(::System::Runtime::Remoting::Messaging::IMethodMessage* value);

  constexpr void __cordl_internal_set__methodKeys(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__ownProperties(bool value);

  /// @brief Method .ctor, addr 0x3cebab0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* message);

  /// @brief Method get_Count, addr 0x3ceec58, size 0xc8, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_InternalDictionary, addr 0x3ce8a2c, size 0x88, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionary* get_InternalDictionary();

  /// @brief Method get_IsFixedSize, addr 0x3ceddc8, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x3ceddd0, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x3ceed20, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x3ceddd8, size 0x140, virtual true, abstract: false, final true
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method get_Keys, addr 0x3cee084, size 0x440, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_SyncRoot, addr 0x3ceed28, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Values, addr 0x3cee4c4, size 0x428, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IDictionary"
  constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method set_Item, addr 0x3cedf18, size 0x4, virtual true, abstract: false, final true
  inline void set_Item(::System::Object* key, ::System::Object* value);

  /// @brief Method set_MethodKeys, addr 0x3cedcd8, size 0x8, virtual false, abstract: false, final false
  inline void set_MethodKeys(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageDictionary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageDictionary(MessageDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageDictionary(MessageDictionary const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3176 };

  /// @brief Field _internalProperties, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ____internalProperties;

  /// @brief Field _message, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::IMethodMessage* ____message;

  /// @brief Field _methodKeys, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____methodKeys;

  /// @brief Field _ownProperties, offset: 0x28, size: 0x1, def value: None
  bool ____ownProperties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Messaging::MessageDictionary, ____internalProperties) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MessageDictionary, ____message) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MessageDictionary, ____methodKeys) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MessageDictionary, ____ownProperties) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::MessageDictionary, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::MessageDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::MessageDictionary*, "System.Runtime.Remoting.Messaging", "MessageDictionary");
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::MessageDictionary_DictionaryEnumerator*, "System.Runtime.Remoting.Messaging", "MessageDictionary/DictionaryEnumerator");
