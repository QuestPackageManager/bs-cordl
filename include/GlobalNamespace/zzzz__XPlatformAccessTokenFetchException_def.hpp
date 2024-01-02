#pragma once
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
// Type: ::XPlatformAccessTokenFetchException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15979))
// CS Name: ::XPlatformAccessTokenFetchException*
class CORDL_TYPE XPlatformAccessTokenFetchException : public ::System::Exception {
public:
  // Declarations
  static inline ::GlobalNamespace::XPlatformAccessTokenFetchException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x27fdd68, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  // Ctor Parameters [CppParam { name: "", ty: "XPlatformAccessTokenFetchException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XPlatformAccessTokenFetchException(XPlatformAccessTokenFetchException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XPlatformAccessTokenFetchException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XPlatformAccessTokenFetchException(XPlatformAccessTokenFetchException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XPlatformAccessTokenFetchException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::XPlatformAccessTokenFetchException, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::XPlatformAccessTokenFetchException);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::XPlatformAccessTokenFetchException*, "", "XPlatformAccessTokenFetchException");
