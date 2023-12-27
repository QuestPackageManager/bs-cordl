#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(ColorConverter)
namespace System {
class Type;
}
namespace Newtonsoft::Json {
class JsonWriter;
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
class ColorConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::ColorConverter);
// Type: Newtonsoft.Json.Converters::ColorConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11830))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12030))
// CS Name: ::Newtonsoft.Json.Converters::ColorConverter*
class CORDL_TYPE ColorConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  /// @brief Method WriteJson addr 0x26b3750 size 0x1d4 virtual true final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method CanConvert addr 0x26b3924 size 0xc8 virtual true final false
  inline bool CanConvert(::System::Type* objectType);

  /// @brief Method ReadJson addr 0x26b39ec size 0x2a8 virtual true final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method get_CanRead addr 0x26b3c94 size 0x8 virtual true final false
  inline bool get_CanRead();

  static inline ::Newtonsoft::Json::Converters::ColorConverter* New_ctor();

  /// @brief Method .ctor addr 0x26b3c9c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ColorConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorConverter(ColorConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorConverter(ColorConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::ColorConverter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::ColorConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::ColorConverter*, "Newtonsoft.Json.Converters", "ColorConverter");
