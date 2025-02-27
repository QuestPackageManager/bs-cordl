#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/SnakeCaseNamingStrategy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__NamingStrategy_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SnakeCaseNamingStrategy)
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class SnakeCaseNamingStrategy;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy);
// Dependencies Newtonsoft.Json.Serialization.NamingStrategy
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.SnakeCaseNamingStrategy
class CORDL_TYPE SnakeCaseNamingStrategy : public ::Newtonsoft::Json::Serialization::NamingStrategy {
public:
  // Declarations
  static inline ::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy* New_ctor();

  static inline ::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy* New_ctor(bool processDictionaryKeys, bool overrideSpecifiedNames);

  static inline ::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy* New_ctor(bool processDictionaryKeys, bool overrideSpecifiedNames, bool processExtensionDataNames);

  /// @brief Method ResolvePropertyName, addr 0x3f0c3e4, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ResolvePropertyName(::StringW name);

  /// @brief Method .ctor, addr 0x3f0c3dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3f0c358, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(bool processDictionaryKeys, bool overrideSpecifiedNames);

  /// @brief Method .ctor, addr 0x3f0c390, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(bool processDictionaryKeys, bool overrideSpecifiedNames, bool processExtensionDataNames);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SnakeCaseNamingStrategy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SnakeCaseNamingStrategy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SnakeCaseNamingStrategy(SnakeCaseNamingStrategy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SnakeCaseNamingStrategy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SnakeCaseNamingStrategy(SnakeCaseNamingStrategy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10351 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::SnakeCaseNamingStrategy*, "Newtonsoft.Json.Serialization", "SnakeCaseNamingStrategy");
