#pragma once
// IWYU pragma private; include "BGLib/JsonExtension/Vector2Converter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(Vector2Converter)
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
class Type;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace BGLib::JsonExtension {
class Vector2Converter;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::JsonExtension::Vector2Converter);
// Dependencies Newtonsoft.Json.JsonConverter`1<T>, UnityEngine.Vector2
namespace BGLib::JsonExtension {
// Is value type: false
// CS Name: BGLib.JsonExtension.Vector2Converter
class CORDL_TYPE Vector2Converter : public ::Newtonsoft::Json::JsonConverter_1<::UnityEngine::Vector2> {
public:
  // Declarations
  static inline ::BGLib::JsonExtension::Vector2Converter* New_ctor();

  /// @brief Method ReadJson, addr 0x22a637c, size 0xa0, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::UnityEngine::Vector2 existingValue, bool hasExistingValue,
                                         ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x22a641c, size 0xf0, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::UnityEngine::Vector2 value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x22a650c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2Converter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2Converter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2Converter(Vector2Converter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2Converter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2Converter(Vector2Converter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19044 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::JsonExtension::Vector2Converter, 0x10>, "Size mismatch!");

} // namespace BGLib::JsonExtension
NEED_NO_BOX(::BGLib::JsonExtension::Vector2Converter);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::JsonExtension::Vector2Converter*, "BGLib.JsonExtension", "Vector2Converter");
