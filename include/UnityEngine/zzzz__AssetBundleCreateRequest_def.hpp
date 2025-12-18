#pragma once
// IWYU pragma private; include "UnityEngine/AssetBundleCreateRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
CORDL_MODULE_EXPORT(AssetBundleCreateRequest)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class AssetBundleCreateRequest_BindingsMarshaller;
}
namespace UnityEngine {
class AssetBundle;
}
// Forward declare root types
namespace UnityEngine {
class AssetBundleCreateRequest;
}
namespace UnityEngine {
class AssetBundleCreateRequest_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AssetBundleCreateRequest);
MARK_REF_PTR_T(::UnityEngine::AssetBundleCreateRequest_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AssetBundleCreateRequest/BindingsMarshaller
class CORDL_TYPE AssetBundleCreateRequest_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToManaged, addr 0x687b648, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::AssetBundleCreateRequest* ConvertToManaged(::System::IntPtr ptr);

  /// @brief Method ConvertToNative, addr 0x687b6cc, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::AssetBundleCreateRequest* assetBundleCreateRequest);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleCreateRequest_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleCreateRequest_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleCreateRequest_BindingsMarshaller(AssetBundleCreateRequest_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleCreateRequest_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleCreateRequest_BindingsMarshaller(AssetBundleCreateRequest_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22679 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetBundleCreateRequest_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.AsyncOperation
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AssetBundleCreateRequest
class CORDL_TYPE AssetBundleCreateRequest : public ::UnityEngine::AsyncOperation {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::AssetBundleCreateRequest_BindingsMarshaller;

  __declspec(property(get = get_assetBundle)) ::UnityW<::UnityEngine::AssetBundle> assetBundle;

  static inline ::UnityEngine::AssetBundleCreateRequest* New_ctor(::System::IntPtr ptr);

  /// @brief Method .ctor, addr 0x687b5fc, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr);

  /// @brief Method get_assetBundle, addr 0x687b484, size 0x13c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::AssetBundle> get_assetBundle();

  /// @brief Method get_assetBundle_Injected, addr 0x687b5c0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_assetBundle_Injected(::System::IntPtr _unity_self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleCreateRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleCreateRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleCreateRequest(AssetBundleCreateRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleCreateRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleCreateRequest(AssetBundleCreateRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22680 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetBundleCreateRequest, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AssetBundleCreateRequest);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetBundleCreateRequest*, "UnityEngine", "AssetBundleCreateRequest");
NEED_NO_BOX(::UnityEngine::AssetBundleCreateRequest_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetBundleCreateRequest_BindingsMarshaller*, "UnityEngine", "AssetBundleCreateRequest/BindingsMarshaller");
