#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonContainerAttribute_def.hpp"
#include "Newtonsoft/Json/zzzz__MemberSerialization_def.hpp"
#include "Newtonsoft/Json/zzzz__Required_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonObjectAttribute)
namespace Newtonsoft::Json {
struct MemberSerialization;
}
namespace Newtonsoft::Json {
struct Required;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonObjectAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonObjectAttribute);
// Type: Newtonsoft.Json::JsonObjectAttribute
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: ::Newtonsoft.Json::JsonObjectAttribute*
class CORDL_TYPE JsonObjectAttribute : public ::Newtonsoft::Json::JsonContainerAttribute {
public:
  // Declarations
  __declspec(property(get = get_ItemRequired, put = set_ItemRequired))::Newtonsoft::Json::Required ItemRequired;

  __declspec(property(get = get_MemberSerialization, put = set_MemberSerialization))::Newtonsoft::Json::MemberSerialization MemberSerialization;

  /// @brief Field _itemRequired, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__itemRequired, put = __cordl_internal_set__itemRequired))::System::Nullable_1<::Newtonsoft::Json::Required> _itemRequired;

  /// @brief Field _memberSerialization, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__memberSerialization, put = __cordl_internal_set__memberSerialization))::Newtonsoft::Json::MemberSerialization _memberSerialization;

  static inline ::Newtonsoft::Json::JsonObjectAttribute* New_ctor();

  static inline ::Newtonsoft::Json::JsonObjectAttribute* New_ctor(::StringW id);

  static inline ::Newtonsoft::Json::JsonObjectAttribute* New_ctor(::Newtonsoft::Json::MemberSerialization memberSerialization);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Required> const& __cordl_internal_get__itemRequired() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Required>& __cordl_internal_get__itemRequired();

  constexpr ::Newtonsoft::Json::MemberSerialization const& __cordl_internal_get__memberSerialization() const;

  constexpr ::Newtonsoft::Json::MemberSerialization& __cordl_internal_get__memberSerialization();

  constexpr void __cordl_internal_set__itemRequired(::System::Nullable_1<::Newtonsoft::Json::Required> value);

  constexpr void __cordl_internal_set__memberSerialization(::Newtonsoft::Json::MemberSerialization value);

  /// @brief Method .ctor, addr 0x2732de8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2732e18, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW id);

  /// @brief Method .ctor, addr 0x2732df0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::MemberSerialization memberSerialization);

  /// @brief Method get_ItemRequired, addr 0x2732d30, size 0x50, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Required get_ItemRequired();

  /// @brief Method get_MemberSerialization, addr 0x2732d20, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::MemberSerialization get_MemberSerialization();

  /// @brief Method set_ItemRequired, addr 0x2732d80, size 0x68, virtual false, abstract: false, final false
  inline void set_ItemRequired(::Newtonsoft::Json::Required value);

  /// @brief Method set_MemberSerialization, addr 0x2732d28, size 0x8, virtual false, abstract: false, final false
  inline void set_MemberSerialization(::Newtonsoft::Json::MemberSerialization value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonObjectAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonObjectAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonObjectAttribute(JsonObjectAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonObjectAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonObjectAttribute(JsonObjectAttribute const&) = delete;

  /// @brief Field _memberSerialization, offset: 0x4c, size: 0x4, def value: None
  ::Newtonsoft::Json::MemberSerialization ____memberSerialization;

  /// @brief Field _itemRequired, offset: 0x50, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::Required> ____itemRequired;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonObjectAttribute, 0x58>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonObjectAttribute, ____memberSerialization) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonObjectAttribute, ____itemRequired) == 0x50, "Offset mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonObjectAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonObjectAttribute*, "Newtonsoft.Json", "JsonObjectAttribute");
