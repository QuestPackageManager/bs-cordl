#pragma once
// IWYU pragma private; include "GlobalNamespace/XRSubsystemHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRSubsystemHelper)
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
namespace GlobalNamespace {
class XRSubsystemHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::XRSubsystemHelper);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: XRSubsystemHelper
class CORDL_TYPE XRSubsystemHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_displaySubsystemDescriptors, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_displaySubsystemDescriptors,
                      put = setStaticF_s_displaySubsystemDescriptors)) ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* s_displaySubsystemDescriptors;

  /// @brief Field s_displaySubsystems, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_displaySubsystems, put = setStaticF_s_displaySubsystems)) ::System::Collections::Generic::List_1<Il2CppObject*>* s_displaySubsystems;

  /// @brief Field s_inputSubsystems, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_inputSubsystems, put = setStaticF_s_inputSubsystems)) ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* s_inputSubsystems;

  /// @brief Method GetCurrentDisplaySubsystem, addr 0x39d32c8, size 0x13c, virtual false, abstract: false, final false
  static inline Il2CppObject* GetCurrentDisplaySubsystem();

  /// @brief Method GetCurrentDisplaySubsystemDescriptor, addr 0x39d3404, size 0x134, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::XRDisplaySubsystemDescriptor* GetCurrentDisplaySubsystemDescriptor();

  /// @brief Method GetCurrentInputSubsystem, addr 0x39d3538, size 0x134, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::XRInputSubsystem* GetCurrentInputSubsystem();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* getStaticF_s_displaySubsystemDescriptors();

  static inline ::System::Collections::Generic::List_1<Il2CppObject*>* getStaticF_s_displaySubsystems();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* getStaticF_s_inputSubsystems();

  static inline void setStaticF_s_displaySubsystemDescriptors(::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* value);

  static inline void setStaticF_s_displaySubsystems(::System::Collections::Generic::List_1<Il2CppObject*>* value);

  static inline void setStaticF_s_inputSubsystems(::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSubsystemHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRSubsystemHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRSubsystemHelper(XRSubsystemHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRSubsystemHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRSubsystemHelper(XRSubsystemHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16502 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::XRSubsystemHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::XRSubsystemHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::XRSubsystemHelper*, "", "XRSubsystemHelper");
