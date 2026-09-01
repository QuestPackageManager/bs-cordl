#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Converters\ExpandoObjectConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(ExpandoObjectConverter)
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
class ExpandoObjectConverter;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Converters::ExpandoObjectConverter*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Converters::ExpandoObjectConverter*, "Newtonsoft.Json.Converters", "ExpandoObjectConverter");
// Dependencies Newtonsoft.Json.JsonConverter
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: Newtonsoft.Json.Converters.ExpandoObjectConverter
class CORDL_TYPE ExpandoObjectConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  __declspec(property(get = get_CanWrite)) bool CanWrite;

  /// @brief Method CanConvert, addr 0x5d9b3c8, size 0x70, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::Newtonsoft::Json::Converters::ExpandoObjectConverter* New_ctor();

  /// @brief Method ReadJson, addr 0x5d9aedc, size 0x4, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method ReadList, addr 0x5d9b228, size 0x1a0, virtual false, abstract: false, final false
  inline ::System::Object* ReadList(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method ReadObject, addr 0x5d9b050, size 0x1d8, virtual false, abstract: false, final false
  inline ::System::Object* ReadObject(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method ReadValue, addr 0x5d9aee0, size 0x170, virtual false, abstract: false, final false
  inline ::System::Object* ReadValue(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method WriteJson, addr 0x5d9aed8, size 0x4, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x5d9b440, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CanWrite, addr 0x5d9b438, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanWrite();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpandoObjectConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpandoObjectConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpandoObjectConverter(ExpandoObjectConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpandoObjectConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpandoObjectConverter(ExpandoObjectConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13661 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::Converters::ExpandoObjectConverter) == 0x10, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
