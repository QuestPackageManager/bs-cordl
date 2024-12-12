#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JsonCloneSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JsonCloneSettings)
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JsonCloneSettings;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonCloneSettings);
// Dependencies System.Object
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JsonCloneSettings
class CORDL_TYPE JsonCloneSettings : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CopyAnnotations, put = set_CopyAnnotations)) bool CopyAnnotations;

  /// @brief Field SkipCopyAnnotations, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SkipCopyAnnotations, put = setStaticF_SkipCopyAnnotations)) ::Newtonsoft::Json::Linq::JsonCloneSettings* SkipCopyAnnotations;

  /// @brief Field <CopyAnnotations>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__CopyAnnotations_k__BackingField, put = __cordl_internal_set__CopyAnnotations_k__BackingField)) bool _CopyAnnotations_k__BackingField;

  static inline ::Newtonsoft::Json::Linq::JsonCloneSettings* New_ctor();

  constexpr bool const& __cordl_internal_get__CopyAnnotations_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CopyAnnotations_k__BackingField();

  constexpr void __cordl_internal_set__CopyAnnotations_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x3f1db24, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Linq::JsonCloneSettings* getStaticF_SkipCopyAnnotations();

  /// @brief Method get_CopyAnnotations, addr 0x3f1db44, size 0x8, virtual false, abstract: false, final false
  inline bool get_CopyAnnotations();

  static inline void setStaticF_SkipCopyAnnotations(::Newtonsoft::Json::Linq::JsonCloneSettings* value);

  /// @brief Method set_CopyAnnotations, addr 0x3f1db4c, size 0xc, virtual false, abstract: false, final false
  inline void set_CopyAnnotations(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonCloneSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonCloneSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonCloneSettings(JsonCloneSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonCloneSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonCloneSettings(JsonCloneSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10412 };

  /// @brief Field <CopyAnnotations>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____CopyAnnotations_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JsonCloneSettings, ____CopyAnnotations_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonCloneSettings, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonCloneSettings);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonCloneSettings*, "Newtonsoft.Json.Linq", "JsonCloneSettings");
