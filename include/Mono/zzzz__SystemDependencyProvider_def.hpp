#pragma once
// IWYU pragma private; include "Mono/SystemDependencyProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SystemDependencyProvider)
namespace Mono {
class ISystemCertificateProvider;
}
namespace Mono {
class ISystemDependencyProvider;
}
namespace Mono {
class SystemCertificateProvider;
}
namespace Mono {
class X509PalImpl;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono {
class SystemDependencyProvider;
}
// Write type traits
MARK_REF_PTR_T(::Mono::SystemDependencyProvider);
// Type: Mono::SystemDependencyProvider
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Mono {
// Is value type: false
// CS Name: ::Mono::SystemDependencyProvider*
class CORDL_TYPE SystemDependencyProvider : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CertificateProvider)) ::Mono::SystemCertificateProvider* CertificateProvider;

  __declspec(property(get = Mono_ISystemDependencyProvider_get_CertificateProvider)) ::Mono::ISystemCertificateProvider* Mono_ISystemDependencyProvider_CertificateProvider;

  __declspec(property(get = get_X509Pal)) ::Mono::X509PalImpl* X509Pal;

  /// @brief Field <CertificateProvider>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__CertificateProvider_k__BackingField,
                      put = __cordl_internal_set__CertificateProvider_k__BackingField)) ::Mono::SystemCertificateProvider* _CertificateProvider_k__BackingField;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instance, put = setStaticF_instance)) ::Mono::SystemDependencyProvider* instance;

  /// @brief Field syncRoot, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_syncRoot, put = setStaticF_syncRoot)) ::System::Object* syncRoot;

  /// @brief Convert operator to "::Mono::ISystemDependencyProvider"
  constexpr operator ::Mono::ISystemDependencyProvider*() noexcept;

  /// @brief Method Initialize, addr 0x40a7068, size 0x144, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method Mono.ISystemDependencyProvider.get_CertificateProvider, addr 0x40a7244, size 0x8, virtual true, abstract: false, final true
  inline ::Mono::ISystemCertificateProvider* Mono_ISystemDependencyProvider_get_CertificateProvider();

  static inline ::Mono::SystemDependencyProvider* New_ctor();

  constexpr ::Mono::SystemCertificateProvider*& __cordl_internal_get__CertificateProvider_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Mono::SystemCertificateProvider*> const& __cordl_internal_get__CertificateProvider_k__BackingField() const;

  constexpr void __cordl_internal_set__CertificateProvider_k__BackingField(::Mono::SystemCertificateProvider* value);

  /// @brief Method .ctor, addr 0x40a71ac, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Mono::SystemDependencyProvider* getStaticF_instance();

  static inline ::System::Object* getStaticF_syncRoot();

  /// @brief Method get_CertificateProvider, addr 0x40a724c, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::SystemCertificateProvider* get_CertificateProvider();

  /// @brief Method get_Instance, addr 0x40a700c, size 0x5c, virtual false, abstract: false, final false
  static inline ::Mono::SystemDependencyProvider* get_Instance();

  /// @brief Method get_X509Pal, addr 0x40a7254, size 0x18, virtual false, abstract: false, final false
  inline ::Mono::X509PalImpl* get_X509Pal();

  /// @brief Convert to "::Mono::ISystemDependencyProvider"
  constexpr ::Mono::ISystemDependencyProvider* i___Mono__ISystemDependencyProvider() noexcept;

  static inline void setStaticF_instance(::Mono::SystemDependencyProvider* value);

  static inline void setStaticF_syncRoot(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemDependencyProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SystemDependencyProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemDependencyProvider(SystemDependencyProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemDependencyProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemDependencyProvider(SystemDependencyProvider const&) = delete;

  /// @brief Field <CertificateProvider>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Mono::SystemCertificateProvider* ____CertificateProvider_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9041 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::SystemDependencyProvider, 0x18>, "Size mismatch!");

static_assert(offsetof(::Mono::SystemDependencyProvider, ____CertificateProvider_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Mono
NEED_NO_BOX(::Mono::SystemDependencyProvider);
DEFINE_IL2CPP_ARG_TYPE(::Mono::SystemDependencyProvider*, "Mono", "SystemDependencyProvider");
