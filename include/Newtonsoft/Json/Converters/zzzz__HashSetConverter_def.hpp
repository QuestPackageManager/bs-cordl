#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(HashSetConverter)
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
class HashSetConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::HashSetConverter);
// Type: Newtonsoft.Json.Converters::HashSetConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11728))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11932))
// CS Name: ::Newtonsoft.Json.Converters::HashSetConverter*
class CORDL_TYPE HashSetConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  __declspec(property(get = get_CanWrite)) bool CanWrite;

  /// @brief Method WriteJson, addr 0x26d5fa8, size 0x4, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method ReadJson, addr 0x26d5fac, size 0x1f4, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method CanConvert, addr 0x26d61a0, size 0xb8, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  /// @brief Method get_CanWrite, addr 0x26d6258, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  static inline ::Newtonsoft::Json::Converters::HashSetConverter* New_ctor();

  /// @brief Method .ctor, addr 0x26d6260, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HashSetConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashSetConverter(HashSetConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashSetConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashSetConverter(HashSetConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashSetConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::HashSetConverter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::HashSetConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::HashSetConverter*, "Newtonsoft.Json.Converters", "HashSetConverter");
