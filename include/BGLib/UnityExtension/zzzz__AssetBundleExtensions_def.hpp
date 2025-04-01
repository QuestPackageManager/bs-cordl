#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/AssetBundleExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AssetBundleExtensions)
namespace BGLib::UnityExtension {
class AssetBundleExtensions___c__DisplayClass0_0;
}
namespace BGLib::UnityExtension {
class AssetBundleExtensions___c__DisplayClass1_0;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace UnityEngine {
class AssetBundleCreateRequest;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ResourceRequest;
}
// Forward declare root types
namespace BGLib::UnityExtension {
class AssetBundleExtensions;
}
namespace BGLib::UnityExtension {
class AssetBundleExtensions___c__DisplayClass0_0;
}
namespace BGLib::UnityExtension {
class AssetBundleExtensions___c__DisplayClass1_0;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::AssetBundleExtensions);
MARK_REF_PTR_T(::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0);
MARK_REF_PTR_T(::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0);
// Dependencies System.Object
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: BGLib.UnityExtension.AssetBundleExtensions/<>c__DisplayClass0_0
class CORDL_TYPE AssetBundleExtensions___c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field assetBundleCreateRequest, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_assetBundleCreateRequest, put = __cordl_internal_set_assetBundleCreateRequest)) ::UnityEngine::AssetBundleCreateRequest* assetBundleCreateRequest;

  /// @brief Field loadAssetBundleTaskSource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_loadAssetBundleTaskSource,
                      put = __cordl_internal_set_loadAssetBundleTaskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::AssetBundle>>* loadAssetBundleTaskSource;

  static inline ::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0* New_ctor();

  /// @brief Method <GetAwaiter>b__0, addr 0x22b2e04, size 0x68, virtual false, abstract: false, final false
  inline void _GetAwaiter_b__0(::UnityEngine::AsyncOperation* _);

  constexpr ::UnityEngine::AssetBundleCreateRequest* const& __cordl_internal_get_assetBundleCreateRequest() const;

  constexpr ::UnityEngine::AssetBundleCreateRequest*& __cordl_internal_get_assetBundleCreateRequest();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::AssetBundle>>* const& __cordl_internal_get_loadAssetBundleTaskSource() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::AssetBundle>>*& __cordl_internal_get_loadAssetBundleTaskSource();

  constexpr void __cordl_internal_set_assetBundleCreateRequest(::UnityEngine::AssetBundleCreateRequest* value);

  constexpr void __cordl_internal_set_loadAssetBundleTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::AssetBundle>>* value);

  /// @brief Method .ctor, addr 0x22b2cbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleExtensions___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleExtensions___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleExtensions___c__DisplayClass0_0(AssetBundleExtensions___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleExtensions___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleExtensions___c__DisplayClass0_0(AssetBundleExtensions___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17166 };

  /// @brief Field loadAssetBundleTaskSource, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::AssetBundle>>* ___loadAssetBundleTaskSource;

  /// @brief Field assetBundleCreateRequest, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AssetBundleCreateRequest* ___assetBundleCreateRequest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0, ___loadAssetBundleTaskSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0, ___assetBundleCreateRequest) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0, 0x20>, "Size mismatch!");

} // namespace BGLib::UnityExtension
// Dependencies System.Object
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: BGLib.UnityExtension.AssetBundleExtensions/<>c__DisplayClass1_0
class CORDL_TYPE AssetBundleExtensions___c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field loadResourceTaskSource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_loadResourceTaskSource,
                      put = __cordl_internal_set_loadResourceTaskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Object>>* loadResourceTaskSource;

  /// @brief Field resourceRequest, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_resourceRequest, put = __cordl_internal_set_resourceRequest)) ::UnityEngine::ResourceRequest* resourceRequest;

  static inline ::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0* New_ctor();

  /// @brief Method <GetAwaiter>b__0, addr 0x22b2e6c, size 0x68, virtual false, abstract: false, final false
  inline void _GetAwaiter_b__0(::UnityEngine::AsyncOperation* _);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_loadResourceTaskSource() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_loadResourceTaskSource();

  constexpr ::UnityEngine::ResourceRequest* const& __cordl_internal_get_resourceRequest() const;

  constexpr ::UnityEngine::ResourceRequest*& __cordl_internal_get_resourceRequest();

  constexpr void __cordl_internal_set_loadResourceTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Object>>* value);

  constexpr void __cordl_internal_set_resourceRequest(::UnityEngine::ResourceRequest* value);

  /// @brief Method .ctor, addr 0x22b2dfc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleExtensions___c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleExtensions___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleExtensions___c__DisplayClass1_0(AssetBundleExtensions___c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleExtensions___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleExtensions___c__DisplayClass1_0(AssetBundleExtensions___c__DisplayClass1_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17167 };

  /// @brief Field loadResourceTaskSource, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Object>>* ___loadResourceTaskSource;

  /// @brief Field resourceRequest, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ResourceRequest* ___resourceRequest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0, ___loadResourceTaskSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0, ___resourceRequest) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0, 0x20>, "Size mismatch!");

} // namespace BGLib::UnityExtension
// Dependencies System.Object
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: BGLib.UnityExtension.AssetBundleExtensions
class CORDL_TYPE AssetBundleExtensions : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0;

  using __c__DisplayClass1_0 = ::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0;

  /// @brief Method GetAwaiter, addr 0x22b2b84, size 0x138, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AssetBundle>> GetAwaiter(::UnityEngine::AssetBundleCreateRequest* assetBundleCreateRequest);

  /// @brief Method GetAwaiter, addr 0x22b2cc4, size 0x138, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Object>> GetAwaiter(::UnityEngine::ResourceRequest* resourceRequest);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetBundleExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetBundleExtensions(AssetBundleExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetBundleExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetBundleExtensions(AssetBundleExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17168 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::AssetBundleExtensions, 0x10>, "Size mismatch!");

} // namespace BGLib::UnityExtension
NEED_NO_BOX(::BGLib::UnityExtension::AssetBundleExtensions);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::AssetBundleExtensions*, "BGLib.UnityExtension", "AssetBundleExtensions");
NEED_NO_BOX(::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass0_0*, "BGLib.UnityExtension", "AssetBundleExtensions/<>c__DisplayClass0_0");
NEED_NO_BOX(::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::AssetBundleExtensions___c__DisplayClass1_0*, "BGLib.UnityExtension", "AssetBundleExtensions/<>c__DisplayClass1_0");
