#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__DefaultContractResolver_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CamelCasePropertyNamesContractResolver)
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class CamelCasePropertyNamesContractResolver;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver);
// Type: Newtonsoft.Json.Serialization::CamelCasePropertyNamesContractResolver
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 35, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::CamelCasePropertyNamesContractResolver*
class CORDL_TYPE CamelCasePropertyNamesContractResolver : public ::Newtonsoft::Json::Serialization::DefaultContractResolver {
public:
  // Declarations
  static inline ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver* New_ctor();

  /// @brief Method ResolvePropertyName, addr 0x27605b8, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ResolvePropertyName(::StringW propertyName);

  /// @brief Method .ctor, addr 0x2760534, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CamelCasePropertyNamesContractResolver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CamelCasePropertyNamesContractResolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CamelCasePropertyNamesContractResolver(CamelCasePropertyNamesContractResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CamelCasePropertyNamesContractResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CamelCasePropertyNamesContractResolver(CamelCasePropertyNamesContractResolver const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver, 0x28>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver*, "Newtonsoft.Json.Serialization", "CamelCasePropertyNamesContractResolver");
