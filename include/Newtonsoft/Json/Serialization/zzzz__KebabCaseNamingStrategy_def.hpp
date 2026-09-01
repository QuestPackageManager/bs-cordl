#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\KebabCaseNamingStrategy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__NamingStrategy_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(KebabCaseNamingStrategy)
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class KebabCaseNamingStrategy;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy*, "Newtonsoft.Json.Serialization", "KebabCaseNamingStrategy");
// Dependencies Newtonsoft.Json.Serialization.NamingStrategy
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.KebabCaseNamingStrategy
class CORDL_TYPE KebabCaseNamingStrategy : public ::Newtonsoft::Json::Serialization::NamingStrategy {
public:
  // Declarations
  static inline ::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy* New_ctor();

  static inline ::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy* New_ctor(bool processDictionaryKeys, bool overrideSpecifiedNames);

  static inline ::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy* New_ctor(bool processDictionaryKeys, bool overrideSpecifiedNames, bool processExtensionDataNames);

  /// @brief Method ResolvePropertyName, addr 0x5d5973c, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ResolvePropertyName(::StringW name);

  /// @brief Method .ctor, addr 0x5d59738, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5d59718, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool processDictionaryKeys, bool overrideSpecifiedNames);

  /// @brief Method .ctor, addr 0x5d59728, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool processDictionaryKeys, bool overrideSpecifiedNames, bool processExtensionDataNames);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KebabCaseNamingStrategy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KebabCaseNamingStrategy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KebabCaseNamingStrategy(KebabCaseNamingStrategy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KebabCaseNamingStrategy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KebabCaseNamingStrategy(KebabCaseNamingStrategy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13528 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy) == 0x18, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
