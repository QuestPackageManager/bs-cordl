#pragma once
// IWYU pragma private; include "System/Net/UnsafeNclNativeMethods.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeNclNativeMethods)
namespace System::Net {
class HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID;
}
namespace System::Net {
class UnsafeNclNativeMethods_HttpApi;
}
namespace System::Net {
class UnsafeNclNativeMethods_SecureStringHelper;
}
namespace System::Security {
class SecureString;
}
// Forward declare root types
namespace System::Net {
class HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID;
}
namespace System::Net {
class UnsafeNclNativeMethods;
}
namespace System::Net {
class UnsafeNclNativeMethods_HttpApi;
}
namespace System::Net {
class UnsafeNclNativeMethods_SecureStringHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID);
MARK_REF_PTR_T(::System::Net::UnsafeNclNativeMethods);
MARK_REF_PTR_T(::System::Net::UnsafeNclNativeMethods_HttpApi);
MARK_REF_PTR_T(::System::Net::UnsafeNclNativeMethods_SecureStringHelper);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.UnsafeNclNativeMethods/HttpApi/HTTP_REQUEST_HEADER_ID
class CORDL_TYPE HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Strings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_Strings, put = setStaticF_m_Strings)) ::ArrayW<::StringW, ::Array<::StringW>*> m_Strings;

  /// @brief Method ToString, addr 0x44b89f0, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t position);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_m_Strings();

  static inline void setStaticF_m_Strings(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID(HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID(HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9657 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID, 0x10>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.UnsafeNclNativeMethods/HttpApi
class CORDL_TYPE UnsafeNclNativeMethods_HttpApi : public ::System::Object {
public:
  // Declarations
  using HTTP_REQUEST_HEADER_ID = ::System::Net::HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID;

  /// @brief Field m_Strings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_Strings, put = setStaticF_m_Strings)) ::ArrayW<::StringW, ::Array<::StringW>*> m_Strings;

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_m_Strings();

  static inline void setStaticF_m_Strings(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeNclNativeMethods_HttpApi();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsafeNclNativeMethods_HttpApi", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsafeNclNativeMethods_HttpApi(UnsafeNclNativeMethods_HttpApi&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsafeNclNativeMethods_HttpApi", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsafeNclNativeMethods_HttpApi(UnsafeNclNativeMethods_HttpApi const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9658 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::UnsafeNclNativeMethods_HttpApi, 0x10>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.UnsafeNclNativeMethods/SecureStringHelper
class CORDL_TYPE UnsafeNclNativeMethods_SecureStringHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateSecureString, addr 0x44b9218, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Security::SecureString* CreateSecureString(::StringW plainString);

  /// @brief Method CreateString, addr 0x44b90a4, size 0x174, virtual false, abstract: false, final false
  static inline ::StringW CreateString(::System::Security::SecureString* secureString);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeNclNativeMethods_SecureStringHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsafeNclNativeMethods_SecureStringHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsafeNclNativeMethods_SecureStringHelper(UnsafeNclNativeMethods_SecureStringHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsafeNclNativeMethods_SecureStringHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsafeNclNativeMethods_SecureStringHelper(UnsafeNclNativeMethods_SecureStringHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9659 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::UnsafeNclNativeMethods_SecureStringHelper, 0x10>, "Size mismatch!");

} // namespace System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.UnsafeNclNativeMethods
class CORDL_TYPE UnsafeNclNativeMethods : public ::System::Object {
public:
  // Declarations
  using HttpApi = ::System::Net::UnsafeNclNativeMethods_HttpApi;

  using SecureStringHelper = ::System::Net::UnsafeNclNativeMethods_SecureStringHelper;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeNclNativeMethods();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsafeNclNativeMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsafeNclNativeMethods(UnsafeNclNativeMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsafeNclNativeMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsafeNclNativeMethods(UnsafeNclNativeMethods const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9660 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::UnsafeNclNativeMethods, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID*, "System.Net", "UnsafeNclNativeMethods/HttpApi/HTTP_REQUEST_HEADER_ID");
NEED_NO_BOX(::System::Net::UnsafeNclNativeMethods);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::UnsafeNclNativeMethods*, "System.Net", "UnsafeNclNativeMethods");
NEED_NO_BOX(::System::Net::UnsafeNclNativeMethods_HttpApi);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::UnsafeNclNativeMethods_HttpApi*, "System.Net", "UnsafeNclNativeMethods/HttpApi");
NEED_NO_BOX(::System::Net::UnsafeNclNativeMethods_SecureStringHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::UnsafeNclNativeMethods_SecureStringHelper*, "System.Net", "UnsafeNclNativeMethods/SecureStringHelper");
