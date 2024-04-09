#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
CORDL_MODULE_EXPORT(LanguageSO)
// Forward declare root types
namespace GlobalNamespace {
class LanguageSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LanguageSO);
// Type: ::LanguageSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LanguageSO*
class CORDL_TYPE LanguageSO : public ::GlobalNamespace::ObservableVariableSO_1<::BGLib::Polyglot::Language> {
public:
  // Declarations
  static inline ::GlobalNamespace::LanguageSO* New_ctor();

  /// @brief Method .ctor, addr 0xf889f8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LanguageSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LanguageSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LanguageSO(LanguageSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LanguageSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LanguageSO(LanguageSO const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LanguageSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LanguageSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LanguageSO*, "", "LanguageSO");
