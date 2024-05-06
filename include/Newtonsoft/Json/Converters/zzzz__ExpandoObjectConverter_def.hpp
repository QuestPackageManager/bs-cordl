#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::ExpandoObjectConverter);
// Type: Newtonsoft.Json.Converters::ExpandoObjectConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Converters::ExpandoObjectConverter*
class CORDL_TYPE ExpandoObjectConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  __declspec(property(get = get_CanWrite)) bool CanWrite;

  /// @brief Method CanConvert, addr 0x2a87314, size 0x88, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::Newtonsoft::Json::Converters::ExpandoObjectConverter* New_ctor();

  /// @brief Method ReadJson, addr 0x2a86e40, size 0x4, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method ReadList, addr 0x2a87180, size 0x194, virtual false, abstract: false, final false
  inline ::System::Object* ReadList(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method ReadObject, addr 0x2a86fb0, size 0x1d0, virtual false, abstract: false, final false
  inline ::System::Object* ReadObject(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method ReadValue, addr 0x2a86e44, size 0x16c, virtual false, abstract: false, final false
  inline ::System::Object* ReadValue(::Newtonsoft::Json::JsonReader* reader);

  /// @brief Method WriteJson, addr 0x2a86e3c, size 0x4, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x2a873a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CanWrite, addr 0x2a8739c, size 0x8, virtual true, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::ExpandoObjectConverter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::ExpandoObjectConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::ExpandoObjectConverter*, "Newtonsoft.Json.Converters", "ExpandoObjectConverter");
