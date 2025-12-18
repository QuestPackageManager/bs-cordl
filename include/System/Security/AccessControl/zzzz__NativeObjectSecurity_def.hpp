#pragma once
// IWYU pragma private; include "System/Security/AccessControl/NativeObjectSecurity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__CommonObjectSecurity_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeObjectSecurity)
namespace System::Runtime::InteropServices {
class SafeHandle;
}
namespace System::Security::AccessControl {
struct AccessControlSections;
}
namespace System::Security::AccessControl {
class NativeObjectSecurity_ExceptionFromErrorCode;
}
namespace System::Security::AccessControl {
struct ResourceType;
}
namespace System {
class Exception;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::AccessControl {
class NativeObjectSecurity;
}
namespace System::Security::AccessControl {
class NativeObjectSecurity_ExceptionFromErrorCode;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::NativeObjectSecurity);
MARK_REF_PTR_T(::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode);
// Dependencies System.MulticastDelegate
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: System.Security.AccessControl.NativeObjectSecurity/ExceptionFromErrorCode
class CORDL_TYPE NativeObjectSecurity_ExceptionFromErrorCode : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x5970400, size 0x14, virtual true, abstract: false, final false
  inline ::System::Exception* Invoke(int32_t errorCode, ::StringW name, ::System::Runtime::InteropServices::SafeHandle* handle, ::System::Object* context);

  static inline ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x597035c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeObjectSecurity_ExceptionFromErrorCode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeObjectSecurity_ExceptionFromErrorCode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeObjectSecurity_ExceptionFromErrorCode(NativeObjectSecurity_ExceptionFromErrorCode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeObjectSecurity_ExceptionFromErrorCode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeObjectSecurity_ExceptionFromErrorCode(NativeObjectSecurity_ExceptionFromErrorCode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3056 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode, 0x80>, "Size mismatch!");

} // namespace System::Security::AccessControl
// Dependencies System.Security.AccessControl.CommonObjectSecurity
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: System.Security.AccessControl.NativeObjectSecurity
class CORDL_TYPE NativeObjectSecurity : public ::System::Security::AccessControl::CommonObjectSecurity {
public:
  // Declarations
  using ExceptionFromErrorCode = ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode;

  /// @brief Field exception_from_error_code, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_exception_from_error_code,
                      put = __cordl_internal_set_exception_from_error_code)) ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* exception_from_error_code;

  /// @brief Method ClearAccessControlSectionsModified, addr 0x59700dc, size 0xa4, virtual false, abstract: false, final false
  inline void ClearAccessControlSectionsModified();

  /// @brief Method DefaultExceptionFromErrorCode, addr 0x59701c0, size 0x19c, virtual false, abstract: false, final false
  static inline ::System::Exception* DefaultExceptionFromErrorCode(int32_t errorCode, ::StringW name, ::System::Runtime::InteropServices::SafeHandle* handle, ::System::Object* context);

  /// @brief Method InternalGet, addr 0x59703c8, size 0x38, virtual true, abstract: false, final false
  inline int32_t InternalGet(::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections);

  static inline ::System::Security::AccessControl::NativeObjectSecurity* New_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType,
                                                                                  ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* exceptionFromErrorCode,
                                                                                  ::System::Object* exceptionContext);

  static inline ::System::Security::AccessControl::NativeObjectSecurity* New_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name,
                                                                                  ::System::Security::AccessControl::AccessControlSections includeSections);

  static inline ::System::Security::AccessControl::NativeObjectSecurity* New_ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name,
                                                                                  ::System::Security::AccessControl::AccessControlSections includeSections,
                                                                                  ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* exceptionFromErrorCode,
                                                                                  ::System::Object* exceptionContext);

  /// @brief Method RaiseExceptionOnFailure, addr 0x5970040, size 0x9c, virtual false, abstract: false, final false
  inline void RaiseExceptionOnFailure(int32_t errorCode, ::StringW name, ::System::Runtime::InteropServices::SafeHandle* handle, ::System::Object* context);

  constexpr ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* const& __cordl_internal_get_exception_from_error_code() const;

  constexpr ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*& __cordl_internal_get_exception_from_error_code();

  constexpr void __cordl_internal_set_exception_from_error_code(::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* value);

  /// @brief Method .ctor, addr 0x596ffa8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType,
                    ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* exceptionFromErrorCode, ::System::Object* exceptionContext);

  /// @brief Method .ctor, addr 0x596f6d8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections);

  /// @brief Method .ctor, addr 0x596ffd0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(bool isContainer, ::System::Security::AccessControl::ResourceType resourceType, ::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections,
                    ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* exceptionFromErrorCode, ::System::Object* exceptionContext);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeObjectSecurity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeObjectSecurity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeObjectSecurity(NativeObjectSecurity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeObjectSecurity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeObjectSecurity(NativeObjectSecurity const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3057 };

  /// @brief Field exception_from_error_code, offset: 0x28, size: 0x8, def value: None
  ::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode* ___exception_from_error_code;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::AccessControl::NativeObjectSecurity, ___exception_from_error_code) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::NativeObjectSecurity, 0x30>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::NativeObjectSecurity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::NativeObjectSecurity*, "System.Security.AccessControl", "NativeObjectSecurity");
NEED_NO_BOX(::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::NativeObjectSecurity_ExceptionFromErrorCode*, "System.Security.AccessControl", "NativeObjectSecurity/ExceptionFromErrorCode");
