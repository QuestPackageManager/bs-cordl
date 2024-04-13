#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CallbackHelpers)
namespace Mono::Net::Security::Private {
class __CallbackHelpers____c__DisplayClass0_0;
}
namespace Mono::Net::Security::Private {
class __CallbackHelpers____c__DisplayClass6_0;
}
namespace Mono::Security::Interface {
class MonoLocalCertificateSelectionCallback;
}
namespace Mono::Security::Interface {
class MonoRemoteCertificateValidationCallback;
}
namespace Mono::Security::Interface {
struct MonoSslPolicyErrors;
}
namespace System::Net::Security {
class LocalCertSelectionCallback;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
// Forward declare root types
namespace Mono::Net::Security::Private {
class CallbackHelpers;
}
namespace Mono::Net::Security::Private {
class __CallbackHelpers____c__DisplayClass0_0;
}
namespace Mono::Net::Security::Private {
class __CallbackHelpers____c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::Private::CallbackHelpers);
MARK_REF_PTR_T(::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0);
MARK_REF_PTR_T(::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0);
// Type: ::<>c__DisplayClass0_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Net::Security::Private {
// Is value type: false
// CS Name: ::CallbackHelpers::<>c__DisplayClass0_0*
class CORDL_TYPE __CallbackHelpers____c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback))::System::Net::Security::RemoteCertificateValidationCallback* callback;

  static inline ::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0* New_ctor();

  /// @brief Method <PublicToMono>b__0, addr 0x2b6ebf8, size 0x24, virtual false, abstract: false, final false
  inline bool _PublicToMono_b__0(::StringW h, ::System::Security::Cryptography::X509Certificates::X509Certificate* c, ::System::Security::Cryptography::X509Certificates::X509Chain* ch,
                                 ::Mono::Security::Interface::MonoSslPolicyErrors e);

  constexpr ::System::Net::Security::RemoteCertificateValidationCallback*& __cordl_internal_get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::RemoteCertificateValidationCallback*> const& __cordl_internal_get_callback() const;

  constexpr void __cordl_internal_set_callback(::System::Net::Security::RemoteCertificateValidationCallback* value);

  /// @brief Method .ctor, addr 0x2b6ebe8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CallbackHelpers____c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CallbackHelpers____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CallbackHelpers____c__DisplayClass0_0(__CallbackHelpers____c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CallbackHelpers____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CallbackHelpers____c__DisplayClass0_0(__CallbackHelpers____c__DisplayClass0_0 const&) = delete;

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Security::RemoteCertificateValidationCallback* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0, ___callback) == 0x10, "Offset mismatch!");

} // namespace Mono::Net::Security::Private
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Net::Security::Private {
// Is value type: false
// CS Name: ::CallbackHelpers::<>c__DisplayClass6_0*
class CORDL_TYPE __CallbackHelpers____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback))::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* callback;

  static inline ::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0* New_ctor();

  /// @brief Method <MonoToInternal>b__0, addr 0x2b6ec1c, size 0x24, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* _MonoToInternal_b__0(::StringW t, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* lc,
                                                                                                   ::System::Security::Cryptography::X509Certificates::X509Certificate* rc,
                                                                                                   ::ArrayW<::StringW, ::Array<::StringW>*> ai);

  constexpr ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*& __cordl_internal_get_callback();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*> const& __cordl_internal_get_callback() const;

  constexpr void __cordl_internal_set_callback(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* value);

  /// @brief Method .ctor, addr 0x2b6ebf0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CallbackHelpers____c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CallbackHelpers____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CallbackHelpers____c__DisplayClass6_0(__CallbackHelpers____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CallbackHelpers____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CallbackHelpers____c__DisplayClass6_0(__CallbackHelpers____c__DisplayClass6_0 const&) = delete;

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0, ___callback) == 0x10, "Offset mismatch!");

} // namespace Mono::Net::Security::Private
// Type: Mono.Net.Security.Private::CallbackHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Net::Security::Private {
// Is value type: false
// CS Name: ::Mono.Net.Security.Private::CallbackHelpers*
class CORDL_TYPE CallbackHelpers : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0;

  using __c__DisplayClass6_0 = ::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0;

  /// @brief Method MonoToInternal, addr 0x2b69278, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Net::Security::LocalCertSelectionCallback* MonoToInternal(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* callback);

  /// @brief Method PublicToMono, addr 0x2b6eb38, size 0xb0, virtual false, abstract: false, final false
  static inline ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* PublicToMono(::System::Net::Security::RemoteCertificateValidationCallback* callback);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallbackHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CallbackHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallbackHelpers(CallbackHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallbackHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallbackHelpers(CallbackHelpers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::Private::CallbackHelpers, 0x10>, "Size mismatch!");

} // namespace Mono::Net::Security::Private
NEED_NO_BOX(::Mono::Net::Security::Private::CallbackHelpers);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::Private::CallbackHelpers*, "Mono.Net.Security.Private", "CallbackHelpers");
NEED_NO_BOX(::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0*, "Mono.Net.Security.Private", "CallbackHelpers/<>c__DisplayClass0_0");
NEED_NO_BOX(::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0*, "Mono.Net.Security.Private", "CallbackHelpers/<>c__DisplayClass6_0");
