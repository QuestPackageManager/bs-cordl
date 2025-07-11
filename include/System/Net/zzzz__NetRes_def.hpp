#pragma once
// IWYU pragma private; include "System/Net/NetRes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NetRes)
namespace System::Net {
struct FtpStatusCode;
}
namespace System::Net {
struct WebExceptionStatus;
}
// Forward declare root types
namespace System::Net {
class NetRes;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetRes);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.NetRes
class CORDL_TYPE NetRes : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetWebStatusCodeString, addr 0x44aaebc, size 0x1e0, virtual false, abstract: false, final false
  static inline ::StringW GetWebStatusCodeString(::System::Net::FtpStatusCode statusCode, ::StringW statusDescription);

  /// @brief Method GetWebStatusString, addr 0x44a12f4, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW GetWebStatusString(::StringW Res, ::System::Net::WebExceptionStatus Status);

  /// @brief Method GetWebStatusString, addr 0x44aae60, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW GetWebStatusString(::System::Net::WebExceptionStatus Status);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetRes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetRes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetRes(NetRes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetRes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetRes(NetRes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9629 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetRes, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::NetRes);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetRes*, "System.Net", "NetRes");
