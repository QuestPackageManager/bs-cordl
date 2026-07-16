#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/JavaScriptDateTimeConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__DateTimeConverterBase_def.hpp"
CORDL_MODULE_EXPORT(JavaScriptDateTimeConverter)
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
class JavaScriptDateTimeConverter;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Converters::JavaScriptDateTimeConverter*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Converters::JavaScriptDateTimeConverter*, "Newtonsoft.Json.Converters", "JavaScriptDateTimeConverter");
// Dependencies Newtonsoft.Json.Converters.DateTimeConverterBase
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: Newtonsoft.Json.Converters.JavaScriptDateTimeConverter
class CORDL_TYPE JavaScriptDateTimeConverter : public ::Newtonsoft::Json::Converters::DateTimeConverterBase {
public:
  // Declarations
  static inline ::Newtonsoft::Json::Converters::JavaScriptDateTimeConverter* New_ctor();

  /// @brief Method ReadJson, addr 0x5d99bcc, size 0x324, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x5d999fc, size 0x1d0, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x5d99ef0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JavaScriptDateTimeConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JavaScriptDateTimeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JavaScriptDateTimeConverter(JavaScriptDateTimeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JavaScriptDateTimeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JavaScriptDateTimeConverter(JavaScriptDateTimeConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13636 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::Converters::JavaScriptDateTimeConverter) == 0x10, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
