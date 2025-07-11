#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonDictionaryAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonContainerAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonDictionaryAttribute)
// Forward declare root types
namespace Newtonsoft::Json {
class JsonDictionaryAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonDictionaryAttribute);
// Dependencies Newtonsoft.Json.JsonContainerAttribute
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonDictionaryAttribute
class CORDL_TYPE JsonDictionaryAttribute : public ::Newtonsoft::Json::JsonContainerAttribute {
public:
  // Declarations
  static inline ::Newtonsoft::Json::JsonDictionaryAttribute* New_ctor();

  static inline ::Newtonsoft::Json::JsonDictionaryAttribute* New_ctor(::StringW id);

  /// @brief Method .ctor, addr 0x3e7b96c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3e7b974, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW id);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonDictionaryAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonDictionaryAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonDictionaryAttribute(JsonDictionaryAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonDictionaryAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonDictionaryAttribute(JsonDictionaryAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10068 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonDictionaryAttribute, 0x68>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonDictionaryAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonDictionaryAttribute*, "Newtonsoft.Json", "JsonDictionaryAttribute");
