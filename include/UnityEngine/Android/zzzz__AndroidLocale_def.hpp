#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidLocale.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AndroidLocale)
// Forward declare root types
namespace UnityEngine::Android {
class AndroidLocale;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Android::AndroidLocale);
// Dependencies System.Object
namespace UnityEngine::Android {
// Is value type: false
// CS Name: UnityEngine.Android.AndroidLocale
class CORDL_TYPE AndroidLocale : public ::System::Object {
public:
  // Declarations
  /// @brief Field <country>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__country_k__BackingField, put = __cordl_internal_set__country_k__BackingField)) ::StringW _country_k__BackingField;

  /// @brief Field <language>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__language_k__BackingField, put = __cordl_internal_set__language_k__BackingField)) ::StringW _language_k__BackingField;

  __declspec(property(get = get_country)) ::StringW country;

  __declspec(property(get = get_language)) ::StringW language;

  static inline ::UnityEngine::Android::AndroidLocale* New_ctor(::StringW _country, ::StringW _language);

  constexpr ::StringW const& __cordl_internal_get__country_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__country_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__language_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__language_k__BackingField();

  constexpr void __cordl_internal_set__country_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__language_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x67fc700, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW _country, ::StringW _language);

  /// @brief Method get_country, addr 0x67fc6f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_country();

  /// @brief Method get_language, addr 0x67fc6f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_language();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidLocale();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidLocale", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidLocale(AndroidLocale&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidLocale", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidLocale(AndroidLocale const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19924 };

  /// @brief Field <country>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____country_k__BackingField;

  /// @brief Field <language>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____language_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Android::AndroidLocale, ____country_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Android::AndroidLocale, ____language_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidLocale, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Android
NEED_NO_BOX(::UnityEngine::Android::AndroidLocale);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidLocale*, "UnityEngine.Android", "AndroidLocale");
