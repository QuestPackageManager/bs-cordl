#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LanguageDropdown)
namespace BGLib::Polyglot {
class ILocalize;
}
namespace BGLib::Polyglot {
class LocalizationModel;
}
namespace UnityEngine::UI {
class Dropdown;
}
// Forward declare root types
namespace BGLib::Polyglot {
class LanguageDropdown;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::Polyglot::LanguageDropdown);
// Type: BGLib.Polyglot::LanguageDropdown
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::Polyglot {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15675))
// CS Name: ::BGLib.Polyglot::LanguageDropdown*
class CORDL_TYPE LanguageDropdown : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field dropdown, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_dropdown, put = __cordl_internal_set_dropdown))::UnityW<::UnityEngine::UI::Dropdown> dropdown;

  /// @brief Convert operator to "::BGLib::Polyglot::ILocalize"
  constexpr operator ::BGLib::Polyglot::ILocalize*() noexcept;

  /// @brief Convert to "::BGLib::Polyglot::ILocalize"
  constexpr ::BGLib::Polyglot::ILocalize* i___BGLib__Polyglot__ILocalize() noexcept;

  constexpr ::UnityW<::UnityEngine::UI::Dropdown>& __cordl_internal_get_dropdown();

  constexpr ::UnityW<::UnityEngine::UI::Dropdown> const& __cordl_internal_get_dropdown() const;

  constexpr void __cordl_internal_set_dropdown(::UnityW<::UnityEngine::UI::Dropdown> value);

  /// @brief Method Reset, addr 0xe4b930, size 0x50, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Start, addr 0xe4b980, size 0x24, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method CreateDropdown, addr 0xe4b9a4, size 0x234, virtual false, abstract: false, final false
  inline void CreateDropdown();

  /// @brief Method OnLocalize, addr 0xe4bebc, size 0x138, virtual true, abstract: false, final true
  inline void OnLocalize(::BGLib::Polyglot::LocalizationModel* localization);

  static inline ::BGLib::Polyglot::LanguageDropdown* New_ctor();

  /// @brief Method .ctor, addr 0xe4bff4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LanguageDropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LanguageDropdown(LanguageDropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LanguageDropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LanguageDropdown(LanguageDropdown const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LanguageDropdown();

public:
  /// @brief Field dropdown, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Dropdown> ___dropdown;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::LanguageDropdown, 0x20>, "Size mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LanguageDropdown, ___dropdown) == 0x18, "Offset mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::LanguageDropdown);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::LanguageDropdown*, "BGLib.Polyglot", "LanguageDropdown");
