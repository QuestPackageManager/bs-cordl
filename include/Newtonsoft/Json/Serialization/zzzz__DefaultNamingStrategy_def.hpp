#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__NamingStrategy_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DefaultNamingStrategy)
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class DefaultNamingStrategy;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::DefaultNamingStrategy);
// Type: Newtonsoft.Json.Serialization::DefaultNamingStrategy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 19, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::DefaultNamingStrategy*
class CORDL_TYPE DefaultNamingStrategy : public ::Newtonsoft::Json::Serialization::NamingStrategy {
public:
  // Declarations
  static inline ::Newtonsoft::Json::Serialization::DefaultNamingStrategy* New_ctor();

  /// @brief Method ResolvePropertyName, addr 0x292906c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ResolvePropertyName(::StringW name);

  /// @brief Method .ctor, addr 0x2929074, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultNamingStrategy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultNamingStrategy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultNamingStrategy(DefaultNamingStrategy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultNamingStrategy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultNamingStrategy(DefaultNamingStrategy const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::DefaultNamingStrategy, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::DefaultNamingStrategy);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::DefaultNamingStrategy*, "Newtonsoft.Json.Serialization", "DefaultNamingStrategy");
