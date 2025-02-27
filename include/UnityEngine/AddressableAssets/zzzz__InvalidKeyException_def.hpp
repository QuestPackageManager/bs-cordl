#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/InvalidKeyException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__Addressables_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidKeyException)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace UnityEngine::AddressableAssets {
struct Addressables_MergeMode;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class InvalidKeyException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::InvalidKeyException);
// Dependencies System.Exception, System.Nullable`1<T>, UnityEngine.AddressableAssets.Addressables::MergeMode
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.InvalidKeyException
class CORDL_TYPE InvalidKeyException : public ::System::Exception {
public:
  // Declarations
  __declspec(property(get = get_Key, put = set_Key)) ::System::Object* Key;

  __declspec(property(get = get_MergeMode)) ::System::Nullable_1<::UnityEngine::AddressableAssets::Addressables_MergeMode> MergeMode;

  __declspec(property(get = get_Message)) ::StringW Message;

  __declspec(property(get = get_Type, put = set_Type)) ::System::Type* Type;

  /// @brief Field <Key>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__Key_k__BackingField, put = __cordl_internal_set__Key_k__BackingField)) ::System::Object* _Key_k__BackingField;

  /// @brief Field <MergeMode>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__MergeMode_k__BackingField,
                      put = __cordl_internal_set__MergeMode_k__BackingField)) ::System::Nullable_1<::UnityEngine::AddressableAssets::Addressables_MergeMode>
      _MergeMode_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField)) ::System::Type* _Type_k__BackingField;

  /// @brief Field m_Addressables, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Addressables, put = __cordl_internal_set_m_Addressables)) ::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;

  /// @brief Method GetCSVString, addr 0x44ec758, size 0x3dc, virtual false, abstract: false, final false
  inline ::StringW GetCSVString(::System::Collections::Generic::IEnumerable_1<::StringW>* enumerator, ::StringW prefixSingle, ::StringW prefixPlural);

  /// @brief Method GetMessageForSingleKey, addr 0x44ec6d4, size 0x84, virtual false, abstract: false, final false
  inline ::StringW GetMessageForSingleKey(::StringW keyString);

  /// @brief Method GetMessageforMergeKeys, addr 0x44ecb34, size 0xfbc, virtual false, abstract: false, final false
  inline ::StringW GetMessageforMergeKeys(::System::Collections::Generic::List_1<::StringW>* keys);

  /// @brief Method GetMultipleAssignableTypesMessage, addr 0x44ee550, size 0x308, virtual false, abstract: false, final false
  inline ::StringW GetMultipleAssignableTypesMessage(::StringW keyString, ::System::Collections::Generic::HashSet_1<::System::Type*>* typesAvailableForKey);

  /// @brief Method GetNotFoundMessage, addr 0x44ee208, size 0x64, virtual false, abstract: false, final false
  inline ::StringW GetNotFoundMessage(::StringW keyString);

  /// @brief Method GetTypeNotAssignableMessage, addr 0x44ee26c, size 0x2e4, virtual false, abstract: false, final false
  inline ::StringW GetTypeNotAssignableMessage(::StringW keyString, ::System::Collections::Generic::HashSet_1<::System::Type*>* typesAvailableForKey);

  /// @brief Method GetTypeToKeys, addr 0x44ee858, size 0x314, virtual false, abstract: false, final false
  inline bool GetTypeToKeys(::StringW key, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::StringW>*>* typeToKeys);

  /// @brief Method GetTypesForKey, addr 0x44edaf0, size 0x718, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::System::Type*>* GetTypesForKey(::StringW keyString);

  static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor();

  static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::System::Object* key);

  static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::System::Object* key, ::System::Type* type);

  static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::System::Object* key, ::System::Type* type, ::UnityEngine::AddressableAssets::AddressablesImpl* addr);

  static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::System::Object* key, ::System::Type* type, ::UnityEngine::AddressableAssets::Addressables_MergeMode mergeMode);

  static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::System::Object* key, ::System::Type* type, ::UnityEngine::AddressableAssets::Addressables_MergeMode mergeMode,
                                                                                ::UnityEngine::AddressableAssets::AddressablesImpl* addr);

  static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::StringW message);

  static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::System::Runtime::Serialization::SerializationInfo* message,
                                                                                ::System::Runtime::Serialization::StreamingContext context);

  constexpr ::System::Object* const& __cordl_internal_get__Key_k__BackingField() const;

  constexpr ::System::Object*& __cordl_internal_get__Key_k__BackingField();

  constexpr ::System::Nullable_1<::UnityEngine::AddressableAssets::Addressables_MergeMode> const& __cordl_internal_get__MergeMode_k__BackingField() const;

  constexpr ::System::Nullable_1<::UnityEngine::AddressableAssets::Addressables_MergeMode>& __cordl_internal_get__MergeMode_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField();

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& __cordl_internal_get_m_Addressables() const;

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get_m_Addressables();

  constexpr void __cordl_internal_set__Key_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set__MergeMode_k__BackingField(::System::Nullable_1<::UnityEngine::AddressableAssets::Addressables_MergeMode> value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  /// @brief Method .ctor, addr 0x44ebe1c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x44ebb3c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* key);

  /// @brief Method .ctor, addr 0x44ebbc8, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* key, ::System::Type* type);

  /// @brief Method .ctor, addr 0x44ebc38, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* key, ::System::Type* type, ::UnityEngine::AddressableAssets::AddressablesImpl* addr);

  /// @brief Method .ctor, addr 0x44ebcb8, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* key, ::System::Type* type, ::UnityEngine::AddressableAssets::Addressables_MergeMode mergeMode);

  /// @brief Method .ctor, addr 0x44ebd64, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* key, ::System::Type* type, ::UnityEngine::AddressableAssets::Addressables_MergeMode mergeMode, ::UnityEngine::AddressableAssets::AddressablesImpl* addr);

  /// @brief Method .ctor, addr 0x44ebe74, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x44ebedc, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x44ebf4c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* message, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Key, addr 0x44ebb14, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Key();

  /// @brief Method get_MergeMode, addr 0x44ebb34, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::AddressableAssets::Addressables_MergeMode> get_MergeMode();

  /// @brief Method get_Message, addr 0x44ebfcc, size 0x708, virtual true, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method get_Type, addr 0x44ebb24, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_Type();

  /// @brief Method set_Key, addr 0x44ebb1c, size 0x8, virtual false, abstract: false, final false
  inline void set_Key(::System::Object* value);

  /// @brief Method set_Type, addr 0x44ebb2c, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvalidKeyException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvalidKeyException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvalidKeyException(InvalidKeyException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvalidKeyException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvalidKeyException(InvalidKeyException const&) = delete;

  /// @brief Field BaseInvalidKeyMessageFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString BaseInvalidKeyMessageFormat{ u"{0}, Key={1}, Type={2}" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16147 };

  /// @brief Field <Key>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::System::Object* ____Key_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  /// @brief Field <MergeMode>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::System::Nullable_1<::UnityEngine::AddressableAssets::Addressables_MergeMode> ____MergeMode_k__BackingField;

  /// @brief Field m_Addressables, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* ___m_Addressables;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::InvalidKeyException, ____Key_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::InvalidKeyException, ____Type_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::InvalidKeyException, ____MergeMode_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::InvalidKeyException, ___m_Addressables) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::InvalidKeyException, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::InvalidKeyException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::InvalidKeyException*, "UnityEngine.AddressableAssets", "InvalidKeyException");
