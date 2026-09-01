#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Converters\RegexConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RegexConverter)
namespace Newtonsoft::Json::Bson {
class BsonWriter;
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
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class RegexConverter;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Converters::RegexConverter*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Converters::RegexConverter*, "Newtonsoft.Json.Converters", "RegexConverter");
// Dependencies Newtonsoft.Json.JsonConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: Newtonsoft.Json.Converters.RegexConverter
class CORDL_TYPE RegexConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Method CanConvert, addr 0x5d9d5ec, size 0x7c, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  /// @brief Method HasFlag, addr 0x5d9d174, size 0xc, virtual false, abstract: false, final false
  inline bool HasFlag(::System::Text::RegularExpressions::RegexOptions options, ::System::Text::RegularExpressions::RegexOptions flag);

  /// @brief Method IsRegex, addr 0x5d9d668, size 0x70, virtual false, abstract: false, final false
  inline bool IsRegex(::System::Type* objectType);

  static inline ::Newtonsoft::Json::Converters::RegexConverter* New_ctor();

  /// @brief Method ReadJson, addr 0x5d9d180, size 0xb0, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method ReadRegexObject, addr 0x5d9d230, size 0x274, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::Regex* ReadRegexObject(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method ReadRegexString, addr 0x5d9d4a4, size 0x148, virtual false, abstract: false, final false
  inline ::System::Object* ReadRegexString(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method WriteBson, addr 0x5d9ce1c, size 0x16c, virtual false, abstract: false, final false
  inline void WriteBson(::Newtonsoft::Json::Bson::BsonWriter* writer, ::System::Text::RegularExpressions::Regex* regex);

  /// @brief Method WriteJson, addr 0x5d9cf88, size 0x1ec, virtual false, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Text::RegularExpressions::Regex* regex, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x5d9ccfc, size 0x120, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x5d9d6d8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RegexConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RegexConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RegexConverter(RegexConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RegexConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RegexConverter(RegexConverter const&) = delete;

  /// @brief Field OptionsName offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionsName{ u"Options" };

  /// @brief Field PatternName offset 0xffffffff size 0x8
  static constexpr ::ConstString PatternName{ u"Pattern" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13665 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::Converters::RegexConverter) == 0x10, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
