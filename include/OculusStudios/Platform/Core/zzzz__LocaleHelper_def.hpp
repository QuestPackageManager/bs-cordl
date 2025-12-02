#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/LocaleHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocaleHelper)
namespace UnityEngine {
struct SystemLanguage;
}
// Forward declare root types
namespace OculusStudios::Platform::Core {
class LocaleHelper;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Core::LocaleHelper);
// Dependencies System.Object
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.LocaleHelper
class CORDL_TYPE LocaleHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetSystemLocale, addr 0x5d199ac, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW GetSystemLocale();

  /// @brief Method ToLocale, addr 0x5d19a1c, size 0x398, virtual false, abstract: false, final false
  static inline ::StringW ToLocale(::UnityEngine::SystemLanguage lang);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocaleHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocaleHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocaleHelper(LocaleHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocaleHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocaleHelper(LocaleHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22159 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Core::LocaleHelper, 0x10>, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
NEED_NO_BOX(::OculusStudios::Platform::Core::LocaleHelper);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::LocaleHelper*, "OculusStudios.Platform.Core", "LocaleHelper");
