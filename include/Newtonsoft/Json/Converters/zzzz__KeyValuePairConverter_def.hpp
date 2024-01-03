#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(KeyValuePairConverter)
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue> class ThreadSafeStore_2;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json::Utilities {
class ReflectionObject;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class KeyValuePairConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::KeyValuePairConverter);
// Type: Newtonsoft.Json.Converters::KeyValuePairConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11830))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12035))
// CS Name: ::Newtonsoft.Json.Converters::KeyValuePairConverter*
class CORDL_TYPE KeyValuePairConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Field ReflectionObjectPerType, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_ReflectionObjectPerType,
               put = setStaticF_ReflectionObjectPerType))::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Utilities::ReflectionObject*>* ReflectionObjectPerType;

  static inline void setStaticF_ReflectionObjectPerType(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Utilities::ReflectionObject*>* value);

  static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Utilities::ReflectionObject*>* getStaticF_ReflectionObjectPerType();

  /// @brief Method InitializeReflectionObject, addr 0x26b40ac, size 0x280, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::ReflectionObject* InitializeReflectionObject(::System::Type* t);

  /// @brief Method WriteJson, addr 0x26b432c, size 0x240, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method ReadJson, addr 0x26b456c, size 0x37c, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method CanConvert, addr 0x26b48e8, size 0x10c, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::Newtonsoft::Json::Converters::KeyValuePairConverter* New_ctor();

  /// @brief Method .ctor, addr 0x26b49f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "KeyValuePairConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyValuePairConverter(KeyValuePairConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyValuePairConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyValuePairConverter(KeyValuePairConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyValuePairConverter();

public:
  /// @brief Field KeyName offset 0xffffffff size 0x8
  static constexpr ::ConstString KeyName{ u"Key" };

  /// @brief Field ValueName offset 0xffffffff size 0x8
  static constexpr ::ConstString ValueName{ u"Value" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::KeyValuePairConverter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::KeyValuePairConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::KeyValuePairConverter*, "Newtonsoft.Json.Converters", "KeyValuePairConverter");
