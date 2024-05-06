#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__PathFilter_def.hpp"
CORDL_MODULE_EXPORT(RootFilter)
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
class RootFilter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JsonPath::RootFilter);
// Type: Newtonsoft.Json.Linq.JsonPath::RootFilter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Linq.JsonPath::RootFilter*
class CORDL_TYPE RootFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::Newtonsoft::Json::Linq::JsonPath::RootFilter* Instance;

  /// @brief Method ExecuteFilter, addr 0x2a811ac, size 0x90, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* ExecuteFilter(::Newtonsoft::Json::Linq::JToken* root,
                                                                                                         ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* current,
                                                                                                         ::Newtonsoft::Json::Linq::JsonSelectSettings* settings);

  static inline ::Newtonsoft::Json::Linq::JsonPath::RootFilter* New_ctor();

  /// @brief Method .ctor, addr 0x2a811a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Linq::JsonPath::RootFilter* getStaticF_Instance();

  static inline void setStaticF_Instance(::Newtonsoft::Json::Linq::JsonPath::RootFilter* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RootFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RootFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RootFilter(RootFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RootFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RootFilter(RootFilter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JsonPath::RootFilter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::RootFilter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::RootFilter*, "Newtonsoft.Json.Linq.JsonPath", "RootFilter");
