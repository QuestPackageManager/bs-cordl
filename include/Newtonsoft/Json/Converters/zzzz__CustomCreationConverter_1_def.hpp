#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(CustomCreationConverter_1)
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
namespace Newtonsoft::Json {
class JsonReader;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
template <typename T> class CustomCreationConverter_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Converters::CustomCreationConverter_1);
// Type: Newtonsoft.Json.Converters::CustomCreationConverter`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11758))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11959))
// CS Name: ::Newtonsoft.Json.Converters::CustomCreationConverter`1<T>*
class CORDL_TYPE CustomCreationConverter_1 : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  __declspec(property(get = get_CanWrite)) bool CanWrite;

  /// @brief Method WriteJson addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method ReadJson addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
  inline T Create(::System::Type* objectType);

  /// @brief Method CanConvert addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool CanConvert(::System::Type* objectType);

  /// @brief Method get_CanWrite addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_CanWrite();

  static inline ::Newtonsoft::Json::Converters::CustomCreationConverter_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CustomCreationConverter_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomCreationConverter_1(CustomCreationConverter_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomCreationConverter_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomCreationConverter_1(CustomCreationConverter_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomCreationConverter_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Converters
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Converters::CustomCreationConverter_1, "Newtonsoft.Json.Converters", "CustomCreationConverter`1");
