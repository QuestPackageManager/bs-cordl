#pragma once
// IWYU pragma private; include "AYellowpaper/SerializedCollections/SerializedDictionaryAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SerializedDictionaryAttribute)
// Forward declare root types
namespace AYellowpaper::SerializedCollections {
class SerializedDictionaryAttribute;
}
// Write type traits
MARK_REF_PTR_T(::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute);
// Dependencies System.Attribute
namespace AYellowpaper::SerializedCollections {
// Is value type: false
// CS Name: AYellowpaper.SerializedCollections.SerializedDictionaryAttribute
class CORDL_TYPE SerializedDictionaryAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field KeyName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_KeyName, put = __cordl_internal_set_KeyName)) ::StringW KeyName;

  /// @brief Field ValueName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ValueName, put = __cordl_internal_set_ValueName)) ::StringW ValueName;

  static inline ::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute* New_ctor(::StringW keyName, ::StringW valueName);

  constexpr ::StringW const& __cordl_internal_get_KeyName() const;

  constexpr ::StringW& __cordl_internal_get_KeyName();

  constexpr ::StringW const& __cordl_internal_get_ValueName() const;

  constexpr ::StringW& __cordl_internal_get_ValueName();

  constexpr void __cordl_internal_set_KeyName(::StringW value);

  constexpr void __cordl_internal_set_ValueName(::StringW value);

  /// @brief Method .ctor, addr 0x3190da4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW keyName, ::StringW valueName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializedDictionaryAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializedDictionaryAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializedDictionaryAttribute(SerializedDictionaryAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializedDictionaryAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializedDictionaryAttribute(SerializedDictionaryAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23013 };

  /// @brief Field KeyName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___KeyName;

  /// @brief Field ValueName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ValueName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute, ___KeyName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute, ___ValueName) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute, 0x20>, "Size mismatch!");

} // namespace AYellowpaper::SerializedCollections
NEED_NO_BOX(::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute);
DEFINE_IL2CPP_ARG_TYPE(::AYellowpaper::SerializedCollections::SerializedDictionaryAttribute*, "AYellowpaper.SerializedCollections", "SerializedDictionaryAttribute");
