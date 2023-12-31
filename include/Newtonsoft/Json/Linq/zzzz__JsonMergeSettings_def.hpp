#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__MergeArrayHandling_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__MergeNullValueHandling_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JsonMergeSettings)
namespace Newtonsoft::Json::Linq {
struct MergeArrayHandling;
}
namespace Newtonsoft::Json::Linq {
struct MergeNullValueHandling;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JsonMergeSettings;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonMergeSettings);
// Type: Newtonsoft.Json.Linq::JsonMergeSettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11973)), TypeDefinitionIndex(TypeDefinitionIndex(11972))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11971))
// CS Name: ::Newtonsoft.Json.Linq::JsonMergeSettings*
class CORDL_TYPE JsonMergeSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field _mergeArrayHandling, offset 0x10, size 0x4
  __declspec(property(get = __get__mergeArrayHandling, put = __set__mergeArrayHandling))::Newtonsoft::Json::Linq::MergeArrayHandling _mergeArrayHandling;

  /// @brief Field _mergeNullValueHandling, offset 0x14, size 0x4
  __declspec(property(get = __get__mergeNullValueHandling, put = __set__mergeNullValueHandling))::Newtonsoft::Json::Linq::MergeNullValueHandling _mergeNullValueHandling;

  __declspec(property(get = get_MergeArrayHandling, put = set_MergeArrayHandling))::Newtonsoft::Json::Linq::MergeArrayHandling MergeArrayHandling;

  __declspec(property(get = get_MergeNullValueHandling, put = set_MergeNullValueHandling))::Newtonsoft::Json::Linq::MergeNullValueHandling MergeNullValueHandling;

  constexpr ::Newtonsoft::Json::Linq::MergeArrayHandling& __get__mergeArrayHandling();

  constexpr ::Newtonsoft::Json::Linq::MergeArrayHandling const& __get__mergeArrayHandling() const;

  constexpr void __set__mergeArrayHandling(::Newtonsoft::Json::Linq::MergeArrayHandling value);

  constexpr ::Newtonsoft::Json::Linq::MergeNullValueHandling& __get__mergeNullValueHandling();

  constexpr ::Newtonsoft::Json::Linq::MergeNullValueHandling const& __get__mergeNullValueHandling() const;

  constexpr void __set__mergeNullValueHandling(::Newtonsoft::Json::Linq::MergeNullValueHandling value);

  /// @brief Method get_MergeArrayHandling, addr 0x2690f40, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::MergeArrayHandling get_MergeArrayHandling();

  /// @brief Method set_MergeArrayHandling, addr 0x2690f48, size 0x64, virtual false, abstract: false, final false
  inline void set_MergeArrayHandling(::Newtonsoft::Json::Linq::MergeArrayHandling value);

  /// @brief Method get_MergeNullValueHandling, addr 0x2690fac, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::MergeNullValueHandling get_MergeNullValueHandling();

  /// @brief Method set_MergeNullValueHandling, addr 0x2690fb4, size 0x64, virtual false, abstract: false, final false
  inline void set_MergeNullValueHandling(::Newtonsoft::Json::Linq::MergeNullValueHandling value);

  static inline ::Newtonsoft::Json::Linq::JsonMergeSettings* New_ctor();

  /// @brief Method .ctor, addr 0x2691018, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "JsonMergeSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonMergeSettings(JsonMergeSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonMergeSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonMergeSettings(JsonMergeSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonMergeSettings();

public:
  /// @brief Field _mergeArrayHandling, offset: 0x10, size: 0x4, def value: None
  ::Newtonsoft::Json::Linq::MergeArrayHandling ____mergeArrayHandling;

  /// @brief Field _mergeNullValueHandling, offset: 0x14, size: 0x4, def value: None
  ::Newtonsoft::Json::Linq::MergeNullValueHandling ____mergeNullValueHandling;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonMergeSettings, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonMergeSettings, ____mergeArrayHandling) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JsonMergeSettings, ____mergeNullValueHandling) == 0x14, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonMergeSettings);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonMergeSettings*, "Newtonsoft.Json.Linq", "JsonMergeSettings");
