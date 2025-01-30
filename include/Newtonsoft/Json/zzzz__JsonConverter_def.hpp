#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JsonConverter)
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
namespace Newtonsoft::Json {
class JsonConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonConverter);
// Dependencies System.Object
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonConverter
class CORDL_TYPE JsonConverter : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  /// @brief Method CanConvert, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::Newtonsoft::Json::JsonConverter* New_ctor();

  /// @brief Method ReadJson, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x3e7d578, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CanRead, addr 0x3e7d568, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanWrite, addr 0x3e7d570, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanWrite();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonConverter(JsonConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonConverter(JsonConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10062 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonConverter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonConverter*, "Newtonsoft.Json", "JsonConverter");
