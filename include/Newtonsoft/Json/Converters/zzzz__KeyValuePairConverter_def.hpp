#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/KeyValuePairConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KeyValuePairConverter)
namespace Newtonsoft::Json::Utilities {
class ReflectionObject;
}
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue> class ThreadSafeStore_2;
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
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class KeyValuePairConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::KeyValuePairConverter);
// Dependencies Newtonsoft.Json.JsonConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: Newtonsoft.Json.Converters.KeyValuePairConverter
class CORDL_TYPE KeyValuePairConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Field ReflectionObjectPerType, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_ReflectionObjectPerType,
      put = setStaticF_ReflectionObjectPerType)) ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Utilities::ReflectionObject*>* ReflectionObjectPerType;

  /// @brief Method CanConvert, addr 0x5b87b68, size 0x114, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  /// @brief Method InitializeReflectionObject, addr 0x5b87180, size 0x268, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Utilities::ReflectionObject* InitializeReflectionObject(::System::Type* t);

  static inline ::Newtonsoft::Json::Converters::KeyValuePairConverter* New_ctor();

  /// @brief Method ReadJson, addr 0x5b87680, size 0x4e8, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x5b873e8, size 0x298, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x5b87c7c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Utilities::ReflectionObject*>* getStaticF_ReflectionObjectPerType();

  static inline void setStaticF_ReflectionObjectPerType(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Type*, ::Newtonsoft::Json::Utilities::ReflectionObject*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyValuePairConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyValuePairConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyValuePairConverter(KeyValuePairConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyValuePairConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyValuePairConverter(KeyValuePairConverter const&) = delete;

  /// @brief Field KeyName offset 0xffffffff size 0x8
  static constexpr ::ConstString KeyName{ u"Key" };

  /// @brief Field ValueName offset 0xffffffff size 0x8
  static constexpr ::ConstString ValueName{ u"Value" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13633 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::KeyValuePairConverter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::KeyValuePairConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::KeyValuePairConverter*, "Newtonsoft.Json.Converters", "KeyValuePairConverter");
