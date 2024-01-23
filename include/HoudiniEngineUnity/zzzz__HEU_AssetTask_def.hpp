#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_AssetTask_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Task_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_AssetTask)
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
struct __HEU_AssetTask__BuildType;
}
namespace HoudiniEngineUnity {
struct __HEU_Task__TaskResult;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct __HEU_AssetTask__BuildType;
}
namespace HoudiniEngineUnity {
class HEU_AssetTask;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_AssetTask__BuildType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AssetTask);
// Type: ::BuildType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9801))
// CS Name: ::HEU_AssetTask::BuildType
struct CORDL_TYPE __HEU_AssetTask__BuildType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_AssetTask__BuildType_Unwrapped
  enum struct ____HEU_AssetTask__BuildType_Unwrapped : int32_t {
    __E_NONE = static_cast<int32_t>(0x0),
    __E_LOAD = static_cast<int32_t>(0x1),
    __E_COOK = static_cast<int32_t>(0x2),
    __E_RELOAD = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_AssetTask__BuildType_Unwrapped() const noexcept {
    return static_cast<____HEU_AssetTask__BuildType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_AssetTask__BuildType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_AssetTask__BuildType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NONE value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_AssetTask__BuildType const NONE;

  /// @brief Field LOAD value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_AssetTask__BuildType const LOAD;

  /// @brief Field COOK value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_AssetTask__BuildType const COOK;

  /// @brief Field RELOAD value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::__HEU_AssetTask__BuildType const RELOAD;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_AssetTask__BuildType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_AssetTask__BuildType, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_AssetTask
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(9800)), TypeDefinitionIndex(TypeDefinitionIndex(9801)), TypeDefinitionIndex(TypeDefinitionIndex(10249))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9802))
// CS Name: ::HoudiniEngineUnity::HEU_AssetTask*
class CORDL_TYPE HEU_AssetTask : public ::HoudiniEngineUnity::HEU_Task {
public:
  // Declarations
  using BuildType = ::HoudiniEngineUnity::__HEU_AssetTask__BuildType;

  /// @brief Field _buildType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__buildType, put = __cordl_internal_set__buildType))::HoudiniEngineUnity::__HEU_AssetTask__BuildType _buildType;

  /// @brief Field _asset, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__asset, put = __cordl_internal_set__asset))::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> _asset;

  /// @brief Field _assetPath, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__assetPath, put = __cordl_internal_set__assetPath))::StringW _assetPath;

  /// @brief Field _position, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get__position, put = __cordl_internal_set__position))::UnityEngine::Vector3 _position;

  /// @brief Field _buildResult, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get__buildResult, put = __cordl_internal_set__buildResult)) bool _buildResult;

  /// @brief Field _forceSessionID, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__forceSessionID, put = __cordl_internal_set__forceSessionID)) int64_t _forceSessionID;

  constexpr ::HoudiniEngineUnity::__HEU_AssetTask__BuildType& __cordl_internal_get__buildType();

  constexpr ::HoudiniEngineUnity::__HEU_AssetTask__BuildType const& __cordl_internal_get__buildType() const;

  constexpr void __cordl_internal_set__buildType(::HoudiniEngineUnity::__HEU_AssetTask__BuildType value);

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>& __cordl_internal_get__asset();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> const& __cordl_internal_get__asset() const;

  constexpr void __cordl_internal_set__asset(::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> value);

  constexpr ::StringW& __cordl_internal_get__assetPath();

  constexpr ::StringW const& __cordl_internal_get__assetPath() const;

  constexpr void __cordl_internal_set__assetPath(::StringW value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__position();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__position() const;

  constexpr void __cordl_internal_set__position(::UnityEngine::Vector3 value);

  constexpr bool& __cordl_internal_get__buildResult();

  constexpr bool const& __cordl_internal_get__buildResult() const;

  constexpr void __cordl_internal_set__buildResult(bool value);

  constexpr int64_t& __cordl_internal_get__forceSessionID();

  constexpr int64_t const& __cordl_internal_get__forceSessionID() const;

  constexpr void __cordl_internal_set__forceSessionID(int64_t value);

  /// @brief Method GetTaskSession, addr 0x21aa848, size 0xb4, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_SessionBase* GetTaskSession();

  /// @brief Method DoTask, addr 0x21aa8fc, size 0x5b0, virtual true, abstract: false, final false
  inline void DoTask();

  /// @brief Method KillTask, addr 0x21aaed4, size 0x240, virtual true, abstract: false, final false
  inline void KillTask();

  /// @brief Method CompleteTask, addr 0x21ab114, size 0x240, virtual true, abstract: false, final false
  inline void CompleteTask(::HoudiniEngineUnity::__HEU_Task__TaskResult result);

  /// @brief Method CookCompletedCallback, addr 0x21ab354, size 0x80, virtual false, abstract: false, final false
  inline void CookCompletedCallback(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool bSuccess, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputs);

  /// @brief Method CookCompletedCallback, addr 0x21ab3d4, size 0x10, virtual false, abstract: false, final false
  inline void CookCompletedCallback(::HoudiniEngineUnity::HEU_CookedEventData* cookedEventData);

  /// @brief Method CookCompletedCallback, addr 0x21ab3e4, size 0x10, virtual false, abstract: false, final false
  inline void CookCompletedCallback(::HoudiniEngineUnity::HEU_ReloadEventData* reloadEventData);

  static inline ::HoudiniEngineUnity::HEU_AssetTask* New_ctor();

  /// @brief Method .ctor, addr 0x21ab3f4, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetTask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_AssetTask(HEU_AssetTask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_AssetTask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_AssetTask(HEU_AssetTask const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AssetTask();

public:
  /// @brief Field _buildType, offset: 0x30, size: 0x4, def value: None
  ::HoudiniEngineUnity::__HEU_AssetTask__BuildType ____buildType;

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
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetTask, 0x60>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetTask, ____buildType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetTask, ____asset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetTask, ____assetPath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetTask, ____position) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetTask, ____buildResult) == 0x54, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetTask, ____forceSessionID) == 0x58, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_AssetTask__BuildType, "HoudiniEngineUnity", "HEU_AssetTask/BuildType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetTask);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetTask*, "HoudiniEngineUnity", "HEU_AssetTask");
