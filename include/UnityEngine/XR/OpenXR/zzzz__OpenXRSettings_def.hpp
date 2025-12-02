#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRSettings)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRFeature;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_BackendFovationApi;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_ColorSubmissionModeGroup;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRSettings_ColorSubmissionModeList;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_DepthSubmissionMode;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_RenderMode;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_SpaceWarpMotionVectorTextureFormat;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRSettings___c;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_BackendFovationApi;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_ColorSubmissionModeGroup;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_DepthSubmissionMode;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_RenderMode;
}
namespace UnityEngine::XR::OpenXR {
struct OpenXRSettings_SpaceWarpMotionVectorTextureFormat;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRSettings;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRSettings_ColorSubmissionModeList;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRSettings___c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi);
MARK_VAL_T(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup);
MARK_VAL_T(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode);
MARK_VAL_T(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode);
MARK_VAL_T(::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRSettings);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRSettings___c);
// Dependencies
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/ColorSubmissionModeGroup
struct CORDL_TYPE OpenXRSettings_ColorSubmissionModeGroup {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OpenXRSettings_ColorSubmissionModeGroup_Unwrapped
  enum struct __OpenXRSettings_ColorSubmissionModeGroup_Unwrapped : int32_t {
    __E_kRenderTextureFormatGroup8888 = static_cast<int32_t>(0x0),
    __E_kRenderTextureFormatGroup1010102_Float = static_cast<int32_t>(0x1),
    __E_kRenderTextureFormatGroup16161616_Float = static_cast<int32_t>(0x2),
    __E_kRenderTextureFormatGroup565 = static_cast<int32_t>(0x3),
    __E_kRenderTextureFormatGroup111110_Float = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpenXRSettings_ColorSubmissionModeGroup_Unwrapped() const noexcept {
    return static_cast<__OpenXRSettings_ColorSubmissionModeGroup_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRSettings_ColorSubmissionModeGroup();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OpenXRSettings_ColorSubmissionModeGroup(int32_t value__) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18441 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field kRenderTextureFormatGroup1010102_Float value: I32(1)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup const kRenderTextureFormatGroup1010102_Float;

  /// @brief Field kRenderTextureFormatGroup111110_Float value: I32(4)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup const kRenderTextureFormatGroup111110_Float;

  /// @brief Field kRenderTextureFormatGroup16161616_Float value: I32(2)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup const kRenderTextureFormatGroup16161616_Float;

  /// @brief Field kRenderTextureFormatGroup565 value: I32(3)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup const kRenderTextureFormatGroup565;

  /// @brief Field kRenderTextureFormatGroup8888 value: I32(0)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup const kRenderTextureFormatGroup8888;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/ColorSubmissionModeList
class CORDL_TYPE OpenXRSettings_ColorSubmissionModeList : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_List, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_List,
      put = __cordl_internal_set_m_List)) ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*>
      m_List;

  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList* New_ctor();

  constexpr ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*> const&
  __cordl_internal_get_m_List() const;

  constexpr ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*>& __cordl_internal_get_m_List();

  constexpr void
  __cordl_internal_set_m_List(::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*> value);

  /// @brief Method .ctor, addr 0x67b56c4, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRSettings_ColorSubmissionModeList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings_ColorSubmissionModeList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRSettings_ColorSubmissionModeList(OpenXRSettings_ColorSubmissionModeList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings_ColorSubmissionModeList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRSettings_ColorSubmissionModeList(OpenXRSettings_ColorSubmissionModeList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18442 };

  /// @brief Field m_List, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*> ___m_List;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList, ___m_List) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList, 0x18>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/RenderMode
struct CORDL_TYPE OpenXRSettings_RenderMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OpenXRSettings_RenderMode_Unwrapped
  enum struct __OpenXRSettings_RenderMode_Unwrapped : int32_t {
    __E_MultiPass = static_cast<int32_t>(0x0),
    __E_SinglePassInstanced = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpenXRSettings_RenderMode_Unwrapped() const noexcept {
    return static_cast<__OpenXRSettings_RenderMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRSettings_RenderMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OpenXRSettings_RenderMode(int32_t value__) noexcept;

  /// @brief Field MultiPass value: I32(0)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode const MultiPass;

  /// @brief Field SinglePassInstanced value: I32(1)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode const SinglePassInstanced;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18443 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/DepthSubmissionMode
struct CORDL_TYPE OpenXRSettings_DepthSubmissionMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OpenXRSettings_DepthSubmissionMode_Unwrapped
  enum struct __OpenXRSettings_DepthSubmissionMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Depth16Bit = static_cast<int32_t>(0x1),
    __E_Depth24Bit = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpenXRSettings_DepthSubmissionMode_Unwrapped() const noexcept {
    return static_cast<__OpenXRSettings_DepthSubmissionMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRSettings_DepthSubmissionMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OpenXRSettings_DepthSubmissionMode(int32_t value__) noexcept;

  /// @brief Field Depth16Bit value: I32(1)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode const Depth16Bit;

  /// @brief Field Depth24Bit value: I32(2)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode const Depth24Bit;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18444 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/BackendFovationApi
struct CORDL_TYPE OpenXRSettings_BackendFovationApi {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __OpenXRSettings_BackendFovationApi_Unwrapped
  enum struct __OpenXRSettings_BackendFovationApi_Unwrapped : uint8_t {
    __E_Legacy = static_cast<uint8_t>(0x0u),
    __E_SRPFoveation = static_cast<uint8_t>(0x1u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpenXRSettings_BackendFovationApi_Unwrapped() const noexcept {
    return static_cast<__OpenXRSettings_BackendFovationApi_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRSettings_BackendFovationApi();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr OpenXRSettings_BackendFovationApi(uint8_t value__) noexcept;

  /// @brief Field Legacy value: U8(0)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi const Legacy;

  /// @brief Field SRPFoveation value: U8(1)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi const SRPFoveation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18445 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi, 0x1>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/SpaceWarpMotionVectorTextureFormat
struct CORDL_TYPE OpenXRSettings_SpaceWarpMotionVectorTextureFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OpenXRSettings_SpaceWarpMotionVectorTextureFormat_Unwrapped
  enum struct __OpenXRSettings_SpaceWarpMotionVectorTextureFormat_Unwrapped : int32_t {
    __E_RGBA16f = static_cast<int32_t>(0x0),
    __E_RG16f = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpenXRSettings_SpaceWarpMotionVectorTextureFormat_Unwrapped() const noexcept {
    return static_cast<__OpenXRSettings_SpaceWarpMotionVectorTextureFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRSettings_SpaceWarpMotionVectorTextureFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OpenXRSettings_SpaceWarpMotionVectorTextureFormat(int32_t value__) noexcept;

  /// @brief Field RG16f value: I32(1)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat const RG16f;

  /// @brief Field RGBA16f value: I32(0)
  static ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat const RGBA16f;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18446 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/<>c
class CORDL_TYPE OpenXRSettings___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::XR::OpenXR::OpenXRSettings___c* __9;

  /// @brief Field <>9__25_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__25_0, put = setStaticF___9__25_0)) ::System::Func_2<int32_t, ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>* __9__25_0;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0)) ::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>* __9__26_0;

  /// @brief Field <>9__44_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__44_0, put = setStaticF___9__44_0)) ::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>* __9__44_0;

  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings___c* New_ctor();

  /// @brief Method <ApplyRenderSettings>b__44_0, addr 0x67b5780, size 0x8, virtual false, abstract: false, final false
  inline int32_t _ApplyRenderSettings_b__44_0(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup e);

  /// @brief Method .ctor, addr 0x67b576c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_colorSubmissionModes>b__25_0, addr 0x67b5770, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup _get_colorSubmissionModes_b__25_0(int32_t i);

  /// @brief Method <set_colorSubmissionModes>b__26_0, addr 0x67b5778, size 0x8, virtual false, abstract: false, final false
  inline int32_t _set_colorSubmissionModes_b__26_0(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup e);

  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings___c* getStaticF___9();

  static inline ::System::Func_2<int32_t, ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>* getStaticF___9__25_0();

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>* getStaticF___9__26_0();

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>* getStaticF___9__44_0();

  static inline void setStaticF___9(::UnityEngine::XR::OpenXR::OpenXRSettings___c* value);

  static inline void setStaticF___9__25_0(::System::Func_2<int32_t, ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>* value);

  static inline void setStaticF___9__26_0(::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>* value);

  static inline void setStaticF___9__44_0(::System::Func_2<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRSettings___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRSettings___c(OpenXRSettings___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRSettings___c(OpenXRSettings___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18447 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRSettings___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
// Dependencies UnityEngine.ScriptableObject, UnityEngine.XR.OpenXR.OpenXRSettings::BackendFovationApi, UnityEngine.XR.OpenXR.OpenXRSettings::ColorSubmissionModeGroup,
// UnityEngine.XR.OpenXR.OpenXRSettings::DepthSubmissionMode, UnityEngine.XR.OpenXR.OpenXRSettings::RenderMode, UnityEngine.XR.OpenXR.OpenXRSettings::SpaceWarpMotionVectorTextureFormat
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings
class CORDL_TYPE OpenXRSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using BackendFovationApi = ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi;

  using ColorSubmissionModeGroup = ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup;

  using ColorSubmissionModeList = ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList;

  using DepthSubmissionMode = ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode;

  using RenderMode = ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode;

  using SpaceWarpMotionVectorTextureFormat = ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat;

  using __c = ::UnityEngine::XR::OpenXR::OpenXRSettings___c;

  __declspec(property(get = get_autoColorSubmissionMode, put = set_autoColorSubmissionMode)) bool autoColorSubmissionMode;

  __declspec(property(
      get = get_colorSubmissionModes,
      put = set_colorSubmissionModes)) ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*>
      colorSubmissionModes;

  __declspec(property(get = get_depthSubmissionMode, put = set_depthSubmissionMode)) ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode depthSubmissionMode;

  __declspec(property(get = get_featureCount)) int32_t featureCount;

  /// @brief Field features, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_features,
                      put =
                          __cordl_internal_set_features)) ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::Array<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>
      features;

  __declspec(property(get = get_foveatedRenderingApi, put = set_foveatedRenderingApi)) ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi foveatedRenderingApi;

  /// @brief Field kDefaultColorMode, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kDefaultColorMode, put = setStaticF_kDefaultColorMode)) ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup kDefaultColorMode;

  /// @brief Field m_autoColorSubmissionMode, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_m_autoColorSubmissionMode, put = __cordl_internal_set_m_autoColorSubmissionMode)) bool m_autoColorSubmissionMode;

  /// @brief Field m_colorSubmissionModes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_colorSubmissionModes,
                      put = __cordl_internal_set_m_colorSubmissionModes)) ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList* m_colorSubmissionModes;

  /// @brief Field m_depthSubmissionMode, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_depthSubmissionMode,
                      put = __cordl_internal_set_m_depthSubmissionMode)) ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode m_depthSubmissionMode;

  /// @brief Field m_eyeTrackingPermissionsToRequest, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_eyeTrackingPermissionsToRequest, put = __cordl_internal_set_m_eyeTrackingPermissionsToRequest)) ::ArrayW<::StringW, ::Array<::StringW>*>
      m_eyeTrackingPermissionsToRequest;

  /// @brief Field m_foveatedRenderingApi, offset 0x42, size 0x1
  __declspec(property(get = __cordl_internal_get_m_foveatedRenderingApi,
                      put = __cordl_internal_set_m_foveatedRenderingApi)) ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi m_foveatedRenderingApi;

  /// @brief Field m_optimizeBufferDiscards, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_optimizeBufferDiscards, put = __cordl_internal_set_m_optimizeBufferDiscards)) bool m_optimizeBufferDiscards;

  /// @brief Field m_renderMode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_renderMode, put = __cordl_internal_set_m_renderMode)) ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode m_renderMode;

  /// @brief Field m_spacewarpMotionVectorTextureFormat, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_spacewarpMotionVectorTextureFormat,
                      put =
                          __cordl_internal_set_m_spacewarpMotionVectorTextureFormat)) ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat m_spacewarpMotionVectorTextureFormat;

  /// @brief Field m_symmetricProjection, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_m_symmetricProjection, put = __cordl_internal_set_m_symmetricProjection)) bool m_symmetricProjection;

  __declspec(property(get = get_optimizeBufferDiscards, put = set_optimizeBufferDiscards)) bool optimizeBufferDiscards;

  __declspec(property(get = get_renderMode, put = set_renderMode)) ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode renderMode;

  /// @brief Field s_RuntimeInstance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_RuntimeInstance, put = setStaticF_s_RuntimeInstance)) ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> s_RuntimeInstance;

  __declspec(property(get = get_spacewarpMotionVectorTextureFormat,
                      put = set_spacewarpMotionVectorTextureFormat)) ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat spacewarpMotionVectorTextureFormat;

  __declspec(property(get = get_symmetricProjection, put = set_symmetricProjection)) bool symmetricProjection;

  /// @brief Method ApplyRenderSettings, addr 0x67b4900, size 0x2b0, virtual false, abstract: false, final false
  inline void ApplyRenderSettings();

  /// @brief Method ApplySettings, addr 0x67b539c, size 0x4, virtual false, abstract: false, final false
  inline void ApplySettings();

  /// @brief Method Awake, addr 0x67b534c, size 0x50, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetFeature, addr 0x67b3274, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature> GetFeature(::System::Type* featureType);

  /// @brief Method GetFeature, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TFeature> inline TFeature GetFeature();

  /// @brief Method GetFeatures, addr 0x67b35e4, size 0x90, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::Array<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*> GetFeatures();

  /// @brief Method GetFeatures, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TFeature> inline ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::Array<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*> GetFeatures();

  /// @brief Method GetFeatures, addr 0x67b3300, size 0x17c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::Array<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*> GetFeatures(::System::Type* featureType);

  /// @brief Method GetFeatures, addr 0x67b347c, size 0x168, virtual false, abstract: false, final false
  inline int32_t GetFeatures(::System::Type* featureType, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>* featuresOut);

  /// @brief Method GetFeatures, addr 0x67b3674, size 0xd0, virtual false, abstract: false, final false
  inline int32_t GetFeatures(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>* featuresOut);

  /// @brief Method GetFeatures, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TFeature> inline int32_t GetFeatures(::System::Collections::Generic::List_1<TFeature>* featuresOut);

  /// @brief Method GetInstance, addr 0x67b40ac, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> GetInstance(bool useActiveBuildTarget);

  /// @brief Method Internal_GetAllowRecentering, addr 0x67b54ac, size 0x6c, virtual false, abstract: false, final false
  static inline bool Internal_GetAllowRecentering();

  /// @brief Method Internal_GetColorSubmissionModes, addr 0x67b3cb8, size 0xe8, virtual false, abstract: false, final false
  static inline int32_t Internal_GetColorSubmissionModes(::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> colorSubmissionMode, int32_t arraySize);

  /// @brief Method Internal_GetDepthSubmissionMode, addr 0x67b42d0, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode Internal_GetDepthSubmissionMode();

  /// @brief Method Internal_GetFloorOffset, addr 0x67b551c, size 0x64, virtual false, abstract: false, final false
  static inline float_t Internal_GetFloorOffset();

  /// @brief Method Internal_GetHasEyeTrackingPermissions, addr 0x67b51f0, size 0x6c, virtual false, abstract: false, final false
  static inline bool Internal_GetHasEyeTrackingPermissions();

  /// @brief Method Internal_GetIsUsingLegacyXRDisplay, addr 0x67b52e0, size 0x6c, virtual false, abstract: false, final false
  static inline bool Internal_GetIsUsingLegacyXRDisplay();

  /// @brief Method Internal_GetRenderMode, addr 0x67b3838, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode Internal_GetRenderMode();

  /// @brief Method Internal_GetSpaceWarpMotionVectorTextureFormat, addr 0x67b45a0, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat Internal_GetSpaceWarpMotionVectorTextureFormat();

  /// @brief Method Internal_GetUsedFoveatedRenderingApi, addr 0x67b5014, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi Internal_GetUsedFoveatedRenderingApi();

  /// @brief Method Internal_HasRequestedEyeTrackingPermissions, addr 0x67b4ca8, size 0x6c, virtual false, abstract: false, final false
  static inline bool Internal_HasRequestedEyeTrackingPermissions();

  /// @brief Method Internal_RegenerateTrackingOrigin, addr 0x67b5444, size 0x64, virtual false, abstract: false, final false
  static inline void Internal_RegenerateTrackingOrigin();

  /// @brief Method Internal_SetAllowRecentering, addr 0x67b53b4, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_SetAllowRecentering(bool active, float_t height);

  /// @brief Method Internal_SetColorSubmissionMode, addr 0x67b525c, size 0x84, virtual false, abstract: false, final false
  static inline void Internal_SetColorSubmissionMode(
      ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*> colorSubmissionMode);

  /// @brief Method Internal_SetColorSubmissionModes, addr 0x67b3f9c, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_SetColorSubmissionModes(::ArrayW<int32_t, ::Array<int32_t>*> colorSubmissionMode, int32_t arraySize);

  /// @brief Method Internal_SetDepthSubmissionMode, addr 0x67b4430, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetDepthSubmissionMode(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode depthSubmissionMode);

  /// @brief Method Internal_SetHasEyeTrackingPermissions, addr 0x67b4160, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetHasEyeTrackingPermissions(bool value);

  /// @brief Method Internal_SetOptimizeBufferDiscards, addr 0x67b4884, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetOptimizeBufferDiscards(bool enabled);

  /// @brief Method Internal_SetOptimizeMultiviewRenderRegions, addr 0x67b5174, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetOptimizeMultiviewRenderRegions(bool enabled);

  /// @brief Method Internal_SetRenderMode, addr 0x67b3998, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetRenderMode(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode renderMode);

  /// @brief Method Internal_SetSpaceWarpMotionVectorTextureFormat, addr 0x67b4700, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetSpaceWarpMotionVectorTextureFormat(::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat spaceWarpMotionVectorTextureFormat);

  /// @brief Method Internal_SetSymmetricProjection, addr 0x67b4bb0, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetSymmetricProjection(bool enabled);

  /// @brief Method Internal_SetUsedFoveatedRenderingApi, addr 0x67b4c2c, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_SetUsedFoveatedRenderingApi(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi api);

  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings* New_ctor();

  /// @brief Method PermissionGrantedCallback, addr 0x67b4028, size 0x84, virtual false, abstract: false, final false
  static inline void PermissionGrantedCallback(::StringW permissionName);

  /// @brief Method RefreshRecenterSpace, addr 0x67b5440, size 0x4, virtual false, abstract: false, final false
  static inline void RefreshRecenterSpace();

  /// @brief Method SetAllowRecentering, addr 0x67b53b0, size 0x4, virtual false, abstract: false, final false
  static inline void SetAllowRecentering(bool allowRecentering, float_t floorOffset);

  constexpr ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::Array<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*> const& __cordl_internal_get_features() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::Array<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*>& __cordl_internal_get_features();

  constexpr bool const& __cordl_internal_get_m_autoColorSubmissionMode() const;

  constexpr bool& __cordl_internal_get_m_autoColorSubmissionMode();

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList* const& __cordl_internal_get_m_colorSubmissionModes() const;

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*& __cordl_internal_get_m_colorSubmissionModes();

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode const& __cordl_internal_get_m_depthSubmissionMode() const;

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode& __cordl_internal_get_m_depthSubmissionMode();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_eyeTrackingPermissionsToRequest() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_eyeTrackingPermissionsToRequest();

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi const& __cordl_internal_get_m_foveatedRenderingApi() const;

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi& __cordl_internal_get_m_foveatedRenderingApi();

  constexpr bool const& __cordl_internal_get_m_optimizeBufferDiscards() const;

  constexpr bool& __cordl_internal_get_m_optimizeBufferDiscards();

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode const& __cordl_internal_get_m_renderMode() const;

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode& __cordl_internal_get_m_renderMode();

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat const& __cordl_internal_get_m_spacewarpMotionVectorTextureFormat() const;

  constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat& __cordl_internal_get_m_spacewarpMotionVectorTextureFormat();

  constexpr bool const& __cordl_internal_get_m_symmetricProjection() const;

  constexpr bool& __cordl_internal_get_m_symmetricProjection();

  constexpr void __cordl_internal_set_features(::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::Array<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*> value);

  constexpr void __cordl_internal_set_m_autoColorSubmissionMode(bool value);

  constexpr void __cordl_internal_set_m_colorSubmissionModes(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList* value);

  constexpr void __cordl_internal_set_m_depthSubmissionMode(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode value);

  constexpr void __cordl_internal_set_m_eyeTrackingPermissionsToRequest(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_foveatedRenderingApi(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi value);

  constexpr void __cordl_internal_set_m_optimizeBufferDiscards(bool value);

  constexpr void __cordl_internal_set_m_renderMode(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode value);

  constexpr void __cordl_internal_set_m_spacewarpMotionVectorTextureFormat(::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat value);

  constexpr void __cordl_internal_set_m_symmetricProjection(bool value);

  /// @brief Method .ctor, addr 0x67b5580, size 0x144, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup getStaticF_kDefaultColorMode();

  static inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> getStaticF_s_RuntimeInstance();

  /// @brief Method get_ActiveBuildTargetInstance, addr 0x67b53a0, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> get_ActiveBuildTargetInstance();

  /// @brief Method get_AllowRecentering, addr 0x67b54a8, size 0x4, virtual false, abstract: false, final false
  static inline bool get_AllowRecentering();

  /// @brief Method get_FloorOffset, addr 0x67b5518, size 0x4, virtual false, abstract: false, final false
  static inline float_t get_FloorOffset();

  /// @brief Method get_Instance, addr 0x67b53a8, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> get_Instance();

  /// @brief Method get_autoColorSubmissionMode, addr 0x67b3a14, size 0x8, virtual false, abstract: false, final false
  inline bool get_autoColorSubmissionMode();

  /// @brief Method get_colorSubmissionModes, addr 0x67b3a24, size 0x294, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*> get_colorSubmissionModes();

  /// @brief Method get_depthSubmissionMode, addr 0x67b41dc, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode get_depthSubmissionMode();

  /// @brief Method get_featureCount, addr 0x67b325c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_featureCount();

  /// @brief Method get_foveatedRenderingApi, addr 0x67b4f20, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi get_foveatedRenderingApi();

  /// @brief Method get_optimizeBufferDiscards, addr 0x67b477c, size 0x8, virtual false, abstract: false, final false
  inline bool get_optimizeBufferDiscards();

  /// @brief Method get_renderMode, addr 0x67b3744, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode get_renderMode();

  /// @brief Method get_spacewarpMotionVectorTextureFormat, addr 0x67b44ac, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat get_spacewarpMotionVectorTextureFormat();

  /// @brief Method get_symmetricProjection, addr 0x67b4e18, size 0x8, virtual false, abstract: false, final false
  inline bool get_symmetricProjection();

  static inline void setStaticF_kDefaultColorMode(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup value);

  static inline void setStaticF_s_RuntimeInstance(::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> value);

  /// @brief Method set_autoColorSubmissionMode, addr 0x67b3a1c, size 0x8, virtual false, abstract: false, final false
  inline void set_autoColorSubmissionMode(bool value);

  /// @brief Method set_colorSubmissionModes, addr 0x67b3da0, size 0x1fc, virtual false, abstract: false, final false
  inline void
  set_colorSubmissionModes(::ArrayW<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, ::Array<::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup>*> value);

  /// @brief Method set_depthSubmissionMode, addr 0x67b4334, size 0xfc, virtual false, abstract: false, final false
  inline void set_depthSubmissionMode(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode value);

  /// @brief Method set_foveatedRenderingApi, addr 0x67b5078, size 0xfc, virtual false, abstract: false, final false
  inline void set_foveatedRenderingApi(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi value);

  /// @brief Method set_optimizeBufferDiscards, addr 0x67b4784, size 0x100, virtual false, abstract: false, final false
  inline void set_optimizeBufferDiscards(bool value);

  /// @brief Method set_renderMode, addr 0x67b389c, size 0xfc, virtual false, abstract: false, final false
  inline void set_renderMode(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode value);

  /// @brief Method set_spacewarpMotionVectorTextureFormat, addr 0x67b4604, size 0xfc, virtual false, abstract: false, final false
  inline void set_spacewarpMotionVectorTextureFormat(::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat value);

  /// @brief Method set_symmetricProjection, addr 0x67b4e20, size 0x100, virtual false, abstract: false, final false
  inline void set_symmetricProjection(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRSettings(OpenXRSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRSettings(OpenXRSettings const&) = delete;

  /// @brief Field LibraryName offset 0xffffffff size 0x8
  static constexpr ::ConstString LibraryName{ u"UnityOpenXR" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18448 };

  /// @brief Field features, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>, ::Array<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*> ___features;

  /// @brief Field m_renderMode, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode ___m_renderMode;

  /// @brief Field m_autoColorSubmissionMode, offset: 0x24, size: 0x1, def value: None
  bool ___m_autoColorSubmissionMode;

  /// @brief Field m_colorSubmissionModes, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList* ___m_colorSubmissionModes;

  /// @brief Field m_eyeTrackingPermissionsToRequest, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_eyeTrackingPermissionsToRequest;

  /// @brief Field m_depthSubmissionMode, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode ___m_depthSubmissionMode;

  /// @brief Field m_spacewarpMotionVectorTextureFormat, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat ___m_spacewarpMotionVectorTextureFormat;

  /// @brief Field m_optimizeBufferDiscards, offset: 0x40, size: 0x1, def value: None
  bool ___m_optimizeBufferDiscards;

  /// @brief Field m_symmetricProjection, offset: 0x41, size: 0x1, def value: None
  bool ___m_symmetricProjection;

  /// @brief Field m_foveatedRenderingApi, offset: 0x42, size: 0x1, def value: None
  ::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi ___m_foveatedRenderingApi;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___features) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_renderMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_autoColorSubmissionMode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_colorSubmissionModes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_eyeTrackingPermissionsToRequest) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_depthSubmissionMode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_spacewarpMotionVectorTextureFormat) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_optimizeBufferDiscards) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_symmetricProjection) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_foveatedRenderingApi) == 0x42, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRSettings, 0x48>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRSettings_BackendFovationApi, "UnityEngine.XR.OpenXR", "OpenXRSettings/BackendFovationApi");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeGroup, "UnityEngine.XR.OpenXR", "OpenXRSettings/ColorSubmissionModeGroup");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRSettings_DepthSubmissionMode, "UnityEngine.XR.OpenXR", "OpenXRSettings/DepthSubmissionMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRSettings_RenderMode, "UnityEngine.XR.OpenXR", "OpenXRSettings/RenderMode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRSettings_SpaceWarpMotionVectorTextureFormat, "UnityEngine.XR.OpenXR", "OpenXRSettings/SpaceWarpMotionVectorTextureFormat");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRSettings*, "UnityEngine.XR.OpenXR", "OpenXRSettings");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*, "UnityEngine.XR.OpenXR", "OpenXRSettings/ColorSubmissionModeList");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRSettings___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRSettings___c*, "UnityEngine.XR.OpenXR", "OpenXRSettings/<>c");
