#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/OculusLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Management/zzzz__XRLoaderHelper_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusLoader)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::XR::Oculus {
struct OculusLoader_DeviceSupportedResult;
}
namespace Unity::XR::Oculus {
class OculusSettings;
}
namespace UnityEngine::XR {
class XRDisplaySubsystemDescriptor;
}
namespace UnityEngine::XR {
class XRInputSubsystem;
}
// Forward declare root types
namespace Unity::XR::Oculus {
struct OculusLoader_DeviceSupportedResult;
}
namespace Unity::XR::Oculus {
class OculusLoader;
}
// Write type traits
MARK_VAL_T(::Unity::XR::Oculus::OculusLoader_DeviceSupportedResult);
MARK_REF_PTR_T(::Unity::XR::Oculus::OculusLoader);
// Dependencies
namespace Unity::XR::Oculus {
// Is value type: true
// CS Name: Unity.XR.Oculus.OculusLoader/DeviceSupportedResult
struct CORDL_TYPE OculusLoader_DeviceSupportedResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OculusLoader_DeviceSupportedResult_Unwrapped
  enum struct __OculusLoader_DeviceSupportedResult_Unwrapped : int32_t {
    __E_Supported = static_cast<int32_t>(0x0),
    __E_NotSupported = static_cast<int32_t>(0x1),
    __E_ExitApplication = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OculusLoader_DeviceSupportedResult_Unwrapped() const noexcept {
    return static_cast<__OculusLoader_DeviceSupportedResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusLoader_DeviceSupportedResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OculusLoader_DeviceSupportedResult(int32_t value__) noexcept;

  /// @brief Field ExitApplication value: I32(2)
  static ::Unity::XR::Oculus::OculusLoader_DeviceSupportedResult const ExitApplication;

  /// @brief Field NotSupported value: I32(1)
  static ::Unity::XR::Oculus::OculusLoader_DeviceSupportedResult const NotSupported;

  /// @brief Field Supported value: I32(0)
  static ::Unity::XR::Oculus::OculusLoader_DeviceSupportedResult const Supported;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17404 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::Oculus::OculusLoader_DeviceSupportedResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::OculusLoader_DeviceSupportedResult, 0x4>, "Size mismatch!");

} // namespace Unity::XR::Oculus
// Dependencies UnityEngine.XR.Management.XRLoaderHelper
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: Unity.XR.Oculus.OculusLoader
class CORDL_TYPE OculusLoader : public ::UnityEngine::XR::Management::XRLoaderHelper {
public:
  // Declarations
  using DeviceSupportedResult = ::Unity::XR::Oculus::OculusLoader_DeviceSupportedResult;

  __declspec(property(get = get_displaySubsystem)) Il2CppObject* displaySubsystem;

  __declspec(property(get = get_inputSubsystem)) ::UnityEngine::XR::XRInputSubsystem* inputSubsystem;

  /// @brief Field s_DisplaySubsystemDescriptors, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DisplaySubsystemDescriptors,
                      put = setStaticF_s_DisplaySubsystemDescriptors)) ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* s_DisplaySubsystemDescriptors;

  /// @brief Field s_InputSubsystemDescriptors, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InputSubsystemDescriptors, put = setStaticF_s_InputSubsystemDescriptors)) ::System::Collections::Generic::List_1<Il2CppObject*>* s_InputSubsystemDescriptors;

  /// @brief Method CheckUnityVersionCompatibility, addr 0x4833ed0, size 0x318, virtual false, abstract: false, final false
  inline bool CheckUnityVersionCompatibility();

  /// @brief Method Deinitialize, addr 0x48343b4, size 0x7c, virtual true, abstract: false, final false
  inline bool Deinitialize();

  /// @brief Method GetSettings, addr 0x4834678, size 0x48, virtual false, abstract: false, final false
  inline ::UnityW<::Unity::XR::Oculus::OculusSettings> GetSettings();

  /// @brief Method Initialize, addr 0x4833b50, size 0x380, virtual true, abstract: false, final false
  inline bool Initialize();

  /// @brief Method IsDeviceSupported, addr 0x48339f4, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::XR::Oculus::OculusLoader_DeviceSupportedResult IsDeviceSupported();

  static inline ::Unity::XR::Oculus::OculusLoader* New_ctor();

  /// @brief Method RuntimeLoadOVRPlugin, addr 0x48344d0, size 0x1a4, virtual false, abstract: false, final false
  static inline void RuntimeLoadOVRPlugin();

  /// @brief Method Start, addr 0x48342bc, size 0x7c, virtual true, abstract: false, final false
  inline bool Start();

  /// @brief Method Stop, addr 0x4834338, size 0x7c, virtual true, abstract: false, final false
  inline bool Stop();

  /// @brief Method .ctor, addr 0x48346c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* getStaticF_s_DisplaySubsystemDescriptors();

  static inline ::System::Collections::Generic::List_1<Il2CppObject*>* getStaticF_s_InputSubsystemDescriptors();

  /// @brief Method get_displaySubsystem, addr 0x4833a88, size 0x64, virtual false, abstract: false, final false
  inline Il2CppObject* get_displaySubsystem();

  /// @brief Method get_inputSubsystem, addr 0x4833aec, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::XRInputSubsystem* get_inputSubsystem();

  static inline void setStaticF_s_DisplaySubsystemDescriptors(::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* value);

  static inline void setStaticF_s_InputSubsystemDescriptors(::System::Collections::Generic::List_1<Il2CppObject*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusLoader(OculusLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusLoader(OculusLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17405 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::OculusLoader, 0x20>, "Size mismatch!");

} // namespace Unity::XR::Oculus
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::OculusLoader_DeviceSupportedResult, "Unity.XR.Oculus", "OculusLoader/DeviceSupportedResult");
NEED_NO_BOX(::Unity::XR::Oculus::OculusLoader);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::OculusLoader*, "Unity.XR.Oculus", "OculusLoader");
