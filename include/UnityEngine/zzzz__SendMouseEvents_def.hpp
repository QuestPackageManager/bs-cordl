#pragma once
// IWYU pragma private; include "UnityEngine/SendMouseEvents.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SendMouseEvents)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct SendMouseEvents_HitInfo;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class SendMouseEvents;
}
namespace UnityEngine {
struct SendMouseEvents_HitInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SendMouseEvents);
MARK_VAL_T(::UnityEngine::SendMouseEvents_HitInfo);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.SendMouseEvents/HitInfo
struct CORDL_TYPE SendMouseEvents_HitInfo {
public:
  // Declarations
  /// @brief Method Compare, addr 0x48ed164, size 0xb4, virtual false, abstract: false, final false
  static inline bool Compare(::UnityEngine::SendMouseEvents_HitInfo lhs, ::UnityEngine::SendMouseEvents_HitInfo rhs);

  /// @brief Method SendMessage, addr 0x48ed140, size 0x24, virtual false, abstract: false, final false
  inline void SendMessage(::StringW name);

  /// @brief Method op_Implicit, addr 0x48ed0a0, size 0xa0, virtual false, abstract: false, final false
  static inline bool op_Implicit_bool(::UnityEngine::SendMouseEvents_HitInfo exists);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SendMouseEvents_HitInfo();

  // Ctor Parameters [CppParam { name: "target", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "camera", ty: "::UnityW<::UnityEngine::Camera>",
  // modifiers: "", def_value: None }]
  constexpr SendMouseEvents_HitInfo(::UnityW<::UnityEngine::GameObject> target, ::UnityW<::UnityEngine::Camera> camera) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18615 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field target, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> target;

  /// @brief Field camera, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> camera;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SendMouseEvents_HitInfo, target) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SendMouseEvents_HitInfo, camera) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::SendMouseEvents_HitInfo, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object, UnityEngine.Vector2
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SendMouseEvents
class CORDL_TYPE SendMouseEvents : public ::System::Object {
public:
  // Declarations
  using HitInfo = ::UnityEngine::SendMouseEvents_HitInfo;

  /// @brief Field m_Cameras, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_Cameras, put = setStaticF_m_Cameras)) ::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*> m_Cameras;

  /// @brief Field m_CurrentHit, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_CurrentHit, put = setStaticF_m_CurrentHit)) ::ArrayW<::UnityEngine::SendMouseEvents_HitInfo, ::Array<::UnityEngine::SendMouseEvents_HitInfo>*> m_CurrentHit;

  /// @brief Field m_LastHit, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_LastHit, put = setStaticF_m_LastHit)) ::ArrayW<::UnityEngine::SendMouseEvents_HitInfo, ::Array<::UnityEngine::SendMouseEvents_HitInfo>*> m_LastHit;

  /// @brief Field m_MouseDownHit, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_MouseDownHit, put = setStaticF_m_MouseDownHit)) ::ArrayW<::UnityEngine::SendMouseEvents_HitInfo, ::Array<::UnityEngine::SendMouseEvents_HitInfo>*>
      m_MouseDownHit;

  /// @brief Field s_GetMouseState, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_GetMouseState,
                      put = setStaticF_s_GetMouseState)) ::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::UnityEngine::Vector2>>* s_GetMouseState;

  /// @brief Field s_MouseButtonIsPressed, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_MouseButtonIsPressed, put = setStaticF_s_MouseButtonIsPressed)) bool s_MouseButtonIsPressed;

  /// @brief Field s_MouseButtonPressedThisFrame, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_MouseButtonPressedThisFrame, put = setStaticF_s_MouseButtonPressedThisFrame)) bool s_MouseButtonPressedThisFrame;

  /// @brief Field s_MousePosition, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MousePosition, put = setStaticF_s_MousePosition)) ::UnityEngine::Vector2 s_MousePosition;

  /// @brief Field s_MouseUsed, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_MouseUsed, put = setStaticF_s_MouseUsed)) bool s_MouseUsed;

  /// @brief Method DoSendMouseEvents, addr 0x48ec310, size 0x968, virtual false, abstract: false, final false
  static inline void DoSendMouseEvents(int32_t skipRTCameras);

  /// @brief Method SendEvents, addr 0x48ecc78, size 0x428, virtual false, abstract: false, final false
  static inline void SendEvents(int32_t i, ::UnityEngine::SendMouseEvents_HitInfo hit);

  /// @brief Method SetMouseMoved, addr 0x48ec2b4, size 0x5c, virtual false, abstract: false, final false
  static inline void SetMouseMoved();

  /// @brief Method UpdateMouse, addr 0x48ec0f0, size 0x1c4, virtual false, abstract: false, final false
  static inline void UpdateMouse();

  static inline ::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*> getStaticF_m_Cameras();

  static inline ::ArrayW<::UnityEngine::SendMouseEvents_HitInfo, ::Array<::UnityEngine::SendMouseEvents_HitInfo>*> getStaticF_m_CurrentHit();

  static inline ::ArrayW<::UnityEngine::SendMouseEvents_HitInfo, ::Array<::UnityEngine::SendMouseEvents_HitInfo>*> getStaticF_m_LastHit();

  static inline ::ArrayW<::UnityEngine::SendMouseEvents_HitInfo, ::Array<::UnityEngine::SendMouseEvents_HitInfo>*> getStaticF_m_MouseDownHit();

  static inline ::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::UnityEngine::Vector2>>* getStaticF_s_GetMouseState();

  static inline bool getStaticF_s_MouseButtonIsPressed();

  static inline bool getStaticF_s_MouseButtonPressedThisFrame();

  static inline ::UnityEngine::Vector2 getStaticF_s_MousePosition();

  static inline bool getStaticF_s_MouseUsed();

  static inline void setStaticF_m_Cameras(::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*> value);

  static inline void setStaticF_m_CurrentHit(::ArrayW<::UnityEngine::SendMouseEvents_HitInfo, ::Array<::UnityEngine::SendMouseEvents_HitInfo>*> value);

  static inline void setStaticF_m_LastHit(::ArrayW<::UnityEngine::SendMouseEvents_HitInfo, ::Array<::UnityEngine::SendMouseEvents_HitInfo>*> value);

  static inline void setStaticF_m_MouseDownHit(::ArrayW<::UnityEngine::SendMouseEvents_HitInfo, ::Array<::UnityEngine::SendMouseEvents_HitInfo>*> value);

  static inline void setStaticF_s_GetMouseState(::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::UnityEngine::Vector2>>* value);

  static inline void setStaticF_s_MouseButtonIsPressed(bool value);

  static inline void setStaticF_s_MouseButtonPressedThisFrame(bool value);

  static inline void setStaticF_s_MousePosition(::UnityEngine::Vector2 value);

  static inline void setStaticF_s_MouseUsed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SendMouseEvents();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SendMouseEvents", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SendMouseEvents(SendMouseEvents&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SendMouseEvents", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SendMouseEvents(SendMouseEvents const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18616 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SendMouseEvents, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SendMouseEvents);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SendMouseEvents*, "UnityEngine", "SendMouseEvents");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SendMouseEvents_HitInfo, "UnityEngine", "SendMouseEvents/HitInfo");
