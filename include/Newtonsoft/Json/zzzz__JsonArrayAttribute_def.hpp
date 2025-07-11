#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonArrayAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonContainerAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonArrayAttribute)
// Forward declare root types
namespace Newtonsoft::Json {
class JsonArrayAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonArrayAttribute);
// Dependencies Newtonsoft.Json.JsonContainerAttribute
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: Newtonsoft.Json.JsonArrayAttribute
class CORDL_TYPE JsonArrayAttribute : public ::Newtonsoft::Json::JsonContainerAttribute {
public:
  // Declarations
  __declspec(property(get = get_AllowNullItems, put = set_AllowNullItems)) bool AllowNullItems;

  /// @brief Field _allowNullItems, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__allowNullItems, put = __cordl_internal_set__allowNullItems)) bool _allowNullItems;

  static inline ::Newtonsoft::Json::JsonArrayAttribute* New_ctor();

  static inline ::Newtonsoft::Json::JsonArrayAttribute* New_ctor(bool allowNullItems);

  static inline ::Newtonsoft::Json::JsonArrayAttribute* New_ctor(::StringW id);

  constexpr bool const& __cordl_internal_get__allowNullItems() const;

  constexpr bool& __cordl_internal_get__allowNullItems();

  constexpr void __cordl_internal_set__allowNullItems(bool value);

  /// @brief Method .ctor, addr 0x3e77954, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3e77964, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool allowNullItems);

  /// @brief Method .ctor, addr 0x3e7798c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW id);

  /// @brief Method get_AllowNullItems, addr 0x3e77940, size 0x8, virtual false, abstract: false, final false
  inline bool get_AllowNullItems();

  /// @brief Method set_AllowNullItems, addr 0x3e77948, size 0xc, virtual false, abstract: false, final false
  inline void set_AllowNullItems(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonArrayAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonArrayAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonArrayAttribute(JsonArrayAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonArrayAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonArrayAttribute(JsonArrayAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10060 };

  /// @brief Field _allowNullItems, offset: 0x68, size: 0x1, def value: None
  bool ____allowNullItems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonArrayAttribute, ____allowNullItems) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonArrayAttribute, 0x70>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonArrayAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonArrayAttribute*, "Newtonsoft.Json", "JsonArrayAttribute");
