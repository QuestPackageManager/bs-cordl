#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SaveLanguagePreference)
namespace BGLib::Polyglot {
class ILocalize;
}
namespace BGLib::Polyglot {
class LocalizationModel;
}
// Forward declare root types
namespace BGLib::Polyglot {
class SaveLanguagePreference;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::Polyglot::SaveLanguagePreference);
// Type: BGLib.Polyglot::SaveLanguagePreference
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: ::BGLib.Polyglot::SaveLanguagePreference*
class CORDL_TYPE SaveLanguagePreference : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field preferenceKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_preferenceKey, put = __cordl_internal_set_preferenceKey))::StringW preferenceKey;

  /// @brief Convert operator to "::BGLib::Polyglot::ILocalize"
  constexpr operator ::BGLib::Polyglot::ILocalize*() noexcept;

  static inline ::BGLib::Polyglot::SaveLanguagePreference* New_ctor();

  /// @brief Method OnLocalize, addr 0x1080a64, size 0x28, virtual true, abstract: false, final true
  inline void OnLocalize(::BGLib::Polyglot::LocalizationModel* localization);

  /// @brief Method Start, addr 0x1080a14, size 0x50, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::StringW const& __cordl_internal_get_preferenceKey() const;

  constexpr ::StringW& __cordl_internal_get_preferenceKey();

  constexpr void __cordl_internal_set_preferenceKey(::StringW value);

  /// @brief Method .ctor, addr 0x1080a8c, size 0x1050, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BGLib::Polyglot::ILocalize"
  constexpr ::BGLib::Polyglot::ILocalize* i___BGLib__Polyglot__ILocalize() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaveLanguagePreference();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaveLanguagePreference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaveLanguagePreference(SaveLanguagePreference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaveLanguagePreference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaveLanguagePreference(SaveLanguagePreference const&) = delete;

  /// @brief Field preferenceKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ___preferenceKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::SaveLanguagePreference, 0x20>, "Size mismatch!");

static_assert(offsetof(::BGLib::Polyglot::SaveLanguagePreference, ___preferenceKey) == 0x18, "Offset mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::SaveLanguagePreference);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::SaveLanguagePreference*, "BGLib.Polyglot", "SaveLanguagePreference");
