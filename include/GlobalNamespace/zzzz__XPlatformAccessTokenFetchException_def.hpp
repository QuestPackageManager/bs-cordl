#pragma once
// IWYU pragma private; include "GlobalNamespace/XPlatformAccessTokenFetchException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XPlatformAccessTokenFetchException)
// Forward declare root types
namespace GlobalNamespace {
class XPlatformAccessTokenFetchException;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::XPlatformAccessTokenFetchException);
// Dependencies System.Exception
namespace GlobalNamespace {
// Is value type: false
// CS Name: XPlatformAccessTokenFetchException
class CORDL_TYPE XPlatformAccessTokenFetchException : public ::System::Exception {
public:
  // Declarations
  static inline ::GlobalNamespace::XPlatformAccessTokenFetchException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x407a32c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XPlatformAccessTokenFetchException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XPlatformAccessTokenFetchException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XPlatformAccessTokenFetchException(XPlatformAccessTokenFetchException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XPlatformAccessTokenFetchException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XPlatformAccessTokenFetchException(XPlatformAccessTokenFetchException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18749 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::XPlatformAccessTokenFetchException, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::XPlatformAccessTokenFetchException);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::XPlatformAccessTokenFetchException*, "", "XPlatformAccessTokenFetchException");
