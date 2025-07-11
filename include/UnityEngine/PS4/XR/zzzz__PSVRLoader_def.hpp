#pragma once
// IWYU pragma private; include "UnityEngine/PS4/XR/PSVRLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Management/zzzz__XRLoaderHelper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PSVRLoader)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR {
class XRDisplaySubsystemDescriptor;
}
namespace UnityEngine::XR {
class XRInputSubsystem;
}
// Forward declare root types
namespace UnityEngine::PS4::XR {
class PSVRLoader;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::PS4::XR::PSVRLoader);
// Dependencies UnityEngine.XR.Management.XRLoaderHelper
namespace UnityEngine::PS4::XR {
// Is value type: false
// CS Name: UnityEngine.PS4.XR.PSVRLoader
class CORDL_TYPE PSVRLoader : public ::UnityEngine::XR::Management::XRLoaderHelper {
public:
  // Declarations
  __declspec(property(get = get_displaySubsystem)) Il2CppObject* displaySubsystem;

  __declspec(property(get = get_inputSubsystem)) ::UnityEngine::XR::XRInputSubsystem* inputSubsystem;

  /// @brief Field s_DisplayName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DisplayName, put = setStaticF_s_DisplayName)) ::StringW s_DisplayName;

  /// @brief Field s_DisplaySubsystemDescriptors, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DisplaySubsystemDescriptors,
                      put = setStaticF_s_DisplaySubsystemDescriptors)) ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* s_DisplaySubsystemDescriptors;

  /// @brief Field s_InputName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InputName, put = setStaticF_s_InputName)) ::StringW s_InputName;

  /// @brief Field s_InputSubsystemDescriptors, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InputSubsystemDescriptors, put = setStaticF_s_InputSubsystemDescriptors)) ::System::Collections::Generic::List_1<Il2CppObject*>* s_InputSubsystemDescriptors;

  /// @brief Method Deinitialize, addr 0x4838e3c, size 0x78, virtual true, abstract: false, final false
  inline bool Deinitialize();

  /// @brief Method DisableVRAndEnable2DReprojection, addr 0x4838eb4, size 0xa0, virtual false, abstract: false, final false
  inline bool DisableVRAndEnable2DReprojection();

  /// @brief Method EnableVRAndDisable2DReprojection, addr 0x4838f54, size 0xbc, virtual false, abstract: false, final false
  inline bool EnableVRAndDisable2DReprojection();

  /// @brief Method Initialize, addr 0x4838c78, size 0xd4, virtual true, abstract: false, final false
  inline bool Initialize();

  static inline ::UnityEngine::PS4::XR::PSVRLoader* New_ctor();

  /// @brief Method Start, addr 0x4838d4c, size 0x78, virtual true, abstract: false, final false
  inline bool Start();

  /// @brief Method Stop, addr 0x4838dc4, size 0x78, virtual true, abstract: false, final false
  inline bool Stop();

  /// @brief Method .ctor, addr 0x4839010, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_s_DisplayName();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* getStaticF_s_DisplaySubsystemDescriptors();

  static inline ::StringW getStaticF_s_InputName();

  static inline ::System::Collections::Generic::List_1<Il2CppObject*>* getStaticF_s_InputSubsystemDescriptors();

  /// @brief Method get_displaySubsystem, addr 0x4838bb0, size 0x64, virtual false, abstract: false, final false
  inline Il2CppObject* get_displaySubsystem();

  /// @brief Method get_inputSubsystem, addr 0x4838c14, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::XRInputSubsystem* get_inputSubsystem();

  static inline void setStaticF_s_DisplayName(::StringW value);

  static inline void setStaticF_s_DisplaySubsystemDescriptors(::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* value);

  static inline void setStaticF_s_InputName(::StringW value);

  static inline void setStaticF_s_InputSubsystemDescriptors(::System::Collections::Generic::List_1<Il2CppObject*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PSVRLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PSVRLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PSVRLoader(PSVRLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PSVRLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PSVRLoader(PSVRLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19225 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PS4::XR::PSVRLoader, 0x20>, "Size mismatch!");

} // namespace UnityEngine::PS4::XR
NEED_NO_BOX(::UnityEngine::PS4::XR::PSVRLoader);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PS4::XR::PSVRLoader*, "UnityEngine.PS4.XR", "PSVRLoader");
