#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/DataTableConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(DataTableConverter)
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System::Data {
class DataTable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class DataTableConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::DataTableConverter);
// Type: Newtonsoft.Json.Converters::DataTableConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Converters::DataTableConverter*
class CORDL_TYPE DataTableConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Method CanConvert, addr 0x2a84a18, size 0x94, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* valueType);

  /// @brief Method CreateRow, addr 0x2a842fc, size 0x54c, virtual false, abstract: false, final false
  static inline void CreateRow(::Newtonsoft::Json::JsonReader* reader, ::System::Data::DataTable* dt, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method GetColumnDataType, addr 0x2a84848, size 0x1d0, virtual false, abstract: false, final false
  static inline ::System::Type* GetColumnDataType(::Newtonsoft::Json::JsonReader* reader);

  static inline ::Newtonsoft::Json::Converters::DataTableConverter* New_ctor();

  /// @brief Method ReadJson, addr 0x2a83ff0, size 0x30c, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x2a837fc, size 0x7f4, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x2a83464, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataTableConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataTableConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataTableConverter(DataTableConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataTableConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataTableConverter(DataTableConverter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::DataTableConverter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::DataTableConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::DataTableConverter*, "Newtonsoft.Json.Converters", "DataTableConverter");
