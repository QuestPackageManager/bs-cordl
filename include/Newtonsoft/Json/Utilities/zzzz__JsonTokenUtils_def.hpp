#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/JsonTokenUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JsonTokenUtils)
namespace Newtonsoft::Json {
struct JsonToken;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class JsonTokenUtils;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::JsonTokenUtils);
// Type: Newtonsoft.Json.Utilities::JsonTokenUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Utilities::JsonTokenUtils*
class CORDL_TYPE JsonTokenUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsEndToken, addr 0x2a36b00, size 0x10, virtual false, abstract: false, final false
  static inline bool IsEndToken(::Newtonsoft::Json::JsonToken token);

  /// @brief Method IsPrimitiveToken, addr 0x2a49a88, size 0x24, virtual false, abstract: false, final false
  static inline bool IsPrimitiveToken(::Newtonsoft::Json::JsonToken token);

  /// @brief Method IsStartToken, addr 0x2a49a78, size 0x10, virtual false, abstract: false, final false
  static inline bool IsStartToken(::Newtonsoft::Json::JsonToken token);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTokenUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonTokenUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonTokenUtils(JsonTokenUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonTokenUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonTokenUtils(JsonTokenUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::JsonTokenUtils, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::JsonTokenUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::JsonTokenUtils*, "Newtonsoft.Json.Utilities", "JsonTokenUtils");
