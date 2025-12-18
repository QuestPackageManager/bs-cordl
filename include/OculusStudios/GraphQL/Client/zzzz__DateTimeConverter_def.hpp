#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/DateTimeConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
CORDL_MODULE_EXPORT(DateTimeConverter)
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
namespace OculusStudios::GraphQL::Client {
class DateTimeConverter;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::DateTimeConverter);
// Dependencies Newtonsoft.Json.JsonConverter, System.DateTime
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.DateTimeConverter
class CORDL_TYPE DateTimeConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Field epoch, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_epoch, put = setStaticF_epoch)) ::System::DateTime epoch;

  /// @brief Method CanConvert, addr 0x5d7405c, size 0x8, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::OculusStudios::GraphQL::Client::DateTimeConverter* New_ctor();

  /// @brief Method ReadJson, addr 0x5d74064, size 0x12c, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x5d74190, size 0x1dc, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x5d7436c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::DateTime getStaticF_epoch();

  static inline void setStaticF_epoch(::System::DateTime value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTimeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeConverter(DateTimeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeConverter(DateTimeConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20164 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::DateTimeConverter, 0x10>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::DateTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::DateTimeConverter*, "OculusStudios.GraphQL.Client", "DateTimeConverter");
