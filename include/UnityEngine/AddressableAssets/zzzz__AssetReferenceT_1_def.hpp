#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/AssetReferenceT_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AddressableAssets/zzzz__AssetReference_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssetReferenceT_1)
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
template <typename TObject> class AssetReferenceT_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::AddressableAssets::AssetReferenceT_1);
// Dependencies UnityEngine.AddressableAssets.AssetReference
namespace UnityEngine::AddressableAssets {
// cpp template
template <typename TObject>
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.AssetReferenceT`1<TObject>
class CORDL_TYPE AssetReferenceT_1 : public ::UnityEngine::AddressableAssets::AssetReference {
public:
  // Declarations
  /// @brief Method LoadAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAsset();

  /// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync();

  static inline ::UnityEngine::AddressableAssets::AssetReferenceT_1<TObject>* New_ctor(::StringW guid);

  /// @brief Method ValidateAsset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool ValidateAsset(::StringW mainAssetPath);

  /// @brief Method ValidateAsset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool ValidateAsset(::UnityEngine::Object* obj);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW guid);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetReferenceT_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceT_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetReferenceT_1(AssetReferenceT_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetReferenceT_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetReferenceT_1(AssetReferenceT_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16182 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::AddressableAssets
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::AddressableAssets::AssetReferenceT_1, "UnityEngine.AddressableAssets", "AssetReferenceT`1");
