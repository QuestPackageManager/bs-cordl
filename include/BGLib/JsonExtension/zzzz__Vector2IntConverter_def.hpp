#pragma once
// IWYU pragma private; include "BGLib/JsonExtension/Vector2IntConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_1_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
CORDL_MODULE_EXPORT(Vector2IntConverter)
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
struct Vector2Int;
}
// Forward declare root types
namespace BGLib::JsonExtension {
class Vector2IntConverter;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::JsonExtension::Vector2IntConverter);
// Dependencies Newtonsoft.Json.JsonConverter`1<T>, UnityEngine.Vector2Int
namespace BGLib::JsonExtension {
// Is value type: false
// CS Name: BGLib.JsonExtension.Vector2IntConverter
class CORDL_TYPE Vector2IntConverter : public ::Newtonsoft::Json::JsonConverter_1<::UnityEngine::Vector2Int> {
public:
  // Declarations
  static inline ::BGLib::JsonExtension::Vector2IntConverter* New_ctor();

  /// @brief Method ReadJson, addr 0x22aa8c4, size 0xa0, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2Int ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::UnityEngine::Vector2Int existingValue, bool hasExistingValue,
                                            ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson, addr 0x22aa964, size 0xf0, virtual true, abstract: false, final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::UnityEngine::Vector2Int value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method .ctor, addr 0x22aaa54, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2IntConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2IntConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2IntConverter(Vector2IntConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2IntConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2IntConverter(Vector2IntConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19036 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::JsonExtension::Vector2IntConverter, 0x10>, "Size mismatch!");

} // namespace BGLib::JsonExtension
NEED_NO_BOX(::BGLib::JsonExtension::Vector2IntConverter);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::JsonExtension::Vector2IntConverter*, "BGLib.JsonExtension", "Vector2IntConverter");
