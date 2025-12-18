#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonSerializerInternalWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalBase_def.hpp"
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
class JsonDynamicContract;
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
namespace System::Dynamic {
class IDynamicMetaObjectProvider;
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
// Dependencies Newtonsoft.Json.Serialization.JsonSerializerInternalBase
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter
class CORDL_TYPE JsonSerializerInternalWriter : public ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase {
public:
  // Declarations
  /// @brief Field _rootLevel, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__rootLevel, put = __cordl_internal_set__rootLevel)) int32_t _rootLevel;

  /// @brief Field _rootType, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__rootType, put = __cordl_internal_set__rootType)) ::System::Type* _rootType;

  /// @brief Field _serializeStack, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__serializeStack, put = __cordl_internal_set__serializeStack)) ::System::Collections::Generic::List_1<::System::Object*>* _serializeStack;

  /// @brief Method CalculatePropertyValues, addr 0x5ba7b10, size 0x438, virtual false, abstract: false, final false
  inline bool CalculatePropertyValues(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonContainerContract* contract,
                                      ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonProperty* property,
                                      ::ByRef<::Newtonsoft::Json::Serialization::JsonContract*> memberContract, ::ByRef<::System::Object*> memberValue);

  /// @brief Method CheckForCircularReference, addr 0x5ba6bc8, size 0x4f0, virtual false, abstract: false, final false
  inline bool CheckForCircularReference(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonProperty* property,
                                        ::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                        ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method GetContract, addr 0x5ba3874, size 0xd0, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonContract* GetContract(::System::Object* value);

  /// @brief Method GetContractSafe, addr 0x5ba2c00, size 0x10, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonContract* GetContractSafe(::System::Object* value);

  /// @brief Method GetInternalSerializer, addr 0x5ba378c, size 0x68, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonSerializerProxy* GetInternalSerializer();

  /// @brief Method GetPropertyName, addr 0x5ba7f48, size 0x4f4, virtual false, abstract: false, final false
  inline ::StringW GetPropertyName(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* name, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::ByRef<bool> escape);

  /// @brief Method GetReference, addr 0x5ba70b8, size 0x1f4, virtual false, abstract: false, final false
  inline ::StringW GetReference(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value);

  /// @brief Method HandleError, addr 0x5ba3714, size 0x78, virtual false, abstract: false, final false
  inline void HandleError(::Newtonsoft::Json::JsonWriter* writer, int32_t initialDepth);

  /// @brief Method HasCreatorParameter, addr 0x5ba88fc, size 0xcc, virtual false, abstract: false, final false
  inline bool HasCreatorParameter(::Newtonsoft::Json::Serialization::JsonContainerContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* property);

  /// @brief Method HasFlag, addr 0x5ba6bbc, size 0xc, virtual false, abstract: false, final false
  inline bool HasFlag(::Newtonsoft::Json::DefaultValueHandling value, ::Newtonsoft::Json::DefaultValueHandling flag);

  /// @brief Method HasFlag, addr 0x5ba6ae0, size 0xc, virtual false, abstract: false, final false
  inline bool HasFlag(::Newtonsoft::Json::PreserveReferencesHandling value, ::Newtonsoft::Json::PreserveReferencesHandling flag);

  /// @brief Method HasFlag, addr 0x5ba8c28, size 0xc, virtual false, abstract: false, final false
  inline bool HasFlag(::Newtonsoft::Json::TypeNameHandling value, ::Newtonsoft::Json::TypeNameHandling flag);

  /// @brief Method IsSpecified, addr 0x5ba869c, size 0x260, virtual false, abstract: false, final false
  inline bool IsSpecified(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Serialization::JsonProperty* property, ::System::Object* target);

  static inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* New_ctor(::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method OnSerialized, addr 0x5ba77a0, size 0x218, virtual false, abstract: false, final false
  inline void OnSerialized(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* value);

  /// @brief Method OnSerializing, addr 0x5ba7588, size 0x218, virtual false, abstract: false, final false
  inline void OnSerializing(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* value);

  /// @brief Method ResolveIsReference, addr 0x5ba6a20, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> ResolveIsReference(::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* property,
                                                       ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                                                       ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method Serialize, addr 0x5ba2984, size 0x27c, virtual false, abstract: false, final false
  inline void Serialize(::Newtonsoft::Json::JsonWriter* jsonWriter, ::System::Object* value, ::System::Type* objectType);

  /// @brief Method SerializeConvertable, addr 0x5ba3f28, size 0x52c, virtual false, abstract: false, final false
  inline void SerializeConvertable(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::JsonConverter* converter, ::System::Object* value,
                                   ::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                                   ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method SerializeDictionary, addr 0x5ba5528, size 0x880, virtual false, abstract: false, final false
  inline void SerializeDictionary(::Newtonsoft::Json::JsonWriter* writer, ::System::Collections::IDictionary* values, ::Newtonsoft::Json::Serialization::JsonDictionaryContract* contract,
                                  ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                                  ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method SerializeDynamic, addr 0x5ba5da8, size 0x7d4, virtual false, abstract: false, final false
  inline void SerializeDynamic(::Newtonsoft::Json::JsonWriter* writer, ::System::Dynamic::IDynamicMetaObjectProvider* value, ::Newtonsoft::Json::Serialization::JsonDynamicContract* contract,
                               ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                               ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method SerializeISerializable, addr 0x5ba657c, size 0x4a4, virtual false, abstract: false, final false
  inline void SerializeISerializable(::Newtonsoft::Json::JsonWriter* writer, ::System::Runtime::Serialization::ISerializable* value,
                                     ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                     ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method SerializeList, addr 0x5ba4b9c, size 0x6f8, virtual false, abstract: false, final false
  inline void SerializeList(::Newtonsoft::Json::JsonWriter* writer, ::System::Collections::IEnumerable* values, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                            ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                            ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method SerializeMultidimensionalArray, addr 0x5ba5294, size 0x214, virtual false, abstract: false, final false
  inline void SerializeMultidimensionalArray(::Newtonsoft::Json::JsonWriter* writer, ::System::Array* values, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                             ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                                             ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method SerializeMultidimensionalArray, addr 0x5ba8ed4, size 0x388, virtual false, abstract: false, final false
  inline void SerializeMultidimensionalArray(::Newtonsoft::Json::JsonWriter* writer, ::System::Array* values, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                             ::Newtonsoft::Json::Serialization::JsonProperty* member, int32_t initialDepth, ::ArrayW<int32_t, ::Array<int32_t>*> indices);

  /// @brief Method SerializeObject, addr 0x5ba4454, size 0x748, virtual false, abstract: false, final false
  inline void SerializeObject(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract,
                              ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                              ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method SerializePrimitive, addr 0x5ba3944, size 0x17c, virtual false, abstract: false, final false
  inline void SerializePrimitive(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonPrimitiveContract* contract,
                                 ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                 ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method SerializeString, addr 0x5ba54a8, size 0x80, virtual false, abstract: false, final false
  inline void SerializeString(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonStringContract* contract);

  /// @brief Method SerializeValue, addr 0x5ba305c, size 0x6b8, virtual false, abstract: false, final false
  inline void SerializeValue(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonContract* valueContract,
                             ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                             ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method ShouldSerialize, addr 0x5ba843c, size 0x260, virtual false, abstract: false, final false
  inline bool ShouldSerialize(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Serialization::JsonProperty* property, ::System::Object* target);

  /// @brief Method ShouldWriteDynamicProperty, addr 0x5ba9340, size 0xc8, virtual false, abstract: false, final false
  inline bool ShouldWriteDynamicProperty(::System::Object* memberValue);

  /// @brief Method ShouldWriteProperty, addr 0x5ba6aec, size 0xd0, virtual false, abstract: false, final false
  inline bool ShouldWriteProperty(::System::Object* memberValue, ::Newtonsoft::Json::Serialization::JsonObjectContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* property);

  /// @brief Method ShouldWriteReference, addr 0x5ba2c10, size 0x1b4, virtual false, abstract: false, final false
  inline bool ShouldWriteReference(::System::Object* value, ::Newtonsoft::Json::Serialization::JsonProperty* property, ::Newtonsoft::Json::Serialization::JsonContract* valueContract,
                                   ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method ShouldWriteType, addr 0x5ba3ac0, size 0x1d0, virtual false, abstract: false, final false
  inline bool ShouldWriteType(::Newtonsoft::Json::TypeNameHandling typeNameHandlingFlag, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                              ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                              ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method TryConvertToString, addr 0x5ba72ac, size 0xf8, virtual false, abstract: false, final false
  static inline bool TryConvertToString(::System::Object* value, ::System::Type* type, ::ByRef<::StringW> s);

  /// @brief Method WriteObjectStart, addr 0x5ba79b8, size 0x158, virtual false, abstract: false, final false
  inline void WriteObjectStart(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                               ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                               ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method WriteReference, addr 0x5ba2dc4, size 0x298, virtual false, abstract: false, final false
  inline void WriteReference(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value);

  /// @brief Method WriteReferenceIdProperty, addr 0x5ba89c8, size 0x260, virtual false, abstract: false, final false
  inline void WriteReferenceIdProperty(::Newtonsoft::Json::JsonWriter* writer, ::System::Type* type, ::System::Object* value);

  /// @brief Method WriteStartArray, addr 0x5ba8c34, size 0x2a0, virtual false, abstract: false, final false
  inline bool WriteStartArray(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* values, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                              ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                              ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty);

  /// @brief Method WriteTypeProperty, addr 0x5ba3c90, size 0x298, virtual false, abstract: false, final false
  inline void WriteTypeProperty(::Newtonsoft::Json::JsonWriter* writer, ::System::Type* type);

  constexpr int32_t const& __cordl_internal_get__rootLevel() const;

  constexpr int32_t& __cordl_internal_get__rootLevel();

  constexpr ::System::Type* const& __cordl_internal_get__rootType() const;

  constexpr ::System::Type*& __cordl_internal_get__rootType();

  constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get__serializeStack() const;

  constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__serializeStack();

  constexpr void __cordl_internal_set__rootLevel(int32_t value);

  constexpr void __cordl_internal_set__rootType(::System::Type* value);

  constexpr void __cordl_internal_set__serializeStack(::System::Collections::Generic::List_1<::System::Object*>* value);

  /// @brief Method .ctor, addr 0x5ba28f8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::JsonSerializer* serializer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSerializerInternalWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSerializerInternalWriter(JsonSerializerInternalWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSerializerInternalWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSerializerInternalWriter(JsonSerializerInternalWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13495 };

  /// @brief Field _rootType, offset: 0x38, size: 0x8, def value: None
  ::System::Type* ____rootType;

  /// @brief Field _rootLevel, offset: 0x40, size: 0x4, def value: None
  int32_t ____rootLevel;

  /// @brief Field _serializeStack, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Object*>* ____serializeStack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter, ____rootType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter, ____rootLevel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter, ____serializeStack) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter, 0x50>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*, "Newtonsoft.Json.Serialization", "JsonSerializerInternalWriter");
