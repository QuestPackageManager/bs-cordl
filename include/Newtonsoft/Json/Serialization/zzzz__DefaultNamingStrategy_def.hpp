#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\DefaultNamingStrategy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__NamingStrategy_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DefaultNamingStrategy)
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class DefaultNamingStrategy;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Serialization::DefaultNamingStrategy*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Serialization::DefaultNamingStrategy*, "Newtonsoft.Json.Serialization", "DefaultNamingStrategy");
// Dependencies Newtonsoft.Json.Serialization.NamingStrategy
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.DefaultNamingStrategy
class CORDL_TYPE DefaultNamingStrategy : public ::Newtonsoft::Json::Serialization::NamingStrategy {
public:
  // Declarations
  static inline ::Newtonsoft::Json::Serialization::DefaultNamingStrategy* New_ctor();

  /// @brief Method ResolvePropertyName, addr 0x5d3fbb8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ResolvePropertyName(::StringW name);

  /// @brief Method .ctor, addr 0x5d3fbc0, size 0x4, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13484 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::Serialization::DefaultNamingStrategy) == 0x18, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
