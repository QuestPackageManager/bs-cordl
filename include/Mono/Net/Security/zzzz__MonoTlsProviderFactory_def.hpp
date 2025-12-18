#pragma once
// IWYU pragma private; include "Mono/Net/Security/MonoTlsProviderFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoTlsProviderFactory)
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
// Forward declare root types
namespace Mono::Net::Security {
class MonoTlsProviderFactory;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::MonoTlsProviderFactory);
// Dependencies System.Guid, System.Object
namespace Mono::Net::Security {
// Is value type: false
// CS Name: Mono.Net.Security.MonoTlsProviderFactory
class CORDL_TYPE MonoTlsProviderFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field AppleTlsId, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_AppleTlsId, put = setStaticF_AppleTlsId)) ::System::Guid AppleTlsId;

  /// @brief Field BtlsId, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_BtlsId, put = setStaticF_BtlsId)) ::System::Guid BtlsId;

  /// @brief Field UnityTlsId, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_UnityTlsId, put = setStaticF_UnityTlsId)) ::System::Guid UnityTlsId;

  /// @brief Field defaultProvider, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_defaultProvider, put = setStaticF_defaultProvider)) ::Mono::Net::Security::MobileTlsProvider* defaultProvider;

  /// @brief Field initialized, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_initialized, put = setStaticF_initialized)) bool initialized;

  /// @brief Field locker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_locker, put = setStaticF_locker)) ::System::Object* locker;

  /// @brief Field providerCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_providerCache,
                      put = setStaticF_providerCache)) ::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Net::Security::MobileTlsProvider*>* providerCache;

  /// @brief Field providerRegistration, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_providerRegistration,
                      put = setStaticF_providerRegistration)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Tuple_2<::System::Guid, ::StringW>*>* providerRegistration;

  /// @brief Method CreateDefaultProviderImpl, addr 0x5e28b84, size 0x188, virtual false, abstract: false, final false
  static inline ::Mono::Net::Security::MobileTlsProvider* CreateDefaultProviderImpl();

  /// @brief Method GetProvider, addr 0x5e294d0, size 0x50, virtual false, abstract: false, final false
  static inline ::Mono::Net::Security::MobileTlsProvider* GetProvider();

  /// @brief Method GetProviderInternal, addr 0x5e24214, size 0x118, virtual false, abstract: false, final false
  static inline ::Mono::Net::Security::MobileTlsProvider* GetProviderInternal();

  /// @brief Method InitializeInternal, addr 0x5e2852c, size 0x414, virtual false, abstract: false, final false
  static inline void InitializeInternal();

  /// @brief Method InitializeProviderRegistration, addr 0x5e28940, size 0x244, virtual false, abstract: false, final false
  static inline void InitializeProviderRegistration();

  /// @brief Method LookupProvider, addr 0x5e28d0c, size 0x5e4, virtual false, abstract: false, final false
  static inline ::Mono::Net::Security::MobileTlsProvider* LookupProvider(::StringW name, bool throwOnError);

  /// @brief Method PopulateProviders, addr 0x5e29458, size 0x78, virtual false, abstract: false, final false
  static inline void PopulateProviders();

  /// @brief Method PopulateUnityProviders, addr 0x5e292f0, size 0x168, virtual false, abstract: false, final false
  static inline void PopulateUnityProviders();

  static inline ::System::Guid getStaticF_AppleTlsId();

  static inline ::System::Guid getStaticF_BtlsId();

  static inline ::System::Guid getStaticF_UnityTlsId();

  static inline ::Mono::Net::Security::MobileTlsProvider* getStaticF_defaultProvider();

  static inline bool getStaticF_initialized();

  static inline ::System::Object* getStaticF_locker();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Net::Security::MobileTlsProvider*>* getStaticF_providerCache();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Tuple_2<::System::Guid, ::StringW>*>* getStaticF_providerRegistration();

  static inline void setStaticF_AppleTlsId(::System::Guid value);

  static inline void setStaticF_BtlsId(::System::Guid value);

  static inline void setStaticF_UnityTlsId(::System::Guid value);

  static inline void setStaticF_defaultProvider(::Mono::Net::Security::MobileTlsProvider* value);

  static inline void setStaticF_initialized(bool value);

  static inline void setStaticF_locker(::System::Object* value);

  static inline void setStaticF_providerCache(::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Net::Security::MobileTlsProvider*>* value);

  static inline void setStaticF_providerRegistration(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Tuple_2<::System::Guid, ::StringW>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoTlsProviderFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoTlsProviderFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoTlsProviderFactory(MonoTlsProviderFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoTlsProviderFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoTlsProviderFactory(MonoTlsProviderFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11010 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::MonoTlsProviderFactory, 0x10>, "Size mismatch!");

} // namespace Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::MonoTlsProviderFactory);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MonoTlsProviderFactory*, "Mono.Net.Security", "MonoTlsProviderFactory");
