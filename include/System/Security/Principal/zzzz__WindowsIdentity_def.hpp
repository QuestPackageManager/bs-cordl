#pragma once
// IWYU pragma private; include "System/Security/Principal/WindowsIdentity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Claims/zzzz__ClaimsIdentity_def.hpp"
#include "System/Security/Principal/zzzz__WindowsAccountType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsIdentity)
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Claims {
class ClaimsIdentity;
}
namespace System::Security::Principal {
class IIdentity;
}
namespace System::Security::Principal {
struct WindowsAccountType;
}
namespace System::Security::Principal {
class WindowsImpersonationContext;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Principal {
class WindowsIdentity;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Principal::WindowsIdentity);
// Type: System.Security.Principal::WindowsIdentity
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Principal {
// Is value type: false
// CS Name: ::System.Security.Principal::WindowsIdentity*
class CORDL_TYPE WindowsIdentity : public ::System::Security::Claims::ClaimsIdentity {
public:
  // Declarations
  __declspec(property(get = get_AuthenticationType))::StringW AuthenticationType;

  __declspec(property(get = get_Name))::StringW Name;

  /// @brief Field _account, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__account, put = __cordl_internal_set__account))::System::Security::Principal::WindowsAccountType _account;

  /// @brief Field _authenticated, offset 0x8c, size 0x1
  __declspec(property(get = __cordl_internal_get__authenticated, put = __cordl_internal_set__authenticated)) bool _authenticated;

  /// @brief Field _info, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__info, put = __cordl_internal_set__info))::System::Runtime::Serialization::SerializationInfo* _info;

  /// @brief Field _name, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name))::StringW _name;

  /// @brief Field _token, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__token, put = __cordl_internal_set__token))::System::IntPtr _token;

  /// @brief Field _type, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type))::StringW _type;

  /// @brief Field invalidWindows, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_invalidWindows, put = setStaticF_invalidWindows))::System::IntPtr invalidWindows;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert operator to "::System::Security::Principal::IIdentity"
  constexpr operator ::System::Security::Principal::IIdentity*() noexcept;

  /// @brief Method CloneAsBase, addr 0x281685c, size 0x4, virtual false, abstract: false, final false
  inline ::System::Security::Claims::ClaimsIdentity* CloneAsBase();

  /// @brief Method Dispose, addr 0x28161e0, size 0x50, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetCurrent, addr 0x2816230, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Security::Principal::WindowsIdentity* GetCurrent();

  /// @brief Method GetCurrentToken, addr 0x28162b4, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetCurrentToken();

  /// @brief Method GetTokenInternal, addr 0x28169b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::IntPtr GetTokenInternal();

  /// @brief Method GetTokenName, addr 0x2816418, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetTokenName(::System::IntPtr token);

  /// @brief Method Impersonate, addr 0x28162b8, size 0x64, virtual true, abstract: false, final false
  inline ::System::Security::Principal::WindowsImpersonationContext* Impersonate();

  static inline ::System::Security::Principal::WindowsIdentity* New_ctor(::System::Security::Claims::ClaimsIdentity* claimsIdentity, ::System::IntPtr userToken);

  static inline ::System::Security::Principal::WindowsIdentity* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Security::Principal::WindowsIdentity* New_ctor(::System::IntPtr userToken, ::StringW type, ::System::Security::Principal::WindowsAccountType acctType, bool isAuthenticated);

  /// @brief Method SetToken, addr 0x2815fa0, size 0x160, virtual false, abstract: false, final false
  inline void SetToken(::System::IntPtr token);

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x281641c, size 0x2d8, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x28166f4, size 0x168, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  constexpr ::System::Security::Principal::WindowsAccountType const& __cordl_internal_get__account() const;

  constexpr ::System::Security::Principal::WindowsAccountType& __cordl_internal_get__account();

  constexpr bool const& __cordl_internal_get__authenticated() const;

  constexpr bool& __cordl_internal_get__authenticated();

  constexpr ::System::Runtime::Serialization::SerializationInfo*& __cordl_internal_get__info();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> const& __cordl_internal_get__info() const;

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::System::IntPtr const& __cordl_internal_get__token() const;

  constexpr ::System::IntPtr& __cordl_internal_get__token();

  constexpr ::StringW const& __cordl_internal_get__type() const;

  constexpr ::StringW& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__account(::System::Security::Principal::WindowsAccountType value);

  constexpr void __cordl_internal_set__authenticated(bool value);

  constexpr void __cordl_internal_set__info(::System::Runtime::Serialization::SerializationInfo* value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__token(::System::IntPtr value);

  constexpr void __cordl_internal_set__type(::StringW value);

  /// @brief Method .ctor, addr 0x281613c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Claims::ClaimsIdentity* claimsIdentity, ::System::IntPtr userToken);

  /// @brief Method .ctor, addr 0x2816100, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x2815f3c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr userToken, ::StringW type, ::System::Security::Principal::WindowsAccountType acctType, bool isAuthenticated);

  static inline ::System::IntPtr getStaticF_invalidWindows();

  /// @brief Method get_AuthenticationType, addr 0x28163a8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_AuthenticationType();

  /// @brief Method get_Name, addr 0x28163b0, size 0x68, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Convert to "::System::Security::Principal::IIdentity"
  constexpr ::System::Security::Principal::IIdentity* i___System__Security__Principal__IIdentity() noexcept;

  static inline void setStaticF_invalidWindows(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WindowsIdentity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WindowsIdentity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WindowsIdentity(WindowsIdentity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WindowsIdentity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WindowsIdentity(WindowsIdentity const&) = delete;

  /// @brief Field _token, offset: 0x78, size: 0x8, def value: None
  ::System::IntPtr ____token;

  /// @brief Field _type, offset: 0x80, size: 0x8, def value: None
  ::StringW ____type;

  /// @brief Field _account, offset: 0x88, size: 0x4, def value: None
  ::System::Security::Principal::WindowsAccountType ____account;

  /// @brief Field _authenticated, offset: 0x8c, size: 0x1, def value: None
  bool ____authenticated;

  /// @brief Field _name, offset: 0x90, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _info, offset: 0x98, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationInfo* ____info;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Principal::WindowsIdentity, 0xa0>, "Size mismatch!");

static_assert(offsetof(::System::Security::Principal::WindowsIdentity, ____token) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Security::Principal::WindowsIdentity, ____type) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Security::Principal::WindowsIdentity, ____account) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Security::Principal::WindowsIdentity, ____authenticated) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::System::Security::Principal::WindowsIdentity, ____name) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Security::Principal::WindowsIdentity, ____info) == 0x98, "Offset mismatch!");

} // namespace System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::WindowsIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::WindowsIdentity*, "System.Security.Principal", "WindowsIdentity");
