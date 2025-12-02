#pragma once
// IWYU pragma private; include "UnityEngine/AssetBundleUnloadOperation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
CORDL_MODULE_EXPORT(AssetBundleUnloadOperation)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class AssetBundleUnloadOperation_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine {
class AssetBundleUnloadOperation;
}
namespace UnityEngine {
class AssetBundleUnloadOperation_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AssetBundleUnloadOperation);
MARK_REF_PTR_T(::UnityEngine::AssetBundleUnloadOperation_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AssetBundleUnloadOperation/BindingsMarshaller
class CORDL_TYPE AssetBundleUnloadOperation_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToManaged, addr 0x68136bc, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::AssetBundleUnloadOperation* ConvertToManaged(::System::IntPtr ptr);

  /// @brief Method ConvertToNative, addr 0x6813f34, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::AssetBundleUnloadOperation* assetBundleUnloadOperation);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleUnloadOperation_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleUnloadOperation_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleUnloadOperation_BindingsMarshaller(AssetBundleUnloadOperation_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleUnloadOperation_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleUnloadOperation_BindingsMarshaller(AssetBundleUnloadOperation_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22686 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetBundleUnloadOperation_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.AsyncOperation
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AssetBundleUnloadOperation
class CORDL_TYPE AssetBundleUnloadOperation : public ::UnityEngine::AsyncOperation {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::AssetBundleUnloadOperation_BindingsMarshaller;

  static inline ::UnityEngine::AssetBundleUnloadOperation* New_ctor(::System::IntPtr ptr);

  /// @brief Method WaitForCompletion, addr 0x6813e5c, size 0x50, virtual false, abstract: false, final false
  inline void WaitForCompletion();

  /// @brief Method WaitForCompletion_Injected, addr 0x6813eac, size 0x3c, virtual false, abstract: false, final false
  static inline void WaitForCompletion_Injected(::System::IntPtr _unity_self);

  /// @brief Method .ctor, addr 0x6813ee8, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleUnloadOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleUnloadOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleUnloadOperation(AssetBundleUnloadOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleUnloadOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleUnloadOperation(AssetBundleUnloadOperation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22687 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetBundleUnloadOperation, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AssetBundleUnloadOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetBundleUnloadOperation*, "UnityEngine", "AssetBundleUnloadOperation");
NEED_NO_BOX(::UnityEngine::AssetBundleUnloadOperation_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetBundleUnloadOperation_BindingsMarshaller*, "UnityEngine", "AssetBundleUnloadOperation/BindingsMarshaller");
