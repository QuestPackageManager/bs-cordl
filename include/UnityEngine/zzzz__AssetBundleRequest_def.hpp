#pragma once
// IWYU pragma private; include "UnityEngine/AssetBundleRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ResourceRequest_def.hpp"
CORDL_MODULE_EXPORT(AssetBundleRequest)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class AssetBundleRequest_BindingsMarshaller;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AssetBundleRequest;
}
namespace UnityEngine {
class AssetBundleRequest_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AssetBundleRequest);
MARK_REF_PTR_T(::UnityEngine::AssetBundleRequest_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AssetBundleRequest/BindingsMarshaller
class CORDL_TYPE AssetBundleRequest_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToManaged, addr 0x687b93c, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::AssetBundleRequest* ConvertToManaged(::System::IntPtr ptr);

  /// @brief Method ConvertToNative, addr 0x687b9c0, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::AssetBundleRequest* request);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleRequest_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequest_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleRequest_BindingsMarshaller(AssetBundleRequest_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequest_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleRequest_BindingsMarshaller(AssetBundleRequest_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22682 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetBundleRequest_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.ResourceRequest
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AssetBundleRequest
class CORDL_TYPE AssetBundleRequest : public ::UnityEngine::ResourceRequest {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::AssetBundleRequest_BindingsMarshaller;

  __declspec(property(get = get_allAssets)) ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> allAssets;

  __declspec(property(get = get_asset)) ::UnityW<::UnityEngine::Object> asset;

  /// @brief Method GetResult, addr 0x687b6e0, size 0x13c, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> GetResult();

  /// @brief Method GetResult_Injected, addr 0x687b81c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetResult_Injected(::System::IntPtr _unity_self);

  static inline ::UnityEngine::AssetBundleRequest* New_ctor(::System::IntPtr ptr);

  /// @brief Method .ctor, addr 0x687b8f0, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr);

  /// @brief Method get_allAssets, addr 0x687b864, size 0x50, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> get_allAssets();

  /// @brief Method get_allAssets_Injected, addr 0x687b8b4, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> get_allAssets_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_asset, addr 0x687b858, size 0xc, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> get_asset();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleRequest(AssetBundleRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleRequest(AssetBundleRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22683 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetBundleRequest, 0x30>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AssetBundleRequest);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetBundleRequest*, "UnityEngine", "AssetBundleRequest");
NEED_NO_BOX(::UnityEngine::AssetBundleRequest_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetBundleRequest_BindingsMarshaller*, "UnityEngine", "AssetBundleRequest/BindingsMarshaller");
