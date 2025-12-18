#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Oculus/OculusPlatformResponseException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/Platform/Oculus/zzzz__OculusPlatformResponseErrorCode_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OculusPlatformResponseException)
namespace Oculus::Platform::Models {
class Error;
}
namespace OculusStudios::Platform::Oculus {
struct OculusPlatformResponseErrorCode;
}
namespace System::Net {
struct HttpStatusCode;
}
// Forward declare root types
namespace OculusStudios::Platform::Oculus {
class OculusPlatformResponseException;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Oculus::OculusPlatformResponseException);
// Dependencies OculusStudios.Platform.Oculus.OculusPlatformResponseErrorCode, System.Exception, System.Net.HttpStatusCode
namespace OculusStudios::Platform::Oculus {
// Is value type: false
// CS Name: OculusStudios.Platform.Oculus.OculusPlatformResponseException
class CORDL_TYPE OculusPlatformResponseException : public ::System::Exception {
public:
  // Declarations
  /// @brief Field error, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_error, put = __cordl_internal_set_error)) ::Oculus::Platform::Models::Error* error;

  /// @brief Field errorCode, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_errorCode, put = __cordl_internal_set_errorCode)) ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode errorCode;

  /// @brief Field httpCode, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_httpCode, put = __cordl_internal_set_httpCode)) ::System::Net::HttpStatusCode httpCode;

  __declspec(property(get = get_message)) ::StringW message;

  static inline ::OculusStudios::Platform::Oculus::OculusPlatformResponseException* New_ctor(::Oculus::Platform::Models::Error* error);

  static inline ::OculusStudios::Platform::Oculus::OculusPlatformResponseException* New_ctor(::StringW message, ::Oculus::Platform::Models::Error* error);

  /// @brief Method ParseMessage, addr 0x5d8632c, size 0x2b8, virtual false, abstract: false, final false
  static inline ::StringW ParseMessage(::StringW message, ::Oculus::Platform::Models::Error* error, ::ByRef<::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode> errorCode,
                                       ::ByRef<::System::Net::HttpStatusCode> httpCode);

  constexpr ::Oculus::Platform::Models::Error* const& __cordl_internal_get_error() const;

  constexpr ::Oculus::Platform::Models::Error*& __cordl_internal_get_error();

  constexpr ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode const& __cordl_internal_get_errorCode() const;

  constexpr ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode& __cordl_internal_get_errorCode();

  constexpr ::System::Net::HttpStatusCode const& __cordl_internal_get_httpCode() const;

  constexpr ::System::Net::HttpStatusCode& __cordl_internal_get_httpCode();

  constexpr void __cordl_internal_set_error(::Oculus::Platform::Models::Error* value);

  constexpr void __cordl_internal_set_errorCode(::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode value);

  constexpr void __cordl_internal_set_httpCode(::System::Net::HttpStatusCode value);

  /// @brief Method .ctor, addr 0x5d86294, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::Oculus::Platform::Models::Error* error);

  /// @brief Method .ctor, addr 0x5d83c78, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::Oculus::Platform::Models::Error* error);

  /// @brief Method get_message, addr 0x5d8627c, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_message();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformResponseException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformResponseException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformResponseException(OculusPlatformResponseException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformResponseException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformResponseException(OculusPlatformResponseException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21920 };

  /// @brief Field error, offset: 0x90, size: 0x8, def value: None
  ::Oculus::Platform::Models::Error* ___error;

  /// @brief Field errorCode, offset: 0x98, size: 0x4, def value: None
  ::OculusStudios::Platform::Oculus::OculusPlatformResponseErrorCode ___errorCode;

  /// @brief Field httpCode, offset: 0x9c, size: 0x4, def value: None
  ::System::Net::HttpStatusCode ___httpCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatformResponseException, ___error) == 0x90, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatformResponseException, ___errorCode) == 0x98, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatformResponseException, ___httpCode) == 0x9c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Oculus::OculusPlatformResponseException, 0xa0>, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
NEED_NO_BOX(::OculusStudios::Platform::Oculus::OculusPlatformResponseException);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Oculus::OculusPlatformResponseException*, "OculusStudios.Platform.Oculus", "OculusPlatformResponseException");
