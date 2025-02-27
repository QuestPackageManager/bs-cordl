#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTrackedKeyboardSampleControls.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTrackedKeyboardSampleControls)
namespace GlobalNamespace {
class OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class InputField;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRTrackedKeyboardSampleControls;
}
namespace GlobalNamespace {
class OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRTrackedKeyboardSampleControls);
MARK_REF_PTR_T(::GlobalNamespace::OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTrackedKeyboardSampleControls/<SetShaderCoroutine>d__19
class CORDL_TYPE OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::OVRTrackedKeyboardSampleControls> __4__this;

  /// @brief Field <trackingWasEnabled>5__2, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__trackingWasEnabled_5__2, put = __cordl_internal_set__trackingWasEnabled_5__2)) bool _trackingWasEnabled_5__2;

  /// @brief Field shaderName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_shaderName, put = __cordl_internal_set_shaderName)) ::StringW shaderName;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x402e5bc, size 0x124, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x402e6e0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x402e6e8, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x402e720, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x402e5b8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboardSampleControls> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboardSampleControls>& __cordl_internal_get___4__this();

  constexpr bool const& __cordl_internal_get__trackingWasEnabled_5__2() const;

  constexpr bool& __cordl_internal_get__trackingWasEnabled_5__2();

  constexpr ::StringW const& __cordl_internal_get_shaderName() const;

  constexpr ::StringW& __cordl_internal_get_shaderName();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRTrackedKeyboardSampleControls> value);

  constexpr void __cordl_internal_set__trackingWasEnabled_5__2(bool value);

  constexpr void __cordl_internal_set_shaderName(::StringW value);

  /// @brief Method .ctor, addr 0x402e500, size 0x28, virtual false, abstract: false, final false
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
  constexpr OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19(OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19(OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8358 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRTrackedKeyboardSampleControls> _____4__this;

  /// @brief Field shaderName, offset: 0x28, size: 0x8, def value: None
  ::StringW ___shaderName;

  /// @brief Field <trackingWasEnabled>5__2, offset: 0x30, size: 0x1, def value: None
  bool ____trackingWasEnabled_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19, ___shaderName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19, ____trackingWasEnabled_5__2) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTrackedKeyboardSampleControls
class CORDL_TYPE OVRTrackedKeyboardSampleControls : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _SetShaderCoroutine_d__19 = ::GlobalNamespace::OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19;

  /// @brief Field BadStateColor, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_BadStateColor, put = __cordl_internal_set_BadStateColor)) ::UnityEngine::Color BadStateColor;

  /// @brief Field ConnectedValue, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_ConnectedValue, put = __cordl_internal_set_ConnectedValue)) ::UnityW<::UnityEngine::UI::Text> ConnectedValue;

  /// @brief Field ConnectionToggle, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_ConnectionToggle, put = __cordl_internal_set_ConnectionToggle)) ::UnityW<::UnityEngine::UI::Toggle> ConnectionToggle;

  /// @brief Field GoodStateColor, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_GoodStateColor, put = __cordl_internal_set_GoodStateColor)) ::UnityEngine::Color GoodStateColor;

  /// @brief Field NameValue, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_NameValue, put = __cordl_internal_set_NameValue)) ::UnityW<::UnityEngine::UI::Text> NameValue;

  /// @brief Field RemoteKeyboardToggle, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_RemoteKeyboardToggle, put = __cordl_internal_set_RemoteKeyboardToggle)) ::UnityW<::UnityEngine::UI::Toggle> RemoteKeyboardToggle;

  /// @brief Field SelectKeyboardValue, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_SelectKeyboardValue, put = __cordl_internal_set_SelectKeyboardValue)) ::UnityW<::UnityEngine::UI::Text> SelectKeyboardValue;

  /// @brief Field ShaderButtons, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_ShaderButtons, put = __cordl_internal_set_ShaderButtons)) ::ArrayW<::UnityW<::UnityEngine::UI::Button>, ::Array<::UnityW<::UnityEngine::UI::Button>>*>
      ShaderButtons;

  /// @brief Field StartingFocusField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_StartingFocusField, put = __cordl_internal_set_StartingFocusField)) ::UnityW<::UnityEngine::UI::InputField> StartingFocusField;

  /// @brief Field StateValue, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_StateValue, put = __cordl_internal_set_StateValue)) ::UnityW<::UnityEngine::UI::Text> StateValue;

  /// @brief Field TrackingToggle, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_TrackingToggle, put = __cordl_internal_set_TrackingToggle)) ::UnityW<::UnityEngine::UI::Toggle> TrackingToggle;

  /// @brief Field TypeValue, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_TypeValue, put = __cordl_internal_set_TypeValue)) ::UnityW<::UnityEngine::UI::Text> TypeValue;

  /// @brief Field trackedKeyboard, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_trackedKeyboard, put = __cordl_internal_set_trackedKeyboard)) ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> trackedKeyboard;

  /// @brief Method LaunchKeyboardSelection, addr 0x402e528, size 0x2c, virtual false, abstract: false, final false
  inline void LaunchKeyboardSelection();

  static inline ::GlobalNamespace::OVRTrackedKeyboardSampleControls* New_ctor();

  /// @brief Method SetDiffuseShader, addr 0x402e4a8, size 0x58, virtual false, abstract: false, final false
  inline void SetDiffuseShader();

  /// @brief Method SetPresentationKeyLabels, addr 0x402e3c8, size 0x1c, virtual false, abstract: false, final false
  inline void SetPresentationKeyLabels();

  /// @brief Method SetPresentationOpaque, addr 0x402e3ac, size 0x1c, virtual false, abstract: false, final false
  inline void SetPresentationOpaque();

  /// @brief Method SetShaderCoroutine, addr 0x402e43c, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* SetShaderCoroutine(::StringW shaderName);

  /// @brief Method SetTrackingEnabled, addr 0x402e554, size 0x20, virtual false, abstract: false, final false
  inline void SetTrackingEnabled(bool value);

  /// @brief Method SetUnlitShader, addr 0x402e3e4, size 0x58, virtual false, abstract: false, final false
  inline void SetUnlitShader();

  /// @brief Method Start, addr 0x402e044, size 0x100, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x402e144, size 0x268, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method <SetShaderCoroutine>b__19_0, addr 0x402e594, size 0x24, virtual false, abstract: false, final false
  inline bool _SetShaderCoroutine_b__19_0();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_BadStateColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_BadStateColor();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_ConnectedValue() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_ConnectedValue();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get_ConnectionToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get_ConnectionToggle();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_GoodStateColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_GoodStateColor();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_NameValue() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_NameValue();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get_RemoteKeyboardToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get_RemoteKeyboardToggle();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_SelectKeyboardValue() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_SelectKeyboardValue();

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Button>, ::Array<::UnityW<::UnityEngine::UI::Button>>*> const& __cordl_internal_get_ShaderButtons() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Button>, ::Array<::UnityW<::UnityEngine::UI::Button>>*>& __cordl_internal_get_ShaderButtons();

  constexpr ::UnityW<::UnityEngine::UI::InputField> const& __cordl_internal_get_StartingFocusField() const;

  constexpr ::UnityW<::UnityEngine::UI::InputField>& __cordl_internal_get_StartingFocusField();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_StateValue() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_StateValue();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get_TrackingToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get_TrackingToggle();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_TypeValue() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_TypeValue();

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& __cordl_internal_get_trackedKeyboard() const;

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& __cordl_internal_get_trackedKeyboard();

  constexpr void __cordl_internal_set_BadStateColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_ConnectedValue(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_ConnectionToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set_GoodStateColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_NameValue(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_RemoteKeyboardToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set_SelectKeyboardValue(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_ShaderButtons(::ArrayW<::UnityW<::UnityEngine::UI::Button>, ::Array<::UnityW<::UnityEngine::UI::Button>>*> value);

  constexpr void __cordl_internal_set_StartingFocusField(::UnityW<::UnityEngine::UI::InputField> value);

  constexpr void __cordl_internal_set_StateValue(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_TrackingToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set_TypeValue(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_trackedKeyboard(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value);

  /// @brief Method .ctor, addr 0x402e574, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTrackedKeyboardSampleControls();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboardSampleControls", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTrackedKeyboardSampleControls(OVRTrackedKeyboardSampleControls&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboardSampleControls", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTrackedKeyboardSampleControls(OVRTrackedKeyboardSampleControls const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8359 };

  /// @brief Field trackedKeyboard, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> ___trackedKeyboard;

  /// @brief Field StartingFocusField, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::InputField> ___StartingFocusField;

  /// @brief Field NameValue, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___NameValue;

  /// @brief Field ConnectedValue, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___ConnectedValue;

  /// @brief Field StateValue, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___StateValue;

  /// @brief Field SelectKeyboardValue, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___SelectKeyboardValue;

  /// @brief Field TypeValue, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___TypeValue;

  /// @brief Field GoodStateColor, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Color ___GoodStateColor;

  /// @brief Field BadStateColor, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color ___BadStateColor;

  /// @brief Field TrackingToggle, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ___TrackingToggle;

  /// @brief Field ConnectionToggle, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ___ConnectionToggle;

  /// @brief Field RemoteKeyboardToggle, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ___RemoteKeyboardToggle;

  /// @brief Field ShaderButtons, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Button>, ::Array<::UnityW<::UnityEngine::UI::Button>>*> ___ShaderButtons;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___trackedKeyboard) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___StartingFocusField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___NameValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___ConnectedValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___StateValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___SelectKeyboardValue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___TypeValue) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___GoodStateColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___BadStateColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___TrackingToggle) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___ConnectionToggle) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___RemoteKeyboardToggle) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___ShaderButtons) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTrackedKeyboardSampleControls, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRTrackedKeyboardSampleControls);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTrackedKeyboardSampleControls*, "", "OVRTrackedKeyboardSampleControls");
NEED_NO_BOX(::GlobalNamespace::OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTrackedKeyboardSampleControls__SetShaderCoroutine_d__19*, "", "OVRTrackedKeyboardSampleControls/<SetShaderCoroutine>d__19");
