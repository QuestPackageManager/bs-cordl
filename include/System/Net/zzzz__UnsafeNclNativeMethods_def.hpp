#pragma once
// IWYU pragma private; include "System/Net/UnsafeNclNativeMethods.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeNclNativeMethods)
namespace GlobalNamespace {
class __UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID;
}
namespace System::Net {
class __UnsafeNclNativeMethods__HttpApi;
}
namespace System::Net {
class __UnsafeNclNativeMethods__SecureStringHelper;
}
namespace System::Security {
class SecureString;
}
// Forward declare root types
namespace GlobalNamespace {
class __UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID;
}
namespace System::Net {
class UnsafeNclNativeMethods;
}
namespace System::Net {
class __UnsafeNclNativeMethods__HttpApi;
}
namespace System::Net {
class __UnsafeNclNativeMethods__SecureStringHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID);
MARK_REF_PTR_T(::System::Net::UnsafeNclNativeMethods);
MARK_REF_PTR_T(::System::Net::__UnsafeNclNativeMethods__HttpApi);
MARK_REF_PTR_T(::System::Net::__UnsafeNclNativeMethods__SecureStringHelper);
// Type: ::HTTP_REQUEST_HEADER_ID
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID*
class CORDL_TYPE __UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Strings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_Strings, put = setStaticF_m_Strings)) ::ArrayW<::StringW, ::Array<::StringW>*> m_Strings;

  /// @brief Method ToString, addr 0x4442fc4, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW ToString(int32_t position);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_m_Strings();

  static inline void setStaticF_m_Strings(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID(__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID(__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9627 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HttpApi
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::UnsafeNclNativeMethods::HttpApi*
class CORDL_TYPE __UnsafeNclNativeMethods__HttpApi : public ::System::Object {
public:
  // Declarations
  using HTTP_REQUEST_HEADER_ID = ::GlobalNamespace::__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID;

  /// @brief Field m_Strings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_Strings, put = setStaticF_m_Strings)) ::ArrayW<::StringW, ::Array<::StringW>*> m_Strings;

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_m_Strings();

  static inline void setStaticF_m_Strings(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnsafeNclNativeMethods__HttpApi();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnsafeNclNativeMethods__HttpApi", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnsafeNclNativeMethods__HttpApi(__UnsafeNclNativeMethods__HttpApi&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnsafeNclNativeMethods__HttpApi", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnsafeNclNativeMethods__HttpApi(__UnsafeNclNativeMethods__HttpApi const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9628 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__UnsafeNclNativeMethods__HttpApi, 0x10>, "Size mismatch!");

} // namespace System::Net
// Type: ::SecureStringHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::UnsafeNclNativeMethods::SecureStringHelper*
class CORDL_TYPE __UnsafeNclNativeMethods__SecureStringHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateSecureString, addr 0x44437ec, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Security::SecureString* CreateSecureString(::StringW plainString);

  /// @brief Method CreateString, addr 0x4443678, size 0x174, virtual false, abstract: false, final false
  static inline ::StringW CreateString(::System::Security::SecureString* secureString);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnsafeNclNativeMethods__SecureStringHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnsafeNclNativeMethods__SecureStringHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnsafeNclNativeMethods__SecureStringHelper(__UnsafeNclNativeMethods__SecureStringHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnsafeNclNativeMethods__SecureStringHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnsafeNclNativeMethods__SecureStringHelper(__UnsafeNclNativeMethods__SecureStringHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9629 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__UnsafeNclNativeMethods__SecureStringHelper, 0x10>, "Size mismatch!");

} // namespace System::Net
// Type: System.Net::UnsafeNclNativeMethods
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::UnsafeNclNativeMethods*
class CORDL_TYPE UnsafeNclNativeMethods : public ::System::Object {
public:
  // Declarations
  using HttpApi = ::System::Net::__UnsafeNclNativeMethods__HttpApi;

  using SecureStringHelper = ::System::Net::__UnsafeNclNativeMethods__SecureStringHelper;

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::UnsafeNclNativeMethods, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::GlobalNamespace::__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnsafeNclNativeMethods__HttpApi__HTTP_REQUEST_HEADER_ID*, "System.Net", "UnsafeNclNativeMethods/HttpApi/HTTP_REQUEST_HEADER_ID");
NEED_NO_BOX(::System::Net::UnsafeNclNativeMethods);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::UnsafeNclNativeMethods*, "System.Net", "UnsafeNclNativeMethods");
NEED_NO_BOX(::System::Net::__UnsafeNclNativeMethods__HttpApi);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__UnsafeNclNativeMethods__HttpApi*, "System.Net", "UnsafeNclNativeMethods/HttpApi");
NEED_NO_BOX(::System::Net::__UnsafeNclNativeMethods__SecureStringHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__UnsafeNclNativeMethods__SecureStringHelper*, "System.Net", "UnsafeNclNativeMethods/SecureStringHelper");
