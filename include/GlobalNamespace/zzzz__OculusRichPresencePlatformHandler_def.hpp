#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OculusRichPresencePlatformHandler)
namespace GlobalNamespace {
class IRichPresenceData;
}
namespace GlobalNamespace {
class IRichPresencePlatformHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusRichPresencePlatformHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusRichPresencePlatformHandler);
// Type: ::OculusRichPresencePlatformHandler
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusRichPresencePlatformHandler*
class CORDL_TYPE OculusRichPresencePlatformHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IRichPresencePlatformHandler"
  constexpr operator ::GlobalNamespace::IRichPresencePlatformHandler*() noexcept;

  /// @brief Method Clear, addr 0x2694e8c, size 0x9c, virtual true, abstract: false, final true
  inline void Clear();

  static inline ::GlobalNamespace::OculusRichPresencePlatformHandler* New_ctor();

  /// @brief Method SetPresence, addr 0x2694b84, size 0x308, virtual true, abstract: false, final true
  inline void SetPresence(::GlobalNamespace::IRichPresenceData* richPresenceData);

  /// @brief Method .ctor, addr 0x2694f28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IRichPresencePlatformHandler"
  constexpr ::GlobalNamespace::IRichPresencePlatformHandler* i___GlobalNamespace__IRichPresencePlatformHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusRichPresencePlatformHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusRichPresencePlatformHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusRichPresencePlatformHandler(OculusRichPresencePlatformHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusRichPresencePlatformHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusRichPresencePlatformHandler(OculusRichPresencePlatformHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusRichPresencePlatformHandler, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusRichPresencePlatformHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusRichPresencePlatformHandler*, "", "OculusRichPresencePlatformHandler");
