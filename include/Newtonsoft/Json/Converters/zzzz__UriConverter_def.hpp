#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(UriConverter)
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
class UriConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::UriConverter);
// Type: Newtonsoft.Json.Converters::UriConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11728))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11941))
// CS Name: ::Newtonsoft.Json.Converters::UriConverter*
class CORDL_TYPE UriConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Method CanConvert, addr 0x26d98ec, size 0x84, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  /// @brief Method ReadJson, addr 0x26d9970, size 0x128, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x26d9a98, size 0x134, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  static inline ::Newtonsoft::Json::Converters::UriConverter* New_ctor();

  /// @brief Method .ctor, addr 0x26d9bcc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UriConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UriConverter(UriConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UriConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UriConverter(UriConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UriConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::UriConverter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::UriConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::UriConverter*, "Newtonsoft.Json.Converters", "UriConverter");
