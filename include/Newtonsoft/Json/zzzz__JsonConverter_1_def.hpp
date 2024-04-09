#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(JsonConverter_1)
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
template <typename T> class JsonConverter_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::JsonConverter_1);
// Type: Newtonsoft.Json::JsonConverter`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Newtonsoft.Json::JsonConverter`1<T>*
class CORDL_TYPE JsonConverter_1 : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Method CanConvert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool CanConvert(::System::Type* objectType);

  static inline ::Newtonsoft::Json::JsonConverter_1<T>* New_ctor();

  /// @brief Method ReadJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method ReadJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, T existingValue, bool hasExistingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, T value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonConverter_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonConverter_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonConverter_1(JsonConverter_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonConverter_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonConverter_1(JsonConverter_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::JsonConverter_1, "Newtonsoft.Json", "JsonConverter`1");
