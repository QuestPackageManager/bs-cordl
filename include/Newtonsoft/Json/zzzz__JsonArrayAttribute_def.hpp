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
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 77, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11743))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11742))
// CS Name: ::Newtonsoft.Json::JsonArrayAttribute*
class CORDL_TYPE JsonArrayAttribute : public ::Newtonsoft::Json::JsonContainerAttribute {
public:
  // Declarations
  /// @brief Field _allowNullItems, offset 0x4c, size 0x1
  __declspec(property(get = __get__allowNullItems, put = __set__allowNullItems)) bool _allowNullItems;

  __declspec(property(get = get_AllowNullItems, put = set_AllowNullItems)) bool AllowNullItems;

  constexpr bool& __get__allowNullItems();

  constexpr bool const& __get__allowNullItems() const;

  constexpr void __set__allowNullItems(bool value);

  /// @brief Method get_AllowNullItems addr 0x24dc86c size 0x8 virtual false final false
  inline bool get_AllowNullItems();

  /// @brief Method set_AllowNullItems addr 0x24dc874 size 0xc virtual false final false
  inline void set_AllowNullItems(bool value);

  static inline ::Newtonsoft::Json::JsonArrayAttribute* New_ctor();

  /// @brief Method .ctor addr 0x24dc880 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::JsonArrayAttribute* New_ctor(bool allowNullItems);

  /// @brief Method .ctor addr 0x24dc888 size 0x28 virtual false final false
  inline void _ctor(bool allowNullItems);

  static inline ::Newtonsoft::Json::JsonArrayAttribute* New_ctor(::StringW id);

  /// @brief Method .ctor addr 0x24dc8b0 size 0x28 virtual false final false
  inline void _ctor(::StringW id);

  // Ctor Parameters [CppParam { name: "", ty: "JsonArrayAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonArrayAttribute(JsonArrayAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonArrayAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonArrayAttribute(JsonArrayAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonArrayAttribute();

public:
  /// @brief Field _allowNullItems, offset: 0x4c, size: 0x1, def value: None
  bool ____allowNullItems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonArrayAttribute, 0x50>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonArrayAttribute, ____allowNullItems) == 0x4c, "Offset mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonArrayAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonArrayAttribute*, "Newtonsoft.Json", "JsonArrayAttribute");
