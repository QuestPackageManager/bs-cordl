#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_HoudiniAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_AssetInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Curve_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_HoudiniAsset)
namespace HoudiniEngineUnity {
class BakedEvent;
}
namespace HoudiniEngineUnity {
class CookedEvent;
}
namespace HoudiniEngineUnity {
struct HAPI_AssetInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_NodeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
class HEU_AssetPreset;
}
namespace HoudiniEngineUnity {
class HEU_AssetSerializedMetaData;
}
namespace HoudiniEngineUnity {
class HEU_AttributesStore;
}
namespace HoudiniEngineUnity {
class HEU_BakedDataEvent;
}
namespace HoudiniEngineUnity {
class HEU_CookedDataEvent;
}
namespace HoudiniEngineUnity {
struct HEU_Curve_CurveDrawCollision;
}
namespace HoudiniEngineUnity {
class HEU_Curve;
}
namespace HoudiniEngineUnity {
class HEU_GeneratedOutput;
}
namespace HoudiniEngineUnity {
class HEU_GeoNode;
}
namespace HoudiniEngineUnity {
class HEU_Handle;
}
namespace HoudiniEngineUnity {
struct HEU_HoudiniAsset_AssetBuildAction;
}
namespace HoudiniEngineUnity {
struct HEU_HoudiniAsset_AssetCookResult;
}
namespace HoudiniEngineUnity {
struct HEU_HoudiniAsset_AssetCookStatus;
}
namespace HoudiniEngineUnity {
struct HEU_HoudiniAsset_AssetInstantiationMethod;
}
namespace HoudiniEngineUnity {
struct HEU_HoudiniAsset_HEU_AssetType;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset_UpdateUIDelegate;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset___c;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset___c__DisplayClass281_0;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset___c__DisplayClass365_0;
}
namespace HoudiniEngineUnity {
class HEU_InputNode;
}
namespace HoudiniEngineUnity {
class HEU_InputPreset;
}
namespace HoudiniEngineUnity {
class HEU_InstanceInputUIState;
}
namespace HoudiniEngineUnity {
class HEU_MaterialData;
}
namespace HoudiniEngineUnity {
class HEU_ObjectInstanceInfo;
}
namespace HoudiniEngineUnity {
class HEU_ObjectNode;
}
namespace HoudiniEngineUnity {
class HEU_Parameters;
}
namespace HoudiniEngineUnity {
class HEU_PartData;
}
namespace HoudiniEngineUnity {
class HEU_PreAssetEvent;
}
namespace HoudiniEngineUnity {
class HEU_RecookPreset;
}
namespace HoudiniEngineUnity {
class HEU_ReloadDataEvent;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_ToolsInfo;
}
namespace HoudiniEngineUnity {
class HEU_VolumeCachePreset;
}
namespace HoudiniEngineUnity {
class HEU_VolumeCache;
}
namespace HoudiniEngineUnity {
class ReloadEvent;
}
namespace HoudiniEngineUnity {
struct TransformData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace UnityEngine::Events {
template <typename T0, typename T1, typename T2> class UnityAction_3;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_HoudiniAsset_AssetBuildAction;
}
namespace HoudiniEngineUnity {
struct HEU_HoudiniAsset_AssetCookResult;
}
namespace HoudiniEngineUnity {
struct HEU_HoudiniAsset_AssetCookStatus;
}
namespace HoudiniEngineUnity {
struct HEU_HoudiniAsset_AssetInstantiationMethod;
}
namespace HoudiniEngineUnity {
struct HEU_HoudiniAsset_HEU_AssetType;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset_UpdateUIDelegate;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset___c;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset___c__DisplayClass281_0;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset___c__DisplayClass365_0;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction);
MARK_VAL_T(::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult);
MARK_VAL_T(::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus);
MARK_VAL_T(::HoudiniEngineUnity::HEU_HoudiniAsset_AssetInstantiationMethod);
MARK_VAL_T(::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_HoudiniAsset);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_HoudiniAsset___c);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_HoudiniAsset/HEU_AssetType
struct CORDL_TYPE HEU_HoudiniAsset_HEU_AssetType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_HoudiniAsset_HEU_AssetType_Unwrapped
  enum struct __HEU_HoudiniAsset_HEU_AssetType_Unwrapped : int32_t {
    __E_TYPE_INVALID = static_cast<int32_t>(0x0),
    __E_TYPE_HDA = static_cast<int32_t>(0x1),
    __E_TYPE_CURVE = static_cast<int32_t>(0x2),
    __E_TYPE_INPUT = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_HoudiniAsset_HEU_AssetType_Unwrapped() const noexcept {
    return static_cast<__HEU_HoudiniAsset_HEU_AssetType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_HoudiniAsset_HEU_AssetType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_HoudiniAsset_HEU_AssetType(int32_t value__) noexcept;

  /// @brief Field TYPE_CURVE value: I32(2)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType const TYPE_CURVE;

  /// @brief Field TYPE_HDA value: I32(1)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType const TYPE_HDA;

  /// @brief Field TYPE_INPUT value: I32(3)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType const TYPE_INPUT;

  /// @brief Field TYPE_INVALID value: I32(0)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType const TYPE_INVALID;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11617 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_HoudiniAsset/AssetBuildAction
struct CORDL_TYPE HEU_HoudiniAsset_AssetBuildAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_HoudiniAsset_AssetBuildAction_Unwrapped
  enum struct __HEU_HoudiniAsset_AssetBuildAction_Unwrapped : int32_t {
    __E_NONE = static_cast<int32_t>(0x0),
    __E_RELOAD = static_cast<int32_t>(0x1),
    __E_COOK = static_cast<int32_t>(0x2),
    __E_INVALID = static_cast<int32_t>(0x3),
    __E_STRIP_HEDATA = static_cast<int32_t>(0x4),
    __E_DUPLICATE = static_cast<int32_t>(0x5),
    __E_RESET_PARAMS = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_HoudiniAsset_AssetBuildAction_Unwrapped() const noexcept {
    return static_cast<__HEU_HoudiniAsset_AssetBuildAction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_HoudiniAsset_AssetBuildAction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_HoudiniAsset_AssetBuildAction(int32_t value__) noexcept;

  /// @brief Field COOK value: I32(2)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction const COOK;

  /// @brief Field DUPLICATE value: I32(5)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction const DUPLICATE;

  /// @brief Field INVALID value: I32(3)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction const INVALID;

  /// @brief Field NONE value: I32(0)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction const NONE;

  /// @brief Field RELOAD value: I32(1)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction const RELOAD;

  /// @brief Field RESET_PARAMS value: I32(6)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction const RESET_PARAMS;

  /// @brief Field STRIP_HEDATA value: I32(4)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction const STRIP_HEDATA;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11618 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_HoudiniAsset/AssetCookStatus
struct CORDL_TYPE HEU_HoudiniAsset_AssetCookStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_HoudiniAsset_AssetCookStatus_Unwrapped
  enum struct __HEU_HoudiniAsset_AssetCookStatus_Unwrapped : int32_t {
    __E_NONE = static_cast<int32_t>(0x0),
    __E_COOKING = static_cast<int32_t>(0x1),
    __E_POSTCOOK = static_cast<int32_t>(0x2),
    __E_LOADING = static_cast<int32_t>(0x3),
    __E_POSTLOAD = static_cast<int32_t>(0x4),
    __E_PRELOAD = static_cast<int32_t>(0x5),
    __E_SELECT_SUBASSET = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_HoudiniAsset_AssetCookStatus_Unwrapped() const noexcept {
    return static_cast<__HEU_HoudiniAsset_AssetCookStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_HoudiniAsset_AssetCookStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_HoudiniAsset_AssetCookStatus(int32_t value__) noexcept;

  /// @brief Field COOKING value: I32(1)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus const COOKING;

  /// @brief Field LOADING value: I32(3)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus const LOADING;

  /// @brief Field NONE value: I32(0)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus const NONE;

  /// @brief Field POSTCOOK value: I32(2)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus const POSTCOOK;

  /// @brief Field POSTLOAD value: I32(4)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus const POSTLOAD;

  /// @brief Field PRELOAD value: I32(5)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus const PRELOAD;

  /// @brief Field SELECT_SUBASSET value: I32(6)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus const SELECT_SUBASSET;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11619 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_HoudiniAsset/AssetCookResult
struct CORDL_TYPE HEU_HoudiniAsset_AssetCookResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_HoudiniAsset_AssetCookResult_Unwrapped
  enum struct __HEU_HoudiniAsset_AssetCookResult_Unwrapped : int32_t {
    __E_NONE = static_cast<int32_t>(0x0),
    __E_SUCCESS = static_cast<int32_t>(0x1),
    __E_ERRORED = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_HoudiniAsset_AssetCookResult_Unwrapped() const noexcept {
    return static_cast<__HEU_HoudiniAsset_AssetCookResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_HoudiniAsset_AssetCookResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_HoudiniAsset_AssetCookResult(int32_t value__) noexcept;

  /// @brief Field ERRORED value: I32(2)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult const ERRORED;

  /// @brief Field NONE value: I32(0)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult const NONE;

  /// @brief Field SUCCESS value: I32(1)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult const SUCCESS;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11620 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies System.MulticastDelegate
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_HoudiniAsset/UpdateUIDelegate
class CORDL_TYPE HEU_HoudiniAsset_UpdateUIDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3a23820, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3a23840, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3a2380c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3a23784, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_HoudiniAsset_UpdateUIDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniAsset_UpdateUIDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_HoudiniAsset_UpdateUIDelegate(HEU_HoudiniAsset_UpdateUIDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniAsset_UpdateUIDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_HoudiniAsset_UpdateUIDelegate(HEU_HoudiniAsset_UpdateUIDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11621 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate, 0x80>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_HoudiniAsset/AssetInstantiationMethod
struct CORDL_TYPE HEU_HoudiniAsset_AssetInstantiationMethod {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_HoudiniAsset_AssetInstantiationMethod_Unwrapped
  enum struct __HEU_HoudiniAsset_AssetInstantiationMethod_Unwrapped : int32_t {
    __E_DEFAULT = static_cast<int32_t>(0x0),
    __E_DUPLICATED = static_cast<int32_t>(0x1),
    __E_UNDO = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_HoudiniAsset_AssetInstantiationMethod_Unwrapped() const noexcept {
    return static_cast<__HEU_HoudiniAsset_AssetInstantiationMethod_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_HoudiniAsset_AssetInstantiationMethod();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_HoudiniAsset_AssetInstantiationMethod(int32_t value__) noexcept;

  /// @brief Field DEFAULT value: I32(0)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetInstantiationMethod const DEFAULT;

  /// @brief Field DUPLICATED value: I32(1)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetInstantiationMethod const DUPLICATED;

  /// @brief Field UNDO value: I32(2)
  static ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetInstantiationMethod const UNDO;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11622 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset_AssetInstantiationMethod, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HoudiniAsset_AssetInstantiationMethod, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_HoudiniAsset/<>c
class CORDL_TYPE HEU_HoudiniAsset___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::HoudiniEngineUnity::HEU_HoudiniAsset___c* __9;

  /// @brief Field <>9__309_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__309_0, put = setStaticF___9__309_0)) ::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_Curve>, bool>* __9__309_0;

  /// @brief Field <>9__364_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__364_0, put = setStaticF___9__364_0)) ::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>, bool>* __9__364_0;

  /// @brief Field <>9__364_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__364_1, put = setStaticF___9__364_1)) ::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_Curve>, bool>* __9__364_1;

  /// @brief Field <>9__364_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__364_2, put = setStaticF___9__364_2)) ::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>, bool>* __9__364_2;

  static inline ::HoudiniEngineUnity::HEU_HoudiniAsset___c* New_ctor();

  /// @brief Method <ClearInvalidCurves>b__309_0, addr 0x3a238b0, size 0x5c, virtual false, abstract: false, final false
  inline bool _ClearInvalidCurves_b__309_0(::HoudiniEngineUnity::HEU_Curve* curve);

  /// @brief Method <ClearInvalidLists>b__364_0, addr 0x3a2390c, size 0x5c, virtual false, abstract: false, final false
  inline bool _ClearInvalidLists_b__364_0(::HoudiniEngineUnity::HEU_ObjectNode* node);

  /// @brief Method <ClearInvalidLists>b__364_1, addr 0x3a23968, size 0x5c, virtual false, abstract: false, final false
  inline bool _ClearInvalidLists_b__364_1(::HoudiniEngineUnity::HEU_Curve* curve);

  /// @brief Method <ClearInvalidLists>b__364_2, addr 0x3a239c4, size 0x5c, virtual false, abstract: false, final false
  inline bool _ClearInvalidLists_b__364_2(::HoudiniEngineUnity::HEU_MaterialData* data);

  /// @brief Method .ctor, addr 0x3a238a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HoudiniEngineUnity::HEU_HoudiniAsset___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_Curve>, bool>* getStaticF___9__309_0();

  static inline ::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>, bool>* getStaticF___9__364_0();

  static inline ::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_Curve>, bool>* getStaticF___9__364_1();

  static inline ::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>, bool>* getStaticF___9__364_2();

  static inline void setStaticF___9(::HoudiniEngineUnity::HEU_HoudiniAsset___c* value);

  static inline void setStaticF___9__309_0(::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_Curve>, bool>* value);

  static inline void setStaticF___9__364_0(::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>, bool>* value);

  static inline void setStaticF___9__364_1(::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_Curve>, bool>* value);

  static inline void setStaticF___9__364_2(::System::Func_2<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_HoudiniAsset___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniAsset___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_HoudiniAsset___c(HEU_HoudiniAsset___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniAsset___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_HoudiniAsset___c(HEU_HoudiniAsset___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11623 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HoudiniAsset___c, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_HoudiniAsset/<>c__DisplayClass281_0
class CORDL_TYPE HEU_HoudiniAsset___c__DisplayClass281_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field previousTransformValues, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_previousTransformValues,
                      put = __cordl_internal_set_previousTransformValues)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* previousTransformValues;

  static inline ::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0* New_ctor();

  /// @brief Method <BakeToExistingPrefab>b__0, addr 0x3a23a28, size 0x108, virtual false, abstract: false, final false
  inline void _BakeToExistingPrefab_b__0(::UnityEngine::Transform* trans);

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* const& __cordl_internal_get_previousTransformValues() const;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*& __cordl_internal_get_previousTransformValues();

  constexpr void __cordl_internal_set_previousTransformValues(::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* value);

  /// @brief Method .ctor, addr 0x3a23a20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_HoudiniAsset___c__DisplayClass281_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniAsset___c__DisplayClass281_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_HoudiniAsset___c__DisplayClass281_0(HEU_HoudiniAsset___c__DisplayClass281_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniAsset___c__DisplayClass281_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_HoudiniAsset___c__DisplayClass281_0(HEU_HoudiniAsset___c__DisplayClass281_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11624 };

  /// @brief Field previousTransformValues, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* ___previousTransformValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0, ___previousTransformValues) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_HoudiniAsset/<>c__DisplayClass365_0
class CORDL_TYPE HEU_HoudiniAsset___c__DisplayClass365_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__0, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___9__0, put = __cordl_internal_set___9__0)) ::System::Predicate_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>* __9__0;

  /// @brief Field i, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_i, put = __cordl_internal_set_i)) int32_t i;

  /// @brief Field newAsset, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_newAsset, put = __cordl_internal_set_newAsset)) ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> newAsset;

  static inline ::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0* New_ctor();

  /// @brief Method <CopyPropertiesTo>b__0, addr 0x3a23b38, size 0x7c, virtual false, abstract: false, final false
  inline bool _CopyPropertiesTo_b__0(::HoudiniEngineUnity::HEU_Curve* curve);

  constexpr ::System::Predicate_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>* const& __cordl_internal_get___9__0() const;

  constexpr ::System::Predicate_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>*& __cordl_internal_get___9__0();

  constexpr int32_t const& __cordl_internal_get_i() const;

  constexpr int32_t& __cordl_internal_get_i();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> const& __cordl_internal_get_newAsset() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>& __cordl_internal_get_newAsset();

  constexpr void __cordl_internal_set___9__0(::System::Predicate_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>* value);

  constexpr void __cordl_internal_set_i(int32_t value);

  constexpr void __cordl_internal_set_newAsset(::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> value);

  /// @brief Method .ctor, addr 0x3a23b30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_HoudiniAsset___c__DisplayClass365_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniAsset___c__DisplayClass365_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_HoudiniAsset___c__DisplayClass365_0(HEU_HoudiniAsset___c__DisplayClass365_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniAsset___c__DisplayClass365_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_HoudiniAsset___c__DisplayClass365_0(HEU_HoudiniAsset___c__DisplayClass365_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11625 };

  /// @brief Field newAsset, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> ___newAsset;

  /// @brief Field i, offset: 0x18, size: 0x4, def value: None
  int32_t ___i;

  /// @brief Field <>9__0, offset: 0x20, size: 0x8, def value: None
  ::System::Predicate_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>* _____9__0;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0, ___newAsset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0, ___i) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0, _____9__0) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0, 0x28>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.HAPI_AssetInfo, HoudiniEngineUnity.HAPI_NodeInfo, HoudiniEngineUnity.HEU_Curve::CurveDrawCollision, HoudiniEngineUnity.HEU_HoudiniAsset::AssetBuildAction,
// HoudiniEngineUnity.HEU_HoudiniAsset::AssetCookResult, HoudiniEngineUnity.HEU_HoudiniAsset::AssetCookStatus, HoudiniEngineUnity.HEU_HoudiniAsset::HEU_AssetType, HoudiniEngineUnity.IEquivable`1<T>,
// UnityEngine.LayerMask, UnityEngine.Matrix4x4, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_HoudiniAsset
class CORDL_TYPE HEU_HoudiniAsset : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using AssetBuildAction = ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction;

  using AssetCookResult = ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult;

  using AssetCookStatus = ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus;

  using AssetInstantiationMethod = ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetInstantiationMethod;

  using HEU_AssetType = ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType;

  using UpdateUIDelegate = ::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate;

  using __c = ::HoudiniEngineUnity::HEU_HoudiniAsset___c;

  using __c__DisplayClass281_0 = ::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0;

  using __c__DisplayClass365_0 = ::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0;

  __declspec(property(get = get_AlwaysOverwriteOnLoad, put = set_AlwaysOverwriteOnLoad)) bool AlwaysOverwriteOnLoad;

  __declspec(property(get = get_AssetHelp)) ::StringW AssetHelp;

  __declspec(property(get = get_AssetID)) int32_t AssetID;

  __declspec(property(get = get_AssetInfo)) ::HoudiniEngineUnity::HAPI_AssetInfo AssetInfo;

  __declspec(property(get = get_AssetName)) ::StringW AssetName;

  __declspec(property(get = get_AssetOpName)) ::StringW AssetOpName;

  __declspec(property(get = get_AssetPath)) ::StringW AssetPath;

  __declspec(property(get = get_AssetType)) ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType AssetType;

  __declspec(property(get = get_AutoCookOnParameterChange, put = set_AutoCookOnParameterChange)) bool AutoCookOnParameterChange;

  __declspec(property(get = get_BakeUpdateKeepPreviousTransformValues, put = set_BakeUpdateKeepPreviousTransformValues)) bool BakeUpdateKeepPreviousTransformValues;

  __declspec(property(get = get_CookingTriggersDownCooks, put = set_CookingTriggersDownCooks)) bool CookingTriggersDownCooks;

  __declspec(property(get = get_CurveCookOnDrag, put = set_CurveCookOnDrag)) bool CurveCookOnDrag;

  __declspec(property(get = get_CurveDisableScaleRotation, put = set_CurveDisableScaleRotation)) bool CurveDisableScaleRotation;

  __declspec(property(get = get_CurveDrawCollision, put = set_CurveDrawCollision)) ::HoudiniEngineUnity::HEU_Curve_CurveDrawCollision CurveDrawCollision;

  __declspec(property(get = get_CurveEditorEnabled, put = set_CurveEditorEnabled)) bool CurveEditorEnabled;

  __declspec(property(get = get_CurveFrameSelectedNodeDistance, put = set_CurveFrameSelectedNodeDistance)) float_t CurveFrameSelectedNodeDistance;

  __declspec(property(get = get_CurveFrameSelectedNodes, put = set_CurveFrameSelectedNodes)) bool CurveFrameSelectedNodes;

  __declspec(property(get = get_EditableNodesToolsEnabled, put = set_EditableNodesToolsEnabled)) bool EditableNodesToolsEnabled;

  __declspec(property(get = get_GenerateMeshUsingPoints, put = set_GenerateMeshUsingPoints)) bool GenerateMeshUsingPoints;

  __declspec(property(get = get_GenerateNormals, put = set_GenerateNormals)) bool GenerateNormals;

  __declspec(property(get = get_GenerateTangents, put = set_GenerateTangents)) bool GenerateTangents;

  __declspec(property(get = get_GenerateUVs, put = set_GenerateUVs)) bool GenerateUVs;

  __declspec(property(get = get_GeoInputCount)) int32_t GeoInputCount;

  __declspec(property(get = get_HandleCount)) int32_t HandleCount;

  __declspec(property(get = get_HandlesEnabled, put = set_HandlesEnabled)) bool HandlesEnabled;

  __declspec(property(get = get_IgnoreNonDisplayNodes, put = set_IgnoreNonDisplayNodes)) bool IgnoreNonDisplayNodes;

  __declspec(property(get = get_InstanceInputUIState, put = set_InstanceInputUIState)) ::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState> InstanceInputUIState;

  __declspec(property(get = get_LoadAssetFromMemory, put = set_LoadAssetFromMemory)) bool LoadAssetFromMemory;

  __declspec(property(get = get_NodeInfo)) ::HoudiniEngineUnity::HAPI_NodeInfo NodeInfo;

  __declspec(property(get = get_OwnerGameObject)) ::UnityW<::UnityEngine::GameObject> OwnerGameObject;

  __declspec(property(get = get_Parameters)) ::UnityW<::HoudiniEngineUnity::HEU_Parameters> Parameters;

  __declspec(property(get = get_PauseCooking, put = set_PauseCooking)) bool PauseCooking;

  __declspec(property(get = get_PendingAutoCookOnMouseRelease, put = set_PendingAutoCookOnMouseRelease)) bool PendingAutoCookOnMouseRelease;

  __declspec(property(get = get_PushTransformToHoudini, put = set_PushTransformToHoudini)) bool PushTransformToHoudini;

  __declspec(property(get = get_RootGameObject)) ::UnityW<::UnityEngine::GameObject> RootGameObject;

  __declspec(property(get = get_SerializedMetaData)) ::UnityW<::HoudiniEngineUnity::HEU_AssetSerializedMetaData> SerializedMetaData;

  __declspec(property(get = get_SessionID)) int64_t SessionID;

  __declspec(property(get = get_SessionSyncAutoCook, put = set_SessionSyncAutoCook)) bool SessionSyncAutoCook;

  __declspec(property(get = get_SplitGeosByGroup, put = set_SplitGeosByGroup)) bool SplitGeosByGroup;

  __declspec(property(get = get_SubassetNames)) ::ArrayW<::StringW, ::Array<::StringW>*> SubassetNames;

  __declspec(property(get = get_ToolsInfo)) ::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo> ToolsInfo;

  __declspec(property(get = get_TransformChangeTriggersCooks, put = set_TransformChangeTriggersCooks)) bool TransformChangeTriggersCooks;

  __declspec(property(get = get_TransformInputCount)) int32_t TransformInputCount;

  __declspec(property(get = get_UseLODGroups, put = set_UseLODGroups)) bool UseLODGroups;

  __declspec(property(get = get_WarnedPrefabNotSupported, put = set_WarnedPrefabNotSupported)) bool WarnedPrefabNotSupported;

  /// @brief Field <WarnedPrefabNotSupported>k__BackingField, offset 0x190, size 0x1
  __declspec(property(get = __cordl_internal_get__WarnedPrefabNotSupported_k__BackingField,
                      put = __cordl_internal_set__WarnedPrefabNotSupported_k__BackingField)) bool _WarnedPrefabNotSupported_k__BackingField;

  /// @brief Field _alwaysOverwriteOnLoad, offset 0xd1, size 0x1
  __declspec(property(get = __cordl_internal_get__alwaysOverwriteOnLoad, put = __cordl_internal_set__alwaysOverwriteOnLoad)) bool _alwaysOverwriteOnLoad;

  /// @brief Field _assetCacheFolderPath, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__assetCacheFolderPath, put = __cordl_internal_set__assetCacheFolderPath)) ::StringW _assetCacheFolderPath;

  /// @brief Field _assetFileObject, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__assetFileObject, put = __cordl_internal_set__assetFileObject)) ::UnityW<::UnityEngine::Object> _assetFileObject;

  /// @brief Field _assetHelp, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__assetHelp, put = __cordl_internal_set__assetHelp)) ::StringW _assetHelp;

  /// @brief Field _assetID, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get__assetID, put = __cordl_internal_set__assetID)) int32_t _assetID;

  /// @brief Field _assetInfo, offset 0x24, size 0x40
  __declspec(property(get = __cordl_internal_get__assetInfo, put = __cordl_internal_set__assetInfo)) ::HoudiniEngineUnity::HAPI_AssetInfo _assetInfo;

  /// @brief Field _assetName, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__assetName, put = __cordl_internal_set__assetName)) ::StringW _assetName;

  /// @brief Field _assetOpName, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__assetOpName, put = __cordl_internal_set__assetOpName)) ::StringW _assetOpName;

  /// @brief Field _assetPath, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__assetPath, put = __cordl_internal_set__assetPath)) ::StringW _assetPath;

  /// @brief Field _assetType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__assetType, put = __cordl_internal_set__assetType)) ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType _assetType;

  /// @brief Field _attributeStores, offset 0x258, size 0x8
  __declspec(property(get = __cordl_internal_get__attributeStores,
                      put = __cordl_internal_set__attributeStores)) ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>* _attributeStores;

  /// @brief Field _autoCookOnParameterChange, offset 0x1f6, size 0x1
  __declspec(property(get = __cordl_internal_get__autoCookOnParameterChange, put = __cordl_internal_set__autoCookOnParameterChange)) bool _autoCookOnParameterChange;

  /// @brief Field _bForceUpdate, offset 0x181, size 0x1
  __declspec(property(get = __cordl_internal_get__bForceUpdate, put = __cordl_internal_set__bForceUpdate)) bool _bForceUpdate;

  /// @brief Field _bakeUpdateKeepPreviousTransformValues, offset 0x1fc, size 0x1
  __declspec(property(get = __cordl_internal_get__bakeUpdateKeepPreviousTransformValues,
                      put = __cordl_internal_set__bakeUpdateKeepPreviousTransformValues)) bool _bakeUpdateKeepPreviousTransformValues;

  /// @brief Field _bakedDataEvent, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get__bakedDataEvent, put = __cordl_internal_set__bakedDataEvent)) ::HoudiniEngineUnity::HEU_BakedDataEvent* _bakedDataEvent;

  /// @brief Field _bakedEvent, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__bakedEvent, put = __cordl_internal_set__bakedEvent)) ::HoudiniEngineUnity::BakedEvent* _bakedEvent;

  /// @brief Field _checkParameterChangeForCook, offset 0x170, size 0x1
  __declspec(property(get = __cordl_internal_get__checkParameterChangeForCook, put = __cordl_internal_set__checkParameterChangeForCook)) bool _checkParameterChangeForCook;

  /// @brief Field _cookStatus, offset 0x178, size 0x4
  __declspec(property(get = __cordl_internal_get__cookStatus, put = __cordl_internal_set__cookStatus)) ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus _cookStatus;

  /// @brief Field _cookedDataEvent, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__cookedDataEvent, put = __cordl_internal_set__cookedDataEvent)) ::HoudiniEngineUnity::HEU_CookedDataEvent* _cookedDataEvent;

  /// @brief Field _cookedEvent, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__cookedEvent, put = __cordl_internal_set__cookedEvent)) ::HoudiniEngineUnity::CookedEvent* _cookedEvent;

  /// @brief Field _cookingTriggersDownCooks, offset 0x1f5, size 0x1
  __declspec(property(get = __cordl_internal_get__cookingTriggersDownCooks, put = __cordl_internal_set__cookingTriggersDownCooks)) bool _cookingTriggersDownCooks;

  /// @brief Field _curveCookOnDrag, offset 0x22d, size 0x1
  __declspec(property(get = __cordl_internal_get__curveCookOnDrag, put = __cordl_internal_set__curveCookOnDrag)) bool _curveCookOnDrag;

  /// @brief Field _curveDisableScaleRotation, offset 0x22c, size 0x1
  __declspec(property(get = __cordl_internal_get__curveDisableScaleRotation, put = __cordl_internal_set__curveDisableScaleRotation)) bool _curveDisableScaleRotation;

  /// @brief Field _curveDrawColliders, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get__curveDrawColliders,
                      put = __cordl_internal_set__curveDrawColliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* _curveDrawColliders;

  /// @brief Field _curveDrawCollision, offset 0x208, size 0x4
  __declspec(property(get = __cordl_internal_get__curveDrawCollision, put = __cordl_internal_set__curveDrawCollision)) ::HoudiniEngineUnity::HEU_Curve_CurveDrawCollision _curveDrawCollision;

  /// @brief Field _curveDrawLayerMask, offset 0x218, size 0x4
  __declspec(property(get = __cordl_internal_get__curveDrawLayerMask, put = __cordl_internal_set__curveDrawLayerMask)) ::UnityEngine::LayerMask _curveDrawLayerMask;

  /// @brief Field _curveEditorEnabled, offset 0x1fe, size 0x1
  __declspec(property(get = __cordl_internal_get__curveEditorEnabled, put = __cordl_internal_set__curveEditorEnabled)) bool _curveEditorEnabled;

  /// @brief Field _curveFrameSelectedNodeDistance, offset 0x230, size 0x4
  __declspec(property(get = __cordl_internal_get__curveFrameSelectedNodeDistance, put = __cordl_internal_set__curveFrameSelectedNodeDistance)) float_t _curveFrameSelectedNodeDistance;

  /// @brief Field _curveFrameSelectedNodes, offset 0x22e, size 0x1
  __declspec(property(get = __cordl_internal_get__curveFrameSelectedNodes, put = __cordl_internal_set__curveFrameSelectedNodes)) bool _curveFrameSelectedNodes;

  /// @brief Field _curveProjectDirection, offset 0x220, size 0xc
  __declspec(property(get = __cordl_internal_get__curveProjectDirection, put = __cordl_internal_set__curveProjectDirection)) ::UnityEngine::Vector3 _curveProjectDirection;

  /// @brief Field _curveProjectMaxDistance, offset 0x21c, size 0x4
  __declspec(property(get = __cordl_internal_get__curveProjectMaxDistance, put = __cordl_internal_set__curveProjectMaxDistance)) float_t _curveProjectMaxDistance;

  /// @brief Field _curves, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get__curves, put = __cordl_internal_set__curves)) ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>* _curves;

  /// @brief Field _downstreamConnectionCookedEvent, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get__downstreamConnectionCookedEvent,
                      put = __cordl_internal_set__downstreamConnectionCookedEvent)) ::HoudiniEngineUnity::CookedEvent* _downstreamConnectionCookedEvent;

  /// @brief Field _editableNodesToolsEnabled, offset 0x260, size 0x1
  __declspec(property(get = __cordl_internal_get__editableNodesToolsEnabled, put = __cordl_internal_set__editableNodesToolsEnabled)) bool _editableNodesToolsEnabled;

  /// @brief Field _forceUploadInputs, offset 0x173, size 0x1
  __declspec(property(get = __cordl_internal_get__forceUploadInputs, put = __cordl_internal_set__forceUploadInputs)) bool _forceUploadInputs;

  /// @brief Field _generateMeshUsingPoints, offset 0x1f8, size 0x1
  __declspec(property(get = __cordl_internal_get__generateMeshUsingPoints, put = __cordl_internal_set__generateMeshUsingPoints)) bool _generateMeshUsingPoints;

  /// @brief Field _generateNormals, offset 0x1f2, size 0x1
  __declspec(property(get = __cordl_internal_get__generateNormals, put = __cordl_internal_set__generateNormals)) bool _generateNormals;

  /// @brief Field _generateTangents, offset 0x1f1, size 0x1
  __declspec(property(get = __cordl_internal_get__generateTangents, put = __cordl_internal_set__generateTangents)) bool _generateTangents;

  /// @brief Field _generateUVs, offset 0x1f0, size 0x1
  __declspec(property(get = __cordl_internal_get__generateUVs, put = __cordl_internal_set__generateUVs)) bool _generateUVs;

  /// @brief Field _handles, offset 0x240, size 0x8
  __declspec(property(get = __cordl_internal_get__handles, put = __cordl_internal_set__handles)) ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>* _handles;

  /// @brief Field _handlesEnabled, offset 0x248, size 0x1
  __declspec(property(get = __cordl_internal_get__handlesEnabled, put = __cordl_internal_set__handlesEnabled)) bool _handlesEnabled;

  /// @brief Field _ignoreNonDisplayNodes, offset 0x1f7, size 0x1
  __declspec(property(get = __cordl_internal_get__ignoreNonDisplayNodes, put = __cordl_internal_set__ignoreNonDisplayNodes)) bool _ignoreNonDisplayNodes;

  /// @brief Field _inputNodes, offset 0x238, size 0x8
  __declspec(property(get = __cordl_internal_get__inputNodes,
                      put = __cordl_internal_set__inputNodes)) ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>* _inputNodes;

  /// @brief Field _instanceInputUIState, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get__instanceInputUIState, put = __cordl_internal_set__instanceInputUIState)) ::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState>
      _instanceInputUIState;

  /// @brief Field _isCookingAssetReloaded, offset 0x180, size 0x1
  __declspec(property(get = __cordl_internal_get__isCookingAssetReloaded, put = __cordl_internal_set__isCookingAssetReloaded)) bool _isCookingAssetReloaded;

  /// @brief Field _lastCookResult, offset 0x17c, size 0x4
  __declspec(property(get = __cordl_internal_get__lastCookResult, put = __cordl_internal_set__lastCookResult)) ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult _lastCookResult;

  /// @brief Field _lastSyncedTransformMatrix, offset 0x100, size 0x40
  __declspec(property(get = __cordl_internal_get__lastSyncedTransformMatrix, put = __cordl_internal_set__lastSyncedTransformMatrix)) ::UnityEngine::Matrix4x4 _lastSyncedTransformMatrix;

  /// @brief Field _loadAssetFromMemory, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get__loadAssetFromMemory, put = __cordl_internal_set__loadAssetFromMemory)) bool _loadAssetFromMemory;

  /// @brief Field _materialCache, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__materialCache,
                      put = __cordl_internal_set__materialCache)) ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* _materialCache;

  /// @brief Field _nodeInfo, offset 0x64, size 0x44
  __declspec(property(get = __cordl_internal_get__nodeInfo, put = __cordl_internal_set__nodeInfo)) ::HoudiniEngineUnity::HAPI_NodeInfo _nodeInfo;

  /// @brief Field _objectNodes, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__objectNodes,
                      put = __cordl_internal_set__objectNodes)) ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>>* _objectNodes;

  /// @brief Field _parameters, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__parameters, put = __cordl_internal_set__parameters)) ::UnityW<::HoudiniEngineUnity::HEU_Parameters> _parameters;

  /// @brief Field _pauseCooking, offset 0x1fd, size 0x1
  __declspec(property(get = __cordl_internal_get__pauseCooking, put = __cordl_internal_set__pauseCooking)) bool _pauseCooking;

  /// @brief Field _pendingAutoCookOnMouseRelease, offset 0x278, size 0x1
  __declspec(property(get = __cordl_internal_get__pendingAutoCookOnMouseRelease, put = __cordl_internal_set__pendingAutoCookOnMouseRelease)) bool _pendingAutoCookOnMouseRelease;

  /// @brief Field _preAssetEvent, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__preAssetEvent, put = __cordl_internal_set__preAssetEvent)) ::HoudiniEngineUnity::HEU_PreAssetEvent* _preAssetEvent;

  /// @brief Field _pushTransformToHoudini, offset 0x1f3, size 0x1
  __declspec(property(get = __cordl_internal_get__pushTransformToHoudini, put = __cordl_internal_set__pushTransformToHoudini)) bool _pushTransformToHoudini;

  /// @brief Field _recookPreset, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get__recookPreset, put = __cordl_internal_set__recookPreset)) ::HoudiniEngineUnity::HEU_RecookPreset* _recookPreset;

  /// @brief Field _refreshUIDelegate, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get__refreshUIDelegate, put = __cordl_internal_set__refreshUIDelegate)) ::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate* _refreshUIDelegate;

  /// @brief Field _reloadDataEvent, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__reloadDataEvent, put = __cordl_internal_set__reloadDataEvent)) ::HoudiniEngineUnity::HEU_ReloadDataEvent* _reloadDataEvent;

  /// @brief Field _reloadEvent, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__reloadEvent, put = __cordl_internal_set__reloadEvent)) ::HoudiniEngineUnity::ReloadEvent* _reloadEvent;

  /// @brief Field _requestBuildAction, offset 0x16c, size 0x4
  __declspec(property(get = __cordl_internal_get__requestBuildAction, put = __cordl_internal_set__requestBuildAction)) ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction _requestBuildAction;

  /// @brief Field _rootGameObject, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__rootGameObject, put = __cordl_internal_set__rootGameObject)) ::UnityW<::UnityEngine::GameObject> _rootGameObject;

  /// @brief Field _savedAssetPreset, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get__savedAssetPreset, put = __cordl_internal_set__savedAssetPreset)) ::HoudiniEngineUnity::HEU_AssetPreset* _savedAssetPreset;

  /// @brief Field _selectedSubassetIndex, offset 0x150, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedSubassetIndex, put = __cordl_internal_set__selectedSubassetIndex)) int32_t _selectedSubassetIndex;

  /// @brief Field _serializedMetaData, offset 0x270, size 0x8
  __declspec(property(get = __cordl_internal_get__serializedMetaData, put = __cordl_internal_set__serializedMetaData)) ::UnityW<::HoudiniEngineUnity::HEU_AssetSerializedMetaData> _serializedMetaData;

  /// @brief Field _sessionID, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__sessionID, put = __cordl_internal_set__sessionID)) int64_t _sessionID;

  /// @brief Field _sessionSyncAutoCook, offset 0x1fb, size 0x1
  __declspec(property(get = __cordl_internal_get__sessionSyncAutoCook, put = __cordl_internal_set__sessionSyncAutoCook)) bool _sessionSyncAutoCook;

  /// @brief Field _showBakeSection, offset 0x194, size 0x1
  __declspec(property(get = __cordl_internal_get__showBakeSection, put = __cordl_internal_set__showBakeSection)) bool _showBakeSection;

  /// @brief Field _showCurvesSection, offset 0x196, size 0x1
  __declspec(property(get = __cordl_internal_get__showCurvesSection, put = __cordl_internal_set__showCurvesSection)) bool _showCurvesSection;

  /// @brief Field _showEventsSection, offset 0x195, size 0x1
  __declspec(property(get = __cordl_internal_get__showEventsSection, put = __cordl_internal_set__showEventsSection)) bool _showEventsSection;

  /// @brief Field _showGenerateSection, offset 0x193, size 0x1
  __declspec(property(get = __cordl_internal_get__showGenerateSection, put = __cordl_internal_set__showGenerateSection)) bool _showGenerateSection;

  /// @brief Field _showHDAOptions, offset 0x192, size 0x1
  __declspec(property(get = __cordl_internal_get__showHDAOptions, put = __cordl_internal_set__showHDAOptions)) bool _showHDAOptions;

  /// @brief Field _showInputNodesSection, offset 0x197, size 0x1
  __declspec(property(get = __cordl_internal_get__showInputNodesSection, put = __cordl_internal_set__showInputNodesSection)) bool _showInputNodesSection;

  /// @brief Field _showTerrainSection, offset 0x199, size 0x1
  __declspec(property(get = __cordl_internal_get__showTerrainSection, put = __cordl_internal_set__showTerrainSection)) bool _showTerrainSection;

  /// @brief Field _showToolsSection, offset 0x198, size 0x1
  __declspec(property(get = __cordl_internal_get__showToolsSection, put = __cordl_internal_set__showToolsSection)) bool _showToolsSection;

  /// @brief Field _skipCookCheck, offset 0x171, size 0x1
  __declspec(property(get = __cordl_internal_get__skipCookCheck, put = __cordl_internal_set__skipCookCheck)) bool _skipCookCheck;

  /// @brief Field _splitGeosByGroup, offset 0x1fa, size 0x1
  __declspec(property(get = __cordl_internal_get__splitGeosByGroup, put = __cordl_internal_set__splitGeosByGroup)) bool _splitGeosByGroup;

  /// @brief Field _subassetNames, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__subassetNames, put = __cordl_internal_set__subassetNames)) ::ArrayW<::StringW, ::Array<::StringW>*> _subassetNames;

  /// @brief Field _toolsInfo, offset 0x268, size 0x8
  __declspec(property(get = __cordl_internal_get__toolsInfo, put = __cordl_internal_set__toolsInfo)) ::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo> _toolsInfo;

  /// @brief Field _totalCookCount, offset 0x168, size 0x4
  __declspec(property(get = __cordl_internal_get__totalCookCount, put = __cordl_internal_set__totalCookCount)) int32_t _totalCookCount;

  /// @brief Field _transformChangeTriggersCooks, offset 0x1f4, size 0x1
  __declspec(property(get = __cordl_internal_get__transformChangeTriggersCooks, put = __cordl_internal_set__transformChangeTriggersCooks)) bool _transformChangeTriggersCooks;

  /// @brief Field _uiLocked, offset 0x191, size 0x1
  __declspec(property(get = __cordl_internal_get__uiLocked, put = __cordl_internal_set__uiLocked)) bool _uiLocked;

  /// @brief Field _uploadParameters, offset 0x172, size 0x1
  __declspec(property(get = __cordl_internal_get__uploadParameters, put = __cordl_internal_set__uploadParameters)) bool _uploadParameters;

  /// @brief Field _upstreamCookChanged, offset 0x174, size 0x1
  __declspec(property(get = __cordl_internal_get__upstreamCookChanged, put = __cordl_internal_set__upstreamCookChanged)) bool _upstreamCookChanged;

  /// @brief Field _useLODGroups, offset 0x1f9, size 0x1
  __declspec(property(get = __cordl_internal_get__useLODGroups, put = __cordl_internal_set__useLODGroups)) bool _useLODGroups;

  /// @brief Field _volumeCaches, offset 0x250, size 0x8
  __declspec(property(get = __cordl_internal_get__volumeCaches,
                      put = __cordl_internal_set__volumeCaches)) ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>* _volumeCaches;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>>*() noexcept;

  /// @brief Method AddAttributeStore, addr 0x3a1ea54, size 0x198, virtual false, abstract: false, final false
  inline void AddAttributeStore(::HoudiniEngineUnity::HEU_AttributesStore* attributeStore);

  /// @brief Method AddCurve, addr 0x3a08b94, size 0xd0, virtual false, abstract: false, final false
  inline void AddCurve(::HoudiniEngineUnity::HEU_Curve* curve);

  /// @brief Method AddCurveDrawCollider, addr 0x3a1e1ac, size 0xd0, virtual false, abstract: false, final false
  inline void AddCurveDrawCollider(::UnityEngine::Collider* newCollider);

  /// @brief Method AddDownstreamConnection, addr 0x3a1d06c, size 0x80, virtual false, abstract: false, final false
  inline void AddDownstreamConnection(
      ::UnityEngine::Events::UnityAction_3<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>, bool, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>* receiver);

  /// @brief Method AddInputNode, addr 0x3a107f0, size 0xd0, virtual false, abstract: false, final false
  inline void AddInputNode(::HoudiniEngineUnity::HEU_InputNode* node);

  /// @brief Method AddToAssetDBCache, addr 0x3a1f2f0, size 0x60, virtual false, abstract: false, final false
  inline void AddToAssetDBCache(::StringW assetObjectFileName, ::UnityEngine::Object* objectToAdd, ::StringW relativeFolderPath, ::ByRef<::UnityEngine::Object*> targetAssetDBObject);

  /// @brief Method AddVolumeCache, addr 0x3a1e7b0, size 0xd0, virtual false, abstract: false, final false
  inline void AddVolumeCache(::HoudiniEngineUnity::HEU_VolumeCache* cache);

  /// @brief Method ApplyInputPresets, addr 0x3a20ef8, size 0x3a4, virtual false, abstract: false, final false
  inline bool ApplyInputPresets(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>* inputPresets,
                                bool bAddMissingInputsToRecookPreset);

  /// @brief Method ApplyRecookPreset, addr 0x3a194b4, size 0x7c, virtual false, abstract: false, final false
  inline void ApplyRecookPreset();

  /// @brief Method ApplyVolumeCachePresets, addr 0x3a2129c, size 0x4c4, virtual false, abstract: false, final false
  inline bool ApplyVolumeCachePresets(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>* volumeCachePresets);

  /// @brief Method AssetUpdate, addr 0x3a13df0, size 0x4, virtual false, abstract: false, final false
  inline void AssetUpdate();

  /// @brief Method Awake, addr 0x3a13de4, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method BakeToExistingPrefab, addr 0x3a1bd14, size 0x674, virtual false, abstract: false, final false
  inline void BakeToExistingPrefab(::UnityEngine::GameObject* bakeTargetGO);

  /// @brief Method BakeToExistingStandalone, addr 0x3a1c388, size 0xc2c, virtual false, abstract: false, final false
  inline void BakeToExistingStandalone(::UnityEngine::GameObject* bakeTargetGO);

  /// @brief Method BakeToNewPrefab, addr 0x3a1b768, size 0x3e8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> BakeToNewPrefab(::StringW destinationPrefabPath);

  /// @brief Method BakeToNewStandalone, addr 0x3a1bb50, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> BakeToNewStandalone();

  /// @brief Method CalculateColliderState, addr 0x3a1f918, size 0x14c, virtual false, abstract: false, final false
  inline void CalculateColliderState();

  /// @brief Method CalculateVisibility, addr 0x3a1f680, size 0x14c, virtual false, abstract: false, final false
  inline void CalculateVisibility();

  /// @brief Method CleanUpAndDisable, addr 0x3a13ad0, size 0x5c, virtual false, abstract: false, final false
  inline void CleanUpAndDisable();

  /// @brief Method CleanUpHandles, addr 0x3a1a37c, size 0x120, virtual false, abstract: false, final false
  inline void CleanUpHandles();

  /// @brief Method CleanUpInputNodes, addr 0x3a1a0fc, size 0x280, virtual false, abstract: false, final false
  inline void CleanUpInputNodes();

  /// @brief Method ClearAllUpstreamConnections, addr 0x3a19e74, size 0x288, virtual false, abstract: false, final false
  inline void ClearAllUpstreamConnections();

  /// @brief Method ClearBuildRequest, addr 0x3a13e18, size 0x10, virtual false, abstract: false, final false
  inline void ClearBuildRequest();

  /// @brief Method ClearCurveDrawColliders, addr 0x3a1e2dc, size 0x6c, virtual false, abstract: false, final false
  inline void ClearCurveDrawColliders();

  /// @brief Method ClearInvalidCurves, addr 0x3a1a4d0, size 0x104, virtual false, abstract: false, final false
  inline void ClearInvalidCurves();

  /// @brief Method ClearInvalidLists, addr 0x3a140dc, size 0x26c, virtual false, abstract: false, final false
  inline void ClearInvalidLists();

  /// @brief Method ClearMaterialCache, addr 0x3a19e04, size 0x70, virtual false, abstract: false, final false
  inline void ClearMaterialCache();

  /// @brief Method CloneAssetWithoutHDA, addr 0x3a1b01c, size 0x5d8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> CloneAssetWithoutHDA(::ByRef<::StringW> bakedAssetPath, bool bWriteMeshesToAssetDatabase, bool bReconnectPrefabInstances);

  /// @brief Method ConnectToUpstream, addr 0x3a1cfe0, size 0x8c, virtual false, abstract: false, final false
  inline void ConnectToUpstream(::HoudiniEngineUnity::HEU_HoudiniAsset* upstreamAsset);

  /// @brief Method CopyPropertiesTo, addr 0x3a1fd68, size 0xc10, virtual false, abstract: false, final false
  inline void CopyPropertiesTo(::HoudiniEngineUnity::HEU_HoudiniAsset* newAsset);

  /// @brief Method CreateAndCookAsset, addr 0x3a154fc, size 0x28c, virtual false, abstract: false, final false
  inline bool CreateAndCookAsset(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t subassetIndex, ::ByRef<int32_t> newAssetID, bool bCookTemplatedGeos);

  /// @brief Method CreateAssetInputs, addr 0x3a157f4, size 0x518, virtual false, abstract: false, final false
  inline void CreateAssetInputs(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method CreateObjectNode, addr 0x3a1a91c, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_ObjectNode> CreateObjectNode(::HoudiniEngineUnity::HEU_SessionBase* session, ::ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo> objectInfo,
                                                                         ::ByRef<::HoudiniEngineUnity::HAPI_Transform> objectTranform);

  /// @brief Method CreateObjects, addr 0x3a15f2c, size 0x168, virtual false, abstract: false, final false
  inline bool CreateObjects(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method DeleteAllGeneratedData, addr 0x3a13b38, size 0x294, virtual false, abstract: false, final false
  inline void DeleteAllGeneratedData(bool bIsRebuild);

  /// @brief Method DeleteAssetCacheData, addr 0x3a1a49c, size 0x34, virtual false, abstract: false, final false
  inline void DeleteAssetCacheData(bool bRegisterUndo);

  /// @brief Method DeleteSessionDataOnly, addr 0x3a19da0, size 0x64, virtual false, abstract: false, final false
  inline void DeleteSessionDataOnly();

  /// @brief Method DisableAllColliders, addr 0x3a1f7cc, size 0x14c, virtual false, abstract: false, final false
  inline void DisableAllColliders();

  /// @brief Method DisconnectFromUpstream, addr 0x3a1d0ec, size 0x8c, virtual false, abstract: false, final false
  inline void DisconnectFromUpstream(::HoudiniEngineUnity::HEU_HoudiniAsset* upstreamAsset);

  /// @brief Method DoPostCookWork, addr 0x3a176e0, size 0x17c, virtual false, abstract: false, final false
  inline void DoPostCookWork(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method DoesAssetRequireRecook, addr 0x3a19998, size 0x408, virtual false, abstract: false, final false
  inline bool DoesAssetRequireRecook();

  /// @brief Method DownloadParameterPresetFromHoudini, addr 0x3a189f4, size 0x98, virtual false, abstract: false, final false
  inline void DownloadParameterPresetFromHoudini(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method DuplicateAsset, addr 0x3a1fa64, size 0x304, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> DuplicateAsset(::UnityEngine::GameObject* newRootGameObject);

  /// @brief Method ExecutePostCookCallbacks, addr 0x3a17294, size 0xa4, virtual false, abstract: false, final false
  inline void ExecutePostCookCallbacks();

  /// @brief Method FinishRebuild, addr 0x3a144e0, size 0x5a0, virtual false, abstract: false, final false
  inline bool FinishRebuild();

  /// @brief Method GenerateAttributesStore, addr 0x3a164f4, size 0x154, virtual false, abstract: false, final false
  inline void GenerateAttributesStore(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GenerateHandles, addr 0x3a16648, size 0x190, virtual false, abstract: false, final false
  inline void GenerateHandles(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GenerateInstances, addr 0x3a161ec, size 0x308, virtual false, abstract: false, final false
  inline void GenerateInstances(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GenerateObjectsGeometry, addr 0x3a16094, size 0x158, virtual false, abstract: false, final false
  inline void GenerateObjectsGeometry(::HoudiniEngineUnity::HEU_SessionBase* session, bool bRebuild);

  /// @brief Method GenerateParameters, addr 0x3a15d0c, size 0x220, virtual false, abstract: false, final false
  inline void GenerateParameters(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GetAssetInputNode, addr 0x3a1a5d4, size 0x17c, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_InputNode> GetAssetInputNode(::StringW inputName);

  /// @brief Method GetAssetPreset, addr 0x3a06868, size 0x7a0, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_AssetPreset* GetAssetPreset();

  /// @brief Method GetAssetSession, addr 0x3a03628, size 0x150, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_SessionBase* GetAssetSession(bool bCreateIfInvalid);

  /// @brief Method GetAttributeStore, addr 0x3a1e8d4, size 0x180, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_AttributesStore> GetAttributeStore(::StringW geoName, int32_t partID);

  /// @brief Method GetAttributesStores, addr 0x3a1e880, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>* GetAttributesStores();

  /// @brief Method GetClonableParts, addr 0x3a1b5f4, size 0x174, virtual false, abstract: false, final false
  inline void GetClonableParts(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_PartData>>* clonableParts);

  /// @brief Method GetCookStatus, addr 0x3a18654, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus GetCookStatus();

  /// @brief Method GetCurve, addr 0x3a1de9c, size 0x1b8, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_Curve> GetCurve(::StringW curveName);

  /// @brief Method GetCurveDrawColliders, addr 0x3a136b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* GetCurveDrawColliders();

  /// @brief Method GetCurveDrawLayerMask, addr 0x3a136bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask GetCurveDrawLayerMask();

  /// @brief Method GetCurves, addr 0x3a1de94, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>* GetCurves();

  /// @brief Method GetEditableCurveCount, addr 0x3a1e054, size 0x158, virtual false, abstract: false, final false
  inline int32_t GetEditableCurveCount();

  /// @brief Method GetHandleByName, addr 0x3a1a9f4, size 0x168, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_Handle> GetHandleByName(::StringW handleName);

  /// @brief Method GetHandles, addr 0x3a1ab5c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>* GetHandles();

  /// @brief Method GetHoudiniTransformAndApply, addr 0x3a1d364, size 0x2c0, virtual false, abstract: false, final false
  inline void GetHoudiniTransformAndApply(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method GetInputNode, addr 0x3a1e350, size 0x168, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_InputNode> GetInputNode(::StringW inputName);

  /// @brief Method GetInputNodeByIndex, addr 0x3a1e4b8, size 0x84, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_InputNode> GetInputNodeByIndex(int32_t index);

  /// @brief Method GetInputNodes, addr 0x3a1e348, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>* GetInputNodes();

  /// @brief Method GetInstantiatedObject, addr 0x3a221b8, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> GetInstantiatedObject();

  /// @brief Method GetInstantiationMethod, addr 0x3a21fb0, size 0x208, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetInstantiationMethod GetInstantiationMethod();

  /// @brief Method GetInternalHDAPartWithGameObject, addr 0x3a1dcfc, size 0x198, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_PartData> GetInternalHDAPartWithGameObject(::UnityEngine::GameObject* outputGameObject);

  /// @brief Method GetMaterialCache, addr 0x3a1d7b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* GetMaterialCache();

  /// @brief Method GetMaterialData, addr 0x3a1d624, size 0x190, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_MaterialData> GetMaterialData(::UnityEngine::Material* material);

  /// @brief Method GetNonParameterInputNodes, addr 0x3a1e53c, size 0x220, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>* GetNonParameterInputNodes();

  /// @brief Method GetObjectNodeByName, addr 0x3a03fec, size 0x27c, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_ObjectNode> GetObjectNodeByName(::StringW objName);

  /// @brief Method GetObjectTransform, addr 0x3a1abb0, size 0x23c, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HAPI_Transform GetObjectTransform(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t objectID);

  /// @brief Method GetObjectWithID, addr 0x3a1adec, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_ObjectNode> GetObjectWithID(int32_t objId);

  /// @brief Method GetOutput, addr 0x3a1da54, size 0x154, virtual false, abstract: false, final false
  inline void GetOutput(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* outputs);

  /// @brief Method GetOutputGameObjects, addr 0x3a14a8c, size 0x154, virtual false, abstract: false, final false
  inline void GetOutputGameObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects);

  /// @brief Method GetOutputGeoNodes, addr 0x3a1dba8, size 0x154, virtual false, abstract: false, final false
  inline void GetOutputGeoNodes(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_GeoNode>>* outputGeoNodes);

  /// @brief Method GetSceneHDAAssetFromGameObject, addr 0x3a1ee40, size 0x144, virtual false, abstract: false, final false
  static inline ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> GetSceneHDAAssetFromGameObject(::UnityEngine::GameObject* outputGameObject);

  /// @brief Method GetSceneHDAPartWithGameObject, addr 0x3a1ecfc, size 0x144, virtual false, abstract: false, final false
  static inline ::UnityW<::HoudiniEngineUnity::HEU_PartData> GetSceneHDAPartWithGameObject(::UnityEngine::GameObject* outputGameObject);

  /// @brief Method GetValidAssetCacheFolderPath, addr 0x3a1d7bc, size 0x90, virtual false, abstract: false, final false
  inline ::StringW GetValidAssetCacheFolderPath();

  /// @brief Method GetVolumeCacheCount, addr 0x3a1e760, size 0x48, virtual false, abstract: false, final false
  inline int32_t GetVolumeCacheCount();

  /// @brief Method GetVolumeCachePreset, addr 0x3a21760, size 0x1d8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_VolumeCachePreset* GetVolumeCachePreset(::StringW objName, ::StringW geoName, int32_t tile);

  /// @brief Method GetVolumeCaches, addr 0x3a1e7a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>* GetVolumeCaches();

  /// @brief Method HasInputNodeTransformChanged, addr 0x3a1a7a8, size 0x174, virtual false, abstract: false, final false
  inline bool HasInputNodeTransformChanged();

  /// @brief Method HasTransformChangedSinceLastUpdate, addr 0x3a1d9cc, size 0x88, virtual false, abstract: false, final false
  inline bool HasTransformChangedSinceLastUpdate();

  /// @brief Method HasValidAssetPath, addr 0x3a13e28, size 0x20, virtual false, abstract: false, final false
  inline bool HasValidAssetPath();

  /// @brief Method HideAllGeometry, addr 0x3a1f534, size 0x14c, virtual false, abstract: false, final false
  inline void HideAllGeometry();

  /// @brief Method InputNodeNotifyRemoved, addr 0x3a1e75c, size 0x4, virtual false, abstract: false, final false
  inline void InputNodeNotifyRemoved(::HoudiniEngineUnity::HEU_InputNode* node);

  /// @brief Method InternalSetAssetID, addr 0x3a14d8c, size 0x188, virtual false, abstract: false, final false
  inline void InternalSetAssetID(int32_t assetID);

  /// @brief Method InternalStartRecook, addr 0x3a16c6c, size 0x628, virtual false, abstract: false, final false
  inline bool InternalStartRecook(bool bCheckParamsChanged, bool bSkipCookCheck, bool bUploadParameters, bool bUploadParameterPreset, bool bForceUploadInputs, bool bCookingSessionSync);

  /// @brief Method InvalidateAsset, addr 0x3a13b2c, size 0xc, virtual false, abstract: false, final false
  inline void InvalidateAsset();

  /// @brief Method InvokeBakedEvent, addr 0x3a1aebc, size 0x160, virtual false, abstract: false, final false
  inline void InvokeBakedEvent(bool bSuccess, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects, bool isNewBake);

  /// @brief Method InvokePostCookEvent, addr 0x3a178f8, size 0x150, virtual false, abstract: false, final false
  inline void InvokePostCookEvent(bool bCookSuccess, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects);

  /// @brief Method InvokeReloadEvent, addr 0x3a14be0, size 0x150, virtual false, abstract: false, final false
  inline void InvokeReloadEvent(bool bCookSuccess, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputObjects);

  /// @brief Method IsAssetSavedInScene, addr 0x3a13dcc, size 0x18, virtual false, abstract: false, final false
  inline bool IsAssetSavedInScene();

  /// @brief Method IsAssetValid, addr 0x3a1d990, size 0x3c, virtual false, abstract: false, final false
  inline bool IsAssetValid();

  /// @brief Method IsAssetValidInHoudini, addr 0x3a14d30, size 0x5c, virtual false, abstract: false, final false
  inline bool IsAssetValidInHoudini(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method IsEquivalentTo, addr 0x3a2244c, size 0x10b4, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_HoudiniAsset* asset);

  /// @brief Method IsHoudiniAssetOutput, addr 0x3a1ef84, size 0x150, virtual false, abstract: false, final false
  static inline bool IsHoudiniAssetOutput(::UnityEngine::GameObject* go);

  /// @brief Method IsHoudiniAssetRoot, addr 0x3a1f0d4, size 0x8c, virtual false, abstract: false, final false
  static inline bool IsHoudiniAssetRoot(::UnityEngine::GameObject* go);

  /// @brief Method IsValidForInteraction, addr 0x3a1785c, size 0x6c, virtual false, abstract: false, final false
  inline bool IsValidForInteraction(::ByRef<::StringW> errorMessage);

  /// @brief Method LoadAssetFileWithSubasset, addr 0x3a14f14, size 0x5e8, virtual false, abstract: false, final false
  inline bool LoadAssetFileWithSubasset(::HoudiniEngineUnity::HEU_SessionBase* session, bool bPromptForSubasset, int32_t desiredSubassetIndex);

  /// @brief Method LoadAssetPresetAndCook, addr 0x3a07684, size 0x50c, virtual false, abstract: false, final false
  inline void LoadAssetPresetAndCook(::HoudiniEngineUnity::HEU_AssetPreset* assetPreset);

  static inline ::HoudiniEngineUnity::HEU_HoudiniAsset* New_ctor();

  /// @brief Method NotifyInputNodesCookFinished, addr 0x3a16a1c, size 0x14c, virtual false, abstract: false, final false
  inline void NotifyInputNodesCookFinished();

  /// @brief Method NotifyUpstreamCooked, addr 0x3a1cfb4, size 0x2c, virtual false, abstract: false, final false
  inline void NotifyUpstreamCooked(::HoudiniEngineUnity::HEU_HoudiniAsset* upstreamAsset, bool bSuccess, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* outputs);

  /// @brief Method NumAttributeStores, addr 0x3a1e888, size 0x4c, virtual false, abstract: false, final false
  inline int32_t NumAttributeStores();

  /// @brief Method NumHandles, addr 0x3a1ab64, size 0x4c, virtual false, abstract: false, final false
  inline int32_t NumHandles();

  /// @brief Method OnDestroy, addr 0x3a13dec, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnEnable, addr 0x3a13de8, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x3a178c8, size 0x30, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method PopulateObjectInstanceInfos, addr 0x3a1f160, size 0x190, virtual false, abstract: false, final false
  inline void PopulateObjectInstanceInfos(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectInstanceInfo>>* objInstanceInfos);

  /// @brief Method PostAssetUpdate, addr 0x3a13df4, size 0x4, virtual false, abstract: false, final false
  inline void PostAssetUpdate();

  /// @brief Method ProcessHoudiniCookStatus, addr 0x3a17448, size 0x298, virtual false, abstract: false, final false
  inline void ProcessHoudiniCookStatus(bool bAsync);

  /// @brief Method ProcessPoskCook, addr 0x3a1865c, size 0x398, virtual false, abstract: false, final false
  inline void ProcessPoskCook();

  /// @brief Method ProcessRebuild, addr 0x3a13e48, size 0x294, virtual false, abstract: false, final false
  inline void ProcessRebuild(bool bPromptForSubasset, int32_t desiredSubassetIndex);

  /// @brief Method ReconnectInputsUpstreamNotifications, addr 0x3a1d1d0, size 0x194, virtual false, abstract: false, final false
  inline void ReconnectInputsUpstreamNotifications();

  /// @brief Method RecookAsync, addr 0x3a16b68, size 0x104, virtual false, abstract: false, final false
  inline bool RecookAsync(bool bCheckParamsChanged, bool bSkipCookCheck, bool bUploadParameters, bool bUploadParameterPreset, bool bForceUploadInputs, bool bCookingSessionSync);

  /// @brief Method RecookBlocking, addr 0x3a17338, size 0x110, virtual false, abstract: false, final false
  inline bool RecookBlocking(bool bCheckParamsChanged, bool bSkipCookCheck, bool bUploadParameters, bool bUploadParameterPreset, bool bForceUploadInputs, bool bCookingSessionSync);

  /// @brief Method RemoveAttributeStore, addr 0x3a1a750, size 0x58, virtual false, abstract: false, final false
  inline void RemoveAttributeStore(::HoudiniEngineUnity::HEU_AttributesStore* attributeStore);

  /// @brief Method RemoveCurve, addr 0x3a0f11c, size 0x58, virtual false, abstract: false, final false
  inline void RemoveCurve(::HoudiniEngineUnity::HEU_Curve* curve);

  /// @brief Method RemoveCurveDrawCollider, addr 0x3a1e27c, size 0x60, virtual false, abstract: false, final false
  inline void RemoveCurveDrawCollider(::UnityEngine::Collider* collider);

  /// @brief Method RemoveDownstreamConnection, addr 0x3a1d178, size 0x58, virtual false, abstract: false, final false
  inline void RemoveDownstreamConnection(
      ::UnityEngine::Events::UnityAction_3<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>, bool, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>* receiver);

  /// @brief Method RemoveInputNode, addr 0x3a0f0c4, size 0x58, virtual false, abstract: false, final false
  inline void RemoveInputNode(::HoudiniEngineUnity::HEU_InputNode* node);

  /// @brief Method RemoveMaterial, addr 0x3a1d84c, size 0x144, virtual false, abstract: false, final false
  inline void RemoveMaterial(::UnityEngine::Material* material);

  /// @brief Method RemoveUnusedMaterials, addr 0x3a19530, size 0x468, virtual false, abstract: false, final false
  inline void RemoveUnusedMaterials();

  /// @brief Method RemoveVolumeCache, addr 0x3a130f8, size 0xa8, virtual false, abstract: false, final false
  inline void RemoveVolumeCache(::HoudiniEngineUnity::HEU_VolumeCache* cache);

  /// @brief Method RemoveVolumeCachePreset, addr 0x3a21938, size 0x68, virtual false, abstract: false, final false
  inline void RemoveVolumeCachePreset(::HoudiniEngineUnity::HEU_VolumeCachePreset* preset);

  /// @brief Method ReorderAttributeStore, addr 0x3a1ebec, size 0x110, virtual false, abstract: false, final false
  inline void ReorderAttributeStore(int32_t oldIndex, int32_t newIndex);

  /// @brief Method RequestBakeInPlace, addr 0x3a13e00, size 0x18, virtual false, abstract: false, final false
  inline void RequestBakeInPlace();

  /// @brief Method RequestCook, addr 0x3a03624, size 0x4, virtual false, abstract: false, final false
  inline void RequestCook(bool bCheckParametersChanged, bool bAsync, bool bSkipCookCheck, bool bUploadParameters);

  /// @brief Method RequestReload, addr 0x3a13dfc, size 0x4, virtual false, abstract: false, final false
  inline void RequestReload(bool bAsync);

  /// @brief Method RequestResetParameters, addr 0x3a13df8, size 0x4, virtual false, abstract: false, final false
  inline void RequestResetParameters(bool bAsync);

  /// @brief Method ResetAndCopyInstantiatedProperties, addr 0x3a21c8c, size 0x324, virtual false, abstract: false, final false
  inline void ResetAndCopyInstantiatedProperties(::HoudiniEngineUnity::HEU_HoudiniAsset* newAsset);

  /// @brief Method ResetMaterialOverrides, addr 0x3a20978, size 0x18c, virtual false, abstract: false, final false
  inline void ResetMaterialOverrides();

  /// @brief Method ResetParametersToDefault, addr 0x3a20b04, size 0x3f4, virtual false, abstract: false, final false
  inline void ResetParametersToDefault();

  /// @brief Method SetCookStatus, addr 0x3a14a80, size 0xc, virtual false, abstract: false, final false
  inline void SetCookStatus(::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus status, ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult result);

  /// @brief Method SetCurveDrawLayerMask, addr 0x3a136c4, size 0x8, virtual false, abstract: false, final false
  inline void SetCurveDrawLayerMask(::UnityEngine::LayerMask mask);

  /// @brief Method SetCurvesVisibilityInScene, addr 0x3a1f350, size 0x1e4, virtual false, abstract: false, final false
  static inline void SetCurvesVisibilityInScene(bool bShow);

  /// @brief Method SetSoftDeleted, addr 0x3a2224c, size 0x200, virtual false, abstract: false, final false
  inline void SetSoftDeleted();

  /// @brief Method SetupAsset, addr 0x3a13764, size 0x36c, virtual false, abstract: false, final false
  inline void SetupAsset(::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType assetType, ::StringW filePath, ::UnityEngine::GameObject* rootGameObject, ::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method StartHoudiniCookNode, addr 0x3a185f0, size 0x64, virtual false, abstract: false, final false
  inline bool StartHoudiniCookNode(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method StartRebuild, addr 0x3a14348, size 0x198, virtual false, abstract: false, final false
  inline bool StartRebuild(bool bPromptForSubasset, int32_t desiredSubassetIndex);

  /// @brief Method SyncDirtyAttributesToHoudini, addr 0x3a19350, size 0x164, virtual false, abstract: false, final false
  inline void SyncDirtyAttributesToHoudini(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method SyncInternalParametersForUndoCompare, addr 0x3a219a0, size 0x204, virtual false, abstract: false, final false
  inline void SyncInternalParametersForUndoCompare();

  /// @brief Method UpdateAllObjectNodes, addr 0x3a18ce4, size 0x66c, virtual false, abstract: false, final false
  inline void UpdateAllObjectNodes(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UpdateHoudiniMaterials, addr 0x3a18a8c, size 0x258, virtual false, abstract: false, final false
  inline void UpdateHoudiniMaterials(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UpdateInputsOnAssetRecreation, addr 0x3a17a48, size 0x154, virtual false, abstract: false, final false
  inline void UpdateInputsOnAssetRecreation(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UpdateParameterInputsToHoudini, addr 0x3a17d78, size 0xa4, virtual false, abstract: false, final false
  inline void UpdateParameterInputsToHoudini(::HoudiniEngineUnity::HEU_SessionBase* session, bool bForceUpdate);

  /// @brief Method UpdateSessionSync, addr 0x3a21ba4, size 0xe8, virtual false, abstract: false, final false
  inline bool UpdateSessionSync();

  /// @brief Method UpdateTotalCookCount, addr 0x3a15788, size 0x6c, virtual false, abstract: false, final false
  inline void UpdateTotalCookCount();

  /// @brief Method UploadAttributeValues, addr 0x3a18004, size 0x41c, virtual false, abstract: false, final false
  inline void UploadAttributeValues(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UploadCurvesParameters, addr 0x3a17e1c, size 0x1e8, virtual false, abstract: false, final false
  inline void UploadCurvesParameters(::HoudiniEngineUnity::HEU_SessionBase* session, bool bCheckParamsChanged);

  /// @brief Method UploadInputNodes, addr 0x3a18420, size 0x1d0, virtual false, abstract: false, final false
  inline void UploadInputNodes(::HoudiniEngineUnity::HEU_SessionBase* session, bool bForceUpdate, bool bUpdateAll);

  /// @brief Method UploadParameterPresetToHoudini, addr 0x3a17b9c, size 0x1dc, virtual false, abstract: false, final false
  inline void UploadParameterPresetToHoudini(::HoudiniEngineUnity::HEU_SessionBase* session);

  /// @brief Method UploadUnityTransform, addr 0x3a167d8, size 0x244, virtual false, abstract: false, final false
  inline void UploadUnityTransform(::HoudiniEngineUnity::HEU_SessionBase* session, bool bOnlySendIfChangedFromLastSync);

  constexpr bool const& __cordl_internal_get__WarnedPrefabNotSupported_k__BackingField() const;

  constexpr bool& __cordl_internal_get__WarnedPrefabNotSupported_k__BackingField();

  constexpr bool const& __cordl_internal_get__alwaysOverwriteOnLoad() const;

  constexpr bool& __cordl_internal_get__alwaysOverwriteOnLoad();

  constexpr ::StringW const& __cordl_internal_get__assetCacheFolderPath() const;

  constexpr ::StringW& __cordl_internal_get__assetCacheFolderPath();

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__assetFileObject() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__assetFileObject();

  constexpr ::StringW const& __cordl_internal_get__assetHelp() const;

  constexpr ::StringW& __cordl_internal_get__assetHelp();

  constexpr int32_t const& __cordl_internal_get__assetID() const;

  constexpr int32_t& __cordl_internal_get__assetID();

  constexpr ::HoudiniEngineUnity::HAPI_AssetInfo const& __cordl_internal_get__assetInfo() const;

  constexpr ::HoudiniEngineUnity::HAPI_AssetInfo& __cordl_internal_get__assetInfo();

  constexpr ::StringW const& __cordl_internal_get__assetName() const;

  constexpr ::StringW& __cordl_internal_get__assetName();

  constexpr ::StringW const& __cordl_internal_get__assetOpName() const;

  constexpr ::StringW& __cordl_internal_get__assetOpName();

  constexpr ::StringW const& __cordl_internal_get__assetPath() const;

  constexpr ::StringW& __cordl_internal_get__assetPath();

  constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType const& __cordl_internal_get__assetType() const;

  constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType& __cordl_internal_get__assetType();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>* const& __cordl_internal_get__attributeStores() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>*& __cordl_internal_get__attributeStores();

  constexpr bool const& __cordl_internal_get__autoCookOnParameterChange() const;

  constexpr bool& __cordl_internal_get__autoCookOnParameterChange();

  constexpr bool const& __cordl_internal_get__bForceUpdate() const;

  constexpr bool& __cordl_internal_get__bForceUpdate();

  constexpr bool const& __cordl_internal_get__bakeUpdateKeepPreviousTransformValues() const;

  constexpr bool& __cordl_internal_get__bakeUpdateKeepPreviousTransformValues();

  constexpr ::HoudiniEngineUnity::HEU_BakedDataEvent* const& __cordl_internal_get__bakedDataEvent() const;

  constexpr ::HoudiniEngineUnity::HEU_BakedDataEvent*& __cordl_internal_get__bakedDataEvent();

  constexpr ::HoudiniEngineUnity::BakedEvent* const& __cordl_internal_get__bakedEvent() const;

  constexpr ::HoudiniEngineUnity::BakedEvent*& __cordl_internal_get__bakedEvent();

  constexpr bool const& __cordl_internal_get__checkParameterChangeForCook() const;

  constexpr bool& __cordl_internal_get__checkParameterChangeForCook();

  constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus const& __cordl_internal_get__cookStatus() const;

  constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus& __cordl_internal_get__cookStatus();

  constexpr ::HoudiniEngineUnity::HEU_CookedDataEvent* const& __cordl_internal_get__cookedDataEvent() const;

  constexpr ::HoudiniEngineUnity::HEU_CookedDataEvent*& __cordl_internal_get__cookedDataEvent();

  constexpr ::HoudiniEngineUnity::CookedEvent* const& __cordl_internal_get__cookedEvent() const;

  constexpr ::HoudiniEngineUnity::CookedEvent*& __cordl_internal_get__cookedEvent();

  constexpr bool const& __cordl_internal_get__cookingTriggersDownCooks() const;

  constexpr bool& __cordl_internal_get__cookingTriggersDownCooks();

  constexpr bool const& __cordl_internal_get__curveCookOnDrag() const;

  constexpr bool& __cordl_internal_get__curveCookOnDrag();

  constexpr bool const& __cordl_internal_get__curveDisableScaleRotation() const;

  constexpr bool& __cordl_internal_get__curveDisableScaleRotation();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get__curveDrawColliders() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get__curveDrawColliders();

  constexpr ::HoudiniEngineUnity::HEU_Curve_CurveDrawCollision const& __cordl_internal_get__curveDrawCollision() const;

  constexpr ::HoudiniEngineUnity::HEU_Curve_CurveDrawCollision& __cordl_internal_get__curveDrawCollision();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__curveDrawLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__curveDrawLayerMask();

  constexpr bool const& __cordl_internal_get__curveEditorEnabled() const;

  constexpr bool& __cordl_internal_get__curveEditorEnabled();

  constexpr float_t const& __cordl_internal_get__curveFrameSelectedNodeDistance() const;

  constexpr float_t& __cordl_internal_get__curveFrameSelectedNodeDistance();

  constexpr bool const& __cordl_internal_get__curveFrameSelectedNodes() const;

  constexpr bool& __cordl_internal_get__curveFrameSelectedNodes();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__curveProjectDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__curveProjectDirection();

  constexpr float_t const& __cordl_internal_get__curveProjectMaxDistance() const;

  constexpr float_t& __cordl_internal_get__curveProjectMaxDistance();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>* const& __cordl_internal_get__curves() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>*& __cordl_internal_get__curves();

  constexpr ::HoudiniEngineUnity::CookedEvent* const& __cordl_internal_get__downstreamConnectionCookedEvent() const;

  constexpr ::HoudiniEngineUnity::CookedEvent*& __cordl_internal_get__downstreamConnectionCookedEvent();

  constexpr bool const& __cordl_internal_get__editableNodesToolsEnabled() const;

  constexpr bool& __cordl_internal_get__editableNodesToolsEnabled();

  constexpr bool const& __cordl_internal_get__forceUploadInputs() const;

  constexpr bool& __cordl_internal_get__forceUploadInputs();

  constexpr bool const& __cordl_internal_get__generateMeshUsingPoints() const;

  constexpr bool& __cordl_internal_get__generateMeshUsingPoints();

  constexpr bool const& __cordl_internal_get__generateNormals() const;

  constexpr bool& __cordl_internal_get__generateNormals();

  constexpr bool const& __cordl_internal_get__generateTangents() const;

  constexpr bool& __cordl_internal_get__generateTangents();

  constexpr bool const& __cordl_internal_get__generateUVs() const;

  constexpr bool& __cordl_internal_get__generateUVs();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>* const& __cordl_internal_get__handles() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>*& __cordl_internal_get__handles();

  constexpr bool const& __cordl_internal_get__handlesEnabled() const;

  constexpr bool& __cordl_internal_get__handlesEnabled();

  constexpr bool const& __cordl_internal_get__ignoreNonDisplayNodes() const;

  constexpr bool& __cordl_internal_get__ignoreNonDisplayNodes();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>* const& __cordl_internal_get__inputNodes() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>*& __cordl_internal_get__inputNodes();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState> const& __cordl_internal_get__instanceInputUIState() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState>& __cordl_internal_get__instanceInputUIState();

  constexpr bool const& __cordl_internal_get__isCookingAssetReloaded() const;

  constexpr bool& __cordl_internal_get__isCookingAssetReloaded();

  constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult const& __cordl_internal_get__lastCookResult() const;

  constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult& __cordl_internal_get__lastCookResult();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__lastSyncedTransformMatrix() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__lastSyncedTransformMatrix();

  constexpr bool const& __cordl_internal_get__loadAssetFromMemory() const;

  constexpr bool& __cordl_internal_get__loadAssetFromMemory();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* const& __cordl_internal_get__materialCache() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>*& __cordl_internal_get__materialCache();

  constexpr ::HoudiniEngineUnity::HAPI_NodeInfo const& __cordl_internal_get__nodeInfo() const;

  constexpr ::HoudiniEngineUnity::HAPI_NodeInfo& __cordl_internal_get__nodeInfo();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>>* const& __cordl_internal_get__objectNodes() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>>*& __cordl_internal_get__objectNodes();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_Parameters> const& __cordl_internal_get__parameters() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_Parameters>& __cordl_internal_get__parameters();

  constexpr bool const& __cordl_internal_get__pauseCooking() const;

  constexpr bool& __cordl_internal_get__pauseCooking();

  constexpr bool const& __cordl_internal_get__pendingAutoCookOnMouseRelease() const;

  constexpr bool& __cordl_internal_get__pendingAutoCookOnMouseRelease();

  constexpr ::HoudiniEngineUnity::HEU_PreAssetEvent* const& __cordl_internal_get__preAssetEvent() const;

  constexpr ::HoudiniEngineUnity::HEU_PreAssetEvent*& __cordl_internal_get__preAssetEvent();

  constexpr bool const& __cordl_internal_get__pushTransformToHoudini() const;

  constexpr bool& __cordl_internal_get__pushTransformToHoudini();

  constexpr ::HoudiniEngineUnity::HEU_RecookPreset* const& __cordl_internal_get__recookPreset() const;

  constexpr ::HoudiniEngineUnity::HEU_RecookPreset*& __cordl_internal_get__recookPreset();

  constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate* const& __cordl_internal_get__refreshUIDelegate() const;

  constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate*& __cordl_internal_get__refreshUIDelegate();

  constexpr ::HoudiniEngineUnity::HEU_ReloadDataEvent* const& __cordl_internal_get__reloadDataEvent() const;

  constexpr ::HoudiniEngineUnity::HEU_ReloadDataEvent*& __cordl_internal_get__reloadDataEvent();

  constexpr ::HoudiniEngineUnity::ReloadEvent* const& __cordl_internal_get__reloadEvent() const;

  constexpr ::HoudiniEngineUnity::ReloadEvent*& __cordl_internal_get__reloadEvent();

  constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction const& __cordl_internal_get__requestBuildAction() const;

  constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction& __cordl_internal_get__requestBuildAction();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__rootGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__rootGameObject();

  constexpr ::HoudiniEngineUnity::HEU_AssetPreset* const& __cordl_internal_get__savedAssetPreset() const;

  constexpr ::HoudiniEngineUnity::HEU_AssetPreset*& __cordl_internal_get__savedAssetPreset();

  constexpr int32_t const& __cordl_internal_get__selectedSubassetIndex() const;

  constexpr int32_t& __cordl_internal_get__selectedSubassetIndex();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_AssetSerializedMetaData> const& __cordl_internal_get__serializedMetaData() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_AssetSerializedMetaData>& __cordl_internal_get__serializedMetaData();

  constexpr int64_t const& __cordl_internal_get__sessionID() const;

  constexpr int64_t& __cordl_internal_get__sessionID();

  constexpr bool const& __cordl_internal_get__sessionSyncAutoCook() const;

  constexpr bool& __cordl_internal_get__sessionSyncAutoCook();

  constexpr bool const& __cordl_internal_get__showBakeSection() const;

  constexpr bool& __cordl_internal_get__showBakeSection();

  constexpr bool const& __cordl_internal_get__showCurvesSection() const;

  constexpr bool& __cordl_internal_get__showCurvesSection();

  constexpr bool const& __cordl_internal_get__showEventsSection() const;

  constexpr bool& __cordl_internal_get__showEventsSection();

  constexpr bool const& __cordl_internal_get__showGenerateSection() const;

  constexpr bool& __cordl_internal_get__showGenerateSection();

  constexpr bool const& __cordl_internal_get__showHDAOptions() const;

  constexpr bool& __cordl_internal_get__showHDAOptions();

  constexpr bool const& __cordl_internal_get__showInputNodesSection() const;

  constexpr bool& __cordl_internal_get__showInputNodesSection();

  constexpr bool const& __cordl_internal_get__showTerrainSection() const;

  constexpr bool& __cordl_internal_get__showTerrainSection();

  constexpr bool const& __cordl_internal_get__showToolsSection() const;

  constexpr bool& __cordl_internal_get__showToolsSection();

  constexpr bool const& __cordl_internal_get__skipCookCheck() const;

  constexpr bool& __cordl_internal_get__skipCookCheck();

  constexpr bool const& __cordl_internal_get__splitGeosByGroup() const;

  constexpr bool& __cordl_internal_get__splitGeosByGroup();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__subassetNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__subassetNames();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo> const& __cordl_internal_get__toolsInfo() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo>& __cordl_internal_get__toolsInfo();

  constexpr int32_t const& __cordl_internal_get__totalCookCount() const;

  constexpr int32_t& __cordl_internal_get__totalCookCount();

  constexpr bool const& __cordl_internal_get__transformChangeTriggersCooks() const;

  constexpr bool& __cordl_internal_get__transformChangeTriggersCooks();

  constexpr bool const& __cordl_internal_get__uiLocked() const;

  constexpr bool& __cordl_internal_get__uiLocked();

  constexpr bool const& __cordl_internal_get__uploadParameters() const;

  constexpr bool& __cordl_internal_get__uploadParameters();

  constexpr bool const& __cordl_internal_get__upstreamCookChanged() const;

  constexpr bool& __cordl_internal_get__upstreamCookChanged();

  constexpr bool const& __cordl_internal_get__useLODGroups() const;

  constexpr bool& __cordl_internal_get__useLODGroups();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>* const& __cordl_internal_get__volumeCaches() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>*& __cordl_internal_get__volumeCaches();

  constexpr void __cordl_internal_set__WarnedPrefabNotSupported_k__BackingField(bool value);

  constexpr void __cordl_internal_set__alwaysOverwriteOnLoad(bool value);

  constexpr void __cordl_internal_set__assetCacheFolderPath(::StringW value);

  constexpr void __cordl_internal_set__assetFileObject(::UnityW<::UnityEngine::Object> value);

  constexpr void __cordl_internal_set__assetHelp(::StringW value);

  constexpr void __cordl_internal_set__assetID(int32_t value);

  constexpr void __cordl_internal_set__assetInfo(::HoudiniEngineUnity::HAPI_AssetInfo value);

  constexpr void __cordl_internal_set__assetName(::StringW value);

  constexpr void __cordl_internal_set__assetOpName(::StringW value);

  constexpr void __cordl_internal_set__assetPath(::StringW value);

  constexpr void __cordl_internal_set__assetType(::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType value);

  constexpr void __cordl_internal_set__attributeStores(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>* value);

  constexpr void __cordl_internal_set__autoCookOnParameterChange(bool value);

  constexpr void __cordl_internal_set__bForceUpdate(bool value);

  constexpr void __cordl_internal_set__bakeUpdateKeepPreviousTransformValues(bool value);

  constexpr void __cordl_internal_set__bakedDataEvent(::HoudiniEngineUnity::HEU_BakedDataEvent* value);

  constexpr void __cordl_internal_set__bakedEvent(::HoudiniEngineUnity::BakedEvent* value);

  constexpr void __cordl_internal_set__checkParameterChangeForCook(bool value);

  constexpr void __cordl_internal_set__cookStatus(::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus value);

  constexpr void __cordl_internal_set__cookedDataEvent(::HoudiniEngineUnity::HEU_CookedDataEvent* value);

  constexpr void __cordl_internal_set__cookedEvent(::HoudiniEngineUnity::CookedEvent* value);

  constexpr void __cordl_internal_set__cookingTriggersDownCooks(bool value);

  constexpr void __cordl_internal_set__curveCookOnDrag(bool value);

  constexpr void __cordl_internal_set__curveDisableScaleRotation(bool value);

  constexpr void __cordl_internal_set__curveDrawColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* value);

  constexpr void __cordl_internal_set__curveDrawCollision(::HoudiniEngineUnity::HEU_Curve_CurveDrawCollision value);

  constexpr void __cordl_internal_set__curveDrawLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set__curveEditorEnabled(bool value);

  constexpr void __cordl_internal_set__curveFrameSelectedNodeDistance(float_t value);

  constexpr void __cordl_internal_set__curveFrameSelectedNodes(bool value);

  constexpr void __cordl_internal_set__curveProjectDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__curveProjectMaxDistance(float_t value);

  constexpr void __cordl_internal_set__curves(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>* value);

  constexpr void __cordl_internal_set__downstreamConnectionCookedEvent(::HoudiniEngineUnity::CookedEvent* value);

  constexpr void __cordl_internal_set__editableNodesToolsEnabled(bool value);

  constexpr void __cordl_internal_set__forceUploadInputs(bool value);

  constexpr void __cordl_internal_set__generateMeshUsingPoints(bool value);

  constexpr void __cordl_internal_set__generateNormals(bool value);

  constexpr void __cordl_internal_set__generateTangents(bool value);

  constexpr void __cordl_internal_set__generateUVs(bool value);

  constexpr void __cordl_internal_set__handles(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>* value);

  constexpr void __cordl_internal_set__handlesEnabled(bool value);

  constexpr void __cordl_internal_set__ignoreNonDisplayNodes(bool value);

  constexpr void __cordl_internal_set__inputNodes(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>* value);

  constexpr void __cordl_internal_set__instanceInputUIState(::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState> value);

  constexpr void __cordl_internal_set__isCookingAssetReloaded(bool value);

  constexpr void __cordl_internal_set__lastCookResult(::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult value);

  constexpr void __cordl_internal_set__lastSyncedTransformMatrix(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set__loadAssetFromMemory(bool value);

  constexpr void __cordl_internal_set__materialCache(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* value);

  constexpr void __cordl_internal_set__nodeInfo(::HoudiniEngineUnity::HAPI_NodeInfo value);

  constexpr void __cordl_internal_set__objectNodes(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>>* value);

  constexpr void __cordl_internal_set__parameters(::UnityW<::HoudiniEngineUnity::HEU_Parameters> value);

  constexpr void __cordl_internal_set__pauseCooking(bool value);

  constexpr void __cordl_internal_set__pendingAutoCookOnMouseRelease(bool value);

  constexpr void __cordl_internal_set__preAssetEvent(::HoudiniEngineUnity::HEU_PreAssetEvent* value);

  constexpr void __cordl_internal_set__pushTransformToHoudini(bool value);

  constexpr void __cordl_internal_set__recookPreset(::HoudiniEngineUnity::HEU_RecookPreset* value);

  constexpr void __cordl_internal_set__refreshUIDelegate(::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate* value);

  constexpr void __cordl_internal_set__reloadDataEvent(::HoudiniEngineUnity::HEU_ReloadDataEvent* value);

  constexpr void __cordl_internal_set__reloadEvent(::HoudiniEngineUnity::ReloadEvent* value);

  constexpr void __cordl_internal_set__requestBuildAction(::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction value);

  constexpr void __cordl_internal_set__rootGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__savedAssetPreset(::HoudiniEngineUnity::HEU_AssetPreset* value);

  constexpr void __cordl_internal_set__selectedSubassetIndex(int32_t value);

  constexpr void __cordl_internal_set__serializedMetaData(::UnityW<::HoudiniEngineUnity::HEU_AssetSerializedMetaData> value);

  constexpr void __cordl_internal_set__sessionID(int64_t value);

  constexpr void __cordl_internal_set__sessionSyncAutoCook(bool value);

  constexpr void __cordl_internal_set__showBakeSection(bool value);

  constexpr void __cordl_internal_set__showCurvesSection(bool value);

  constexpr void __cordl_internal_set__showEventsSection(bool value);

  constexpr void __cordl_internal_set__showGenerateSection(bool value);

  constexpr void __cordl_internal_set__showHDAOptions(bool value);

  constexpr void __cordl_internal_set__showInputNodesSection(bool value);

  constexpr void __cordl_internal_set__showTerrainSection(bool value);

  constexpr void __cordl_internal_set__showToolsSection(bool value);

  constexpr void __cordl_internal_set__skipCookCheck(bool value);

  constexpr void __cordl_internal_set__splitGeosByGroup(bool value);

  constexpr void __cordl_internal_set__subassetNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__toolsInfo(::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo> value);

  constexpr void __cordl_internal_set__totalCookCount(int32_t value);

  constexpr void __cordl_internal_set__transformChangeTriggersCooks(bool value);

  constexpr void __cordl_internal_set__uiLocked(bool value);

  constexpr void __cordl_internal_set__uploadParameters(bool value);

  constexpr void __cordl_internal_set__upstreamCookChanged(bool value);

  constexpr void __cordl_internal_set__useLODGroups(bool value);

  constexpr void __cordl_internal_set__volumeCaches(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>* value);

  /// @brief Method .ctor, addr 0x3a23500, size 0x284, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AlwaysOverwriteOnLoad, addr 0x3a13518, size 0x8, virtual false, abstract: false, final false
  inline bool get_AlwaysOverwriteOnLoad();

  /// @brief Method get_AssetHelp, addr 0x3a134dc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AssetHelp();

  /// @brief Method get_AssetID, addr 0x3a134f4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_AssetID();

  /// @brief Method get_AssetInfo, addr 0x3a134a0, size 0x1c, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HAPI_AssetInfo get_AssetInfo();

  /// @brief Method get_AssetName, addr 0x3a134cc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AssetName();

  /// @brief Method get_AssetOpName, addr 0x3a134d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AssetOpName();

  /// @brief Method get_AssetPath, addr 0x3a134fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AssetPath();

  /// @brief Method get_AssetType, addr 0x3a13498, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType get_AssetType();

  /// @brief Method get_AutoCookOnParameterChange, addr 0x3a135f0, size 0x8, virtual false, abstract: false, final false
  inline bool get_AutoCookOnParameterChange();

  /// @brief Method get_BakeUpdateKeepPreviousTransformValues, addr 0x3a13668, size 0x8, virtual false, abstract: false, final false
  inline bool get_BakeUpdateKeepPreviousTransformValues();

  /// @brief Method get_CookingTriggersDownCooks, addr 0x3a135dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_CookingTriggersDownCooks();

  /// @brief Method get_CurveCookOnDrag, addr 0x3a136e0, size 0x8, virtual false, abstract: false, final false
  inline bool get_CurveCookOnDrag();

  /// @brief Method get_CurveDisableScaleRotation, addr 0x3a136cc, size 0x8, virtual false, abstract: false, final false
  inline bool get_CurveDisableScaleRotation();

  /// @brief Method get_CurveDrawCollision, addr 0x3a136a4, size 0x8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HEU_Curve_CurveDrawCollision get_CurveDrawCollision();

  /// @brief Method get_CurveEditorEnabled, addr 0x3a13690, size 0x8, virtual false, abstract: false, final false
  inline bool get_CurveEditorEnabled();

  /// @brief Method get_CurveFrameSelectedNodeDistance, addr 0x3a13708, size 0x8, virtual false, abstract: false, final false
  inline float_t get_CurveFrameSelectedNodeDistance();

  /// @brief Method get_CurveFrameSelectedNodes, addr 0x3a136f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_CurveFrameSelectedNodes();

  /// @brief Method get_EditableNodesToolsEnabled, addr 0x3a1372c, size 0x8, virtual false, abstract: false, final false
  inline bool get_EditableNodesToolsEnabled();

  /// @brief Method get_GenerateMeshUsingPoints, addr 0x3a13618, size 0x8, virtual false, abstract: false, final false
  inline bool get_GenerateMeshUsingPoints();

  /// @brief Method get_GenerateNormals, addr 0x3a135a0, size 0x8, virtual false, abstract: false, final false
  inline bool get_GenerateNormals();

  /// @brief Method get_GenerateTangents, addr 0x3a1358c, size 0x8, virtual false, abstract: false, final false
  inline bool get_GenerateTangents();

  /// @brief Method get_GenerateUVs, addr 0x3a13578, size 0x8, virtual false, abstract: false, final false
  inline bool get_GenerateUVs();

  /// @brief Method get_GeoInputCount, addr 0x3a134ec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_GeoInputCount();

  /// @brief Method get_HandleCount, addr 0x3a1352c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_HandleCount();

  /// @brief Method get_HandlesEnabled, addr 0x3a13718, size 0x8, virtual false, abstract: false, final false
  inline bool get_HandlesEnabled();

  /// @brief Method get_IgnoreNonDisplayNodes, addr 0x3a13604, size 0x8, virtual false, abstract: false, final false
  inline bool get_IgnoreNonDisplayNodes();

  /// @brief Method get_InstanceInputUIState, addr 0x3a13568, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState> get_InstanceInputUIState();

  /// @brief Method get_LoadAssetFromMemory, addr 0x3a13504, size 0x8, virtual false, abstract: false, final false
  inline bool get_LoadAssetFromMemory();

  /// @brief Method get_NodeInfo, addr 0x3a134bc, size 0x10, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::HAPI_NodeInfo get_NodeInfo();

  /// @brief Method get_OwnerGameObject, addr 0x3a10c0c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_OwnerGameObject();

  /// @brief Method get_Parameters, addr 0x3a1353c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_Parameters> get_Parameters();

  /// @brief Method get_PauseCooking, addr 0x3a1367c, size 0x8, virtual false, abstract: false, final false
  inline bool get_PauseCooking();

  /// @brief Method get_PendingAutoCookOnMouseRelease, addr 0x3a13750, size 0x8, virtual false, abstract: false, final false
  inline bool get_PendingAutoCookOnMouseRelease();

  /// @brief Method get_PushTransformToHoudini, addr 0x3a135b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_PushTransformToHoudini();

  /// @brief Method get_RootGameObject, addr 0x3a13534, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_RootGameObject();

  /// @brief Method get_SerializedMetaData, addr 0x3a13748, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_AssetSerializedMetaData> get_SerializedMetaData();

  /// @brief Method get_SessionID, addr 0x3a1354c, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_SessionID();

  /// @brief Method get_SessionSyncAutoCook, addr 0x3a13654, size 0x8, virtual false, abstract: false, final false
  inline bool get_SessionSyncAutoCook();

  /// @brief Method get_SplitGeosByGroup, addr 0x3a13640, size 0x8, virtual false, abstract: false, final false
  inline bool get_SplitGeosByGroup();

  /// @brief Method get_SubassetNames, addr 0x3a13544, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_SubassetNames();

  /// @brief Method get_ToolsInfo, addr 0x3a13740, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo> get_ToolsInfo();

  /// @brief Method get_TransformChangeTriggersCooks, addr 0x3a135c8, size 0x8, virtual false, abstract: false, final false
  inline bool get_TransformChangeTriggersCooks();

  /// @brief Method get_TransformInputCount, addr 0x3a134e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TransformInputCount();

  /// @brief Method get_UseLODGroups, addr 0x3a1362c, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseLODGroups();

  /// @brief Method get_WarnedPrefabNotSupported, addr 0x3a13554, size 0x8, virtual false, abstract: false, final false
  inline bool get_WarnedPrefabNotSupported();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>>* i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_HoudiniAsset__() noexcept;

  /// @brief Method set_AlwaysOverwriteOnLoad, addr 0x3a13520, size 0xc, virtual false, abstract: false, final false
  inline void set_AlwaysOverwriteOnLoad(bool value);

  /// @brief Method set_AutoCookOnParameterChange, addr 0x3a135f8, size 0xc, virtual false, abstract: false, final false
  inline void set_AutoCookOnParameterChange(bool value);

  /// @brief Method set_BakeUpdateKeepPreviousTransformValues, addr 0x3a13670, size 0xc, virtual false, abstract: false, final false
  inline void set_BakeUpdateKeepPreviousTransformValues(bool value);

  /// @brief Method set_CookingTriggersDownCooks, addr 0x3a135e4, size 0xc, virtual false, abstract: false, final false
  inline void set_CookingTriggersDownCooks(bool value);

  /// @brief Method set_CurveCookOnDrag, addr 0x3a136e8, size 0xc, virtual false, abstract: false, final false
  inline void set_CurveCookOnDrag(bool value);

  /// @brief Method set_CurveDisableScaleRotation, addr 0x3a136d4, size 0xc, virtual false, abstract: false, final false
  inline void set_CurveDisableScaleRotation(bool value);

  /// @brief Method set_CurveDrawCollision, addr 0x3a136ac, size 0x8, virtual false, abstract: false, final false
  inline void set_CurveDrawCollision(::HoudiniEngineUnity::HEU_Curve_CurveDrawCollision value);

  /// @brief Method set_CurveEditorEnabled, addr 0x3a13698, size 0xc, virtual false, abstract: false, final false
  inline void set_CurveEditorEnabled(bool value);

  /// @brief Method set_CurveFrameSelectedNodeDistance, addr 0x3a13710, size 0x8, virtual false, abstract: false, final false
  inline void set_CurveFrameSelectedNodeDistance(float_t value);

  /// @brief Method set_CurveFrameSelectedNodes, addr 0x3a136fc, size 0xc, virtual false, abstract: false, final false
  inline void set_CurveFrameSelectedNodes(bool value);

  /// @brief Method set_EditableNodesToolsEnabled, addr 0x3a13734, size 0xc, virtual false, abstract: false, final false
  inline void set_EditableNodesToolsEnabled(bool value);

  /// @brief Method set_GenerateMeshUsingPoints, addr 0x3a13620, size 0xc, virtual false, abstract: false, final false
  inline void set_GenerateMeshUsingPoints(bool value);

  /// @brief Method set_GenerateNormals, addr 0x3a135a8, size 0xc, virtual false, abstract: false, final false
  inline void set_GenerateNormals(bool value);

  /// @brief Method set_GenerateTangents, addr 0x3a13594, size 0xc, virtual false, abstract: false, final false
  inline void set_GenerateTangents(bool value);

  /// @brief Method set_GenerateUVs, addr 0x3a13580, size 0xc, virtual false, abstract: false, final false
  inline void set_GenerateUVs(bool value);

  /// @brief Method set_HandlesEnabled, addr 0x3a13720, size 0xc, virtual false, abstract: false, final false
  inline void set_HandlesEnabled(bool value);

  /// @brief Method set_IgnoreNonDisplayNodes, addr 0x3a1360c, size 0xc, virtual false, abstract: false, final false
  inline void set_IgnoreNonDisplayNodes(bool value);

  /// @brief Method set_InstanceInputUIState, addr 0x3a13570, size 0x8, virtual false, abstract: false, final false
  inline void set_InstanceInputUIState(::HoudiniEngineUnity::HEU_InstanceInputUIState* value);

  /// @brief Method set_LoadAssetFromMemory, addr 0x3a1350c, size 0xc, virtual false, abstract: false, final false
  inline void set_LoadAssetFromMemory(bool value);

  /// @brief Method set_PauseCooking, addr 0x3a13684, size 0xc, virtual false, abstract: false, final false
  inline void set_PauseCooking(bool value);

  /// @brief Method set_PendingAutoCookOnMouseRelease, addr 0x3a13758, size 0xc, virtual false, abstract: false, final false
  inline void set_PendingAutoCookOnMouseRelease(bool value);

  /// @brief Method set_PushTransformToHoudini, addr 0x3a135bc, size 0xc, virtual false, abstract: false, final false
  inline void set_PushTransformToHoudini(bool value);

  /// @brief Method set_SessionSyncAutoCook, addr 0x3a1365c, size 0xc, virtual false, abstract: false, final false
  inline void set_SessionSyncAutoCook(bool value);

  /// @brief Method set_SplitGeosByGroup, addr 0x3a13648, size 0xc, virtual false, abstract: false, final false
  inline void set_SplitGeosByGroup(bool value);

  /// @brief Method set_TransformChangeTriggersCooks, addr 0x3a135d0, size 0xc, virtual false, abstract: false, final false
  inline void set_TransformChangeTriggersCooks(bool value);

  /// @brief Method set_UseLODGroups, addr 0x3a13634, size 0xc, virtual false, abstract: false, final false
  inline void set_UseLODGroups(bool value);

  /// @brief Method set_WarnedPrefabNotSupported, addr 0x3a1355c, size 0xc, virtual false, abstract: false, final false
  inline void set_WarnedPrefabNotSupported(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_HoudiniAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_HoudiniAsset(HEU_HoudiniAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_HoudiniAsset(HEU_HoudiniAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11626 };

  /// @brief Field _assetType, offset: 0x20, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType ____assetType;

  /// @brief Field _assetInfo, offset: 0x24, size: 0x40, def value: None
  ::HoudiniEngineUnity::HAPI_AssetInfo ____assetInfo;

  /// @brief Field _nodeInfo, offset: 0x64, size: 0x44, def value: None
  ::HoudiniEngineUnity::HAPI_NodeInfo ____nodeInfo;

  /// @brief Field _assetName, offset: 0xa8, size: 0x8, def value: None
  ::StringW ____assetName;

  /// @brief Field _assetOpName, offset: 0xb0, size: 0x8, def value: None
  ::StringW ____assetOpName;

  /// @brief Field _assetHelp, offset: 0xb8, size: 0x8, def value: None
  ::StringW ____assetHelp;

  /// @brief Field _assetID, offset: 0xc0, size: 0x4, def value: None
  int32_t ____assetID;

  /// @brief Field _assetPath, offset: 0xc8, size: 0x8, def value: None
  ::StringW ____assetPath;

  /// @brief Field _loadAssetFromMemory, offset: 0xd0, size: 0x1, def value: None
  bool ____loadAssetFromMemory;

  /// @brief Field _alwaysOverwriteOnLoad, offset: 0xd1, size: 0x1, def value: None
  bool ____alwaysOverwriteOnLoad;

  /// @brief Field _assetFileObject, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ____assetFileObject;

  /// @brief Field _objectNodes, offset: 0xe0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_ObjectNode>>* ____objectNodes;

  /// @brief Field _rootGameObject, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____rootGameObject;

  /// @brief Field _materialCache, offset: 0xf0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* ____materialCache;

  /// @brief Field _parameters, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_Parameters> ____parameters;

  /// @brief Field _lastSyncedTransformMatrix, offset: 0x100, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ____lastSyncedTransformMatrix;

  /// @brief Field _assetCacheFolderPath, offset: 0x140, size: 0x8, def value: None
  ::StringW ____assetCacheFolderPath;

  /// @brief Field _subassetNames, offset: 0x148, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____subassetNames;

  /// @brief Field _selectedSubassetIndex, offset: 0x150, size: 0x4, def value: None
  int32_t ____selectedSubassetIndex;

  /// @brief Field _savedAssetPreset, offset: 0x158, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_AssetPreset* ____savedAssetPreset;

  /// @brief Field _recookPreset, offset: 0x160, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_RecookPreset* ____recookPreset;

  /// @brief Field _totalCookCount, offset: 0x168, size: 0x4, def value: None
  int32_t ____totalCookCount;

  /// @brief Field _requestBuildAction, offset: 0x16c, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction ____requestBuildAction;

  /// @brief Field _checkParameterChangeForCook, offset: 0x170, size: 0x1, def value: None
  bool ____checkParameterChangeForCook;

  /// @brief Field _skipCookCheck, offset: 0x171, size: 0x1, def value: None
  bool ____skipCookCheck;

  /// @brief Field _uploadParameters, offset: 0x172, size: 0x1, def value: None
  bool ____uploadParameters;

  /// @brief Field _forceUploadInputs, offset: 0x173, size: 0x1, def value: None
  bool ____forceUploadInputs;

  /// @brief Field _upstreamCookChanged, offset: 0x174, size: 0x1, def value: None
  bool ____upstreamCookChanged;

  /// @brief Field _cookStatus, offset: 0x178, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus ____cookStatus;

  /// @brief Field _lastCookResult, offset: 0x17c, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult ____lastCookResult;

  /// @brief Field _isCookingAssetReloaded, offset: 0x180, size: 0x1, def value: None
  bool ____isCookingAssetReloaded;

  /// @brief Field _bForceUpdate, offset: 0x181, size: 0x1, def value: None
  bool ____bForceUpdate;

  /// @brief Field _sessionID, offset: 0x188, size: 0x8, def value: None
  int64_t ____sessionID;

  /// @brief Field <WarnedPrefabNotSupported>k__BackingField, offset: 0x190, size: 0x1, def value: None
  bool ____WarnedPrefabNotSupported_k__BackingField;

  /// @brief Field _uiLocked, offset: 0x191, size: 0x1, def value: None
  bool ____uiLocked;

  /// @brief Field _showHDAOptions, offset: 0x192, size: 0x1, def value: None
  bool ____showHDAOptions;

  /// @brief Field _showGenerateSection, offset: 0x193, size: 0x1, def value: None
  bool ____showGenerateSection;

  /// @brief Field _showBakeSection, offset: 0x194, size: 0x1, def value: None
  bool ____showBakeSection;

  /// @brief Field _showEventsSection, offset: 0x195, size: 0x1, def value: None
  bool ____showEventsSection;

  /// @brief Field _showCurvesSection, offset: 0x196, size: 0x1, def value: None
  bool ____showCurvesSection;

  /// @brief Field _showInputNodesSection, offset: 0x197, size: 0x1, def value: None
  bool ____showInputNodesSection;

  /// @brief Field _showToolsSection, offset: 0x198, size: 0x1, def value: None
  bool ____showToolsSection;

  /// @brief Field _showTerrainSection, offset: 0x199, size: 0x1, def value: None
  bool ____showTerrainSection;

  /// @brief Field _instanceInputUIState, offset: 0x1a0, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState> ____instanceInputUIState;

  /// @brief Field _reloadEvent, offset: 0x1a8, size: 0x8, def value: None
  ::HoudiniEngineUnity::ReloadEvent* ____reloadEvent;

  /// @brief Field _cookedEvent, offset: 0x1b0, size: 0x8, def value: None
  ::HoudiniEngineUnity::CookedEvent* ____cookedEvent;

  /// @brief Field _bakedEvent, offset: 0x1b8, size: 0x8, def value: None
  ::HoudiniEngineUnity::BakedEvent* ____bakedEvent;

  /// @brief Field _reloadDataEvent, offset: 0x1c0, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_ReloadDataEvent* ____reloadDataEvent;

  /// @brief Field _cookedDataEvent, offset: 0x1c8, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_CookedDataEvent* ____cookedDataEvent;

  /// @brief Field _bakedDataEvent, offset: 0x1d0, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_BakedDataEvent* ____bakedDataEvent;

  /// @brief Field _preAssetEvent, offset: 0x1d8, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_PreAssetEvent* ____preAssetEvent;

  /// @brief Field _refreshUIDelegate, offset: 0x1e0, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate* ____refreshUIDelegate;

  /// @brief Field _downstreamConnectionCookedEvent, offset: 0x1e8, size: 0x8, def value: None
  ::HoudiniEngineUnity::CookedEvent* ____downstreamConnectionCookedEvent;

  /// @brief Field _generateUVs, offset: 0x1f0, size: 0x1, def value: None
  bool ____generateUVs;

  /// @brief Field _generateTangents, offset: 0x1f1, size: 0x1, def value: None
  bool ____generateTangents;

  /// @brief Field _generateNormals, offset: 0x1f2, size: 0x1, def value: None
  bool ____generateNormals;

  /// @brief Field _pushTransformToHoudini, offset: 0x1f3, size: 0x1, def value: None
  bool ____pushTransformToHoudini;

  /// @brief Field _transformChangeTriggersCooks, offset: 0x1f4, size: 0x1, def value: None
  bool ____transformChangeTriggersCooks;

  /// @brief Field _cookingTriggersDownCooks, offset: 0x1f5, size: 0x1, def value: None
  bool ____cookingTriggersDownCooks;

  /// @brief Field _autoCookOnParameterChange, offset: 0x1f6, size: 0x1, def value: None
  bool ____autoCookOnParameterChange;

  /// @brief Field _ignoreNonDisplayNodes, offset: 0x1f7, size: 0x1, def value: None
  bool ____ignoreNonDisplayNodes;

  /// @brief Field _generateMeshUsingPoints, offset: 0x1f8, size: 0x1, def value: None
  bool ____generateMeshUsingPoints;

  /// @brief Field _useLODGroups, offset: 0x1f9, size: 0x1, def value: None
  bool ____useLODGroups;

  /// @brief Field _splitGeosByGroup, offset: 0x1fa, size: 0x1, def value: None
  bool ____splitGeosByGroup;

  /// @brief Field _sessionSyncAutoCook, offset: 0x1fb, size: 0x1, def value: None
  bool ____sessionSyncAutoCook;

  /// @brief Field _bakeUpdateKeepPreviousTransformValues, offset: 0x1fc, size: 0x1, def value: None
  bool ____bakeUpdateKeepPreviousTransformValues;

  /// @brief Field _pauseCooking, offset: 0x1fd, size: 0x1, def value: None
  bool ____pauseCooking;

  /// @brief Field _curveEditorEnabled, offset: 0x1fe, size: 0x1, def value: None
  bool ____curveEditorEnabled;

  /// @brief Field _curves, offset: 0x200, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Curve>>* ____curves;

  /// @brief Field _curveDrawCollision, offset: 0x208, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_Curve_CurveDrawCollision ____curveDrawCollision;

  /// @brief Field _curveDrawColliders, offset: 0x210, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* ____curveDrawColliders;

  /// @brief Field _curveDrawLayerMask, offset: 0x218, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____curveDrawLayerMask;

  /// @brief Field _curveProjectMaxDistance, offset: 0x21c, size: 0x4, def value: None
  float_t ____curveProjectMaxDistance;

  /// @brief Field _curveProjectDirection, offset: 0x220, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____curveProjectDirection;

  /// @brief Field _curveDisableScaleRotation, offset: 0x22c, size: 0x1, def value: None
  bool ____curveDisableScaleRotation;

  /// @brief Field _curveCookOnDrag, offset: 0x22d, size: 0x1, def value: None
  bool ____curveCookOnDrag;

  /// @brief Field _curveFrameSelectedNodes, offset: 0x22e, size: 0x1, def value: None
  bool ____curveFrameSelectedNodes;

  /// @brief Field _curveFrameSelectedNodeDistance, offset: 0x230, size: 0x4, def value: None
  float_t ____curveFrameSelectedNodeDistance;

  /// @brief Field _inputNodes, offset: 0x238, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_InputNode>>* ____inputNodes;

  /// @brief Field _handles, offset: 0x240, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_Handle>>* ____handles;

  /// @brief Field _handlesEnabled, offset: 0x248, size: 0x1, def value: None
  bool ____handlesEnabled;

  /// @brief Field _volumeCaches, offset: 0x250, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_VolumeCache>>* ____volumeCaches;

  /// @brief Field _attributeStores, offset: 0x258, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_AttributesStore>>* ____attributeStores;

  /// @brief Field _editableNodesToolsEnabled, offset: 0x260, size: 0x1, def value: None
  bool ____editableNodesToolsEnabled;

  /// @brief Field _toolsInfo, offset: 0x268, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_ToolsInfo> ____toolsInfo;

  /// @brief Field _serializedMetaData, offset: 0x270, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_AssetSerializedMetaData> ____serializedMetaData;

  /// @brief Field _pendingAutoCookOnMouseRelease, offset: 0x278, size: 0x1, def value: None
  bool ____pendingAutoCookOnMouseRelease;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____assetType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____assetInfo) == 0x24, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____nodeInfo) == 0x64, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____assetName) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____assetOpName) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____assetHelp) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____assetID) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____assetPath) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____loadAssetFromMemory) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____alwaysOverwriteOnLoad) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____assetFileObject) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____objectNodes) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____rootGameObject) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____materialCache) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____parameters) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____lastSyncedTransformMatrix) == 0x100, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____assetCacheFolderPath) == 0x140, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____subassetNames) == 0x148, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____selectedSubassetIndex) == 0x150, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____savedAssetPreset) == 0x158, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____recookPreset) == 0x160, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____totalCookCount) == 0x168, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____requestBuildAction) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____checkParameterChangeForCook) == 0x170, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____skipCookCheck) == 0x171, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____uploadParameters) == 0x172, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____forceUploadInputs) == 0x173, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____upstreamCookChanged) == 0x174, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____cookStatus) == 0x178, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____lastCookResult) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____isCookingAssetReloaded) == 0x180, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____bForceUpdate) == 0x181, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____sessionID) == 0x188, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____WarnedPrefabNotSupported_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____uiLocked) == 0x191, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____showHDAOptions) == 0x192, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____showGenerateSection) == 0x193, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____showBakeSection) == 0x194, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____showEventsSection) == 0x195, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____showCurvesSection) == 0x196, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____showInputNodesSection) == 0x197, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____showToolsSection) == 0x198, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____showTerrainSection) == 0x199, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____instanceInputUIState) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____reloadEvent) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____cookedEvent) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____bakedEvent) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____reloadDataEvent) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____cookedDataEvent) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____bakedDataEvent) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____preAssetEvent) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____refreshUIDelegate) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____downstreamConnectionCookedEvent) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____generateUVs) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____generateTangents) == 0x1f1, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____generateNormals) == 0x1f2, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____pushTransformToHoudini) == 0x1f3, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____transformChangeTriggersCooks) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____cookingTriggersDownCooks) == 0x1f5, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____autoCookOnParameterChange) == 0x1f6, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____ignoreNonDisplayNodes) == 0x1f7, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____generateMeshUsingPoints) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____useLODGroups) == 0x1f9, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____splitGeosByGroup) == 0x1fa, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____sessionSyncAutoCook) == 0x1fb, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____bakeUpdateKeepPreviousTransformValues) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____pauseCooking) == 0x1fd, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____curveEditorEnabled) == 0x1fe, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____curves) == 0x200, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____curveDrawCollision) == 0x208, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____curveDrawColliders) == 0x210, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____curveDrawLayerMask) == 0x218, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____curveProjectMaxDistance) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____curveProjectDirection) == 0x220, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____curveDisableScaleRotation) == 0x22c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____curveCookOnDrag) == 0x22d, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____curveFrameSelectedNodes) == 0x22e, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____curveFrameSelectedNodeDistance) == 0x230, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____inputNodes) == 0x238, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____handles) == 0x240, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____handlesEnabled) == 0x248, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____volumeCaches) == 0x250, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____attributeStores) == 0x258, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____editableNodesToolsEnabled) == 0x260, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____toolsInfo) == 0x268, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____serializedMetaData) == 0x270, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HoudiniAsset, ____pendingAutoCookOnMouseRelease) == 0x278, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HoudiniAsset, 0x280>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HoudiniAsset_AssetBuildAction, "HoudiniEngineUnity", "HEU_HoudiniAsset/AssetBuildAction");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookResult, "HoudiniEngineUnity", "HEU_HoudiniAsset/AssetCookResult");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HoudiniAsset_AssetCookStatus, "HoudiniEngineUnity", "HEU_HoudiniAsset/AssetCookStatus");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HoudiniAsset_AssetInstantiationMethod, "HoudiniEngineUnity", "HEU_HoudiniAsset/AssetInstantiationMethod");
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HoudiniAsset_HEU_AssetType, "HoudiniEngineUnity", "HEU_HoudiniAsset/HEU_AssetType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HoudiniAsset);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HoudiniAsset*, "HoudiniEngineUnity", "HEU_HoudiniAsset");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HoudiniAsset_UpdateUIDelegate*, "HoudiniEngineUnity", "HEU_HoudiniAsset/UpdateUIDelegate");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HoudiniAsset___c);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HoudiniAsset___c*, "HoudiniEngineUnity", "HEU_HoudiniAsset/<>c");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass281_0*, "HoudiniEngineUnity", "HEU_HoudiniAsset/<>c__DisplayClass281_0");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HoudiniAsset___c__DisplayClass365_0*, "HoudiniEngineUnity", "HEU_HoudiniAsset/<>c__DisplayClass365_0");
