#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ChainOperation_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ChainOperation_2)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement {
template <typename TObject, typename TObjectDependency> class ChainOperation_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::ChainOperation_2);
// Type: UnityEngine.ResourceManagement::ChainOperation`2
// SizeInfo { instance_size: 272, native_size: 265, calculated_instance_size: 272, calculated_native_size: 265, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement {
// cpp template
template <typename TObject, typename TObjectDependency>
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement::ChainOperation`2<TObject,TObjectDependency>*
class CORDL_TYPE ChainOperation_2 : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject> {
public:
  // Declarations
  __declspec(property(get = get_DebugName))::StringW DebugName;

  __declspec(property(get = get_Progress)) float_t Progress;

  /// @brief Field m_CachedOnWrappedCompleted, offset 0x100, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_CachedOnWrappedCompleted,
      put = __cordl_internal_set_m_CachedOnWrappedCompleted))::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* m_CachedOnWrappedCompleted;

  /// @brief Field m_Callback, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Callback,
                      put = __cordl_internal_set_m_Callback))::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,
                                                                              ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* m_Callback;

  /// @brief Field m_DepOp, offset 0x88, size 0x20
  __declspec(property(get = __cordl_internal_get_m_DepOp, put = __cordl_internal_set_m_DepOp))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> m_DepOp;

  /// @brief Field m_ReleaseDependenciesOnFailure, offset 0x108, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ReleaseDependenciesOnFailure, put = __cordl_internal_set_m_ReleaseDependenciesOnFailure)) bool m_ReleaseDependenciesOnFailure;

  /// @brief Field m_WrappedOp, offset 0xa8, size 0x20
  __declspec(property(get = __cordl_internal_get_m_WrappedOp, put = __cordl_internal_set_m_WrappedOp))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> m_WrappedOp;

  /// @brief Field m_depStatus, offset 0xc8, size 0x18
  __declspec(property(get = __cordl_internal_get_m_depStatus, put = __cordl_internal_set_m_depStatus))::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus m_depStatus;

  /// @brief Field m_wrapStatus, offset 0xe0, size 0x18
  __declspec(property(get = __cordl_internal_get_m_wrapStatus, put = __cordl_internal_set_m_wrapStatus))::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus m_wrapStatus;

  /// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Destroy();

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Execute();

  /// @brief Method GetDependencies, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* deps);

  /// @brief Method GetDownloadStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> dependentOp,
                   ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,
                                    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* callback,
                   bool releaseDependenciesOnFailure);

  /// @brief Method InvokeWaitForCompletion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  static inline ::UnityEngine::ResourceManagement::ChainOperation_2<TObject, TObjectDependency>* New_ctor();

  /// @brief Method OnWrappedCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnWrappedCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> x);

  /// @brief Method RefreshDownloadStatus, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RefreshDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>* visited);

  /// @brief Method ReleaseDependencies, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReleaseDependencies();

  constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*& __cordl_internal_get_m_CachedOnWrappedCompleted();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*> const&
  __cordl_internal_get_m_CachedOnWrappedCompleted() const;

  constexpr ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,
                             ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*&
  __cordl_internal_get_m_Callback();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,
                                                                 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*> const&
  __cordl_internal_get_m_Callback() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> const& __cordl_internal_get_m_DepOp() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>& __cordl_internal_get_m_DepOp();

  constexpr bool const& __cordl_internal_get_m_ReleaseDependenciesOnFailure() const;

  constexpr bool& __cordl_internal_get_m_ReleaseDependenciesOnFailure();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> const& __cordl_internal_get_m_WrappedOp() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>& __cordl_internal_get_m_WrappedOp();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus const& __cordl_internal_get_m_depStatus() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus& __cordl_internal_get_m_depStatus();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus const& __cordl_internal_get_m_wrapStatus() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus& __cordl_internal_get_m_wrapStatus();

  constexpr void __cordl_internal_set_m_CachedOnWrappedCompleted(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value);

  constexpr void __cordl_internal_set_m_Callback(::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>,
                                                                  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* value);

  constexpr void __cordl_internal_set_m_DepOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> value);

  constexpr void __cordl_internal_set_m_ReleaseDependenciesOnFailure(bool value);

  constexpr void __cordl_internal_set_m_WrappedOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> value);

  constexpr void __cordl_internal_set_m_depStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value);

  constexpr void __cordl_internal_set_m_wrapStatus(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DebugName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_DebugName();

  /// @brief Method get_Progress, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_Progress();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChainOperation_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChainOperation_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChainOperation_2(ChainOperation_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChainOperation_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChainOperation_2(ChainOperation_2 const&) = delete;

  /// @brief Field m_DepOp, offset: 0x88, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency> ___m_DepOp;

  /// @brief Field m_WrappedOp, offset: 0xa8, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> ___m_WrappedOp;

  /// @brief Field m_depStatus, offset: 0xc8, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus ___m_depStatus;

  /// @brief Field m_wrapStatus, offset: 0xe0, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus ___m_wrapStatus;

  /// @brief Field m_Callback, offset: 0xf8, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObjectDependency>, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*
      ___m_Callback;

  /// @brief Field m_CachedOnWrappedCompleted, offset: 0x100, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* ___m_CachedOnWrappedCompleted;

  /// @brief Field m_ReleaseDependenciesOnFailure, offset: 0x108, size: 0x1, def value: None
  bool ___m_ReleaseDependenciesOnFailure;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::ChainOperation_2, "UnityEngine.ResourceManagement", "ChainOperation`2");
