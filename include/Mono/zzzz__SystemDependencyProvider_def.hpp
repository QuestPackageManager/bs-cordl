#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SystemDependencyProvider)
namespace Mono {
class ISystemCertificateProvider;
}
namespace System {
class Object;
}
namespace Mono {
class X509PalImpl;
}
namespace Mono {
class ISystemDependencyProvider;
}
namespace Mono {
class SystemCertificateProvider;
}
// Forward declare root types
namespace Mono {
class SystemDependencyProvider;
}
// Write type traits
MARK_REF_PTR_T(::Mono::SystemDependencyProvider);
// Type: Mono::SystemDependencyProvider
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7588))
// CS Name: ::Mono::SystemDependencyProvider*
class CORDL_TYPE SystemDependencyProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field <CertificateProvider>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__CertificateProvider_k__BackingField, put = __set__CertificateProvider_k__BackingField))::Mono::SystemCertificateProvider* _CertificateProvider_k__BackingField;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instance, put = setStaticF_instance))::Mono::SystemDependencyProvider* instance;

  /// @brief Field syncRoot, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_syncRoot, put = setStaticF_syncRoot))::System::Object* syncRoot;

  __declspec(property(get = Mono_ISystemDependencyProvider_get_CertificateProvider))::Mono::ISystemCertificateProvider* Mono_ISystemDependencyProvider_CertificateProvider;

  __declspec(property(get = get_CertificateProvider))::Mono::SystemCertificateProvider* CertificateProvider;

  __declspec(property(get = get_X509Pal))::Mono::X509PalImpl* X509Pal;

  /// @brief Convert operator to "::Mono::ISystemDependencyProvider"
  constexpr operator ::Mono::ISystemDependencyProvider*() noexcept;

  constexpr ::Mono::SystemCertificateProvider*& __get__CertificateProvider_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Mono::SystemCertificateProvider*> const& __get__CertificateProvider_k__BackingField() const;

  constexpr void __set__CertificateProvider_k__BackingField(::Mono::SystemCertificateProvider* value);

  static inline void setStaticF_instance(::Mono::SystemDependencyProvider* value);

  static inline ::Mono::SystemDependencyProvider* getStaticF_instance();

  static inline void setStaticF_syncRoot(::System::Object* value);

  static inline ::System::Object* getStaticF_syncRoot();

  /// @brief Method get_Instance addr 0x269bb80 size 0x5c virtual false final false
  static inline ::Mono::SystemDependencyProvider* get_Instance();

  /// @brief Method Initialize addr 0x269bbdc size 0x154 virtual false final false
  static inline void Initialize();

  /// @brief Method Mono.ISystemDependencyProvider.get_CertificateProvider addr 0x269bdc8 size 0x8 virtual true final true
  inline ::Mono::ISystemCertificateProvider* Mono_ISystemDependencyProvider_get_CertificateProvider();

  /// @brief Method get_CertificateProvider addr 0x269bdd0 size 0x8 virtual false final false
  inline ::Mono::SystemCertificateProvider* get_CertificateProvider();

  /// @brief Method get_X509Pal addr 0x269bdd8 size 0x18 virtual false final false
  inline ::Mono::X509PalImpl* get_X509Pal();

  static inline ::Mono::SystemDependencyProvider* New_ctor();

  /// @brief Method .ctor addr 0x269bd30 size 0x98 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SystemDependencyProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemDependencyProvider(SystemDependencyProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemDependencyProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemDependencyProvider(SystemDependencyProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemDependencyProvider();

public:
  /// @brief Field <CertificateProvider>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Mono::SystemCertificateProvider* ____CertificateProvider_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::SystemDependencyProvider, 0x18>, "Size mismatch!");

static_assert(offsetof(::Mono::SystemDependencyProvider, ____CertificateProvider_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Mono
NEED_NO_BOX(::Mono::SystemDependencyProvider);
DEFINE_IL2CPP_ARG_TYPE(::Mono::SystemDependencyProvider*, "Mono", "SystemDependencyProvider");
