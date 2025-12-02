#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/HttpHeaderConstants.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HttpHeaderConstants)
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class HttpHeaderConstants;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::HttpHeaderConstants);
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.HttpHeaderConstants
class CORDL_TYPE HttpHeaderConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field APPLICATION_JSON, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_APPLICATION_JSON, put = setStaticF_APPLICATION_JSON)) ::StringW APPLICATION_JSON;

  /// @brief Field APPLICATION_X_WWW_FORM_URLENCODED, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_APPLICATION_X_WWW_FORM_URLENCODED, put = setStaticF_APPLICATION_X_WWW_FORM_URLENCODED)) ::StringW APPLICATION_X_WWW_FORM_URLENCODED;

  static inline ::StringW getStaticF_APPLICATION_JSON();

  static inline ::StringW getStaticF_APPLICATION_X_WWW_FORM_URLENCODED();

  static inline void setStaticF_APPLICATION_JSON(::StringW value);

  static inline void setStaticF_APPLICATION_X_WWW_FORM_URLENCODED(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpHeaderConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpHeaderConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpHeaderConstants(HttpHeaderConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpHeaderConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpHeaderConstants(HttpHeaderConstants const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20280 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::HttpHeaderConstants, 0x10>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::HttpHeaderConstants);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::HttpHeaderConstants*, "OculusStudios.GraphQL.Client", "HttpHeaderConstants");
