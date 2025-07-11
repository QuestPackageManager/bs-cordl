#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_AssetTask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_Task_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_AssetTask)
namespace HoudiniEngineUnity {
struct HEU_AssetTask_BuildType;
}
namespace HoudiniEngineUnity {
class HEU_CookedEventData;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_ReloadEventData;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
struct HEU_Task_TaskResult;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_AssetTask_BuildType;
}
namespace HoudiniEngineUnity {
class HEU_AssetTask;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HEU_AssetTask_BuildType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AssetTask);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_AssetTask/BuildType
struct CORDL_TYPE HEU_AssetTask_BuildType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_AssetTask_BuildType_Unwrapped
  enum struct __HEU_AssetTask_BuildType_Unwrapped : int32_t {
    __E_NONE = static_cast<int32_t>(0x0),
    __E_LOAD = static_cast<int32_t>(0x1),
    __E_COOK = static_cast<int32_t>(0x2),
    __E_RELOAD = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_AssetTask_BuildType_Unwrapped() const noexcept {
    return static_cast<__HEU_AssetTask_BuildType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AssetTask_BuildType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_AssetTask_BuildType(int32_t value__) noexcept;

  /// @brief Field COOK value: I32(2)
  static ::HoudiniEngineUnity::HEU_AssetTask_BuildType const COOK;

  /// @brief Field LOAD value: I32(1)
  static ::HoudiniEngineUnity::HEU_AssetTask_BuildType const LOAD;

  /// @brief Field NONE value: I32(0)
  static ::HoudiniEngineUnity::HEU_AssetTask_BuildType const NONE;

  /// @brief Field RELOAD value: I32(3)
  static ::HoudiniEngineUnity::HEU_AssetTask_BuildType const RELOAD;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11788 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetTask_BuildType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetTask_BuildType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.HEU_AssetTask::BuildType, HoudiniEngineUnity.HEU_Task, UnityEngine.Vector3
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_AssetTask
class CORDL_TYPE HEU_AssetTask : public ::HoudiniEngineUnity::HEU_Task {
public:
  // Declarations
  using BuildType = ::HoudiniEngineUnity::HEU_AssetTask_BuildType;

  /// @brief Field _asset, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__asset, put = __cordl_internal_set__asset)) ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> _asset;

  /// @brief Field _assetPath, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__assetPath, put = __cordl_internal_set__assetPath)) ::StringW _assetPath;

  /// @brief Field _buildResult, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get__buildResult, put = __cordl_internal_set__buildResult)) bool _buildResult;

  /// @brief Field _buildType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__buildType, put = __cordl_internal_set__buildType)) ::HoudiniEngineUnity::HEU_AssetTask_BuildType _buildType;

  /// @brief Field _forceSessionID, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__forceSessionID, put = __cordl_internal_set__forceSessionID)) int64_t _forceSessionID;

  /// @brief Field _position, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get__position, put = __cordl_internal_set__position)) ::UnityEngine::Vector3 _position;

  /// @brief Method CompleteTask, addr 0x3a613b8, size 0x230, virtual true, abstract: false, final false
  inline void CompleteTask(::HoudiniEngineUnity::HEU_Task_TaskResult result);

  /// @brief Method CookCompletedCallback, addr 0x3a615e8, size 0x80, virtual false, abstract: false, final false
  inline void CookCompletedCallback(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool bSuccess, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputs);

  /// @brief Method CookCompletedCallback, addr 0x3a61668, size 0x10, virtual false, abstract: false, final false
  inline void CookCompletedCallback(::HoudiniEngineUnity::HEU_CookedEventData* cookedEventData);

  /// @brief Method CookCompletedCallback, addr 0x3a61678, size 0x10, virtual false, abstract: false, final false
  inline void CookCompletedCallback(::HoudiniEngineUnity::HEU_ReloadEventData* reloadEventData);

  /// @brief Method DoTask, addr 0x3a60bc4, size 0x59c, virtual true, abstract: false, final false
  inline void DoTask();

  /// @brief Method GetTaskSession, addr 0x3a60b10, size 0xb4, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_SessionBase* GetTaskSession();

  /// @brief Method KillTask, addr 0x3a61188, size 0x230, virtual true, abstract: false, final false
  inline void KillTask();

  static inline ::HoudiniEngineUnity::HEU_AssetTask* New_ctor();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> const& __cordl_internal_get__asset() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>& __cordl_internal_get__asset();

  constexpr ::StringW const& __cordl_internal_get__assetPath() const;

  constexpr ::StringW& __cordl_internal_get__assetPath();

  constexpr bool const& __cordl_internal_get__buildResult() const;

  constexpr bool& __cordl_internal_get__buildResult();

  constexpr ::HoudiniEngineUnity::HEU_AssetTask_BuildType const& __cordl_internal_get__buildType() const;

  constexpr ::HoudiniEngineUnity::HEU_AssetTask_BuildType& __cordl_internal_get__buildType();

  constexpr int64_t const& __cordl_internal_get__forceSessionID() const;

  constexpr int64_t& __cordl_internal_get__forceSessionID();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__position() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__position();

  constexpr void __cordl_internal_set__asset(::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> value);

  constexpr void __cordl_internal_set__assetPath(::StringW value);

  constexpr void __cordl_internal_set__buildResult(bool value);

  constexpr void __cordl_internal_set__buildType(::HoudiniEngineUnity::HEU_AssetTask_BuildType value);

  constexpr void __cordl_internal_set__forceSessionID(int64_t value);

  constexpr void __cordl_internal_set__position(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x3a61688, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AssetTask();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetTask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_AssetTask(HEU_AssetTask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetTask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_AssetTask(HEU_AssetTask const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11789 };

  /// @brief Field _buildType, offset: 0x30, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_AssetTask_BuildType ____buildType;

  /// @brief Field _asset, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> ____asset;

  /// @brief Field _assetPath, offset: 0x40, size: 0x8, def value: None
  ::StringW ____assetPath;

  /// @brief Field _position, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____position;

  /// @brief Field _buildResult, offset: 0x54, size: 0x1, def value: None
  bool ____buildResult;

  /// @brief Field _forceSessionID, offset: 0x58, size: 0x8, def value: None
  int64_t ____forceSessionID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetTask, ____buildType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetTask, ____asset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetTask, ____assetPath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetTask, ____position) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetTask, ____buildResult) == 0x54, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetTask, ____forceSessionID) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetTask, 0x60>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetTask_BuildType, "HoudiniEngineUnity", "HEU_AssetTask/BuildType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetTask);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetTask*, "HoudiniEngineUnity", "HEU_AssetTask");
