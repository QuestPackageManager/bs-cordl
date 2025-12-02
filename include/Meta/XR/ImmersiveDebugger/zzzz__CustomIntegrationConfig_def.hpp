#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/CustomIntegrationConfig.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CustomIntegrationConfig)
namespace Meta::XR::ImmersiveDebugger {
class CustomIntegrationConfig_GetCameraDelegate;
}
namespace Meta::XR::ImmersiveDebugger {
class CustomIntegrationConfig_GetLeftControllerTransformDelegate;
}
namespace Meta::XR::ImmersiveDebugger {
class CustomIntegrationConfig_GetRightControllerTransformDelegate;
}
namespace Meta::XR::ImmersiveDebugger {
class ICustomIntegrationConfig;
}
namespace System {
class AsyncCallback;
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
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger {
class CustomIntegrationConfig;
}
namespace Meta::XR::ImmersiveDebugger {
class CustomIntegrationConfig_GetCameraDelegate;
}
namespace Meta::XR::ImmersiveDebugger {
class CustomIntegrationConfig_GetLeftControllerTransformDelegate;
}
namespace Meta::XR::ImmersiveDebugger {
class CustomIntegrationConfig_GetRightControllerTransformDelegate;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate);
// Dependencies System.MulticastDelegate
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetCameraDelegate
class CORDL_TYPE CustomIntegrationConfig_GetCameraDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x58430dc, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x58430f8, size 0xc, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x58430c8, size 0x14, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> Invoke();

  static inline ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5842eec, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomIntegrationConfig_GetCameraDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomIntegrationConfig_GetCameraDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomIntegrationConfig_GetCameraDelegate(CustomIntegrationConfig_GetCameraDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomIntegrationConfig_GetCameraDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomIntegrationConfig_GetCameraDelegate(CustomIntegrationConfig_GetCameraDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23174 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate, 0x80>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
// Dependencies System.MulticastDelegate
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetLeftControllerTransformDelegate
class CORDL_TYPE CustomIntegrationConfig_GetLeftControllerTransformDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5843180, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x584319c, size 0xc, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x584316c, size 0x14, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> Invoke();

  static inline ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5843104, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomIntegrationConfig_GetLeftControllerTransformDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomIntegrationConfig_GetLeftControllerTransformDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomIntegrationConfig_GetLeftControllerTransformDelegate(CustomIntegrationConfig_GetLeftControllerTransformDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomIntegrationConfig_GetLeftControllerTransformDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomIntegrationConfig_GetLeftControllerTransformDelegate(CustomIntegrationConfig_GetLeftControllerTransformDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23175 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate, 0x80>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
// Dependencies System.MulticastDelegate
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetRightControllerTransformDelegate
class CORDL_TYPE CustomIntegrationConfig_GetRightControllerTransformDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5843224, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5843240, size 0xc, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5843210, size 0x14, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> Invoke();

  static inline ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x58431a8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomIntegrationConfig_GetRightControllerTransformDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomIntegrationConfig_GetRightControllerTransformDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomIntegrationConfig_GetRightControllerTransformDelegate(CustomIntegrationConfig_GetRightControllerTransformDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomIntegrationConfig_GetRightControllerTransformDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomIntegrationConfig_GetRightControllerTransformDelegate(CustomIntegrationConfig_GetRightControllerTransformDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23176 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate, 0x80>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig
class CORDL_TYPE CustomIntegrationConfig : public ::System::Object {
public:
  // Declarations
  using GetCameraDelegate = ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate;

  using GetLeftControllerTransformDelegate = ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate;

  using GetRightControllerTransformDelegate = ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate;

  /// @brief Field GetCameraHandler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_GetCameraHandler, put = setStaticF_GetCameraHandler)) ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate* GetCameraHandler;

  /// @brief Method ClearAllConfig, addr 0x5842f54, size 0x108, virtual false, abstract: false, final false
  static inline void ClearAllConfig(::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig* customConfig);

  /// @brief Method GetCamera, addr 0x584305c, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Camera> GetCamera();

  /// @brief Method SetupAllConfig, addr 0x5842de4, size 0x108, virtual false, abstract: false, final false
  static inline void SetupAllConfig(::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig* customConfig);

  /// @brief Method add_GetCameraHandler, addr 0x5842c4c, size 0xcc, virtual false, abstract: false, final false
  static inline void add_GetCameraHandler(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate* value);

  static inline ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate* getStaticF_GetCameraHandler();

  /// @brief Method remove_GetCameraHandler, addr 0x5842d18, size 0xcc, virtual false, abstract: false, final false
  static inline void remove_GetCameraHandler(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate* value);

  static inline void setStaticF_GetCameraHandler(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomIntegrationConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomIntegrationConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomIntegrationConfig(CustomIntegrationConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomIntegrationConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomIntegrationConfig(CustomIntegrationConfig const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23177 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*, "Meta.XR.ImmersiveDebugger", "CustomIntegrationConfig");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*, "Meta.XR.ImmersiveDebugger", "CustomIntegrationConfig/GetCameraDelegate");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetLeftControllerTransformDelegate*, "Meta.XR.ImmersiveDebugger",
                       "CustomIntegrationConfig/GetLeftControllerTransformDelegate");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetRightControllerTransformDelegate*, "Meta.XR.ImmersiveDebugger",
                       "CustomIntegrationConfig/GetRightControllerTransformDelegate");
