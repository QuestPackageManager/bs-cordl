#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVirtualKeyboard.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRGLTFScene_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "GlobalNamespace/zzzz__OVRPose_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__CustomYieldInstruction_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRVirtualKeyboard)
namespace GlobalNamespace {
class HandInputSource_OVRVirtualKeyboard___c__DisplayClass6_0;
}
namespace GlobalNamespace {
struct InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData;
}
namespace GlobalNamespace {
class InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6;
}
namespace GlobalNamespace {
class OVRBone;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
class OVRGLTFLoader;
}
namespace GlobalNamespace {
class OVRHand;
}
namespace GlobalNamespace {
struct OVRInput_Controller;
}
namespace GlobalNamespace {
class OVRManager_EventListener;
}
namespace GlobalNamespace {
struct OVRPlugin_EventDataBuffer;
}
namespace GlobalNamespace {
struct OVRPlugin_Posef;
}
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardInputSource;
}
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardLocationInfo;
}
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardModelAnimationState;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_AbstractTextHandler;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_BaseInputSource;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_CommitTextUnityEvent;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_ControllerInputSource;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_HandInputSource;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_IInputSource;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_ITextHandler;
}
namespace GlobalNamespace {
struct OVRVirtualKeyboard_InputSource;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_InteractorRootTransformOverride;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_KeyboardEventListener;
}
namespace GlobalNamespace {
struct OVRVirtualKeyboard_KeyboardPosition;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_TextHandlerScope;
}
namespace GlobalNamespace {
struct OVRVirtualKeyboard_VirtualKeyboardTextureInfo;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_WaitUntilKeyboardVisible;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard__InitializeGlTFModel_d__92;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard___c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO {
class MemoryStream;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class OVRPhysicsRaycaster;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::UI {
class InputField;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRVirtualKeyboard_InputSource;
}
namespace GlobalNamespace {
struct OVRVirtualKeyboard_KeyboardPosition;
}
namespace GlobalNamespace {
class HandInputSource_OVRVirtualKeyboard___c__DisplayClass6_0;
}
namespace GlobalNamespace {
class InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_AbstractTextHandler;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_BaseInputSource;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_CommitTextUnityEvent;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_ControllerInputSource;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_HandInputSource;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_IInputSource;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_ITextHandler;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_InteractorRootTransformOverride;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_KeyboardEventListener;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_TextHandlerScope;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard_WaitUntilKeyboardVisible;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard__InitializeGlTFModel_d__92;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard___c;
}
namespace GlobalNamespace {
struct InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData;
}
namespace GlobalNamespace {
struct OVRVirtualKeyboard_VirtualKeyboardTextureInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRVirtualKeyboard_InputSource);
MARK_VAL_T(::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition);
MARK_REF_PTR_T(::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c__DisplayClass6_0);
MARK_REF_PTR_T(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard_HandInputSource);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard_IInputSource);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard_ITextHandler);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__92);
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboard___c);
MARK_VAL_T(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData);
MARK_VAL_T(::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRVirtualKeyboard/KeyboardPosition
struct CORDL_TYPE OVRVirtualKeyboard_KeyboardPosition {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRVirtualKeyboard_KeyboardPosition_Unwrapped
  enum struct __OVRVirtualKeyboard_KeyboardPosition_Unwrapped : int32_t {
    __E_Far = static_cast<int32_t>(0x0),
    __E_Near = static_cast<int32_t>(0x1),
    __E_Direct = static_cast<int32_t>(0x1),
    __E_Custom = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRVirtualKeyboard_KeyboardPosition_Unwrapped() const noexcept {
    return static_cast<__OVRVirtualKeyboard_KeyboardPosition_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard_KeyboardPosition();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRVirtualKeyboard_KeyboardPosition(int32_t value__) noexcept;

  /// @brief Field Custom value: I32(2)
  static ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition const Custom;

  /// @brief Field Direct value: I32(1)
  static ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition const Direct;

  /// @brief Field Far value: I32(0)
  static ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition const Far;

  /// @brief Field Near value: I32(1)
  static ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition const Near;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7772 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/ITextHandler
class CORDL_TYPE OVRVirtualKeyboard_ITextHandler {
public:
  // Declarations
  __declspec(property(get = get_IsFocused)) bool IsFocused;

  __declspec(property(get = get_OnTextChanged, put = set_OnTextChanged)) ::System::Action_1<::StringW>* OnTextChanged;

  __declspec(property(get = get_SubmitOnEnter)) bool SubmitOnEnter;

  __declspec(property(get = get_Text)) ::StringW Text;

  /// @brief Method AppendText, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AppendText(::StringW s);

  /// @brief Method ApplyBackspace, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ApplyBackspace();

  /// @brief Method MoveTextEnd, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void MoveTextEnd();

  /// @brief Method Submit, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Submit();

  /// @brief Method get_IsFocused, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsFocused();

  /// @brief Method get_OnTextChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Action_1<::StringW>* get_OnTextChanged();

  /// @brief Method get_SubmitOnEnter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_SubmitOnEnter();

  /// @brief Method get_Text, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Text();

  /// @brief Method set_OnTextChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_OnTextChanged(::System::Action_1<::StringW>* value);

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_ITextHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard_ITextHandler(OVRVirtualKeyboard_ITextHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7773 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/AbstractTextHandler
class CORDL_TYPE OVRVirtualKeyboard_AbstractTextHandler : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_IsFocused)) bool IsFocused;

  __declspec(property(get = get_OnTextChanged, put = set_OnTextChanged)) ::System::Action_1<::StringW>* OnTextChanged;

  __declspec(property(get = get_SubmitOnEnter)) bool SubmitOnEnter;

  __declspec(property(get = get_Text)) ::StringW Text;

  /// @brief Convert operator to "::GlobalNamespace::OVRVirtualKeyboard_ITextHandler"
  constexpr operator ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*() noexcept;

  /// @brief Method AppendText, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AppendText(::StringW s);

  /// @brief Method ApplyBackspace, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ApplyBackspace();

  /// @brief Method MoveTextEnd, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void MoveTextEnd();

  static inline ::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler* New_ctor();

  /// @brief Method Submit, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Submit();

  /// @brief Method .ctor, addr 0x5cd6d50, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsFocused, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsFocused();

  /// @brief Method get_OnTextChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Action_1<::StringW>* get_OnTextChanged();

  /// @brief Method get_SubmitOnEnter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_SubmitOnEnter();

  /// @brief Method get_Text, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Text();

  /// @brief Convert to "::GlobalNamespace::OVRVirtualKeyboard_ITextHandler"
  constexpr ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* i___GlobalNamespace__OVRVirtualKeyboard_ITextHandler() noexcept;

  /// @brief Method set_OnTextChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_OnTextChanged(::System::Action_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard_AbstractTextHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_AbstractTextHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboard_AbstractTextHandler(OVRVirtualKeyboard_AbstractTextHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_AbstractTextHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard_AbstractTextHandler(OVRVirtualKeyboard_AbstractTextHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7774 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/TextHandlerScope
class CORDL_TYPE OVRVirtualKeyboard_TextHandlerScope : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsFocused)) bool IsFocused;

  __declspec(property(get = get_OnTextChanged, put = set_OnTextChanged)) ::System::Action_1<::StringW>* OnTextChanged;

  __declspec(property(get = get_SubmitOnEnter)) bool SubmitOnEnter;

  __declspec(property(get = get_Text)) ::StringW Text;

  /// @brief Field _textChangeHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__textChangeHandler, put = __cordl_internal_set__textChangeHandler)) ::System::Action_1<::StringW>* _textChangeHandler;

  /// @brief Field _textHandler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__textHandler, put = __cordl_internal_set__textHandler)) ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* _textHandler;

  /// @brief Convert operator to "::GlobalNamespace::OVRVirtualKeyboard_ITextHandler"
  constexpr operator ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AppendText, addr 0x5cd586c, size 0x194, virtual true, abstract: false, final true
  inline void AppendText(::StringW s);

  /// @brief Method ApplyBackspace, addr 0x5cd5ba4, size 0x180, virtual true, abstract: false, final true
  inline void ApplyBackspace();

  /// @brief Method Dispose, addr 0x5cd6d54, size 0x160, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveTextEnd, addr 0x5cd7074, size 0xb0, virtual true, abstract: false, final true
  inline void MoveTextEnd();

  static inline ::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope* New_ctor(::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* textHandler, ::System::Action_1<::StringW>* textChangeHandler);

  /// @brief Method Submit, addr 0x5cd5fbc, size 0xb0, virtual true, abstract: false, final true
  inline void Submit();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get__textChangeHandler() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get__textChangeHandler();

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* const& __cordl_internal_get__textHandler() const;

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*& __cordl_internal_get__textHandler();

  constexpr void __cordl_internal_set__textChangeHandler(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set__textHandler(::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* value);

  /// @brief Method .ctor, addr 0x5cd5704, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* textHandler, ::System::Action_1<::StringW>* textChangeHandler);

  /// @brief Method get_IsFocused, addr 0x5cd6fcc, size 0xa8, virtual true, abstract: false, final true
  inline bool get_IsFocused();

  /// @brief Method get_OnTextChanged, addr 0x5cd6eb4, size 0x38, virtual true, abstract: false, final true
  inline ::System::Action_1<::StringW>* get_OnTextChanged();

  /// @brief Method get_SubmitOnEnter, addr 0x5cd5f14, size 0xa8, virtual true, abstract: false, final true
  inline bool get_SubmitOnEnter();

  /// @brief Method get_Text, addr 0x5cd6f24, size 0xa8, virtual true, abstract: false, final true
  inline ::StringW get_Text();

  /// @brief Convert to "::GlobalNamespace::OVRVirtualKeyboard_ITextHandler"
  constexpr ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* i___GlobalNamespace__OVRVirtualKeyboard_ITextHandler() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_OnTextChanged, addr 0x5cd6eec, size 0x38, virtual true, abstract: false, final true
  inline void set_OnTextChanged(::System::Action_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard_TextHandlerScope();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_TextHandlerScope", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboard_TextHandlerScope(OVRVirtualKeyboard_TextHandlerScope&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_TextHandlerScope", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard_TextHandlerScope(OVRVirtualKeyboard_TextHandlerScope const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7775 };

  /// @brief Field _textHandler, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* ____textHandler;

  /// @brief Field _textChangeHandler, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ____textChangeHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope, ____textHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope, ____textChangeHandler) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.CustomYieldInstruction
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/WaitUntilKeyboardVisible
class CORDL_TYPE OVRVirtualKeyboard_WaitUntilKeyboardVisible : public ::UnityEngine::CustomYieldInstruction {
public:
  // Declarations
  /// @brief Field _keyboard, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__keyboard, put = __cordl_internal_set__keyboard)) ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> _keyboard;

  __declspec(property(get = get_keepWaiting)) bool keepWaiting;

  static inline ::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible* New_ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard);

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> const& __cordl_internal_get__keyboard() const;

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard>& __cordl_internal_get__keyboard();

  constexpr void __cordl_internal_set__keyboard(::UnityW<::GlobalNamespace::OVRVirtualKeyboard> value);

  /// @brief Method .ctor, addr 0x5cd7154, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard);

  /// @brief Method get_keepWaiting, addr 0x5cd7124, size 0x30, virtual true, abstract: false, final false
  inline bool get_keepWaiting();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard_WaitUntilKeyboardVisible();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_WaitUntilKeyboardVisible", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboard_WaitUntilKeyboardVisible(OVRVirtualKeyboard_WaitUntilKeyboardVisible&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_WaitUntilKeyboardVisible", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard_WaitUntilKeyboardVisible(OVRVirtualKeyboard_WaitUntilKeyboardVisible const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7776 };

  /// @brief Field _keyboard, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> ____keyboard;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible, ____keyboard) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRPose
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRVirtualKeyboard/InteractorRootTransformOverride/InteractorRootOverrideData
struct CORDL_TYPE InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData();

  // Ctor Parameters [CppParam { name: "root", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "originalPose", ty: "::GlobalNamespace::OVRPose", modifiers:
  // "", def_value: None }, CppParam { name: "targetPose", ty: "::GlobalNamespace::OVRPose", modifiers: "", def_value: None }]
  constexpr InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData(::UnityW<::UnityEngine::Transform> root, ::GlobalNamespace::OVRPose originalPose,
                                                                                          ::GlobalNamespace::OVRPose targetPose) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7777 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field root, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> root;

  /// @brief Field originalPose, offset: 0x8, size: 0x1c, def value: None
  ::GlobalNamespace::OVRPose originalPose;

  /// @brief Field targetPose, offset: 0x24, size: 0x1c, def value: None
  ::GlobalNamespace::OVRPose targetPose;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData, root) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData, originalPose) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData, targetPose) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/InteractorRootTransformOverride/<RevertInteractorOverrides>d__6
class CORDL_TYPE InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5cd732c, size 0x94, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5cd73c0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5cd73c8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5cd7400, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5cd7328, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* value);

  /// @brief Method .ctor, addr 0x5cd7320, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6(InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6(InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7778 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/InteractorRootTransformOverride
class CORDL_TYPE OVRVirtualKeyboard_InteractorRootTransformOverride : public ::System::Object {
public:
  // Declarations
  using InteractorRootOverrideData = ::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData;

  using _RevertInteractorOverrides_d__6 = ::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6;

  /// @brief Field applyQueue, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get_applyQueue,
      put = __cordl_internal_set_applyQueue)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>* applyQueue;

  /// @brief Field revertQueue, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_revertQueue,
      put = __cordl_internal_set_revertQueue)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>* revertQueue;

  /// @brief Method ApplyOverride, addr 0x5cd715c, size 0xdc, virtual false, abstract: false, final false
  static inline bool ApplyOverride(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData interactorOverride);

  /// @brief Method Enqueue, addr 0x5cd4e54, size 0x150, virtual false, abstract: false, final false
  inline void Enqueue(::UnityEngine::Transform* interactorRootTransform, ::GlobalNamespace::OVRPlugin_Posef interactorRootPose);

  /// @brief Method LateApply, addr 0x5cd4c40, size 0x214, virtual false, abstract: false, final false
  inline void LateApply(::UnityEngine::MonoBehaviour* coroutineRunner);

  static inline ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* New_ctor();

  /// @brief Method Reset, addr 0x5cd728c, size 0x94, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method RevertInteractorOverrides, addr 0x5cd7238, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RevertInteractorOverrides();

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>* const& __cordl_internal_get_applyQueue() const;

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>*& __cordl_internal_get_applyQueue();

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>* const& __cordl_internal_get_revertQueue() const;

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>*& __cordl_internal_get_revertQueue();

  constexpr void __cordl_internal_set_applyQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>* value);

  constexpr void __cordl_internal_set_revertQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>* value);

  /// @brief Method .ctor, addr 0x5cd66e4, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard_InteractorRootTransformOverride();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_InteractorRootTransformOverride", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboard_InteractorRootTransformOverride(OVRVirtualKeyboard_InteractorRootTransformOverride&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_InteractorRootTransformOverride", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard_InteractorRootTransformOverride(OVRVirtualKeyboard_InteractorRootTransformOverride const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7779 };

  /// @brief Field applyQueue, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>* ___applyQueue;

  /// @brief Field revertQueue, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData>* ___revertQueue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride, ___applyQueue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride, ___revertQueue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRVirtualKeyboard/InputSource
struct CORDL_TYPE OVRVirtualKeyboard_InputSource {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRVirtualKeyboard_InputSource_Unwrapped
  enum struct __OVRVirtualKeyboard_InputSource_Unwrapped : int32_t {
    __E_ControllerLeft = static_cast<int32_t>(0x0),
    __E_ControllerRight = static_cast<int32_t>(0x1),
    __E_HandLeft = static_cast<int32_t>(0x2),
    __E_HandRight = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRVirtualKeyboard_InputSource_Unwrapped() const noexcept {
    return static_cast<__OVRVirtualKeyboard_InputSource_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard_InputSource();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRVirtualKeyboard_InputSource(int32_t value__) noexcept;

  /// @brief Field ControllerLeft value: I32(0)
  static ::GlobalNamespace::OVRVirtualKeyboard_InputSource const ControllerLeft;

  /// @brief Field ControllerRight value: I32(1)
  static ::GlobalNamespace::OVRVirtualKeyboard_InputSource const ControllerRight;

  /// @brief Field HandLeft value: I32(2)
  static ::GlobalNamespace::OVRVirtualKeyboard_InputSource const HandLeft;

  /// @brief Field HandRight value: I32(3)
  static ::GlobalNamespace::OVRVirtualKeyboard_InputSource const HandRight;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7780 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_InputSource, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard_InputSource, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/IInputSource
class CORDL_TYPE OVRVirtualKeyboard_IInputSource {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_IInputSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard_IInputSource(OVRVirtualKeyboard_IInputSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7781 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/BaseInputSource
class CORDL_TYPE OVRVirtualKeyboard_BaseInputSource : public ::System::Object {
public:
  // Declarations
  /// @brief Field _disposed, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Field _operatingWithoutOVRCameraRig, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__operatingWithoutOVRCameraRig, put = __cordl_internal_set__operatingWithoutOVRCameraRig)) bool _operatingWithoutOVRCameraRig;

  /// @brief Field _rig, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__rig, put = __cordl_internal_set__rig)) ::UnityW<::GlobalNamespace::OVRCameraRig> _rig;

  /// @brief Convert operator to "::GlobalNamespace::OVRVirtualKeyboard_IInputSource"
  constexpr operator ::GlobalNamespace::OVRVirtualKeyboard_IInputSource*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x5cd757c, size 0xe4, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource* New_ctor();

  /// @brief Method OnUpdatedAnchors, addr 0x5cd74fc, size 0x60, virtual false, abstract: false, final false
  inline void OnUpdatedAnchors(::GlobalNamespace::OVRCameraRig* obj);

  /// @brief Method Update, addr 0x5cd755c, size 0x20, virtual true, abstract: false, final true
  inline void Update();

  /// @brief Method UpdateInput, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateInput();

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr bool const& __cordl_internal_get__operatingWithoutOVRCameraRig() const;

  constexpr bool& __cordl_internal_get__operatingWithoutOVRCameraRig();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get__rig() const;

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get__rig();

  constexpr void __cordl_internal_set__disposed(bool value);

  constexpr void __cordl_internal_set__operatingWithoutOVRCameraRig(bool value);

  constexpr void __cordl_internal_set__rig(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  /// @brief Method .ctor, addr 0x5cd7408, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::OVRVirtualKeyboard_IInputSource"
  constexpr ::GlobalNamespace::OVRVirtualKeyboard_IInputSource* i___GlobalNamespace__OVRVirtualKeyboard_IInputSource() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard_BaseInputSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_BaseInputSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboard_BaseInputSource(OVRVirtualKeyboard_BaseInputSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_BaseInputSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard_BaseInputSource(OVRVirtualKeyboard_BaseInputSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7782 };

  /// @brief Field _operatingWithoutOVRCameraRig, offset: 0x10, size: 0x1, def value: None
  bool ____operatingWithoutOVRCameraRig;

  /// @brief Field _rig, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ____rig;

  /// @brief Field _disposed, offset: 0x20, size: 0x1, def value: None
  bool ____disposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource, ____operatingWithoutOVRCameraRig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource, ____rig) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource, ____disposed) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRInput::Controller, OVRVirtualKeyboard::BaseInputSource, OVRVirtualKeyboard::InputSource
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/ControllerInputSource
class CORDL_TYPE OVRVirtualKeyboard_ControllerInputSource : public ::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource {
public:
  // Declarations
  __declspec(property(get = get_TriggerIsPressed)) bool TriggerIsPressed;

  /// @brief Field _controllerType, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__controllerType, put = __cordl_internal_set__controllerType)) ::GlobalNamespace::OVRInput_Controller _controllerType;

  /// @brief Field _directTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__directTransform, put = __cordl_internal_set__directTransform)) ::UnityW<::UnityEngine::Transform> _directTransform;

  /// @brief Field _inputSource, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__inputSource, put = __cordl_internal_set__inputSource)) ::GlobalNamespace::OVRVirtualKeyboard_InputSource _inputSource;

  /// @brief Field _keyboard, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__keyboard, put = __cordl_internal_set__keyboard)) ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> _keyboard;

  /// @brief Field _lastFrameCount, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__lastFrameCount, put = __cordl_internal_set__lastFrameCount)) int32_t _lastFrameCount;

  /// @brief Field _rootTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rootTransform, put = __cordl_internal_set__rootTransform)) ::UnityW<::UnityEngine::Transform> _rootTransform;

  static inline ::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource* New_ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard, ::GlobalNamespace::OVRVirtualKeyboard_InputSource inputSource,
                                                                                      ::GlobalNamespace::OVRInput_Controller controllerType, ::UnityEngine::Transform* rootTransform,
                                                                                      ::UnityEngine::Transform* directTransform);

  /// @brief Method UpdateInput, addr 0x5cd76d8, size 0x1c0, virtual true, abstract: false, final false
  inline void UpdateInput();

  constexpr ::GlobalNamespace::OVRInput_Controller const& __cordl_internal_get__controllerType() const;

  constexpr ::GlobalNamespace::OVRInput_Controller& __cordl_internal_get__controllerType();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__directTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__directTransform();

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_InputSource const& __cordl_internal_get__inputSource() const;

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_InputSource& __cordl_internal_get__inputSource();

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> const& __cordl_internal_get__keyboard() const;

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard>& __cordl_internal_get__keyboard();

  constexpr int32_t const& __cordl_internal_get__lastFrameCount() const;

  constexpr int32_t& __cordl_internal_get__lastFrameCount();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__rootTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__rootTransform();

  constexpr void __cordl_internal_set__controllerType(::GlobalNamespace::OVRInput_Controller value);

  constexpr void __cordl_internal_set__directTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__inputSource(::GlobalNamespace::OVRVirtualKeyboard_InputSource value);

  constexpr void __cordl_internal_set__keyboard(::UnityW<::GlobalNamespace::OVRVirtualKeyboard> value);

  constexpr void __cordl_internal_set__lastFrameCount(int32_t value);

  constexpr void __cordl_internal_set__rootTransform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x5cd4fa4, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard, ::GlobalNamespace::OVRVirtualKeyboard_InputSource inputSource, ::GlobalNamespace::OVRInput_Controller controllerType,
                    ::UnityEngine::Transform* rootTransform, ::UnityEngine::Transform* directTransform);

  /// @brief Method get_TriggerIsPressed, addr 0x5cd7660, size 0x78, virtual false, abstract: false, final false
  inline bool get_TriggerIsPressed();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard_ControllerInputSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_ControllerInputSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboard_ControllerInputSource(OVRVirtualKeyboard_ControllerInputSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_ControllerInputSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard_ControllerInputSource(OVRVirtualKeyboard_ControllerInputSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7783 };

  /// @brief Field _rootTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____rootTransform;

  /// @brief Field _directTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____directTransform;

  /// @brief Field _inputSource, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::OVRVirtualKeyboard_InputSource ____inputSource;

  /// @brief Field _controllerType, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_Controller ____controllerType;

  /// @brief Field _keyboard, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> ____keyboard;

  /// @brief Field _lastFrameCount, offset: 0x48, size: 0x4, def value: None
  int32_t ____lastFrameCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource, ____rootTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource, ____directTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource, ____inputSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource, ____controllerType) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource, ____keyboard) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource, ____lastFrameCount) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRSkeleton::BoneId, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/HandInputSource/<>c__DisplayClass6_0
class CORDL_TYPE HandInputSource_OVRVirtualKeyboard___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field indexTipJoint, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_indexTipJoint, put = __cordl_internal_set_indexTipJoint)) ::GlobalNamespace::OVRSkeleton_BoneId indexTipJoint;

  /// @brief Field wristRootJoint, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_wristRootJoint, put = __cordl_internal_set_wristRootJoint)) ::GlobalNamespace::OVRSkeleton_BoneId wristRootJoint;

  static inline ::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c__DisplayClass6_0* New_ctor();

  /// @brief Method <UpdateInput>b__0, addr 0x5cd7bb0, size 0x20, virtual false, abstract: false, final false
  inline bool _UpdateInput_b__0(::GlobalNamespace::OVRBone* b);

  /// @brief Method <UpdateInput>b__1, addr 0x5cd7bd0, size 0x20, virtual false, abstract: false, final false
  inline bool _UpdateInput_b__1(::GlobalNamespace::OVRBone* b);

  constexpr ::GlobalNamespace::OVRSkeleton_BoneId const& __cordl_internal_get_indexTipJoint() const;

  constexpr ::GlobalNamespace::OVRSkeleton_BoneId& __cordl_internal_get_indexTipJoint();

  constexpr ::GlobalNamespace::OVRSkeleton_BoneId const& __cordl_internal_get_wristRootJoint() const;

  constexpr ::GlobalNamespace::OVRSkeleton_BoneId& __cordl_internal_get_wristRootJoint();

  constexpr void __cordl_internal_set_indexTipJoint(::GlobalNamespace::OVRSkeleton_BoneId value);

  constexpr void __cordl_internal_set_wristRootJoint(::GlobalNamespace::OVRSkeleton_BoneId value);

  /// @brief Method .ctor, addr 0x5cd7bac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandInputSource_OVRVirtualKeyboard___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HandInputSource_OVRVirtualKeyboard___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandInputSource_OVRVirtualKeyboard___c__DisplayClass6_0(HandInputSource_OVRVirtualKeyboard___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandInputSource_OVRVirtualKeyboard___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandInputSource_OVRVirtualKeyboard___c__DisplayClass6_0(HandInputSource_OVRVirtualKeyboard___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7784 };

  /// @brief Field indexTipJoint, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::OVRSkeleton_BoneId ___indexTipJoint;

  /// @brief Field wristRootJoint, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::OVRSkeleton_BoneId ___wristRootJoint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c__DisplayClass6_0, ___indexTipJoint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c__DisplayClass6_0, ___wristRootJoint) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c__DisplayClass6_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRVirtualKeyboard::BaseInputSource, OVRVirtualKeyboard::InputSource
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/HandInputSource
class CORDL_TYPE OVRVirtualKeyboard_HandInputSource : public ::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource {
public:
  // Declarations
  using __c__DisplayClass6_0 = ::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c__DisplayClass6_0;

  /// @brief Field _hand, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__hand, put = __cordl_internal_set__hand)) ::UnityW<::GlobalNamespace::OVRHand> _hand;

  /// @brief Field _inputSource, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__inputSource, put = __cordl_internal_set__inputSource)) ::GlobalNamespace::OVRVirtualKeyboard_InputSource _inputSource;

  /// @brief Field _keyboard, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__keyboard, put = __cordl_internal_set__keyboard)) ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> _keyboard;

  /// @brief Field _lastFrameCount, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__lastFrameCount, put = __cordl_internal_set__lastFrameCount)) int32_t _lastFrameCount;

  /// @brief Field _skeleton, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__skeleton, put = __cordl_internal_set__skeleton)) ::UnityW<::GlobalNamespace::OVRSkeleton> _skeleton;

  static inline ::GlobalNamespace::OVRVirtualKeyboard_HandInputSource* New_ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard, ::GlobalNamespace::OVRVirtualKeyboard_InputSource inputSource,
                                                                                ::GlobalNamespace::OVRHand* hand);

  /// @brief Method UpdateInput, addr 0x5cd7898, size 0x314, virtual true, abstract: false, final false
  inline void UpdateInput();

  constexpr ::UnityW<::GlobalNamespace::OVRHand> const& __cordl_internal_get__hand() const;

  constexpr ::UnityW<::GlobalNamespace::OVRHand>& __cordl_internal_get__hand();

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_InputSource const& __cordl_internal_get__inputSource() const;

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_InputSource& __cordl_internal_get__inputSource();

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> const& __cordl_internal_get__keyboard() const;

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard>& __cordl_internal_get__keyboard();

  constexpr int32_t const& __cordl_internal_get__lastFrameCount() const;

  constexpr int32_t& __cordl_internal_get__lastFrameCount();

  constexpr ::UnityW<::GlobalNamespace::OVRSkeleton> const& __cordl_internal_get__skeleton() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSkeleton>& __cordl_internal_get__skeleton();

  constexpr void __cordl_internal_set__hand(::UnityW<::GlobalNamespace::OVRHand> value);

  constexpr void __cordl_internal_set__inputSource(::GlobalNamespace::OVRVirtualKeyboard_InputSource value);

  constexpr void __cordl_internal_set__keyboard(::UnityW<::GlobalNamespace::OVRVirtualKeyboard> value);

  constexpr void __cordl_internal_set__lastFrameCount(int32_t value);

  constexpr void __cordl_internal_set__skeleton(::UnityW<::GlobalNamespace::OVRSkeleton> value);

  /// @brief Method .ctor, addr 0x5cd4ff0, size 0x1d0, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard, ::GlobalNamespace::OVRVirtualKeyboard_InputSource inputSource, ::GlobalNamespace::OVRHand* hand);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard_HandInputSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_HandInputSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboard_HandInputSource(OVRVirtualKeyboard_HandInputSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_HandInputSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard_HandInputSource(OVRVirtualKeyboard_HandInputSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7785 };

  /// @brief Field _hand, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRHand> ____hand;

  /// @brief Field _inputSource, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::OVRVirtualKeyboard_InputSource ____inputSource;

  /// @brief Field _keyboard, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> ____keyboard;

  /// @brief Field _skeleton, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSkeleton> ____skeleton;

  /// @brief Field _lastFrameCount, offset: 0x48, size: 0x4, def value: None
  int32_t ____lastFrameCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_HandInputSource, ____hand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_HandInputSource, ____inputSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_HandInputSource, ____keyboard) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_HandInputSource, ____skeleton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_HandInputSource, ____lastFrameCount) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard_HandInputSource, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/KeyboardEventListener
class CORDL_TYPE OVRVirtualKeyboard_KeyboardEventListener : public ::System::Object {
public:
  // Declarations
  /// @brief Field keyboard_, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboard_, put = __cordl_internal_set_keyboard_)) ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> keyboard_;

  /// @brief Convert operator to "::GlobalNamespace::OVRManager_EventListener"
  constexpr operator ::GlobalNamespace::OVRManager_EventListener*() noexcept;

  static inline ::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener* New_ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard);

  /// @brief Method OnEvent, addr 0x5cd7bf0, size 0x21c, virtual true, abstract: false, final true
  inline void OnEvent(::GlobalNamespace::OVRPlugin_EventDataBuffer eventDataBuffer);

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> const& __cordl_internal_get_keyboard_() const;

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard>& __cordl_internal_get_keyboard_();

  constexpr void __cordl_internal_set_keyboard_(::UnityW<::GlobalNamespace::OVRVirtualKeyboard> value);

  /// @brief Method .ctor, addr 0x5cd21ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRVirtualKeyboard* keyboard);

  /// @brief Convert to "::GlobalNamespace::OVRManager_EventListener"
  constexpr ::GlobalNamespace::OVRManager_EventListener* i___GlobalNamespace__OVRManager_EventListener() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard_KeyboardEventListener();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_KeyboardEventListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboard_KeyboardEventListener(OVRVirtualKeyboard_KeyboardEventListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_KeyboardEventListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard_KeyboardEventListener(OVRVirtualKeyboard_KeyboardEventListener const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7786 };

  /// @brief Field keyboard_, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> ___keyboard_;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener, ___keyboard_) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRVirtualKeyboard/VirtualKeyboardTextureInfo
struct CORDL_TYPE OVRVirtualKeyboard_VirtualKeyboardTextureInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard_VirtualKeyboardTextureInfo();

  // Ctor Parameters [CppParam { name: "buffer", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "bufferLength", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "texture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None }, CppParam { name: "hasTexture", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "materials", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*", modifiers: "", def_value: None }]
  constexpr OVRVirtualKeyboard_VirtualKeyboardTextureInfo(::System::IntPtr buffer, uint32_t bufferLength, ::UnityW<::UnityEngine::Texture2D> texture, bool hasTexture,
                                                          ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* materials) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7787 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field buffer, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr buffer;

  /// @brief Field bufferLength, offset: 0x8, size: 0x4, def value: None
  uint32_t bufferLength;

  /// @brief Field texture, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> texture;

  /// @brief Field hasTexture, offset: 0x18, size: 0x1, def value: None
  bool hasTexture;

  /// @brief Field materials, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* materials;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo, buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo, bufferLength) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo, texture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo, hasTexture) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo, materials) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/CommitTextUnityEvent
class CORDL_TYPE OVRVirtualKeyboard_CommitTextUnityEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
  // Declarations
  static inline ::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent* New_ctor();

  /// @brief Method .ctor, addr 0x5cd6698, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard_CommitTextUnityEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_CommitTextUnityEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboard_CommitTextUnityEvent(OVRVirtualKeyboard_CommitTextUnityEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard_CommitTextUnityEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard_CommitTextUnityEvent(OVRVirtualKeyboard_CommitTextUnityEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7788 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/<>c
class CORDL_TYPE OVRVirtualKeyboard___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::OVRVirtualKeyboard___c* __9;

  /// @brief Field <>9__92_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__92_2, put = setStaticF___9__92_2)) ::System::Func_2<::StringW, bool>* __9__92_2;

  /// @brief Field <>9__94_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__94_0, put = setStaticF___9__94_0)) ::System::Func_2<::UnityW<::UnityEngine::MeshFilter>, bool>* __9__94_0;

  static inline ::GlobalNamespace::OVRVirtualKeyboard___c* New_ctor();

  /// @brief Method <InitializeGlTFModel>b__92_2, addr 0x5cd7e64, size 0x94, virtual false, abstract: false, final false
  inline bool _InitializeGlTFModel_b__92_2(::StringW p);

  /// @brief Method <PopulateCollision>b__94_0, addr 0x5cd7ef8, size 0x64, virtual false, abstract: false, final false
  inline bool _PopulateCollision_b__94_0(::UnityEngine::MeshFilter* mesh);

  /// @brief Method .ctor, addr 0x5cd7e60, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::OVRVirtualKeyboard___c* getStaticF___9();

  static inline ::System::Func_2<::StringW, bool>* getStaticF___9__92_2();

  static inline ::System::Func_2<::UnityW<::UnityEngine::MeshFilter>, bool>* getStaticF___9__94_0();

  static inline void setStaticF___9(::GlobalNamespace::OVRVirtualKeyboard___c* value);

  static inline void setStaticF___9__92_2(::System::Func_2<::StringW, bool>* value);

  static inline void setStaticF___9__94_0(::System::Func_2<::UnityW<::UnityEngine::MeshFilter>, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboard___c(OVRVirtualKeyboard___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard___c(OVRVirtualKeyboard___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7789 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard/<InitializeGlTFModel>d__92
class CORDL_TYPE OVRVirtualKeyboard__InitializeGlTFModel_d__92 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> __4__this;

  /// @brief Field <loadGlbCoroutine>5__2, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__loadGlbCoroutine_5__2, put = __cordl_internal_set__loadGlbCoroutine_5__2)) ::System::Collections::IEnumerator* _loadGlbCoroutine_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5cd7f60, size 0x38c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__92* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5cd82ec, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5cd82f4, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5cd832c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5cd7f5c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard>& __cordl_internal_get___4__this();

  constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get__loadGlbCoroutine_5__2() const;

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get__loadGlbCoroutine_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRVirtualKeyboard> value);

  constexpr void __cordl_internal_set__loadGlbCoroutine_5__2(::System::Collections::IEnumerator* value);

  /// @brief Method .ctor, addr 0x5cd3b5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard__InitializeGlTFModel_d__92();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard__InitializeGlTFModel_d__92", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboard__InitializeGlTFModel_d__92(OVRVirtualKeyboard__InitializeGlTFModel_d__92&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard__InitializeGlTFModel_d__92", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard__InitializeGlTFModel_d__92(OVRVirtualKeyboard__InitializeGlTFModel_d__92 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7790 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> _____4__this;

  /// @brief Field <loadGlbCoroutine>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ____loadGlbCoroutine_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__92, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__92, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__92, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__92, ____loadGlbCoroutine_5__2) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__92, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRGLTFScene, OVRVirtualKeyboard::KeyboardPosition, System.IntPtr, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboard
class CORDL_TYPE OVRVirtualKeyboard : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using AbstractTextHandler = ::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler;

  using BaseInputSource = ::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource;

  using CommitTextUnityEvent = ::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent;

  using ControllerInputSource = ::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource;

  using HandInputSource = ::GlobalNamespace::OVRVirtualKeyboard_HandInputSource;

  using IInputSource = ::GlobalNamespace::OVRVirtualKeyboard_IInputSource;

  using ITextHandler = ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler;

  using InputSource = ::GlobalNamespace::OVRVirtualKeyboard_InputSource;

  using InteractorRootTransformOverride = ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride;

  using KeyboardEventListener = ::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener;

  using KeyboardPosition = ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition;

  using TextHandlerScope = ::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope;

  using VirtualKeyboardTextureInfo = ::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo;

  using WaitUntilKeyboardVisible = ::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible;

  using _InitializeGlTFModel_d__92 = ::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__92;

  using __c = ::GlobalNamespace::OVRVirtualKeyboard___c;

  /// @brief Field Backspace, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Backspace, put = __cordl_internal_set_Backspace)) ::System::Action* Backspace;

  /// @brief Field BackspaceEvent, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_BackspaceEvent, put = __cordl_internal_set_BackspaceEvent)) ::UnityEngine::Events::UnityEvent* BackspaceEvent;

  __declspec(property(get = get_Collider, put = set_Collider)) ::UnityW<::UnityEngine::Collider> Collider;

  /// @brief Field CommitText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_CommitText, put = __cordl_internal_set_CommitText)) ::System::Action_1<::StringW>* CommitText;

  /// @brief Field CommitTextEvent, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_CommitTextEvent, put = __cordl_internal_set_CommitTextEvent)) ::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent* CommitTextEvent;

  /// @brief Field Enter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Enter, put = __cordl_internal_set_Enter)) ::System::Action* Enter;

  /// @brief Field EnterEvent, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_EnterEvent, put = __cordl_internal_set_EnterEvent)) ::UnityEngine::Events::UnityEvent* EnterEvent;

  /// @brief Field InitialPosition, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_InitialPosition, put = __cordl_internal_set_InitialPosition)) ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition InitialPosition;

  /// @brief Field InputEnabled, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get_InputEnabled, put = __cordl_internal_set_InputEnabled)) bool InputEnabled;

  /// @brief Field KeyboardHidden, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_KeyboardHidden, put = __cordl_internal_set_KeyboardHidden)) ::System::Action* KeyboardHidden;

  /// @brief Field KeyboardHiddenEvent, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_KeyboardHiddenEvent, put = __cordl_internal_set_KeyboardHiddenEvent)) ::UnityEngine::Events::UnityEvent* KeyboardHiddenEvent;

  /// @brief Field KeyboardShown, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_KeyboardShown, put = __cordl_internal_set_KeyboardShown)) ::System::Action* KeyboardShown;

  /// @brief Field KeyboardShownEvent, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_KeyboardShownEvent, put = __cordl_internal_set_KeyboardShownEvent)) ::UnityEngine::Events::UnityEvent* KeyboardShownEvent;

  __declspec(property(get = get_TextCommitField, put = set_TextCommitField)) ::UnityW<::UnityEngine::UI::InputField> TextCommitField;

  __declspec(property(get = get_TextHandler, put = set_TextHandler)) ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* TextHandler;

  /// @brief Field <Collider>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__Collider_k__BackingField, put = __cordl_internal_set__Collider_k__BackingField)) ::UnityW<::UnityEngine::Collider> _Collider_k__BackingField;

  /// @brief Field _animationStateBuffer, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get__animationStateBuffer, put = __cordl_internal_set__animationStateBuffer)) ::System::IntPtr _animationStateBuffer;

  /// @brief Field _animationStateBufferLength, offset 0x174, size 0x4
  __declspec(property(get = __cordl_internal_get__animationStateBufferLength, put = __cordl_internal_set__animationStateBufferLength)) int32_t _animationStateBufferLength;

  /// @brief Field _animationStateCount, offset 0x170, size 0x4
  __declspec(property(get = __cordl_internal_get__animationStateCount, put = __cordl_internal_set__animationStateCount)) int32_t _animationStateCount;

  /// @brief Field _defaultAlphaBlendShaderName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__defaultAlphaBlendShaderName, put = setStaticF__defaultAlphaBlendShaderName)) ::StringW _defaultAlphaBlendShaderName;

  /// @brief Field _defaultShaderName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__defaultShaderName, put = setStaticF__defaultShaderName)) ::StringW _defaultShaderName;

  /// @brief Field _gltfLoader, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get__gltfLoader, put = __cordl_internal_set__gltfLoader)) ::GlobalNamespace::OVRGLTFLoader* _gltfLoader;

  /// @brief Field _inputSources, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get__inputSources,
                      put = __cordl_internal_set__inputSources)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRVirtualKeyboard_IInputSource*>* _inputSources;

  /// @brief Field _interactorRootTransformOverride, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__interactorRootTransformOverride,
                      put = __cordl_internal_set__interactorRootTransformOverride)) ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* _interactorRootTransformOverride;

  /// @brief Field _runtimeTextHandler, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__runtimeTextHandler, put = __cordl_internal_set__runtimeTextHandler)) ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* _runtimeTextHandler;

  /// @brief Field controllerDirectInteraction, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_controllerDirectInteraction, put = __cordl_internal_set_controllerDirectInteraction)) bool controllerDirectInteraction;

  /// @brief Field controllerRayInteraction, offset 0x91, size 0x1
  __declspec(property(get = __cordl_internal_get_controllerRayInteraction, put = __cordl_internal_set_controllerRayInteraction)) bool controllerRayInteraction;

  /// @brief Field controllerRaycaster, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_controllerRaycaster, put = __cordl_internal_set_controllerRaycaster)) ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> controllerRaycaster;

  /// @brief Field gltfModelCoroutine_, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_gltfModelCoroutine_, put = __cordl_internal_set_gltfModelCoroutine_)) ::UnityEngine::Coroutine* gltfModelCoroutine_;

  /// @brief Field handDirectInteraction, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get_handDirectInteraction, put = __cordl_internal_set_handDirectInteraction)) bool handDirectInteraction;

  /// @brief Field handLeft, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_handLeft, put = __cordl_internal_set_handLeft)) ::UnityW<::GlobalNamespace::OVRHand> handLeft;

  /// @brief Field handRayInteraction, offset 0xb1, size 0x1
  __declspec(property(get = __cordl_internal_get_handRayInteraction, put = __cordl_internal_set_handRayInteraction)) bool handRayInteraction;

  /// @brief Field handRaycaster, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_handRaycaster, put = __cordl_internal_set_handRaycaster)) ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> handRaycaster;

  /// @brief Field handRight, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_handRight, put = __cordl_internal_set_handRight)) ::UnityW<::GlobalNamespace::OVRHand> handRight;

  /// @brief Field isKeyboardCreated_, offset 0x100, size 0x1
  __declspec(property(get = __cordl_internal_get_isKeyboardCreated_, put = __cordl_internal_set_isKeyboardCreated_)) bool isKeyboardCreated_;

  /// @brief Field keyboardEventListener_, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboardEventListener_,
                      put = __cordl_internal_set_keyboardEventListener_)) ::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener* keyboardEventListener_;

  /// @brief Field keyboardModelAlphaBlendShader, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboardModelAlphaBlendShader, put = __cordl_internal_set_keyboardModelAlphaBlendShader)) ::UnityW<::UnityEngine::Shader>
      keyboardModelAlphaBlendShader;

  /// @brief Field keyboardModelShader, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboardModelShader, put = __cordl_internal_set_keyboardModelShader)) ::UnityW<::UnityEngine::Shader> keyboardModelShader;

  /// @brief Field keyboardSpace_, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboardSpace_, put = __cordl_internal_set_keyboardSpace_)) uint64_t keyboardSpace_;

  /// @brief Field keyboardVisible_, offset 0x142, size 0x1
  __declspec(property(get = __cordl_internal_get_keyboardVisible_, put = __cordl_internal_set_keyboardVisible_)) bool keyboardVisible_;

  /// @brief Field leftControllerDirectTransform, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_leftControllerDirectTransform, put = __cordl_internal_set_leftControllerDirectTransform)) ::UnityW<::UnityEngine::Transform>
      leftControllerDirectTransform;

  /// @brief Field leftControllerRootTransform, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_leftControllerRootTransform, put = __cordl_internal_set_leftControllerRootTransform)) ::UnityW<::UnityEngine::Transform> leftControllerRootTransform;

  /// @brief Field modelAvailable_, offset 0x141, size 0x1
  __declspec(property(get = __cordl_internal_get_modelAvailable_, put = __cordl_internal_set_modelAvailable_)) bool modelAvailable_;

  /// @brief Field modelInitialized_, offset 0x140, size 0x1
  __declspec(property(get = __cordl_internal_get_modelInitialized_, put = __cordl_internal_set_modelInitialized_)) bool modelInitialized_;

  /// @brief Field rightControllerDirectTransform, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_rightControllerDirectTransform, put = __cordl_internal_set_rightControllerDirectTransform)) ::UnityW<::UnityEngine::Transform>
      rightControllerDirectTransform;

  /// @brief Field rightControllerRootTransform, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_rightControllerRootTransform, put = __cordl_internal_set_rightControllerRootTransform)) ::UnityW<::UnityEngine::Transform>
      rightControllerRootTransform;

  /// @brief Field singleton_, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_singleton_, put = setStaticF_singleton_)) ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> singleton_;

  /// @brief Field textCommitField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_textCommitField, put = __cordl_internal_set_textCommitField)) ::UnityW<::UnityEngine::UI::InputField> textCommitField;

  /// @brief Field textHandler, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_textHandler, put = __cordl_internal_set_textHandler)) ::UnityW<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler> textHandler;

  /// @brief Field virtualKeyboardModelKey_, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_virtualKeyboardModelKey_, put = __cordl_internal_set_virtualKeyboardModelKey_)) uint64_t virtualKeyboardModelKey_;

  /// @brief Field virtualKeyboardScene_, offset 0x118, size 0x20
  __declspec(property(get = __cordl_internal_get_virtualKeyboardScene_, put = __cordl_internal_set_virtualKeyboardScene_)) ::GlobalNamespace::OVRGLTFScene virtualKeyboardScene_;

  /// @brief Field virtualKeyboardTextures_, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_virtualKeyboardTextures_,
                      put = __cordl_internal_set_virtualKeyboardTextures_)) ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo>*
      virtualKeyboardTextures_;

  /// @brief Method AnimationStateHandler, addr 0x5cd53d8, size 0x17c, virtual false, abstract: false, final false
  inline void AnimationStateHandler(::ByRef<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState> state);

  /// @brief Method AnimationStatesBufferProvider, addr 0x5cd533c, size 0x9c, virtual false, abstract: false, final false
  inline ::System::IntPtr AnimationStatesBufferProvider(int32_t bufferLength, int32_t count);

  /// @brief Method ApplyHideFlags, addr 0x5cd3b64, size 0xd0, virtual false, abstract: false, final false
  static inline void ApplyHideFlags(::UnityEngine::Transform* t);

  /// @brief Method AutoPopulate, addr 0x5cd60e4, size 0x42c, virtual false, abstract: false, final false
  inline void AutoPopulate();

  /// @brief Method Awake, addr 0x5cd1a88, size 0x764, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ChangeTextContext, addr 0x5cd39c8, size 0x114, virtual false, abstract: false, final false
  inline void ChangeTextContext(::StringW textContext);

  /// @brief Method ChangeTextContextInternal, addr 0x5cd19b8, size 0xd0, virtual false, abstract: false, final false
  inline void ChangeTextContextInternal(::StringW textContext);

  /// @brief Method ComputeLocation, addr 0x5cd2f8c, size 0xac, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationInfo ComputeLocation(::UnityEngine::Transform* transform);

  /// @brief Method DestroyKeyboard, addr 0x5cd27f8, size 0x244, virtual false, abstract: false, final false
  inline void DestroyKeyboard();

  /// @brief Method GetKeyboardSpace, addr 0x5cd51c0, size 0x17c, virtual false, abstract: false, final false
  inline uint64_t GetKeyboardSpace();

  /// @brief Method HideKeyboard, addr 0x5cd2cb8, size 0x30, virtual false, abstract: false, final false
  inline void HideKeyboard();

  /// @brief Method InitializeGlTFModel, addr 0x5cd3b08, size 0x54, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* InitializeGlTFModel();

  /// @brief Method LateUpdate, addr 0x5cd4c28, size 0x18, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method LoadRuntimeVirtualKeyboardMesh, addr 0x5cd3adc, size 0x2c, virtual false, abstract: false, final false
  inline void LoadRuntimeVirtualKeyboardMesh();

  /// @brief Method MaxElement, addr 0x5cd40fc, size 0x14, virtual false, abstract: false, final false
  inline float_t MaxElement(::UnityEngine::Vector3 vec);

  static inline ::GlobalNamespace::OVRVirtualKeyboard* New_ctor();

  /// @brief Method OnBackspace, addr 0x5cd5a04, size 0x1a0, virtual false, abstract: false, final false
  inline void OnBackspace();

  /// @brief Method OnCommitText, addr 0x5cd5554, size 0x1b0, virtual false, abstract: false, final false
  inline void OnCommitText(::StringW text);

  /// @brief Method OnDestroy, addr 0x5cd21f4, size 0x604, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x5cd2c48, size 0x70, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x5cd2a3c, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnEnter, addr 0x5cd5d24, size 0x1f0, virtual false, abstract: false, final false
  inline void OnEnter();

  /// @brief Method OnKeyboardHidden, addr 0x5cd60d0, size 0x14, virtual false, abstract: false, final false
  inline void OnKeyboardHidden();

  /// @brief Method OnKeyboardShown, addr 0x5cd606c, size 0x18, virtual false, abstract: false, final false
  inline void OnKeyboardShown();

  /// @brief Method OnTextHandlerChange, addr 0x5cd5a00, size 0x4, virtual false, abstract: false, final false
  inline void OnTextHandlerChange(::StringW textContext);

  /// @brief Method PopulateCollision, addr 0x5cd3c34, size 0x2b8, virtual false, abstract: false, final false
  inline void PopulateCollision();

  /// @brief Method Reset, addr 0x5cd2ce8, size 0x88, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SendVirtualKeyboardDirectInput, addr 0x5cd3900, size 0xc8, virtual false, abstract: false, final false
  inline void SendVirtualKeyboardDirectInput(::UnityEngine::Vector3 position, ::GlobalNamespace::OVRVirtualKeyboard_InputSource source, bool isPressed,
                                             ::UnityEngine::Transform* interactorRootTransform);

  /// @brief Method SendVirtualKeyboardInput, addr 0x5cd36b8, size 0x248, virtual false, abstract: false, final false
  inline void SendVirtualKeyboardInput(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource inputSource, ::GlobalNamespace::OVRPose pose, bool isPressed,
                                       ::UnityEngine::Transform* interactorRootTransform);

  /// @brief Method SendVirtualKeyboardRayInput, addr 0x5cd32e4, size 0x3d4, virtual false, abstract: false, final false
  inline void SendVirtualKeyboardRayInput(::UnityEngine::Transform* inputTransform, ::GlobalNamespace::OVRVirtualKeyboard_InputSource source, bool isPressed, bool useRaycastMask);

  /// @brief Method SetKeyboardVisibility, addr 0x5cd3eec, size 0x124, virtual false, abstract: false, final false
  inline void SetKeyboardVisibility(bool visible);

  /// @brief Method ShowKeyboard, addr 0x5cd2a40, size 0x208, virtual false, abstract: false, final false
  inline void ShowKeyboard();

  /// @brief Method SyncKeyboardLocation, addr 0x5cd3038, size 0x2ac, virtual false, abstract: false, final false
  inline void SyncKeyboardLocation();

  /// @brief Method UnloadModel, addr 0x5cd4010, size 0xec, virtual false, abstract: false, final false
  inline void UnloadModel();

  /// @brief Method Update, addr 0x5cd4110, size 0x98, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateAnimationState, addr 0x5cd4694, size 0x594, virtual false, abstract: false, final false
  inline void UpdateAnimationState();

  /// @brief Method UpdateInputs, addr 0x5cd41a8, size 0x4ec, virtual false, abstract: false, final false
  inline void UpdateInputs();

  /// @brief Method UpdateVisibleState, addr 0x5cd6084, size 0x4c, virtual false, abstract: false, final false
  inline void UpdateVisibleState();

  /// @brief Method UseSuggestedLocation, addr 0x5cd2d70, size 0x21c, virtual false, abstract: false, final false
  inline void UseSuggestedLocation(::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition position);

  /// @brief Method <InitializeGlTFModel>b__92_0, addr 0x5cd6808, size 0x2dc, virtual false, abstract: false, final false
  inline ::System::IO::MemoryStream* _InitializeGlTFModel_b__92_0();

  /// @brief Method <InitializeGlTFModel>b__92_1, addr 0x5cd6ae4, size 0x26c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> _InitializeGlTFModel_b__92_1(::StringW rawUri, ::UnityEngine::Material* mat);

  constexpr ::System::Action* const& __cordl_internal_get_Backspace() const;

  constexpr ::System::Action*& __cordl_internal_get_Backspace();

  constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_BackspaceEvent() const;

  constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_BackspaceEvent();

  constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_CommitText() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_CommitText();

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent* const& __cordl_internal_get_CommitTextEvent() const;

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent*& __cordl_internal_get_CommitTextEvent();

  constexpr ::System::Action* const& __cordl_internal_get_Enter() const;

  constexpr ::System::Action*& __cordl_internal_get_Enter();

  constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_EnterEvent() const;

  constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_EnterEvent();

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition const& __cordl_internal_get_InitialPosition() const;

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition& __cordl_internal_get_InitialPosition();

  constexpr bool const& __cordl_internal_get_InputEnabled() const;

  constexpr bool& __cordl_internal_get_InputEnabled();

  constexpr ::System::Action* const& __cordl_internal_get_KeyboardHidden() const;

  constexpr ::System::Action*& __cordl_internal_get_KeyboardHidden();

  constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_KeyboardHiddenEvent() const;

  constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_KeyboardHiddenEvent();

  constexpr ::System::Action* const& __cordl_internal_get_KeyboardShown() const;

  constexpr ::System::Action*& __cordl_internal_get_KeyboardShown();

  constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_KeyboardShownEvent() const;

  constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_KeyboardShownEvent();

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__Collider_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__Collider_k__BackingField();

  constexpr ::System::IntPtr const& __cordl_internal_get__animationStateBuffer() const;

  constexpr ::System::IntPtr& __cordl_internal_get__animationStateBuffer();

  constexpr int32_t const& __cordl_internal_get__animationStateBufferLength() const;

  constexpr int32_t& __cordl_internal_get__animationStateBufferLength();

  constexpr int32_t const& __cordl_internal_get__animationStateCount() const;

  constexpr int32_t& __cordl_internal_get__animationStateCount();

  constexpr ::GlobalNamespace::OVRGLTFLoader* const& __cordl_internal_get__gltfLoader() const;

  constexpr ::GlobalNamespace::OVRGLTFLoader*& __cordl_internal_get__gltfLoader();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRVirtualKeyboard_IInputSource*>* const& __cordl_internal_get__inputSources() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRVirtualKeyboard_IInputSource*>*& __cordl_internal_get__inputSources();

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* const& __cordl_internal_get__interactorRootTransformOverride() const;

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*& __cordl_internal_get__interactorRootTransformOverride();

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* const& __cordl_internal_get__runtimeTextHandler() const;

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*& __cordl_internal_get__runtimeTextHandler();

  constexpr bool const& __cordl_internal_get_controllerDirectInteraction() const;

  constexpr bool& __cordl_internal_get_controllerDirectInteraction();

  constexpr bool const& __cordl_internal_get_controllerRayInteraction() const;

  constexpr bool& __cordl_internal_get_controllerRayInteraction();

  constexpr ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> const& __cordl_internal_get_controllerRaycaster() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>& __cordl_internal_get_controllerRaycaster();

  constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_gltfModelCoroutine_() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_gltfModelCoroutine_();

  constexpr bool const& __cordl_internal_get_handDirectInteraction() const;

  constexpr bool& __cordl_internal_get_handDirectInteraction();

  constexpr ::UnityW<::GlobalNamespace::OVRHand> const& __cordl_internal_get_handLeft() const;

  constexpr ::UnityW<::GlobalNamespace::OVRHand>& __cordl_internal_get_handLeft();

  constexpr bool const& __cordl_internal_get_handRayInteraction() const;

  constexpr bool& __cordl_internal_get_handRayInteraction();

  constexpr ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> const& __cordl_internal_get_handRaycaster() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>& __cordl_internal_get_handRaycaster();

  constexpr ::UnityW<::GlobalNamespace::OVRHand> const& __cordl_internal_get_handRight() const;

  constexpr ::UnityW<::GlobalNamespace::OVRHand>& __cordl_internal_get_handRight();

  constexpr bool const& __cordl_internal_get_isKeyboardCreated_() const;

  constexpr bool& __cordl_internal_get_isKeyboardCreated_();

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener* const& __cordl_internal_get_keyboardEventListener_() const;

  constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener*& __cordl_internal_get_keyboardEventListener_();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_keyboardModelAlphaBlendShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_keyboardModelAlphaBlendShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_keyboardModelShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_keyboardModelShader();

  constexpr uint64_t const& __cordl_internal_get_keyboardSpace_() const;

  constexpr uint64_t& __cordl_internal_get_keyboardSpace_();

  constexpr bool const& __cordl_internal_get_keyboardVisible_() const;

  constexpr bool& __cordl_internal_get_keyboardVisible_();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftControllerDirectTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftControllerDirectTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftControllerRootTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftControllerRootTransform();

  constexpr bool const& __cordl_internal_get_modelAvailable_() const;

  constexpr bool& __cordl_internal_get_modelAvailable_();

  constexpr bool const& __cordl_internal_get_modelInitialized_() const;

  constexpr bool& __cordl_internal_get_modelInitialized_();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightControllerDirectTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightControllerDirectTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightControllerRootTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightControllerRootTransform();

  constexpr ::UnityW<::UnityEngine::UI::InputField> const& __cordl_internal_get_textCommitField() const;

  constexpr ::UnityW<::UnityEngine::UI::InputField>& __cordl_internal_get_textCommitField();

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler> const& __cordl_internal_get_textHandler() const;

  constexpr ::UnityW<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler>& __cordl_internal_get_textHandler();

  constexpr uint64_t const& __cordl_internal_get_virtualKeyboardModelKey_() const;

  constexpr uint64_t& __cordl_internal_get_virtualKeyboardModelKey_();

  constexpr ::GlobalNamespace::OVRGLTFScene const& __cordl_internal_get_virtualKeyboardScene_() const;

  constexpr ::GlobalNamespace::OVRGLTFScene& __cordl_internal_get_virtualKeyboardScene_();

  constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo>* const& __cordl_internal_get_virtualKeyboardTextures_() const;

  constexpr ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo>*& __cordl_internal_get_virtualKeyboardTextures_();

  constexpr void __cordl_internal_set_Backspace(::System::Action* value);

  constexpr void __cordl_internal_set_BackspaceEvent(::UnityEngine::Events::UnityEvent* value);

  constexpr void __cordl_internal_set_CommitText(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_CommitTextEvent(::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent* value);

  constexpr void __cordl_internal_set_Enter(::System::Action* value);

  constexpr void __cordl_internal_set_EnterEvent(::UnityEngine::Events::UnityEvent* value);

  constexpr void __cordl_internal_set_InitialPosition(::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition value);

  constexpr void __cordl_internal_set_InputEnabled(bool value);

  constexpr void __cordl_internal_set_KeyboardHidden(::System::Action* value);

  constexpr void __cordl_internal_set_KeyboardHiddenEvent(::UnityEngine::Events::UnityEvent* value);

  constexpr void __cordl_internal_set_KeyboardShown(::System::Action* value);

  constexpr void __cordl_internal_set_KeyboardShownEvent(::UnityEngine::Events::UnityEvent* value);

  constexpr void __cordl_internal_set__Collider_k__BackingField(::UnityW<::UnityEngine::Collider> value);

  constexpr void __cordl_internal_set__animationStateBuffer(::System::IntPtr value);

  constexpr void __cordl_internal_set__animationStateBufferLength(int32_t value);

  constexpr void __cordl_internal_set__animationStateCount(int32_t value);

  constexpr void __cordl_internal_set__gltfLoader(::GlobalNamespace::OVRGLTFLoader* value);

  constexpr void __cordl_internal_set__inputSources(::System::Collections::Generic::List_1<::GlobalNamespace::OVRVirtualKeyboard_IInputSource*>* value);

  constexpr void __cordl_internal_set__interactorRootTransformOverride(::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* value);

  constexpr void __cordl_internal_set__runtimeTextHandler(::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* value);

  constexpr void __cordl_internal_set_controllerDirectInteraction(bool value);

  constexpr void __cordl_internal_set_controllerRayInteraction(bool value);

  constexpr void __cordl_internal_set_controllerRaycaster(::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> value);

  constexpr void __cordl_internal_set_gltfModelCoroutine_(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_handDirectInteraction(bool value);

  constexpr void __cordl_internal_set_handLeft(::UnityW<::GlobalNamespace::OVRHand> value);

  constexpr void __cordl_internal_set_handRayInteraction(bool value);

  constexpr void __cordl_internal_set_handRaycaster(::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> value);

  constexpr void __cordl_internal_set_handRight(::UnityW<::GlobalNamespace::OVRHand> value);

  constexpr void __cordl_internal_set_isKeyboardCreated_(bool value);

  constexpr void __cordl_internal_set_keyboardEventListener_(::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener* value);

  constexpr void __cordl_internal_set_keyboardModelAlphaBlendShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_keyboardModelShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_keyboardSpace_(uint64_t value);

  constexpr void __cordl_internal_set_keyboardVisible_(bool value);

  constexpr void __cordl_internal_set_leftControllerDirectTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_leftControllerRootTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_modelAvailable_(bool value);

  constexpr void __cordl_internal_set_modelInitialized_(bool value);

  constexpr void __cordl_internal_set_rightControllerDirectTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_rightControllerRootTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_textCommitField(::UnityW<::UnityEngine::UI::InputField> value);

  constexpr void __cordl_internal_set_textHandler(::UnityW<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler> value);

  constexpr void __cordl_internal_set_virtualKeyboardModelKey_(uint64_t value);

  constexpr void __cordl_internal_set_virtualKeyboardScene_(::GlobalNamespace::OVRGLTFScene value);

  constexpr void __cordl_internal_set_virtualKeyboardTextures_(::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo>* value);

  /// @brief Method .ctor, addr 0x5cd6510, size 0x188, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_Backspace, addr 0x5cd0d24, size 0xac, virtual false, abstract: false, final false
  inline void add_Backspace(::System::Action* value);

  /// @brief Method add_CommitText, addr 0x5cd0ba4, size 0xc0, virtual false, abstract: false, final false
  inline void add_CommitText(::System::Action_1<::StringW>* value);

  /// @brief Method add_Enter, addr 0x5cd0e7c, size 0xac, virtual false, abstract: false, final false
  inline void add_Enter(::System::Action* value);

  /// @brief Method add_KeyboardHidden, addr 0x5cd112c, size 0xac, virtual false, abstract: false, final false
  inline void add_KeyboardHidden(::System::Action* value);

  /// @brief Method add_KeyboardShown, addr 0x5cd0fd4, size 0xac, virtual false, abstract: false, final false
  inline void add_KeyboardShown(::System::Action* value);

  static inline ::StringW getStaticF__defaultAlphaBlendShaderName();

  static inline ::StringW getStaticF__defaultShaderName();

  static inline ::UnityW<::GlobalNamespace::OVRVirtualKeyboard> getStaticF_singleton_();

  /// @brief Method get_Collider, addr 0x5cd1284, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Collider> get_Collider();

  /// @brief Method get_TextCommitField, addr 0x5cd1294, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::InputField> get_TextCommitField();

  /// @brief Method get_TextHandler, addr 0x5cd163c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* get_TextHandler();

  /// @brief Method remove_Backspace, addr 0x5cd0dd0, size 0xac, virtual false, abstract: false, final false
  inline void remove_Backspace(::System::Action* value);

  /// @brief Method remove_CommitText, addr 0x5cd0c64, size 0xc0, virtual false, abstract: false, final false
  inline void remove_CommitText(::System::Action_1<::StringW>* value);

  /// @brief Method remove_Enter, addr 0x5cd0f28, size 0xac, virtual false, abstract: false, final false
  inline void remove_Enter(::System::Action* value);

  /// @brief Method remove_KeyboardHidden, addr 0x5cd11d8, size 0xac, virtual false, abstract: false, final false
  inline void remove_KeyboardHidden(::System::Action* value);

  /// @brief Method remove_KeyboardShown, addr 0x5cd1080, size 0xac, virtual false, abstract: false, final false
  inline void remove_KeyboardShown(::System::Action* value);

  static inline void setStaticF__defaultAlphaBlendShaderName(::StringW value);

  static inline void setStaticF__defaultShaderName(::StringW value);

  static inline void setStaticF_singleton_(::UnityW<::GlobalNamespace::OVRVirtualKeyboard> value);

  /// @brief Method set_Collider, addr 0x5cd128c, size 0x8, virtual false, abstract: false, final false
  inline void set_Collider(::UnityEngine::Collider* value);

  /// @brief Method set_TextCommitField, addr 0x5cd1364, size 0xe4, virtual false, abstract: false, final false
  inline void set_TextCommitField(::UnityEngine::UI::InputField* value);

  /// @brief Method set_TextHandler, addr 0x5cd1644, size 0x374, virtual false, abstract: false, final false
  inline void set_TextHandler(::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboard();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboard(OVRVirtualKeyboard&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboard", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboard(OVRVirtualKeyboard const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7791 };

  /// @brief Field CommitText, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___CommitText;

  /// @brief Field Backspace, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___Backspace;

  /// @brief Field Enter, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___Enter;

  /// @brief Field KeyboardShown, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___KeyboardShown;

  /// @brief Field KeyboardHidden, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___KeyboardHidden;

  /// @brief Field <Collider>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> ____Collider_k__BackingField;

  /// @brief Field InitialPosition, offset: 0x50, size: 0x4, def value: None
  ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition ___InitialPosition;

  /// @brief Field textCommitField, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::InputField> ___textCommitField;

  /// @brief Field textHandler, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler> ___textHandler;

  /// @brief Field _runtimeTextHandler, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::OVRVirtualKeyboard_ITextHandler* ____runtimeTextHandler;

  /// @brief Field leftControllerRootTransform, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftControllerRootTransform;

  /// @brief Field leftControllerDirectTransform, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftControllerDirectTransform;

  /// @brief Field rightControllerRootTransform, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightControllerRootTransform;

  /// @brief Field rightControllerDirectTransform, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightControllerDirectTransform;

  /// @brief Field controllerDirectInteraction, offset: 0x90, size: 0x1, def value: None
  bool ___controllerDirectInteraction;

  /// @brief Field controllerRayInteraction, offset: 0x91, size: 0x1, def value: None
  bool ___controllerRayInteraction;

  /// @brief Field controllerRaycaster, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> ___controllerRaycaster;

  /// @brief Field handLeft, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRHand> ___handLeft;

  /// @brief Field handRight, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRHand> ___handRight;

  /// @brief Field handDirectInteraction, offset: 0xb0, size: 0x1, def value: None
  bool ___handDirectInteraction;

  /// @brief Field handRayInteraction, offset: 0xb1, size: 0x1, def value: None
  bool ___handRayInteraction;

  /// @brief Field handRaycaster, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster> ___handRaycaster;

  /// @brief Field keyboardModelShader, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___keyboardModelShader;

  /// @brief Field keyboardModelAlphaBlendShader, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___keyboardModelAlphaBlendShader;

  /// @brief Field InputEnabled, offset: 0xd0, size: 0x1, def value: None
  bool ___InputEnabled;

  /// @brief Field CommitTextEvent, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent* ___CommitTextEvent;

  /// @brief Field BackspaceEvent, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___BackspaceEvent;

  /// @brief Field EnterEvent, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___EnterEvent;

  /// @brief Field KeyboardShownEvent, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___KeyboardShownEvent;

  /// @brief Field KeyboardHiddenEvent, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___KeyboardHiddenEvent;

  /// @brief Field isKeyboardCreated_, offset: 0x100, size: 0x1, def value: None
  bool ___isKeyboardCreated_;

  /// @brief Field keyboardSpace_, offset: 0x108, size: 0x8, def value: None
  uint64_t ___keyboardSpace_;

  /// @brief Field virtualKeyboardTextures_, offset: 0x110, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint64_t, ::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo>* ___virtualKeyboardTextures_;

  /// @brief Field virtualKeyboardScene_, offset: 0x118, size: 0x20, def value: None
  ::GlobalNamespace::OVRGLTFScene ___virtualKeyboardScene_;

  /// @brief Field virtualKeyboardModelKey_, offset: 0x138, size: 0x8, def value: None
  uint64_t ___virtualKeyboardModelKey_;

  /// @brief Field modelInitialized_, offset: 0x140, size: 0x1, def value: None
  bool ___modelInitialized_;

  /// @brief Field modelAvailable_, offset: 0x141, size: 0x1, def value: None
  bool ___modelAvailable_;

  /// @brief Field keyboardVisible_, offset: 0x142, size: 0x1, def value: None
  bool ___keyboardVisible_;

  /// @brief Field _interactorRootTransformOverride, offset: 0x148, size: 0x8, def value: None
  ::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride* ____interactorRootTransformOverride;

  /// @brief Field _inputSources, offset: 0x150, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRVirtualKeyboard_IInputSource*>* ____inputSources;

  /// @brief Field keyboardEventListener_, offset: 0x158, size: 0x8, def value: None
  ::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener* ___keyboardEventListener_;

  /// @brief Field gltfModelCoroutine_, offset: 0x160, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___gltfModelCoroutine_;

  /// @brief Field _gltfLoader, offset: 0x168, size: 0x8, def value: None
  ::GlobalNamespace::OVRGLTFLoader* ____gltfLoader;

  /// @brief Field _animationStateCount, offset: 0x170, size: 0x4, def value: None
  int32_t ____animationStateCount;

  /// @brief Field _animationStateBufferLength, offset: 0x174, size: 0x4, def value: None
  int32_t ____animationStateBufferLength;

  /// @brief Field _animationStateBuffer, offset: 0x178, size: 0x8, def value: None
  ::System::IntPtr ____animationStateBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___CommitText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___Backspace) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___Enter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___KeyboardShown) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___KeyboardHidden) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ____Collider_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___InitialPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___textCommitField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___textHandler) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ____runtimeTextHandler) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___leftControllerRootTransform) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___leftControllerDirectTransform) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___rightControllerRootTransform) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___rightControllerDirectTransform) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___controllerDirectInteraction) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___controllerRayInteraction) == 0x91, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___controllerRaycaster) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___handLeft) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___handRight) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___handDirectInteraction) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___handRayInteraction) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___handRaycaster) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___keyboardModelShader) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___keyboardModelAlphaBlendShader) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___InputEnabled) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___CommitTextEvent) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___BackspaceEvent) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___EnterEvent) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___KeyboardShownEvent) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___KeyboardHiddenEvent) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___isKeyboardCreated_) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___keyboardSpace_) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___virtualKeyboardTextures_) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___virtualKeyboardScene_) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___virtualKeyboardModelKey_) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___modelInitialized_) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___modelAvailable_) == 0x141, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___keyboardVisible_) == 0x142, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ____interactorRootTransformOverride) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ____inputSources) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___keyboardEventListener_) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ___gltfModelCoroutine_) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ____gltfLoader) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ____animationStateCount) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ____animationStateBufferLength) == 0x174, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRVirtualKeyboard, ____animationStateBuffer) == 0x178, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboard, 0x180>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_InputSource, "", "OVRVirtualKeyboard/InputSource");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition, "", "OVRVirtualKeyboard/KeyboardPosition");
NEED_NO_BOX(::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HandInputSource_OVRVirtualKeyboard___c__DisplayClass6_0*, "", "OVRVirtualKeyboard/HandInputSource/<>c__DisplayClass6_0");
NEED_NO_BOX(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard__RevertInteractorOverrides_d__6*, "",
                       "OVRVirtualKeyboard/InteractorRootTransformOverride/<RevertInteractorOverrides>d__6");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard*, "", "OVRVirtualKeyboard");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_AbstractTextHandler*, "", "OVRVirtualKeyboard/AbstractTextHandler");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_BaseInputSource*, "", "OVRVirtualKeyboard/BaseInputSource");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_CommitTextUnityEvent*, "", "OVRVirtualKeyboard/CommitTextUnityEvent");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_ControllerInputSource*, "", "OVRVirtualKeyboard/ControllerInputSource");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard_HandInputSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_HandInputSource*, "", "OVRVirtualKeyboard/HandInputSource");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard_IInputSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_IInputSource*, "", "OVRVirtualKeyboard/IInputSource");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard_ITextHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_ITextHandler*, "", "OVRVirtualKeyboard/ITextHandler");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_InteractorRootTransformOverride*, "", "OVRVirtualKeyboard/InteractorRootTransformOverride");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_KeyboardEventListener*, "", "OVRVirtualKeyboard/KeyboardEventListener");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_TextHandlerScope*, "", "OVRVirtualKeyboard/TextHandlerScope");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_WaitUntilKeyboardVisible*, "", "OVRVirtualKeyboard/WaitUntilKeyboardVisible");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__92);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard__InitializeGlTFModel_d__92*, "", "OVRVirtualKeyboard/<InitializeGlTFModel>d__92");
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard___c*, "", "OVRVirtualKeyboard/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InteractorRootTransformOverride_OVRVirtualKeyboard_InteractorRootOverrideData, "",
                       "OVRVirtualKeyboard/InteractorRootTransformOverride/InteractorRootOverrideData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard_VirtualKeyboardTextureInfo, "", "OVRVirtualKeyboard/VirtualKeyboardTextureInfo");
