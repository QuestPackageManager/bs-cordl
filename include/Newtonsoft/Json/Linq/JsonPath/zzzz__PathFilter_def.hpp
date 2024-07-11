#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JsonPath/PathFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PathFilter)
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JsonSelectSettings;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class PathFilter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::PathFilter);
// Type: Newtonsoft.Json.Linq.JsonPath::PathFilter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Linq.JsonPath::PathFilter*
class CORDL_TYPE PathFilter : public ::System::Object {
public:
  // Declarations
  /// @brief Method ExecuteFilter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ExecuteFilter(::Newtonsoft::Json::Linq::JToken* root,
                                                                                                         ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current,
                                                                                                         ::Newtonsoft::Json::Linq::JsonSelectSettings* settings);

  /// @brief Method GetNextScanValue, addr 0x2ab1acc, size 0xa8, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* GetNextScanValue(::Newtonsoft::Json::Linq::JToken* originalParent, ::Newtonsoft::Json::Linq::JToken* container,
                                                                   ::Newtonsoft::Json::Linq::JToken* value);

  /// @brief Method GetTokenIndex, addr 0x2aabdf0, size 0x2cc, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JToken* GetTokenIndex(::Newtonsoft::Json::Linq::JToken* t, ::Newtonsoft::Json::Linq::JsonSelectSettings* settings, int32_t index);

  static inline ::Newtonsoft::Json::Linq::JsonPath::PathFilter* New_ctor();

  /// @brief Method .ctor, addr 0x2aab744, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PathFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PathFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PathFilter(PathFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PathFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PathFilter(PathFilter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::PathFilter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::PathFilter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::PathFilter*, "Newtonsoft.Json.Linq.JsonPath", "PathFilter");
