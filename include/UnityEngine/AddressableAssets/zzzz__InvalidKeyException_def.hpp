#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__Addressables_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidKeyException)
namespace System {
class Type;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::AddressableAssets {
struct __Addressables__MergeMode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class InvalidKeyException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::InvalidKeyException);
// Type: UnityEngine.AddressableAssets::InvalidKeyException
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2559)), TypeDefinitionIndex(TypeDefinitionIndex(14320)), TypeDefinitionIndex(TypeDefinitionIndex(2446)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2446), inst: 4664 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(14319)) CS Name:
// ::UnityEngine.AddressableAssets::InvalidKeyException*
class CORDL_TYPE InvalidKeyException : public ::System::Exception {
public:
  // Declarations
  /// @brief Field <Key>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __get__Key_k__BackingField, put = __set__Key_k__BackingField))::System::Object* _Key_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __get__Type_k__BackingField, put = __set__Type_k__BackingField))::System::Type* _Type_k__BackingField;

  /// @brief Field <MergeMode>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __get__MergeMode_k__BackingField,
                      put = __set__MergeMode_k__BackingField))::System::Nullable_1<::UnityEngine::AddressableAssets::__Addressables__MergeMode> _MergeMode_k__BackingField;

  /// @brief Field m_Addressables, offset 0xa8, size 0x8
  __declspec(property(get = __get_m_Addressables, put = __set_m_Addressables))::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;

  __declspec(property(get = get_Key, put = set_Key))::System::Object* Key;

  __declspec(property(get = get_Type, put = set_Type))::System::Type* Type;

  __declspec(property(get = get_MergeMode))::System::Nullable_1<::UnityEngine::AddressableAssets::__Addressables__MergeMode> MergeMode;

  __declspec(property(get = get_Message))::StringW Message;

  constexpr ::System::Object*& __get__Key_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__Key_k__BackingField() const;

  constexpr void __set__Key_k__BackingField(::System::Object* value);

  constexpr ::System::Type*& __get__Type_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__Type_k__BackingField() const;

  constexpr void __set__Type_k__BackingField(::System::Type* value);

  constexpr ::System::Nullable_1<::UnityEngine::AddressableAssets::__Addressables__MergeMode>& __get__MergeMode_k__BackingField();

  constexpr ::System::Nullable_1<::UnityEngine::AddressableAssets::__Addressables__MergeMode> const& __get__MergeMode_k__BackingField() const;

  constexpr void __set__MergeMode_k__BackingField(::System::Nullable_1<::UnityEngine::AddressableAssets::__Addressables__MergeMode> value);

  constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __get_m_Addressables();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AddressablesImpl*> const& __get_m_Addressables() const;

  constexpr void __set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl* value);

  /// @brief Method get_Key addr 0x289236c size 0x8 virtual false final false
  inline ::System::Object* get_Key();

  /// @brief Method set_Key addr 0x2892374 size 0x8 virtual false final false
  inline void set_Key(::System::Object* value);

  /// @brief Method get_Type addr 0x289237c size 0x8 virtual false final false
  inline ::System::Type* get_Type();

  /// @brief Method set_Type addr 0x2892384 size 0x8 virtual false final false
  inline void set_Type(::System::Type* value);

  /// @brief Method get_MergeMode addr 0x289238c size 0x8 virtual false final false
  inline ::System::Nullable_1<::UnityEngine::AddressableAssets::__Addressables__MergeMode> get_MergeMode();

  static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::System::Object* key);

  /// @brief Method .ctor addr 0x2892394 size 0x8c virtual false final false
  inline void _ctor(::System::Object* key);

  static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::System::Object* key, ::System::Type* type);

  /// @brief Method .ctor addr 0x2892420 size 0x70 virtual false final false
  inline void _ctor(::System::Object* key, ::System::Type* type);

  static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::System::Object* key, ::System::Type* type, ::UnityEngine::AddressableAssets::AddressablesImpl* addr);

  /// @brief Method .ctor addr 0x2892490 size 0x80 virtual false final false
  inline void _ctor(::System::Object* key, ::System::Type* type, ::UnityEngine::AddressableAssets::AddressablesImpl* addr);

  static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::System::Object* key, ::System::Type* type, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mergeMode);

  /// @brief Method .ctor addr 0x2892510 size 0xac virtual false final false
  inline void _ctor(::System::Object* key, ::System::Type* type, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mergeMode);

  static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::System::Object* key, ::System::Type* type, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mergeMode,
                                                                                ::UnityEngine::AddressableAssets::AddressablesImpl* addr);

  /// @brief Method .ctor addr 0x28925bc size 0xb8 virtual false final false
  inline void _ctor(::System::Object* key, ::System::Type* type, ::UnityEngine::AddressableAssets::__Addressables__MergeMode mergeMode, ::UnityEngine::AddressableAssets::AddressablesImpl* addr);

  static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor();

  /// @brief Method .ctor addr 0x2892674 size 0x58 virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x28926cc size 0x68 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor addr 0x2892734 size 0x70 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::System::Runtime::Serialization::SerializationInfo* message,
                                                                                ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x28927a4 size 0x80 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* message, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Message addr 0x2892824 size 0x6d8 virtual true final false
  inline ::StringW get_Message();

  /// @brief Method GetMessageForSingleKey addr 0x2892efc size 0x514 virtual false final false
  inline ::StringW GetMessageForSingleKey(::StringW keyString);

  /// @brief Method GetMessageforMergeKeys addr 0x28937dc size 0xfac virtual false final false
  inline ::StringW GetMessageforMergeKeys(::System::Collections::Generic::List_1<::StringW>* keys);

  /// @brief Method GetTypesForKey addr 0x2894788 size 0x714 virtual false final false
  inline ::System::Collections::Generic::HashSet_1<::System::Type*>* GetTypesForKey(::StringW keyString);

  /// @brief Method GetTypeToKeys addr 0x2894e9c size 0x320 virtual false final false
  inline bool GetTypeToKeys(::StringW key, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::StringW>*>* typeToKeys);

  /// @brief Method GetCSVString addr 0x2893410 size 0x3cc virtual false final false
  inline ::StringW GetCSVString(::System::Collections::Generic::IEnumerable_1<::StringW>* enumerator, ::StringW prefixSingle, ::StringW prefixPlural);

  // Ctor Parameters [CppParam { name: "", ty: "InvalidKeyException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvalidKeyException(InvalidKeyException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvalidKeyException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvalidKeyException(InvalidKeyException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvalidKeyException();

public:
  /// @brief Field <Key>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::System::Object* ____Key_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  /// @brief Field <MergeMode>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::System::Nullable_1<::UnityEngine::AddressableAssets::__Addressables__MergeMode> ____MergeMode_k__BackingField;

  /// @brief Field m_Addressables, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AddressablesImpl* ___m_Addressables;

  /// @brief Field BaseInvalidKeyMessageFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString BaseInvalidKeyMessageFormat{ u"{0}, Key={1}, Type={2}" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::InvalidKeyException, 0xb0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::InvalidKeyException, ____Key_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::InvalidKeyException, ____Type_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::InvalidKeyException, ____MergeMode_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::InvalidKeyException, ___m_Addressables) == 0xa8, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::InvalidKeyException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::InvalidKeyException*, "UnityEngine.AddressableAssets", "InvalidKeyException");
