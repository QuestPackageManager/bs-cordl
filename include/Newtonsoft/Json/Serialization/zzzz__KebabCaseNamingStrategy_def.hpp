#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/KebabCaseNamingStrategy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__NamingStrategy_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(KebabCaseNamingStrategy)
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class KebabCaseNamingStrategy;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy);
// Type: Newtonsoft.Json.Serialization::KebabCaseNamingStrategy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 19, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::KebabCaseNamingStrategy*
class CORDL_TYPE KebabCaseNamingStrategy : public ::Newtonsoft::Json::Serialization::NamingStrategy {
public:
  // Declarations
  static inline ::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy* New_ctor();

  static inline ::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy* New_ctor(bool processDictionaryKeys, bool overrideSpecifiedNames);

  static inline ::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy* New_ctor(bool processDictionaryKeys, bool overrideSpecifiedNames, bool processExtensionDataNames);

  /// @brief Method ResolvePropertyName, addr 0x2a6439c, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ResolvePropertyName(::StringW name);

  /// @brief Method .ctor, addr 0x2a64394, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2a64308, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(bool processDictionaryKeys, bool overrideSpecifiedNames);

  /// @brief Method .ctor, addr 0x2a64348, size 0x4c, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::KebabCaseNamingStrategy*, "Newtonsoft.Json.Serialization", "KebabCaseNamingStrategy");
