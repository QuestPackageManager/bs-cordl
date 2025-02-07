#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonIgnoreAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(JsonIgnoreAttribute)
// Forward declare root types
namespace Newtonsoft::Json {
class JsonIgnoreAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonIgnoreAttribute);
// Dependencies System.Attribute
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonIgnoreAttribute
class CORDL_TYPE JsonIgnoreAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Newtonsoft::Json::JsonIgnoreAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3e80914, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonIgnoreAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonIgnoreAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonIgnoreAttribute(JsonIgnoreAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonIgnoreAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonIgnoreAttribute(JsonIgnoreAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10070 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonIgnoreAttribute, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonIgnoreAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonIgnoreAttribute*, "Newtonsoft.Json", "JsonIgnoreAttribute");
