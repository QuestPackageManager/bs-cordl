#pragma once
// IWYU pragma private; include "BGLib/JsonExtension/ColorConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(ColorConverter)
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
struct Color;
}
// Forward declare root types
namespace BGLib::JsonExtension {
class ColorConverter;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::JsonExtension::ColorConverter);
// Dependencies Newtonsoft.Json.JsonConverter`1<T>, UnityEngine.Color
namespace BGLib::JsonExtension {
// Is value type: false
// CS Name: BGLib.JsonExtension.ColorConverter
class CORDL_TYPE ColorConverter : public ::Newtonsoft::Json::JsonConverter_1<::UnityEngine::Color> {
public:
  // Declarations
  static inline ::BGLib::JsonExtension::ColorConverter* New_ctor();

  /// @brief Method ReadJson, addr 0x22aa474, size 0xa0, virtual true, abstract: false, final false
  inline ::UnityEngine::Color ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::UnityEngine::Color existingValue, bool hasExistingValue,
                                       ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x22aa514, size 0x190, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::UnityEngine::Color value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x22aa6a4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorConverter(ColorConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorConverter(ColorConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19034 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::JsonExtension::ColorConverter, 0x10>, "Size mismatch!");

} // namespace BGLib::JsonExtension
NEED_NO_BOX(::BGLib::JsonExtension::ColorConverter);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::JsonExtension::ColorConverter*, "BGLib.JsonExtension", "ColorConverter");
