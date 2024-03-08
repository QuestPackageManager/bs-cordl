#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Management/zzzz__XRLoaderHelper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusLoader)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::XR::Oculus {
class OculusSettings;
}
namespace Unity::XR::Oculus {
struct __OculusLoader__DeviceSupportedResult;
}
namespace UnityEngine::XR {
class XRDisplaySubsystemDescriptor;
}
namespace UnityEngine::XR {
class XRInputSubsystem;
}
// Forward declare root types
namespace Unity::XR::Oculus {
struct __OculusLoader__DeviceSupportedResult;
}
namespace Unity::XR::Oculus {
class OculusLoader;
}
// Write type traits
MARK_VAL_T(::Unity::XR::Oculus::__OculusLoader__DeviceSupportedResult);
MARK_REF_PTR_T(::Unity::XR::Oculus::OculusLoader);
// Type: ::DeviceSupportedResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: true
// CS Name: ::OculusLoader::DeviceSupportedResult
struct CORDL_TYPE __OculusLoader__DeviceSupportedResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OculusLoader__DeviceSupportedResult_Unwrapped
  enum struct ____OculusLoader__DeviceSupportedResult_Unwrapped : int32_t {
    __E_Supported = static_cast<int32_t>(0x0),
    __E_NotSupported = static_cast<int32_t>(0x1),
    __E_ExitApplication = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OculusLoader__DeviceSupportedResult_Unwrapped() const noexcept {
    return static_cast<____OculusLoader__DeviceSupportedResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusLoader__DeviceSupportedResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OculusLoader__DeviceSupportedResult(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ExitApplication value: static_cast<int32_t>(0x2)
  static ::Unity::XR::Oculus::__OculusLoader__DeviceSupportedResult const ExitApplication;

  /// @brief Field NotSupported value: static_cast<int32_t>(0x1)
  static ::Unity::XR::Oculus::__OculusLoader__DeviceSupportedResult const NotSupported;

  /// @brief Field Supported value: static_cast<int32_t>(0x0)
  static ::Unity::XR::Oculus::__OculusLoader__DeviceSupportedResult const Supported;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::__OculusLoader__DeviceSupportedResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__OculusLoader__DeviceSupportedResult, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::XR::Oculus
// Type: Unity.XR.Oculus::OculusLoader
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: ::Unity.XR.Oculus::OculusLoader*
class CORDL_TYPE OculusLoader : public ::UnityEngine::XR::Management::XRLoaderHelper {
public:
  // Declarations
  using DeviceSupportedResult = ::Unity::XR::Oculus::__OculusLoader__DeviceSupportedResult;

  __declspec(property(get = get_displaySubsystem)) Il2CppObject* displaySubsystem;

  __declspec(property(get = get_inputSubsystem))::UnityEngine::XR::XRInputSubsystem* inputSubsystem;

  /// @brief Field s_DisplaySubsystemDescriptors, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DisplaySubsystemDescriptors,
                             put = setStaticF_s_DisplaySubsystemDescriptors))::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* s_DisplaySubsystemDescriptors;

  /// @brief Field s_InputSubsystemDescriptors, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InputSubsystemDescriptors,
                             put = setStaticF_s_InputSubsystemDescriptors))::System::Collections::Generic::List_1<Il2CppObject*>* s_InputSubsystemDescriptors;

  /// @brief Method CheckUnityVersionCompatibility, addr 0x2dbb588, size 0x2dc, virtual false, abstract: false, final false
  inline bool CheckUnityVersionCompatibility();

  /// @brief Method Deinitialize, addr 0x2dbba7c, size 0x7c, virtual true, abstract: false, final false
  inline bool Deinitialize();

  /// @brief Method GetSettings, addr 0x2dbbcf0, size 0x48, virtual false, abstract: false, final false
  inline ::UnityW<::Unity::XR::Oculus::OculusSettings> GetSettings();

  /// @brief Method Initialize, addr 0x2dbb150, size 0x438, virtual true, abstract: false, final false
  inline bool Initialize();

  /// @brief Method IsDeviceSupported, addr 0x2dbafdc, size 0x90, virtual false, abstract: false, final false
  static inline ::Unity::XR::Oculus::__OculusLoader__DeviceSupportedResult IsDeviceSupported();

  static inline ::Unity::XR::Oculus::OculusLoader* New_ctor();

  /// @brief Method PermissionGrantedCallback, addr 0x2dbb918, size 0x64, virtual false, abstract: false, final false
  inline void PermissionGrantedCallback(::StringW permissionName);

  /// @brief Method RuntimeLoadOVRPlugin, addr 0x2dbbb74, size 0x178, virtual false, abstract: false, final false
  static inline void RuntimeLoadOVRPlugin();

  /// @brief Method Start, addr 0x2dbb984, size 0x7c, virtual true, abstract: false, final false
  inline bool Start();

  /// @brief Method Stop, addr 0x2dbba00, size 0x7c, virtual true, abstract: false, final false
  inline bool Stop();

  /// @brief Method .ctor, addr 0x2dbbd38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* getStaticF_s_DisplaySubsystemDescriptors();

  static inline ::System::Collections::Generic::List_1<Il2CppObject*>* getStaticF_s_InputSubsystemDescriptors();

  /// @brief Method get_displaySubsystem, addr 0x2dbb070, size 0x70, virtual false, abstract: false, final false
  inline Il2CppObject* get_displaySubsystem();

  /// @brief Method get_inputSubsystem, addr 0x2dbb0e0, size 0x70, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::OculusLoader, 0x20>, "Size mismatch!");

} // namespace Unity::XR::Oculus
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::__OculusLoader__DeviceSupportedResult, "Unity.XR.Oculus", "OculusLoader/DeviceSupportedResult");
NEED_NO_BOX(::Unity::XR::Oculus::OculusLoader);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::OculusLoader*, "Unity.XR.Oculus", "OculusLoader");
