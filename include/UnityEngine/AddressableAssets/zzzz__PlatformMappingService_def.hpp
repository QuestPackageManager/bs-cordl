#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/PlatformMappingService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlatformMappingService)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::AddressableAssets {
struct AddressablesPlatform;
}
namespace UnityEngine {
struct RuntimePlatform;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class PlatformMappingService;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::PlatformMappingService);
// Type: UnityEngine.AddressableAssets::PlatformMappingService
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: ::UnityEngine.AddressableAssets::PlatformMappingService*
class CORDL_TYPE PlatformMappingService : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_RuntimeTargetMapping, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_RuntimeTargetMapping,
                             put = setStaticF_s_RuntimeTargetMapping))::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform,
                                                                                                                   ::UnityEngine::AddressableAssets::AddressablesPlatform>* s_RuntimeTargetMapping;

  /// @brief Method GetAddressablesPlatformInternal, addr 0x305e56c, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::AddressableAssets::AddressablesPlatform GetAddressablesPlatformInternal(::UnityEngine::RuntimePlatform platform);

  /// @brief Method GetAddressablesPlatformPathInternal, addr 0x305e640, size 0x120, virtual false, abstract: false, final false
  static inline ::StringW GetAddressablesPlatformPathInternal(::UnityEngine::RuntimePlatform platform);

  /// @brief Method GetPlatform, addr 0x305e760, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::AddressableAssets::AddressablesPlatform GetPlatform();

  /// @brief Method GetPlatformPathSubFolder, addr 0x3052418, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW GetPlatformPathSubFolder();

  static inline ::UnityEngine::AddressableAssets::PlatformMappingService* New_ctor();

  /// @brief Method .ctor, addr 0x305e7c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform, ::UnityEngine::AddressableAssets::AddressablesPlatform>* getStaticF_s_RuntimeTargetMapping();

  static inline void setStaticF_s_RuntimeTargetMapping(::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform, ::UnityEngine::AddressableAssets::AddressablesPlatform>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformMappingService();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformMappingService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformMappingService(PlatformMappingService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformMappingService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformMappingService(PlatformMappingService const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::PlatformMappingService, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::PlatformMappingService);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::PlatformMappingService*, "UnityEngine.AddressableAssets", "PlatformMappingService");
