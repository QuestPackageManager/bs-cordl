#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JsonMergeSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__MergeArrayHandling_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__MergeNullValueHandling_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__StringComparison_def.hpp"
CORDL_MODULE_EXPORT(JsonMergeSettings)
namespace Newtonsoft::Json::Linq {
struct MergeArrayHandling;
}
namespace Newtonsoft::Json::Linq {
struct MergeNullValueHandling;
}
namespace System {
struct StringComparison;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JsonMergeSettings;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonMergeSettings);
// Dependencies Newtonsoft.Json.Linq.MergeArrayHandling, Newtonsoft.Json.Linq.MergeNullValueHandling, System.Object, System.StringComparison
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JsonMergeSettings
class CORDL_TYPE JsonMergeSettings : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_MergeArrayHandling, put = set_MergeArrayHandling)) ::Newtonsoft::Json::Linq::MergeArrayHandling MergeArrayHandling;

  __declspec(property(get = get_MergeNullValueHandling, put = set_MergeNullValueHandling)) ::Newtonsoft::Json::Linq::MergeNullValueHandling MergeNullValueHandling;

  __declspec(property(get = get_PropertyNameComparison, put = set_PropertyNameComparison)) ::System::StringComparison PropertyNameComparison;

  /// @brief Field _mergeArrayHandling, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__mergeArrayHandling, put = __cordl_internal_set__mergeArrayHandling)) ::Newtonsoft::Json::Linq::MergeArrayHandling _mergeArrayHandling;

  /// @brief Field _mergeNullValueHandling, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__mergeNullValueHandling, put = __cordl_internal_set__mergeNullValueHandling)) ::Newtonsoft::Json::Linq::MergeNullValueHandling _mergeNullValueHandling;

  /// @brief Field _propertyNameComparison, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__propertyNameComparison, put = __cordl_internal_set__propertyNameComparison)) ::System::StringComparison _propertyNameComparison;

  static inline ::Newtonsoft::Json::Linq::JsonMergeSettings* New_ctor();

  constexpr ::Newtonsoft::Json::Linq::MergeArrayHandling const& __cordl_internal_get__mergeArrayHandling() const;

  constexpr ::Newtonsoft::Json::Linq::MergeArrayHandling& __cordl_internal_get__mergeArrayHandling();

  constexpr ::Newtonsoft::Json::Linq::MergeNullValueHandling const& __cordl_internal_get__mergeNullValueHandling() const;

  constexpr ::Newtonsoft::Json::Linq::MergeNullValueHandling& __cordl_internal_get__mergeNullValueHandling();

  constexpr ::System::StringComparison const& __cordl_internal_get__propertyNameComparison() const;

  constexpr ::System::StringComparison& __cordl_internal_get__propertyNameComparison();

  constexpr void __cordl_internal_set__mergeArrayHandling(::Newtonsoft::Json::Linq::MergeArrayHandling value);

  constexpr void __cordl_internal_set__mergeNullValueHandling(::Newtonsoft::Json::Linq::MergeNullValueHandling value);

  constexpr void __cordl_internal_set__propertyNameComparison(::System::StringComparison value);

  /// @brief Method .ctor, addr 0x5bcca0c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_MergeArrayHandling, addr 0x5bcca18, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::MergeArrayHandling get_MergeArrayHandling();

  /// @brief Method get_MergeNullValueHandling, addr 0x5bcca7c, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::MergeNullValueHandling get_MergeNullValueHandling();

  /// @brief Method get_PropertyNameComparison, addr 0x5bccae0, size 0x8, virtual false, abstract: false, final false
  inline ::System::StringComparison get_PropertyNameComparison();

  /// @brief Method set_MergeArrayHandling, addr 0x5bcca20, size 0x5c, virtual false, abstract: false, final false
  inline void set_MergeArrayHandling(::Newtonsoft::Json::Linq::MergeArrayHandling value);

  /// @brief Method set_MergeNullValueHandling, addr 0x5bcca84, size 0x5c, virtual false, abstract: false, final false
  inline void set_MergeNullValueHandling(::Newtonsoft::Json::Linq::MergeNullValueHandling value);

  /// @brief Method set_PropertyNameComparison, addr 0x5bccae8, size 0x5c, virtual false, abstract: false, final false
  inline void set_PropertyNameComparison(::System::StringComparison value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonMergeSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonMergeSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonMergeSettings(JsonMergeSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonMergeSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonMergeSettings(JsonMergeSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13577 };

  /// @brief Field _mergeArrayHandling, offset: 0x10, size: 0x4, def value: None
  ::Newtonsoft::Json::Linq::MergeArrayHandling ____mergeArrayHandling;

  /// @brief Field _mergeNullValueHandling, offset: 0x14, size: 0x4, def value: None
  ::Newtonsoft::Json::Linq::MergeNullValueHandling ____mergeNullValueHandling;

  /// @brief Field _propertyNameComparison, offset: 0x18, size: 0x4, def value: None
  ::System::StringComparison ____propertyNameComparison;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JsonMergeSettings, ____mergeArrayHandling) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonMergeSettings, ____mergeNullValueHandling) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonMergeSettings, ____propertyNameComparison) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonMergeSettings, 0x20>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonMergeSettings);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonMergeSettings*, "Newtonsoft.Json.Linq", "JsonMergeSettings");
