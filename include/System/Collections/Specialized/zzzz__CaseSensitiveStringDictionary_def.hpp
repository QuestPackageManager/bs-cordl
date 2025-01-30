#pragma once
// IWYU pragma private; include "System/Collections/Specialized/CaseSensitiveStringDictionary.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Specialized/zzzz__StringDictionary_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CaseSensitiveStringDictionary)
// Forward declare root types
namespace System::Collections::Specialized {
class CaseSensitiveStringDictionary;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Specialized::CaseSensitiveStringDictionary);
// Dependencies System.Collections.Specialized.StringDictionary
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: System.Collections.Specialized.CaseSensitiveStringDictionary
class CORDL_TYPE CaseSensitiveStringDictionary : public ::System::Collections::Specialized::StringDictionary {
public:
  // Declarations
  /// @brief Method Add, addr 0x4486e4c, size 0x70, virtual true, abstract: false, final false
  inline void Add(::StringW key, ::StringW value);

  static inline ::System::Collections::Specialized::CaseSensitiveStringDictionary* New_ctor();

  /// @brief Method .ctor, addr 0x4486e48, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CaseSensitiveStringDictionary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CaseSensitiveStringDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CaseSensitiveStringDictionary(CaseSensitiveStringDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CaseSensitiveStringDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CaseSensitiveStringDictionary(CaseSensitiveStringDictionary const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9500 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::CaseSensitiveStringDictionary, 0x18>, "Size mismatch!");

} // namespace System::Collections::Specialized
NEED_NO_BOX(::System::Collections::Specialized::CaseSensitiveStringDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::CaseSensitiveStringDictionary*, "System.Collections.Specialized", "CaseSensitiveStringDictionary");
