#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SaveLanguagePreference)
namespace Polyglot {
class ILocalize;
}
// Forward declare root types
namespace Polyglot {
class SaveLanguagePreference;
}
// Write type traits
MARK_REF_PTR_T(::Polyglot::SaveLanguagePreference);
// Type: Polyglot::SaveLanguagePreference
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15569))
// CS Name: ::Polyglot::SaveLanguagePreference*
class CORDL_TYPE SaveLanguagePreference : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field preferenceKey, offset 0x18, size 0x8
  __declspec(property(get = __get_preferenceKey, put = __set_preferenceKey))::StringW preferenceKey;

  /// @brief Convert operator to "::Polyglot::ILocalize"
  constexpr operator ::Polyglot::ILocalize*() noexcept;

  constexpr ::StringW& __get_preferenceKey();

  constexpr ::StringW const& __get_preferenceKey() const;

  constexpr void __set_preferenceKey(::StringW value);

  /// @brief Method Start, addr 0x28060e0, size 0x50, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnLocalize, addr 0x2806130, size 0x28, virtual true, abstract: false, final true
  inline void OnLocalize();

  static inline ::Polyglot::SaveLanguagePreference* New_ctor();

  /// @brief Method .ctor, addr 0x2806158, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SaveLanguagePreference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaveLanguagePreference(SaveLanguagePreference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaveLanguagePreference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaveLanguagePreference(SaveLanguagePreference const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaveLanguagePreference();

public:
  /// @brief Field preferenceKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ___preferenceKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::SaveLanguagePreference, 0x20>, "Size mismatch!");

static_assert(offsetof(::Polyglot::SaveLanguagePreference, ___preferenceKey) == 0x18, "Offset mismatch!");

} // namespace Polyglot
NEED_NO_BOX(::Polyglot::SaveLanguagePreference);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::SaveLanguagePreference*, "Polyglot", "SaveLanguagePreference");
