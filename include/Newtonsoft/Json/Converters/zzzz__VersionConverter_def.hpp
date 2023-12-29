#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(VersionConverter)
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class VersionConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::VersionConverter);
// Type: Newtonsoft.Json.Converters::VersionConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11758))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11973))
// CS Name: ::Newtonsoft.Json.Converters::VersionConverter*
class CORDL_TYPE VersionConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Method WriteJson addr 0x2553e70 size 0xec virtual true final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method ReadJson addr 0x2553f5c size 0x28c virtual true final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method CanConvert addr 0x25541e8 size 0x84 virtual true final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::Newtonsoft::Json::Converters::VersionConverter* New_ctor();

  /// @brief Method .ctor addr 0x255426c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VersionConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VersionConverter(VersionConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VersionConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VersionConverter(VersionConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VersionConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::VersionConverter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::VersionConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::VersionConverter*, "Newtonsoft.Json.Converters", "VersionConverter");
