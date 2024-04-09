#pragma once
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
// Type: Newtonsoft.Json::JsonArrayAttribute
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 105, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: ::Newtonsoft.Json::JsonArrayAttribute*
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

  /// @brief Method .ctor, addr 0x28bf9b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x28bf9c4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool allowNullItems);

  /// @brief Method .ctor, addr 0x28bf9ec, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW id);

  /// @brief Method get_AllowNullItems, addr 0x28bf9a0, size 0x8, virtual false, abstract: false, final false
  inline bool get_AllowNullItems();

  /// @brief Method set_AllowNullItems, addr 0x28bf9a8, size 0xc, virtual false, abstract: false, final false
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

  /// @brief Field _allowNullItems, offset: 0x68, size: 0x1, def value: None
  bool ____allowNullItems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonArrayAttribute, 0x70>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonArrayAttribute, ____allowNullItems) == 0x68, "Offset mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonArrayAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonArrayAttribute*, "Newtonsoft.Json", "JsonArrayAttribute");
