#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JsonSelectSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
CORDL_MODULE_EXPORT(JsonSelectSettings)
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JsonSelectSettings;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonSelectSettings);
// Dependencies System.Nullable`1<T>, System.Object, System.TimeSpan
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JsonSelectSettings
class CORDL_TYPE JsonSelectSettings : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ErrorWhenNoMatch, put = set_ErrorWhenNoMatch)) bool ErrorWhenNoMatch;

  __declspec(property(get = get_RegexMatchTimeout, put = set_RegexMatchTimeout)) ::System::Nullable_1<::System::TimeSpan> RegexMatchTimeout;

  /// @brief Field <ErrorWhenNoMatch>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__ErrorWhenNoMatch_k__BackingField, put = __cordl_internal_set__ErrorWhenNoMatch_k__BackingField)) bool _ErrorWhenNoMatch_k__BackingField;

  /// @brief Field <RegexMatchTimeout>k__BackingField, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__RegexMatchTimeout_k__BackingField, put = __cordl_internal_set__RegexMatchTimeout_k__BackingField)) ::System::Nullable_1<::System::TimeSpan>
      _RegexMatchTimeout_k__BackingField;

  static inline ::Newtonsoft::Json::Linq::JsonSelectSettings* New_ctor();

  constexpr bool const& __cordl_internal_get__ErrorWhenNoMatch_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ErrorWhenNoMatch_k__BackingField();

  constexpr ::System::Nullable_1<::System::TimeSpan> const& __cordl_internal_get__RegexMatchTimeout_k__BackingField() const;

  constexpr ::System::Nullable_1<::System::TimeSpan>& __cordl_internal_get__RegexMatchTimeout_k__BackingField();

  constexpr void __cordl_internal_set__ErrorWhenNoMatch_k__BackingField(bool value);

  constexpr void __cordl_internal_set__RegexMatchTimeout_k__BackingField(::System::Nullable_1<::System::TimeSpan> value);

  /// @brief Method .ctor, addr 0x5b66088, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ErrorWhenNoMatch, addr 0x5b66078, size 0x8, virtual false, abstract: false, final false
  inline bool get_ErrorWhenNoMatch();

  /// @brief Method get_RegexMatchTimeout, addr 0x5b66064, size 0xc, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::System::TimeSpan> get_RegexMatchTimeout();

  /// @brief Method set_ErrorWhenNoMatch, addr 0x5b66080, size 0x8, virtual false, abstract: false, final false
  inline void set_ErrorWhenNoMatch(bool value);

  /// @brief Method set_RegexMatchTimeout, addr 0x5b66070, size 0x8, virtual false, abstract: false, final false
  inline void set_RegexMatchTimeout(::System::Nullable_1<::System::TimeSpan> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSelectSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonSelectSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonSelectSettings(JsonSelectSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonSelectSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonSelectSettings(JsonSelectSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13574 };

  /// @brief Field <RegexMatchTimeout>k__BackingField, offset: 0x10, size: 0x10, def value: None
  ::System::Nullable_1<::System::TimeSpan> ____RegexMatchTimeout_k__BackingField;

  /// @brief Field <ErrorWhenNoMatch>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____ErrorWhenNoMatch_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JsonSelectSettings, ____RegexMatchTimeout_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonSelectSettings, ____ErrorWhenNoMatch_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonSelectSettings, 0x28>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonSelectSettings);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonSelectSettings*, "Newtonsoft.Json.Linq", "JsonSelectSettings");
