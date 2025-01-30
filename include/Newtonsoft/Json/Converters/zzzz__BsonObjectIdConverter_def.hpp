#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/BsonObjectIdConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(BsonObjectIdConverter)
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
class BsonObjectIdConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::BsonObjectIdConverter);
// Dependencies Newtonsoft.Json.JsonConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: Newtonsoft.Json.Converters.BsonObjectIdConverter
class CORDL_TYPE BsonObjectIdConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Method CanConvert, addr 0x3f3cfa8, size 0x88, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::Newtonsoft::Json::Converters::BsonObjectIdConverter* New_ctor();

  /// @brief Method ReadJson, addr 0x3f3ce18, size 0x190, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x3f3cd18, size 0x100, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x3f3d030, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonObjectIdConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BsonObjectIdConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsonObjectIdConverter(BsonObjectIdConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsonObjectIdConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsonObjectIdConverter(BsonObjectIdConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10463 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::BsonObjectIdConverter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::BsonObjectIdConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::BsonObjectIdConverter*, "Newtonsoft.Json.Converters", "BsonObjectIdConverter");
