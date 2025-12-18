#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PlatformAutoDetect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlatformAutoDetect)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal {
struct ShEvalMode;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class PlatformAutoDetect;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PlatformAutoDetect);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PlatformAutoDetect
class CORDL_TYPE PlatformAutoDetect : public ::System::Object {
public:
  // Declarations
  /// @brief Field <isShaderAPIMobileDefined>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__isShaderAPIMobileDefined_k__BackingField, put = setStaticF__isShaderAPIMobileDefined_k__BackingField)) bool _isShaderAPIMobileDefined_k__BackingField;

  /// @brief Field <isSwitch>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__isSwitch_k__BackingField, put = setStaticF__isSwitch_k__BackingField)) bool _isSwitch_k__BackingField;

  /// @brief Field <isXRMobile>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__isXRMobile_k__BackingField, put = setStaticF__isXRMobile_k__BackingField)) bool _isXRMobile_k__BackingField;

  /// @brief Field displaySubsystemList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_displaySubsystemList, put = setStaticF_displaySubsystemList)) ::System::Collections::Generic::List_1<Il2CppObject*>* displaySubsystemList;

  /// @brief Field isRunningOnPowerVRGPU, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_isRunningOnPowerVRGPU, put = setStaticF_isRunningOnPowerVRGPU)) bool isRunningOnPowerVRGPU;

  /// @brief Method Initialize, addr 0x672fd80, size 0x1c8, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method IsRunningXRMobile, addr 0x672ff48, size 0x1a4, virtual false, abstract: false, final false
  static inline bool IsRunningXRMobile();

  /// @brief Method ShAutoDetect, addr 0x673032c, size 0x15c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::ShEvalMode ShAutoDetect(::UnityEngine::Rendering::Universal::ShEvalMode mode);

  static inline bool getStaticF__isShaderAPIMobileDefined_k__BackingField();

  static inline bool getStaticF__isSwitch_k__BackingField();

  static inline bool getStaticF__isXRMobile_k__BackingField();

  static inline ::System::Collections::Generic::List_1<Il2CppObject*>* getStaticF_displaySubsystemList();

  static inline bool getStaticF_isRunningOnPowerVRGPU();

  /// @brief Method get_isShaderAPIMobileDefined, addr 0x67301ac, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_isShaderAPIMobileDefined();

  /// @brief Method get_isSwitch, addr 0x673026c, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_isSwitch();

  /// @brief Method get_isXRMobile, addr 0x67300ec, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_isXRMobile();

  static inline void setStaticF__isShaderAPIMobileDefined_k__BackingField(bool value);

  static inline void setStaticF__isSwitch_k__BackingField(bool value);

  static inline void setStaticF__isXRMobile_k__BackingField(bool value);

  static inline void setStaticF_displaySubsystemList(::System::Collections::Generic::List_1<Il2CppObject*>* value);

  static inline void setStaticF_isRunningOnPowerVRGPU(bool value);

  /// @brief Method set_isShaderAPIMobileDefined, addr 0x6730208, size 0x64, virtual false, abstract: false, final false
  static inline void set_isShaderAPIMobileDefined(bool value);

  /// @brief Method set_isSwitch, addr 0x67302c8, size 0x64, virtual false, abstract: false, final false
  static inline void set_isSwitch(bool value);

  /// @brief Method set_isXRMobile, addr 0x6730148, size 0x64, virtual false, abstract: false, final false
  static inline void set_isXRMobile(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformAutoDetect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformAutoDetect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformAutoDetect(PlatformAutoDetect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformAutoDetect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformAutoDetect(PlatformAutoDetect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13021 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PlatformAutoDetect, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PlatformAutoDetect);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PlatformAutoDetect*, "UnityEngine.Rendering.Universal", "PlatformAutoDetect");
