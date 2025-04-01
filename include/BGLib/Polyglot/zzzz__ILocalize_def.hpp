#pragma once
// IWYU pragma private; include "BGLib/Polyglot/ILocalize.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILocalize)
namespace BGLib::Polyglot {
class LocalizationModel;
}
// Forward declare root types
namespace BGLib::Polyglot {
class ILocalize;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::Polyglot::ILocalize);
// Dependencies
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: BGLib.Polyglot.ILocalize
class CORDL_TYPE ILocalize {
public:
  // Declarations
  /// @brief Method OnLocalize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnLocalize(::BGLib::Polyglot::LocalizationModel* localization);

  // Ctor Parameters [CppParam { name: "", ty: "ILocalize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILocalize(ILocalize const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18050 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::ILocalize);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::ILocalize*, "BGLib.Polyglot", "ILocalize");
