#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalBase_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSerializerInternalWriter)
namespace Newtonsoft::Json::Serialization {
class JsonArrayContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonContainerContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonDictionaryContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonISerializableContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonObjectContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonPrimitiveContract;
}
namespace Newtonsoft::Json::Serialization {
class JsonProperty;
}
namespace Newtonsoft::Json::Serialization {
class JsonSerializerProxy;
}
namespace Newtonsoft::Json::Serialization {
class JsonStringContract;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
struct PreserveReferencesHandling;
}
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Array;
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
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonSerializerInternalWriter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter);
// Type: Newtonsoft.Json.Serialization::JsonSerializerInternalWriter
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11950))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11956))
// CS Name: ::Newtonsoft.Json.Serialization::JsonSerializerInternalWriter*
class CORDL_TYPE JsonSerializerInternalWriter : public ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase {
public:
  // Declarations
  /// @brief Field _rootType, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__rootType, put = __cordl_internal_set__rootType))::System::Type* _rootType;

  /// @brief Field _rootLevel, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__rootLevel, put = __cordl_internal_set__rootLevel)) int32_t _rootLevel;

  /// @brief Field _serializeStack, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__serializeStack, put = __cordl_internal_set__serializeStack))::System::Collections::Generic::List_1<::System::Object*>* _serializeStack;

  constexpr ::System::Type*& __cordl_internal_get__rootType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__rootType() const;

  constexpr void __cordl_internal_set__rootType(::System::Type* value);

  constexpr int32_t& __cordl_internal_get__rootLevel();

  constexpr int32_t const& __cordl_internal_get__rootLevel() const;

  constexpr void __cordl_internal_set__rootLevel(int32_t value);

  constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__serializeStack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& __cordl_internal_get__serializeStack() const;

  constexpr void __cordl_internal_set__serializeStack(::System::Collections::Generic::List_1<::System::Object*>* value);

  static inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* New_ctor(::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x26879bc, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method Serialize, addr 0x2687a48, size 0x260, virtual false, abstract: false, final false
  inline void Serialize(::Newtonsoft::Json::JsonWriter* jsonWriter, ::System::Object* value, ::System::Type* objectType);

  /// @brief Method GetInternalSerializer, addr 0x26887f0, size 0x6c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonSerializerProxy* GetInternalSerializer();

  /// @brief Method GetContractSafe, addr 0x2687ca8, size 0xd4, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonContract* GetContractSafe(::System::Object* value);

  /// @brief Method SerializePrimitive, addr 0x26888d8, size 0x168, virtual false, abstract: false, final false
  inline void SerializePrimitive(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonPrimitiveContract* contract,
                                 ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                 ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method SerializeValue, addr 0x2688198, size 0x5e0, virtual false, abstract: false, final false
  inline void SerializeValue(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonContract* valueContract,
                             ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                             ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method ResolveIsReference, addr 0x268b0dc, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> ResolveIsReference(::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* property,
                                                       ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                                                       ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method ShouldWriteReference, addr 0x2687d7c, size 0x198, virtual false, abstract: false, final false
  inline bool ShouldWriteReference(::System::Object* value, ::Newtonsoft::Json::Serialization::JsonProperty* property, ::Newtonsoft::Json::Serialization::JsonContract* valueContract,
                                   ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method ShouldWriteProperty, addr 0x268b198, size 0xf8, virtual false, abstract: false, final false
  inline bool ShouldWriteProperty(::System::Object* memberValue, ::Newtonsoft::Json::Serialization::JsonProperty* property);

  /// @brief Method CheckForCircularReference, addr 0x268b29c, size 0x55c, virtual false, abstract: false, final false
  inline bool CheckForCircularReference(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonProperty* property,
                                        ::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                        ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method WriteReference, addr 0x2687f14, size 0x284, virtual false, abstract: false, final false
  inline void WriteReference(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value);

  /// @brief Method GetReference, addr 0x268b7f8, size 0x1ec, virtual false, abstract: false, final false
  inline ::StringW GetReference(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value);

  /// @brief Method TryConvertToString, addr 0x268b9e4, size 0x1d4, virtual false, abstract: false, final false
  static inline bool TryConvertToString(::System::Object* value, ::System::Type* type, ByRef<::StringW> s);

  /// @brief Method SerializeString, addr 0x268a388, size 0x80, virtual false, abstract: false, final false
  inline void SerializeString(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonStringContract* contract);

  /// @brief Method OnSerializing, addr 0x268bbb8, size 0x208, virtual false, abstract: false, final false
  inline void OnSerializing(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* value);

  /// @brief Method OnSerialized, addr 0x268bdc0, size 0x208, virtual false, abstract: false, final false
  inline void OnSerialized(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* value);

  /// @brief Method SerializeObject, addr 0x26893b4, size 0x724, virtual false, abstract: false, final false
  inline void SerializeObject(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract,
                              ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                              ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method CalculatePropertyValues, addr 0x268c0fc, size 0x3f4, virtual false, abstract: false, final false
  inline bool CalculatePropertyValues(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonContainerContract* contract,
                                      ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonProperty* property,
                                      ByRef<::Newtonsoft::Json::Serialization::JsonContract*> memberContract, ByRef<::System::Object*> memberValue);

  /// @brief Method WriteObjectStart, addr 0x268bfc8, size 0x134, virtual false, abstract: false, final false
  inline void WriteObjectStart(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                               ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                               ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method WriteReferenceIdProperty, addr 0x268cd30, size 0x254, virtual false, abstract: false, final false
  inline void WriteReferenceIdProperty(::Newtonsoft::Json::JsonWriter* writer, ::System::Type* type, ::System::Object* value);

  /// @brief Method WriteTypeProperty, addr 0x2688c08, size 0x288, virtual false, abstract: false, final false
  inline void WriteTypeProperty(::Newtonsoft::Json::JsonWriter* writer, ::System::Type* type);

  /// @brief Method HasFlag, addr 0x268b290, size 0xc, virtual false, abstract: false, final false
  inline bool HasFlag(::Newtonsoft::Json::DefaultValueHandling value, ::Newtonsoft::Json::DefaultValueHandling flag);

  /// @brief Method HasFlag, addr 0x268b18c, size 0xc, virtual false, abstract: false, final false
  inline bool HasFlag(::Newtonsoft::Json::PreserveReferencesHandling value, ::Newtonsoft::Json::PreserveReferencesHandling flag);

  /// @brief Method HasFlag, addr 0x268cf84, size 0xc, virtual false, abstract: false, final false
  inline bool HasFlag(::Newtonsoft::Json::TypeNameHandling value, ::Newtonsoft::Json::TypeNameHandling flag);

  /// @brief Method SerializeConvertable, addr 0x2688e90, size 0x524, virtual false, abstract: false, final false
  inline void SerializeConvertable(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::JsonConverter* converter, ::System::Object* value,
                                   ::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                                   ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method SerializeList, addr 0x2689ad8, size 0x6f4, virtual false, abstract: false, final false
  inline void SerializeList(::Newtonsoft::Json::JsonWriter* writer, ::System::Collections::IEnumerable* values, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                            ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                            ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method SerializeMultidimensionalArray, addr 0x268a1cc, size 0x1bc, virtual false, abstract: false, final false
  inline void SerializeMultidimensionalArray(::Newtonsoft::Json::JsonWriter* writer, ::System::Array* values, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                             ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                                             ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method SerializeMultidimensionalArray, addr 0x268d22c, size 0x36c, virtual false, abstract: false, final false
  inline void SerializeMultidimensionalArray(::Newtonsoft::Json::JsonWriter* writer, ::System::Array* values, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                             ::Newtonsoft::Json::Serialization::JsonProperty* member, int32_t initialDepth, ::ArrayW<int32_t, ::Array<int32_t>*> indices);

  /// @brief Method WriteStartArray, addr 0x268cf90, size 0x29c, virtual false, abstract: false, final false
  inline bool WriteStartArray(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* values, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                              ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                              ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method SerializeISerializable, addr 0x268ac78, size 0x464, virtual false, abstract: false, final false
  inline void SerializeISerializable(::Newtonsoft::Json::JsonWriter* writer, ::System::Runtime::Serialization::ISerializable* value,
                                     ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                     ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method ShouldWriteDynamicProperty, addr 0x268d774, size 0xbc, virtual false, abstract: false, final false
  inline bool ShouldWriteDynamicProperty(::System::Object* memberValue);

  /// @brief Method ShouldWriteType, addr 0x2688a40, size 0x1c8, virtual false, abstract: false, final false
  inline bool ShouldWriteType(::Newtonsoft::Json::TypeNameHandling typeNameHandlingFlag, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                              ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                              ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method SerializeDictionary, addr 0x268a408, size 0x870, virtual false, abstract: false, final false
  inline void SerializeDictionary(::Newtonsoft::Json::JsonWriter* writer, ::System::Collections::IDictionary* values, ::Newtonsoft::Json::Serialization::JsonDictionaryContract* contract,
                                  ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                                  ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method GetPropertyName, addr 0x268c4f0, size 0x360, virtual false, abstract: false, final false
  inline ::StringW GetPropertyName(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* name, ::Newtonsoft::Json::Serialization::JsonContract* contract, ByRef<bool> escape);

  /// @brief Method HandleError, addr 0x2688778, size 0x78, virtual false, abstract: false, final false
  inline void HandleError(::Newtonsoft::Json::JsonWriter* writer, int32_t initialDepth);

  /// @brief Method ShouldSerialize, addr 0x268c850, size 0x270, virtual false, abstract: false, final false
  inline bool ShouldSerialize(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Serialization::JsonProperty* property, ::System::Object* target);

  /// @brief Method IsSpecified, addr 0x268cac0, size 0x270, virtual false, abstract: false, final false
  inline bool IsSpecified(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Serialization::JsonProperty* property, ::System::Object* target);

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSerializerInternalWriter(JsonSerializerInternalWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSerializerInternalWriter(JsonSerializerInternalWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSerializerInternalWriter();

public:
  /// @brief Field _rootType, offset: 0x38, size: 0x8, def value: None
  ::System::Type* ____rootType;

  /// @brief Field _rootLevel, offset: 0x40, size: 0x4, def value: None
  int32_t ____rootLevel;

  /// @brief Field _serializeStack, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Object*>* ____serializeStack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter, 0x50>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter, ____rootType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter, ____rootLevel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter, ____serializeStack) == 0x48, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalWriter");
