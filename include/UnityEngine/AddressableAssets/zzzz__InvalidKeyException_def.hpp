#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/InvalidKeyException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__Addressables_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InvalidKeyException)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
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
namespace UnityEngine::AddressableAssets {
struct InvalidKeyException_Format;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
struct InvalidKeyException_Format;
}
namespace UnityEngine::AddressableAssets {
class InvalidKeyException;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AddressableAssets::InvalidKeyException_Format);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::InvalidKeyException);
// Dependencies
namespace UnityEngine::AddressableAssets {
// Is value type: true
// CS Name: UnityEngine.AddressableAssets.InvalidKeyException/Format
struct CORDL_TYPE InvalidKeyException_Format {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InvalidKeyException_Format_Unwrapped
  enum struct __InvalidKeyException_Format_Unwrapped : int32_t {
    __E_StandardMessage = static_cast<int32_t>(0x0),
    __E_NoMergeMode = static_cast<int32_t>(0x1),
    __E_MultipleTypesRequested = static_cast<int32_t>(0x2),
    __E_NoLocation = static_cast<int32_t>(0x3),
    __E_TypeMismatch = static_cast<int32_t>(0x4),
    __E_MultipleTypeMismatch = static_cast<int32_t>(0x5),
    __E_MergeModeBase = static_cast<int32_t>(0x6),
    __E_UnionAvailableForKeys = static_cast<int32_t>(0x7),
    __E_UnionAvailableForKeysWithoutOther = static_cast<int32_t>(0x8),
    __E_IntersectionAvailable = static_cast<int32_t>(0x9),
    __E_KeyAvailableAsType = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InvalidKeyException_Format_Unwrapped() const noexcept {
    return static_cast<__InvalidKeyException_Format_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InvalidKeyException_Format();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InvalidKeyException_Format(int32_t value__) noexcept;

  /// @brief Field IntersectionAvailable value: I32(9)
  static ::UnityEngine::AddressableAssets::InvalidKeyException_Format const IntersectionAvailable;

  /// @brief Field KeyAvailableAsType value: I32(10)
  static ::UnityEngine::AddressableAssets::InvalidKeyException_Format const KeyAvailableAsType;

  /// @brief Field MergeModeBase value: I32(6)
  static ::UnityEngine::AddressableAssets::InvalidKeyException_Format const MergeModeBase;

  /// @brief Field MultipleTypeMismatch value: I32(5)
  static ::UnityEngine::AddressableAssets::InvalidKeyException_Format const MultipleTypeMismatch;

  /// @brief Field MultipleTypesRequested value: I32(2)
  static ::UnityEngine::AddressableAssets::InvalidKeyException_Format const MultipleTypesRequested;

  /// @brief Field NoLocation value: I32(3)
  static ::UnityEngine::AddressableAssets::InvalidKeyException_Format const NoLocation;

  /// @brief Field NoMergeMode value: I32(1)
  static ::UnityEngine::AddressableAssets::InvalidKeyException_Format const NoMergeMode;

  /// @brief Field StandardMessage value: I32(0)
  static ::UnityEngine::AddressableAssets::InvalidKeyException_Format const StandardMessage;

  /// @brief Field TypeMismatch value: I32(4)
  static ::UnityEngine::AddressableAssets::InvalidKeyException_Format const TypeMismatch;

  /// @brief Field UnionAvailableForKeys value: I32(7)
  static ::UnityEngine::AddressableAssets::InvalidKeyException_Format const UnionAvailableForKeys;

  /// @brief Field UnionAvailableForKeysWithoutOther value: I32(8)
  static ::UnityEngine::AddressableAssets::InvalidKeyException_Format const UnionAvailableForKeysWithoutOther;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19497 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::InvalidKeyException_Format, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::InvalidKeyException_Format, 0x4>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
// Dependencies System.Exception, System.Nullable`1<T>, UnityEngine.AddressableAssets.Addressables::MergeMode
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.InvalidKeyException
class CORDL_TYPE InvalidKeyException : public ::System::Exception {
public:
  // Declarations
  using Format = ::UnityEngine::AddressableAssets::InvalidKeyException_Format;

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

  /// @brief Method FormatMergeModeMessage, addr 0x6296048, size 0x48c, virtual false, abstract: false, final false
  inline ::StringW FormatMergeModeMessage(::UnityEngine::AddressableAssets::InvalidKeyException_Format format, ::StringW keysAvailable, ::StringW keysUnavailable, ::StringW typeString);

  /// @brief Method FormatMessage, addr 0x6295874, size 0x7d4, virtual false, abstract: false, final false
  inline ::StringW FormatMessage(::UnityEngine::AddressableAssets::InvalidKeyException_Format format, ::StringW foundWithTypeString);

  /// @brief Method FormatMultipleAssignableTypesMessage, addr 0x6298524, size 0x1fc, virtual false, abstract: false, final false
  inline ::StringW FormatMultipleAssignableTypesMessage(::StringW keyString, ::System::Collections::Generic::HashSet_1<::System::Type*>* typesAvailableForKey);

  /// @brief Method FormatNotFoundMessage, addr 0x62983d4, size 0xc, virtual false, abstract: false, final false
  inline ::StringW FormatNotFoundMessage(::StringW keyString);

  /// @brief Method FormatTypeNotAssignableMessage, addr 0x62983e0, size 0x144, virtual false, abstract: false, final false
  inline ::StringW FormatTypeNotAssignableMessage(::StringW keyString, ::System::Collections::Generic::HashSet_1<::System::Type*>* typesAvailableForKey);

  /// @brief Method GetCSVString, addr 0x6296cf8, size 0x414, virtual false, abstract: false, final false
  static inline ::StringW GetCSVString(::System::Collections::IEnumerable* enumerator, ::StringW prefixSingle, ::StringW prefixPlural);

  /// @brief Method GetKeyString, addr 0x62964d4, size 0xec, virtual false, abstract: false, final false
  inline ::StringW GetKeyString();

  /// @brief Method GetMessageForSingleKey, addr 0x6296c58, size 0xa0, virtual false, abstract: false, final false
  inline ::StringW GetMessageForSingleKey(::StringW keyString);

  /// @brief Method GetMessageforMergeKeys, addr 0x629710c, size 0xbf8, virtual false, abstract: false, final false
  inline ::StringW GetMessageforMergeKeys(::System::Collections::Generic::List_1<::StringW>* keys);

  /// @brief Method GetTypeToKeys, addr 0x6298720, size 0x2f0, virtual false, abstract: false, final false
  inline bool GetTypeToKeys(::StringW key, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::StringW>*>* typeToKeys);

  /// @brief Method GetTypesForKey, addr 0x6297d04, size 0x6d0, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x62956b8, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6295438, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* key);

  /// @brief Method .ctor, addr 0x629548c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* key, ::System::Type* type);

  /// @brief Method .ctor, addr 0x62954fc, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* key, ::System::Type* type, ::UnityEngine::AddressableAssets::AddressablesImpl* addr);

  /// @brief Method .ctor, addr 0x629557c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* key, ::System::Type* type, ::UnityEngine::AddressableAssets::Addressables_MergeMode mergeMode);

  /// @brief Method .ctor, addr 0x6295618, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* key, ::System::Type* type, ::UnityEngine::AddressableAssets::Addressables_MergeMode mergeMode, ::UnityEngine::AddressableAssets::AddressablesImpl* addr);

  /// @brief Method .ctor, addr 0x6295710, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x629577c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x62957f0, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* message, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Key, addr 0x6295410, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Key();

  /// @brief Method get_MergeMode, addr 0x6295430, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::AddressableAssets::Addressables_MergeMode> get_MergeMode();

  /// @brief Method get_Message, addr 0x62965c0, size 0x698, virtual true, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method get_Type, addr 0x6295420, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_Type();

  /// @brief Method set_Key, addr 0x6295418, size 0x8, virtual false, abstract: false, final false
  inline void set_Key(::System::Object* value);

  /// @brief Method set_Type, addr 0x6295428, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field IntersectionAvailableMessageFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString IntersectionAvailableMessageFormat{ u"\nAn Intersection exists for Type={0}" };

  /// @brief Field KeyAvailableAsTypeMessageFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString KeyAvailableAsTypeMessageFormat{ u"\nType={0} exists for {1}" };

  /// @brief Field MergeModeBaseMessageFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString MergeModeBaseMessageFormat{ u"{0} No {1} of Assets between {2} with Type={3}" };

  /// @brief Field MergeModeNoLocationMessageFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString MergeModeNoLocationMessageFormat{ u"\nNo Location found for Key={0}" };

  /// @brief Field MultipleTypeMismatchMessageFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString MultipleTypeMismatchMessageFormat{
    u"{0} No Asset found for Key={1} with Type={2}. Key exists as multiple Types={3}, which is not assignable from the requested Type={2}"
  };

  /// @brief Field MultipleTypesMessageFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString MultipleTypesMessageFormat{ u"{0} Enumerable key contains multiple Types. {1}, all Keys are expected to be strings" };

  /// @brief Field NoLocationMessageFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString NoLocationMessageFormat{ u"{0} No Location found for Key={1}" };

  /// @brief Field NoMergeModeMessageFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString NoMergeModeMessageFormat{ u"{0} No MergeMode is set to merge the multiple keys requested. {1}, Type={2}" };

  /// @brief Field TypeMismatchMessageFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString TypeMismatchMessageFormat{ u"{0} No Asset found for Key={1} with Type={2}. Key exists as Type={3}, which is not assignable from the requested Type={2}" };

  /// @brief Field UnionAvailableForKeysMessageFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString UnionAvailableForKeysMessageFormat{ u"\nUnion of Type={0} found with {1}" };

  /// @brief Field UnionAvailableForKeysWithoutOtherMessageFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString UnionAvailableForKeysWithoutOtherMessageFormat{ u"\nUnion of Type={0} found with {1}. Without {2}" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19498 };

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
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::InvalidKeyException_Format, "UnityEngine.AddressableAssets", "InvalidKeyException/Format");
NEED_NO_BOX(::UnityEngine::AddressableAssets::InvalidKeyException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::InvalidKeyException*, "UnityEngine.AddressableAssets", "InvalidKeyException");
