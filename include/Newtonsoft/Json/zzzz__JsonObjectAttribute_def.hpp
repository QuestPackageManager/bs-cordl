#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonObjectAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonContainerAttribute_def.hpp"
#include "Newtonsoft/Json/zzzz__MemberSerialization_def.hpp"
#include "Newtonsoft/Json/zzzz__MissingMemberHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__NullValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Required_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonObjectAttribute)
namespace Newtonsoft::Json {
struct MemberSerialization;
}
namespace Newtonsoft::Json {
struct MissingMemberHandling;
}
namespace Newtonsoft::Json {
struct NullValueHandling;
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
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 132, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: ::Newtonsoft.Json::JsonObjectAttribute*
class CORDL_TYPE JsonObjectAttribute : public ::Newtonsoft::Json::JsonContainerAttribute {
public:
  // Declarations
  __declspec(property(get = get_ItemNullValueHandling, put = set_ItemNullValueHandling)) ::Newtonsoft::Json::NullValueHandling ItemNullValueHandling;

  __declspec(property(get = get_ItemRequired, put = set_ItemRequired)) ::Newtonsoft::Json::Required ItemRequired;

  __declspec(property(get = get_MemberSerialization, put = set_MemberSerialization)) ::Newtonsoft::Json::MemberSerialization MemberSerialization;

  __declspec(property(get = get_MissingMemberHandling, put = set_MissingMemberHandling)) ::Newtonsoft::Json::MissingMemberHandling MissingMemberHandling;

  /// @brief Field _itemNullValueHandling, offset 0x7c, size 0x8
  __declspec(property(get = __cordl_internal_get__itemNullValueHandling, put = __cordl_internal_set__itemNullValueHandling)) ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>
      _itemNullValueHandling;

  /// @brief Field _itemRequired, offset 0x74, size 0x8
  __declspec(property(get = __cordl_internal_get__itemRequired, put = __cordl_internal_set__itemRequired)) ::System::Nullable_1<::Newtonsoft::Json::Required> _itemRequired;

  /// @brief Field _memberSerialization, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__memberSerialization, put = __cordl_internal_set__memberSerialization)) ::Newtonsoft::Json::MemberSerialization _memberSerialization;

  /// @brief Field _missingMemberHandling, offset 0x6c, size 0x8
  __declspec(property(get = __cordl_internal_get__missingMemberHandling, put = __cordl_internal_set__missingMemberHandling)) ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling>
      _missingMemberHandling;

  static inline ::Newtonsoft::Json::JsonObjectAttribute* New_ctor();

  static inline ::Newtonsoft::Json::JsonObjectAttribute* New_ctor(::StringW id);

  static inline ::Newtonsoft::Json::JsonObjectAttribute* New_ctor(::Newtonsoft::Json::MemberSerialization memberSerialization);

  constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> const& __cordl_internal_get__itemNullValueHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>& __cordl_internal_get__itemNullValueHandling();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Required> const& __cordl_internal_get__itemRequired() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::Required>& __cordl_internal_get__itemRequired();

  constexpr ::Newtonsoft::Json::MemberSerialization const& __cordl_internal_get__memberSerialization() const;

  constexpr ::Newtonsoft::Json::MemberSerialization& __cordl_internal_get__memberSerialization();

  constexpr ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> const& __cordl_internal_get__missingMemberHandling() const;

  constexpr ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling>& __cordl_internal_get__missingMemberHandling();

  constexpr void __cordl_internal_set__itemNullValueHandling(::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> value);

  constexpr void __cordl_internal_set__itemRequired(::System::Nullable_1<::Newtonsoft::Json::Required> value);

  constexpr void __cordl_internal_set__memberSerialization(::Newtonsoft::Json::MemberSerialization value);

  constexpr void __cordl_internal_set__missingMemberHandling(::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> value);

  /// @brief Method .ctor, addr 0x3e1abb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3e1abe0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW id);

  /// @brief Method .ctor, addr 0x3e1abb8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::MemberSerialization memberSerialization);

  /// @brief Method get_ItemNullValueHandling, addr 0x3e1aa68, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::NullValueHandling get_ItemNullValueHandling();

  /// @brief Method get_ItemRequired, addr 0x3e1ab0c, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Required get_ItemRequired();

  /// @brief Method get_MemberSerialization, addr 0x3e1a9b4, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::MemberSerialization get_MemberSerialization();

  /// @brief Method get_MissingMemberHandling, addr 0x3e1a9c4, size 0x3c, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::MissingMemberHandling get_MissingMemberHandling();

  /// @brief Method set_ItemNullValueHandling, addr 0x3e1aaa4, size 0x68, virtual false, abstract: false, final false
  inline void set_ItemNullValueHandling(::Newtonsoft::Json::NullValueHandling value);

  /// @brief Method set_ItemRequired, addr 0x3e1ab48, size 0x68, virtual false, abstract: false, final false
  inline void set_ItemRequired(::Newtonsoft::Json::Required value);

  /// @brief Method set_MemberSerialization, addr 0x3e1a9bc, size 0x8, virtual false, abstract: false, final false
  inline void set_MemberSerialization(::Newtonsoft::Json::MemberSerialization value);

  /// @brief Method set_MissingMemberHandling, addr 0x3e1aa00, size 0x68, virtual false, abstract: false, final false
  inline void set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling value);

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

  /// @brief Field _memberSerialization, offset: 0x68, size: 0x4, def value: None
  ::Newtonsoft::Json::MemberSerialization ____memberSerialization;

  /// @brief Field _missingMemberHandling, offset: 0x6c, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> ____missingMemberHandling;

  /// @brief Field _itemRequired, offset: 0x74, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::Required> ____itemRequired;

  /// @brief Field _itemNullValueHandling, offset: 0x7c, size: 0x8, def value: None
  ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> ____itemNullValueHandling;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10043 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonObjectAttribute, 0x88>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonObjectAttribute, ____memberSerialization) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonObjectAttribute, ____missingMemberHandling) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonObjectAttribute, ____itemRequired) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonObjectAttribute, ____itemNullValueHandling) == 0x7c, "Offset mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonObjectAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonObjectAttribute*, "Newtonsoft.Json", "JsonObjectAttribute");
