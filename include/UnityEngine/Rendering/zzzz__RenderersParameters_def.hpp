#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderersParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderersParameters)
namespace UnityEngine::Rendering {
class GPUInstanceDataBuffer;
}
namespace UnityEngine::Rendering {
struct InstanceNumInfo;
}
namespace UnityEngine::Rendering {
struct RenderersParameters_Flags;
}
namespace UnityEngine::Rendering {
struct RenderersParameters_ParamInfo;
}
namespace UnityEngine::Rendering {
class RenderersParameters_ParamNames;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RenderersParameters_Flags;
}
namespace UnityEngine::Rendering {
class RenderersParameters_ParamNames;
}
namespace UnityEngine::Rendering {
struct RenderersParameters;
}
namespace UnityEngine::Rendering {
struct RenderersParameters_ParamInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderersParameters_Flags);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderersParameters_ParamNames);
MARK_VAL_T(::UnityEngine::Rendering::RenderersParameters);
MARK_VAL_T(::UnityEngine::Rendering::RenderersParameters_ParamInfo);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderersParameters/Flags
struct CORDL_TYPE RenderersParameters_Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderersParameters_Flags_Unwrapped
  enum struct __RenderersParameters_Flags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_UseBoundingSphereParameter = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderersParameters_Flags_Unwrapped() const noexcept {
    return static_cast<__RenderersParameters_Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderersParameters_Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderersParameters_Flags(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::RenderersParameters_Flags const None;

  /// @brief Field UseBoundingSphereParameter value: I32(1)
  static ::UnityEngine::Rendering::RenderersParameters_Flags const UseBoundingSphereParameter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17762 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderersParameters_Flags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderersParameters/ParamNames
class CORDL_TYPE RenderersParameters_ParamNames : public ::System::Object {
public:
  // Declarations
  /// @brief Field DOTS_ST_WindHistoryParams, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DOTS_ST_WindHistoryParams, put = setStaticF_DOTS_ST_WindHistoryParams)) ::ArrayW<int32_t, ::Array<int32_t>*> DOTS_ST_WindHistoryParams;

  /// @brief Field DOTS_ST_WindParams, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DOTS_ST_WindParams, put = setStaticF_DOTS_ST_WindParams)) ::ArrayW<int32_t, ::Array<int32_t>*> DOTS_ST_WindParams;

  /// @brief Field _BaseColor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__BaseColor, put = setStaticF__BaseColor)) int32_t _BaseColor;

  /// @brief Field unity_LightmapST, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_unity_LightmapST, put = setStaticF_unity_LightmapST)) int32_t unity_LightmapST;

  /// @brief Field unity_MatrixPreviousM, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_unity_MatrixPreviousM, put = setStaticF_unity_MatrixPreviousM)) int32_t unity_MatrixPreviousM;

  /// @brief Field unity_MatrixPreviousMI, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_unity_MatrixPreviousMI, put = setStaticF_unity_MatrixPreviousMI)) int32_t unity_MatrixPreviousMI;

  /// @brief Field unity_ObjectToWorld, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_unity_ObjectToWorld, put = setStaticF_unity_ObjectToWorld)) int32_t unity_ObjectToWorld;

  /// @brief Field unity_SHCoefficients, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_unity_SHCoefficients, put = setStaticF_unity_SHCoefficients)) int32_t unity_SHCoefficients;

  /// @brief Field unity_SpecCube0_HDR, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_unity_SpecCube0_HDR, put = setStaticF_unity_SpecCube0_HDR)) int32_t unity_SpecCube0_HDR;

  /// @brief Field unity_WorldBoundingSphere, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_unity_WorldBoundingSphere, put = setStaticF_unity_WorldBoundingSphere)) int32_t unity_WorldBoundingSphere;

  /// @brief Field unity_WorldToObject, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_unity_WorldToObject, put = setStaticF_unity_WorldToObject)) int32_t unity_WorldToObject;

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_DOTS_ST_WindHistoryParams();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_DOTS_ST_WindParams();

  static inline int32_t getStaticF__BaseColor();

  static inline int32_t getStaticF_unity_LightmapST();

  static inline int32_t getStaticF_unity_MatrixPreviousM();

  static inline int32_t getStaticF_unity_MatrixPreviousMI();

  static inline int32_t getStaticF_unity_ObjectToWorld();

  static inline int32_t getStaticF_unity_SHCoefficients();

  static inline int32_t getStaticF_unity_SpecCube0_HDR();

  static inline int32_t getStaticF_unity_WorldBoundingSphere();

  static inline int32_t getStaticF_unity_WorldToObject();

  static inline void setStaticF_DOTS_ST_WindHistoryParams(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_DOTS_ST_WindParams(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF__BaseColor(int32_t value);

  static inline void setStaticF_unity_LightmapST(int32_t value);

  static inline void setStaticF_unity_MatrixPreviousM(int32_t value);

  static inline void setStaticF_unity_MatrixPreviousMI(int32_t value);

  static inline void setStaticF_unity_ObjectToWorld(int32_t value);

  static inline void setStaticF_unity_SHCoefficients(int32_t value);

  static inline void setStaticF_unity_SpecCube0_HDR(int32_t value);

  static inline void setStaticF_unity_WorldBoundingSphere(int32_t value);

  static inline void setStaticF_unity_WorldToObject(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderersParameters_ParamNames();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderersParameters_ParamNames", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderersParameters_ParamNames(RenderersParameters_ParamNames&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderersParameters_ParamNames", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderersParameters_ParamNames(RenderersParameters_ParamNames const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17763 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderersParameters_ParamNames, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderersParameters/ParamInfo
struct CORDL_TYPE RenderersParameters_ParamInfo {
public:
  // Declarations
  __declspec(property(get = get_valid)) bool valid;

  /// @brief Method get_valid, addr 0x6681670, size 0x10, virtual false, abstract: false, final false
  inline bool get_valid();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderersParameters_ParamInfo();

  // Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "gpuAddress", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "uintOffset", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderersParameters_ParamInfo(int32_t index, int32_t gpuAddress, int32_t uintOffset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17764 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field index, offset: 0x0, size: 0x4, def value: None
  int32_t index;

  /// @brief Field gpuAddress, offset: 0x4, size: 0x4, def value: None
  int32_t gpuAddress;

  /// @brief Field uintOffset, offset: 0x8, size: 0x4, def value: None
  int32_t uintOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters_ParamInfo, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters_ParamInfo, gpuAddress) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters_ParamInfo, uintOffset) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderersParameters_ParamInfo, 0xc>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.RenderersParameters::ParamInfo
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderersParameters
struct CORDL_TYPE RenderersParameters {
public:
  // Declarations
  using Flags = ::UnityEngine::Rendering::RenderersParameters_Flags;

  using ParamInfo = ::UnityEngine::Rendering::RenderersParameters_ParamInfo;

  using ParamNames = ::UnityEngine::Rendering::RenderersParameters_ParamNames;

  /// @brief Field s_uintSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_uintSize, put = setStaticF_s_uintSize)) int32_t s_uintSize;

  /// @brief Method CreateInstanceDataBuffer, addr 0x6680084, size 0x3c8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GPUInstanceDataBuffer* CreateInstanceDataBuffer(::UnityEngine::Rendering::RenderersParameters_Flags flags,
                                                                                          ::ByRef<::UnityEngine::Rendering::InstanceNumInfo> instanceNumInfo);

  /// @brief Method <.ctor>g__GetParamInfo|14_0, addr 0x66811a0, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderersParameters_ParamInfo __ctor_g__GetParamInfo_14_0(::ByRef<::UnityEngine::Rendering::GPUInstanceDataBuffer*> instanceDataBuffer, int32_t paramNameIdx,
                                                                                                    bool assertOnFail);

  /// @brief Method .ctor, addr 0x668044c, size 0x29c, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::UnityEngine::Rendering::GPUInstanceDataBuffer*> instanceDataBuffer);

  static inline int32_t getStaticF_s_uintSize();

  static inline void setStaticF_s_uintSize(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderersParameters();

  // Ctor Parameters [CppParam { name: "lightmapScale", ty: "::UnityEngine::Rendering::RenderersParameters_ParamInfo", modifiers: "", def_value: None }, CppParam { name: "localToWorld", ty:
  // "::UnityEngine::Rendering::RenderersParameters_ParamInfo", modifiers: "", def_value: None }, CppParam { name: "worldToLocal", ty: "::UnityEngine::Rendering::RenderersParameters_ParamInfo",
  // modifiers: "", def_value: None }, CppParam { name: "matrixPreviousM", ty: "::UnityEngine::Rendering::RenderersParameters_ParamInfo", modifiers: "", def_value: None }, CppParam { name:
  // "matrixPreviousMI", ty: "::UnityEngine::Rendering::RenderersParameters_ParamInfo", modifiers: "", def_value: None }, CppParam { name: "shCoefficients", ty:
  // "::UnityEngine::Rendering::RenderersParameters_ParamInfo", modifiers: "", def_value: None }, CppParam { name: "boundingSphere", ty: "::UnityEngine::Rendering::RenderersParameters_ParamInfo",
  // modifiers: "", def_value: None }, CppParam { name: "windParams", ty:
  // "::ArrayW<::UnityEngine::Rendering::RenderersParameters_ParamInfo,::Array<::UnityEngine::Rendering::RenderersParameters_ParamInfo>*>", modifiers: "", def_value: None }, CppParam { name:
  // "windHistoryParams", ty: "::ArrayW<::UnityEngine::Rendering::RenderersParameters_ParamInfo,::Array<::UnityEngine::Rendering::RenderersParameters_ParamInfo>*>", modifiers: "", def_value: None }]
  constexpr RenderersParameters(::UnityEngine::Rendering::RenderersParameters_ParamInfo lightmapScale, ::UnityEngine::Rendering::RenderersParameters_ParamInfo localToWorld,
                                ::UnityEngine::Rendering::RenderersParameters_ParamInfo worldToLocal, ::UnityEngine::Rendering::RenderersParameters_ParamInfo matrixPreviousM,
                                ::UnityEngine::Rendering::RenderersParameters_ParamInfo matrixPreviousMI, ::UnityEngine::Rendering::RenderersParameters_ParamInfo shCoefficients,
                                ::UnityEngine::Rendering::RenderersParameters_ParamInfo boundingSphere,
                                ::ArrayW<::UnityEngine::Rendering::RenderersParameters_ParamInfo, ::Array<::UnityEngine::Rendering::RenderersParameters_ParamInfo>*> windParams,
                                ::ArrayW<::UnityEngine::Rendering::RenderersParameters_ParamInfo, ::Array<::UnityEngine::Rendering::RenderersParameters_ParamInfo>*> windHistoryParams) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17765 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field lightmapScale, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderersParameters_ParamInfo lightmapScale;

  /// @brief Field localToWorld, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderersParameters_ParamInfo localToWorld;

  /// @brief Field worldToLocal, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderersParameters_ParamInfo worldToLocal;

  /// @brief Field matrixPreviousM, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderersParameters_ParamInfo matrixPreviousM;

  /// @brief Field matrixPreviousMI, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderersParameters_ParamInfo matrixPreviousMI;

  /// @brief Field shCoefficients, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderersParameters_ParamInfo shCoefficients;

  /// @brief Field boundingSphere, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderersParameters_ParamInfo boundingSphere;

  /// @brief Field windParams, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderersParameters_ParamInfo, ::Array<::UnityEngine::Rendering::RenderersParameters_ParamInfo>*> windParams;

  /// @brief Field windHistoryParams, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderersParameters_ParamInfo, ::Array<::UnityEngine::Rendering::RenderersParameters_ParamInfo>*> windHistoryParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters, lightmapScale) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters, localToWorld) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters, worldToLocal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters, matrixPreviousM) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters, matrixPreviousMI) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters, shCoefficients) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters, boundingSphere) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters, windParams) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderersParameters, windHistoryParams) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderersParameters, 0x68>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderersParameters_Flags, "UnityEngine.Rendering", "RenderersParameters/Flags");
NEED_NO_BOX(::UnityEngine::Rendering::RenderersParameters_ParamNames);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderersParameters_ParamNames*, "UnityEngine.Rendering", "RenderersParameters/ParamNames");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderersParameters, "UnityEngine.Rendering", "RenderersParameters");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderersParameters_ParamInfo, "UnityEngine.Rendering", "RenderersParameters/ParamInfo");
