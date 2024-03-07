#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlatformAccessTokenFetcher)
namespace GlobalNamespace {
struct XPlatformAccessTokenData;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace BGNet::Core {
class IPlatformAccessTokenFetcher;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::IPlatformAccessTokenFetcher);
// Type: BGNet.Core::IPlatformAccessTokenFetcher
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Core {
// Is value type: false
// CS Name: ::BGNet.Core::IPlatformAccessTokenFetcher*
class CORDL_TYPE IPlatformAccessTokenFetcher {
public:
  // Declarations
  /// @brief Method GetXPlatformAccessToken, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* GetXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken, bool skipCache);

  // Ctor Parameters [CppParam { name: "", ty: "IPlatformAccessTokenFetcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPlatformAccessTokenFetcher(IPlatformAccessTokenFetcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPlatformAccessTokenFetcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlatformAccessTokenFetcher(IPlatformAccessTokenFetcher const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGNet::Core
NEED_NO_BOX(::BGNet::Core::IPlatformAccessTokenFetcher);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::IPlatformAccessTokenFetcher*, "BGNet.Core", "IPlatformAccessTokenFetcher");
