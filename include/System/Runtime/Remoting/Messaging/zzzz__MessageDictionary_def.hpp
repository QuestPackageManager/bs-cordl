#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System::Runtime::Remoting::Messaging {
class __MessageDictionary__DictionaryEnumerator;
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
class __MessageDictionary__DictionaryEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::MessageDictionary);
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::__MessageDictionary__DictionaryEnumerator);
// Type: ::DictionaryEnumerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3176))
// CS Name: ::MessageDictionary::DictionaryEnumerator*
class CORDL_TYPE __MessageDictionary__DictionaryEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _methodDictionary, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__methodDictionary, put = __cordl_internal_set__methodDictionary))::System::Runtime::Remoting::Messaging::MessageDictionary* _methodDictionary;

  /// @brief Field _hashtableEnum, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__hashtableEnum, put = __cordl_internal_set__hashtableEnum))::System::Collections::IDictionaryEnumerator* _hashtableEnum;

  /// @brief Field _posMethod, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__posMethod, put = __cordl_internal_set__posMethod)) int32_t _posMethod;

  __declspec(property(get = get_Current))::System::Object* Current;

  __declspec(property(get = get_Entry))::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key))::System::Object* Key;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IDictionaryEnumerator"
  constexpr ::System::Collections::IDictionaryEnumerator* i___System__Collections__IDictionaryEnumerator() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  constexpr ::System::Runtime::Remoting::Messaging::MessageDictionary*& __cordl_internal_get__methodDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::MessageDictionary*> const& __cordl_internal_get__methodDictionary() const;

  constexpr void __cordl_internal_set__methodDictionary(::System::Runtime::Remoting::Messaging::MessageDictionary* value);

  constexpr ::System::Collections::IDictionaryEnumerator*& __cordl_internal_get__hashtableEnum();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionaryEnumerator*> const& __cordl_internal_get__hashtableEnum() const;

  constexpr void __cordl_internal_set__hashtableEnum(::System::Collections::IDictionaryEnumerator* value);

  constexpr int32_t& __cordl_internal_get__posMethod();

  constexpr int32_t const& __cordl_internal_get__posMethod() const;

  constexpr void __cordl_internal_set__posMethod(int32_t value);

  static inline ::System::Runtime::Remoting::Messaging::__MessageDictionary__DictionaryEnumerator* New_ctor(::System::Runtime::Remoting::Messaging::MessageDictionary* methodDictionary);

  /// @brief Method .ctor, addr 0x24d192c, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::MessageDictionary* methodDictionary);

  /// @brief Method get_Current, addr 0x24d1a70, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Method MoveNext, addr 0x24d1c40, size 0x1c4, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x24d1e04, size 0xac, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method get_Entry, addr 0x24d1ad4, size 0x16c, virtual true, abstract: false, final true
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key, addr 0x24d1eb0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* get_Key();

  /// @brief Method get_Value, addr 0x24d1eb4, size 0x14, virtual true, abstract: false, final true
  inline ::System::Object* get_Value();

  // Ctor Parameters [CppParam { name: "", ty: "__MessageDictionary__DictionaryEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MessageDictionary__DictionaryEnumerator(__MessageDictionary__DictionaryEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MessageDictionary__DictionaryEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MessageDictionary__DictionaryEnumerator(__MessageDictionary__DictionaryEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MessageDictionary__DictionaryEnumerator();

public:
  /// @brief Field _methodDictionary, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::MessageDictionary* ____methodDictionary;

  /// @brief Field _hashtableEnum, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IDictionaryEnumerator* ____hashtableEnum;

  /// @brief Field _posMethod, offset: 0x20, size: 0x4, def value: None
  int32_t ____posMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::__MessageDictionary__DictionaryEnumerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::__MessageDictionary__DictionaryEnumerator, ____methodDictionary) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::__MessageDictionary__DictionaryEnumerator, ____hashtableEnum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::__MessageDictionary__DictionaryEnumerator, ____posMethod) == 0x20, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
// Type: System.Runtime.Remoting.Messaging::MessageDictionary
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3177))
// CS Name: ::System.Runtime.Remoting.Messaging::MessageDictionary*
class CORDL_TYPE MessageDictionary : public ::System::Object {
public:
  // Declarations
  using DictionaryEnumerator = ::System::Runtime::Remoting::Messaging::__MessageDictionary__DictionaryEnumerator;

  /// @brief Field _internalProperties, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__internalProperties, put = __cordl_internal_set__internalProperties))::System::Collections::IDictionary* _internalProperties;

  /// @brief Field _message, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__message, put = __cordl_internal_set__message))::System::Runtime::Remoting::Messaging::IMethodMessage* _message;

  /// @brief Field _methodKeys, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__methodKeys, put = __cordl_internal_set__methodKeys))::ArrayW<::StringW, ::Array<::StringW>*> _methodKeys;

  /// @brief Field _ownProperties, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__ownProperties, put = __cordl_internal_set__ownProperties)) bool _ownProperties;

  __declspec(property(get = get_InternalDictionary))::System::Collections::IDictionary* InternalDictionary;

  __declspec(property(put = set_MethodKeys))::ArrayW<::StringW, ::Array<::StringW>*> MethodKeys;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_Keys))::System::Collections::ICollection* Keys;

  __declspec(property(get = get_Values))::System::Collections::ICollection* Values;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert to "::System::Collections::IDictionary"
  constexpr ::System::Collections::IDictionary* i___System__Collections__IDictionary() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get__internalProperties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __cordl_internal_get__internalProperties() const;

  constexpr void __cordl_internal_set__internalProperties(::System::Collections::IDictionary* value);

  constexpr ::System::Runtime::Remoting::Messaging::IMethodMessage*& __cordl_internal_get__message();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMethodMessage*> const& __cordl_internal_get__message() const;

  constexpr void __cordl_internal_set__message(::System::Runtime::Remoting::Messaging::IMethodMessage* value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__methodKeys();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__methodKeys() const;

  constexpr void __cordl_internal_set__methodKeys(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr bool& __cordl_internal_get__ownProperties();

  constexpr bool const& __cordl_internal_get__ownProperties() const;

  constexpr void __cordl_internal_set__ownProperties(bool value);

  static inline ::System::Runtime::Remoting::Messaging::MessageDictionary* New_ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* message);

  /// @brief Method .ctor, addr 0x24ce1a8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMethodMessage* message);

  /// @brief Method HasUserData, addr 0x24cb004, size 0xfc, virtual false, abstract: false, final false
  inline bool HasUserData();

  /// @brief Method get_InternalDictionary, addr 0x24cb100, size 0x88, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionary* get_InternalDictionary();

  /// @brief Method set_MethodKeys, addr 0x24d07a4, size 0x8, virtual false, abstract: false, final false
  inline void set_MethodKeys(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method AllocInternalProperties, addr 0x24d07ac, size 0x68, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionary* AllocInternalProperties();

  /// @brief Method GetInternalProperties, addr 0x24cd2a4, size 0x30, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionary* GetInternalProperties();

  /// @brief Method IsOverridenKey, addr 0x24d0814, size 0x8c, virtual false, abstract: false, final false
  inline bool IsOverridenKey(::StringW key);

  /// @brief Method get_IsFixedSize, addr 0x24d08a0, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x24d08a8, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Item, addr 0x24d08b0, size 0x14c, virtual true, abstract: false, final true
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method set_Item, addr 0x24d09fc, size 0x4, virtual true, abstract: false, final true
  inline void set_Item(::System::Object* key, ::System::Object* value);

  /// @brief Method GetMethodProperty, addr 0x24ce57c, size 0x540, virtual true, abstract: false, final false
  inline ::System::Object* GetMethodProperty(::StringW key);

  /// @brief Method SetMethodProperty, addr 0x24ced28, size 0x2e0, virtual true, abstract: false, final false
  inline void SetMethodProperty(::StringW key, ::System::Object* value);

  /// @brief Method get_Keys, addr 0x24d0b68, size 0x434, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_Values, addr 0x24d0f9c, size 0x420, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Method Add, addr 0x24d0a00, size 0x168, virtual true, abstract: false, final true
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method Clear, addr 0x24d13bc, size 0xac, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x24d1468, size 0x148, virtual true, abstract: false, final true
  inline bool Contains(::System::Object* key);

  /// @brief Method Remove, addr 0x24d15b0, size 0x188, virtual true, abstract: false, final true
  inline void Remove(::System::Object* key);

  /// @brief Method get_Count, addr 0x24d1738, size 0xc8, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized, addr 0x24d1800, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot, addr 0x24d1808, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Method CopyTo, addr 0x24d180c, size 0xc0, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x24d18cc, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method GetEnumerator, addr 0x24d1a10, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "MessageDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageDictionary(MessageDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageDictionary(MessageDictionary const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageDictionary();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::MessageDictionary, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MessageDictionary, ____internalProperties) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MessageDictionary, ____message) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MessageDictionary, ____methodKeys) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::MessageDictionary, ____ownProperties) == 0x28, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::MessageDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::MessageDictionary*, "System.Runtime.Remoting.Messaging", "MessageDictionary");
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::__MessageDictionary__DictionaryEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::__MessageDictionary__DictionaryEnumerator*, "System.Runtime.Remoting.Messaging", "MessageDictionary/DictionaryEnumerator");
