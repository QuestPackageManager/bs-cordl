#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTrackedKeyboardSampleControls)
namespace GlobalNamespace {
class __OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::UI {
class InputField;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRTrackedKeyboardSampleControls;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRTrackedKeyboardSampleControls);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19);
// Type: ::<SetShaderCoroutine>d__19
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8042))
// CS Name: ::OVRTrackedKeyboardSampleControls::<SetShaderCoroutine>d__19*
class CORDL_TYPE __OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::OVRTrackedKeyboardSampleControls* __4__this;

  /// @brief Field shaderName, offset 0x28, size 0x8
  __declspec(property(get = __get_shaderName, put = __set_shaderName))::StringW shaderName;

  /// @brief Field <trackingWasEnabled>5__2, offset 0x30, size 0x1
  __declspec(property(get = __get__trackingWasEnabled_5__2, put = __set__trackingWasEnabled_5__2)) bool _trackingWasEnabled_5__2;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::OVRTrackedKeyboardSampleControls*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRTrackedKeyboardSampleControls*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::OVRTrackedKeyboardSampleControls* value);

  constexpr ::StringW& __get_shaderName();

  constexpr ::StringW const& __get_shaderName() const;

  constexpr void __set_shaderName(::StringW value);

  constexpr bool& __get__trackingWasEnabled_5__2();

  constexpr bool const& __get__trackingWasEnabled_5__2() const;

  constexpr void __set__trackingWasEnabled_5__2(bool value);

  static inline ::GlobalNamespace::__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x27991e4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x2799298, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x279929c, size 0x134, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x27993d0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x27993d8, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2799418, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19(__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19(__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRTrackedKeyboardSampleControls* _____4__this;

  /// @brief Field shaderName, offset: 0x28, size: 0x8, def value: None
  ::StringW ___shaderName;

  /// @brief Field <trackingWasEnabled>5__2, offset: 0x30, size: 0x1, def value: None
  bool ____trackingWasEnabled_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19, ___shaderName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19, ____trackingWasEnabled_5__2) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRTrackedKeyboardSampleControls
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8043))
// CS Name: ::OVRTrackedKeyboardSampleControls*
class CORDL_TYPE OVRTrackedKeyboardSampleControls : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _SetShaderCoroutine_d__19 = ::GlobalNamespace::__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19;

  /// @brief Field trackedKeyboard, offset 0x18, size 0x8
  __declspec(property(get = __get_trackedKeyboard, put = __set_trackedKeyboard))::GlobalNamespace::OVRTrackedKeyboard* trackedKeyboard;

  /// @brief Field StartingFocusField, offset 0x20, size 0x8
  __declspec(property(get = __get_StartingFocusField, put = __set_StartingFocusField))::UnityEngine::UI::InputField* StartingFocusField;

  /// @brief Field NameValue, offset 0x28, size 0x8
  __declspec(property(get = __get_NameValue, put = __set_NameValue))::UnityEngine::UI::Text* NameValue;

  /// @brief Field ConnectedValue, offset 0x30, size 0x8
  __declspec(property(get = __get_ConnectedValue, put = __set_ConnectedValue))::UnityEngine::UI::Text* ConnectedValue;

  /// @brief Field StateValue, offset 0x38, size 0x8
  __declspec(property(get = __get_StateValue, put = __set_StateValue))::UnityEngine::UI::Text* StateValue;

  /// @brief Field SelectKeyboardValue, offset 0x40, size 0x8
  __declspec(property(get = __get_SelectKeyboardValue, put = __set_SelectKeyboardValue))::UnityEngine::UI::Text* SelectKeyboardValue;

  /// @brief Field TypeValue, offset 0x48, size 0x8
  __declspec(property(get = __get_TypeValue, put = __set_TypeValue))::UnityEngine::UI::Text* TypeValue;

  /// @brief Field GoodStateColor, offset 0x50, size 0x10
  __declspec(property(get = __get_GoodStateColor, put = __set_GoodStateColor))::UnityEngine::Color GoodStateColor;

  /// @brief Field BadStateColor, offset 0x60, size 0x10
  __declspec(property(get = __get_BadStateColor, put = __set_BadStateColor))::UnityEngine::Color BadStateColor;

  /// @brief Field TrackingToggle, offset 0x70, size 0x8
  __declspec(property(get = __get_TrackingToggle, put = __set_TrackingToggle))::UnityEngine::UI::Toggle* TrackingToggle;

  /// @brief Field ConnectionToggle, offset 0x78, size 0x8
  __declspec(property(get = __get_ConnectionToggle, put = __set_ConnectionToggle))::UnityEngine::UI::Toggle* ConnectionToggle;

  /// @brief Field RemoteKeyboardToggle, offset 0x80, size 0x8
  __declspec(property(get = __get_RemoteKeyboardToggle, put = __set_RemoteKeyboardToggle))::UnityEngine::UI::Toggle* RemoteKeyboardToggle;

  /// @brief Field ShaderButtons, offset 0x88, size 0x8
  __declspec(property(get = __get_ShaderButtons, put = __set_ShaderButtons))::ArrayW<::UnityEngine::UI::Button*, ::Array<::UnityEngine::UI::Button*>*> ShaderButtons;

  constexpr ::GlobalNamespace::OVRTrackedKeyboard*& __get_trackedKeyboard();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRTrackedKeyboard*> const& __get_trackedKeyboard() const;

  constexpr void __set_trackedKeyboard(::GlobalNamespace::OVRTrackedKeyboard* value);

  constexpr ::UnityEngine::UI::InputField*& __get_StartingFocusField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::InputField*> const& __get_StartingFocusField() const;

  constexpr void __set_StartingFocusField(::UnityEngine::UI::InputField* value);

  constexpr ::UnityEngine::UI::Text*& __get_NameValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_NameValue() const;

  constexpr void __set_NameValue(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Text*& __get_ConnectedValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_ConnectedValue() const;

  constexpr void __set_ConnectedValue(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Text*& __get_StateValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_StateValue() const;

  constexpr void __set_StateValue(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Text*& __get_SelectKeyboardValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_SelectKeyboardValue() const;

  constexpr void __set_SelectKeyboardValue(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::UI::Text*& __get_TypeValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& __get_TypeValue() const;

  constexpr void __set_TypeValue(::UnityEngine::UI::Text* value);

  constexpr ::UnityEngine::Color& __get_GoodStateColor();

  constexpr ::UnityEngine::Color const& __get_GoodStateColor() const;

  constexpr void __set_GoodStateColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_BadStateColor();

  constexpr ::UnityEngine::Color const& __get_BadStateColor() const;

  constexpr void __set_BadStateColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::UI::Toggle*& __get_TrackingToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get_TrackingToggle() const;

  constexpr void __set_TrackingToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::UI::Toggle*& __get_ConnectionToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get_ConnectionToggle() const;

  constexpr void __set_ConnectionToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::UI::Toggle*& __get_RemoteKeyboardToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get_RemoteKeyboardToggle() const;

  constexpr void __set_RemoteKeyboardToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::ArrayW<::UnityEngine::UI::Button*, ::Array<::UnityEngine::UI::Button*>*>& __get_ShaderButtons();

  constexpr ::ArrayW<::UnityEngine::UI::Button*, ::Array<::UnityEngine::UI::Button*>*> const& __get_ShaderButtons() const;

  constexpr void __set_ShaderButtons(::ArrayW<::UnityEngine::UI::Button*, ::Array<::UnityEngine::UI::Button*>*> value);

  /// @brief Method Start, addr 0x2798d40, size 0x100, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2798e40, size 0x248, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method SetPresentationOpaque, addr 0x2799088, size 0x1c, virtual false, abstract: false, final false
  inline void SetPresentationOpaque();

  /// @brief Method SetPresentationKeyLabels, addr 0x27990a4, size 0x1c, virtual false, abstract: false, final false
  inline void SetPresentationKeyLabels();

  /// @brief Method SetUnlitShader, addr 0x27990c0, size 0x58, virtual false, abstract: false, final false
  inline void SetUnlitShader();

  /// @brief Method SetDiffuseShader, addr 0x279918c, size 0x58, virtual false, abstract: false, final false
  inline void SetDiffuseShader();

  /// @brief Method SetShaderCoroutine, addr 0x2799118, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* SetShaderCoroutine(::StringW shaderName);

  /// @brief Method LaunchKeyboardSelection, addr 0x279920c, size 0x2c, virtual false, abstract: false, final false
  inline void LaunchKeyboardSelection();

  /// @brief Method SetTrackingEnabled, addr 0x2799238, size 0x20, virtual false, abstract: false, final false
  inline void SetTrackingEnabled(bool value);

  static inline ::GlobalNamespace::OVRTrackedKeyboardSampleControls* New_ctor();

  /// @brief Method .ctor, addr 0x2799258, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SetShaderCoroutine>b__19_0, addr 0x2799274, size 0x24, virtual false, abstract: false, final false
  inline bool _SetShaderCoroutine_b__19_0();

  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboardSampleControls", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTrackedKeyboardSampleControls(OVRTrackedKeyboardSampleControls&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboardSampleControls", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTrackedKeyboardSampleControls(OVRTrackedKeyboardSampleControls const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTrackedKeyboardSampleControls();

public:
  /// @brief Field trackedKeyboard, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OVRTrackedKeyboard* ___trackedKeyboard;

  /// @brief Field StartingFocusField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::InputField* ___StartingFocusField;

  /// @brief Field NameValue, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___NameValue;

  /// @brief Field ConnectedValue, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___ConnectedValue;

  /// @brief Field StateValue, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___StateValue;

  /// @brief Field SelectKeyboardValue, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___SelectKeyboardValue;

  /// @brief Field TypeValue, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UI::Text* ___TypeValue;

  /// @brief Field GoodStateColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ___GoodStateColor;

  /// @brief Field BadStateColor, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color ___BadStateColor;

  /// @brief Field TrackingToggle, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ___TrackingToggle;

  /// @brief Field ConnectionToggle, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ___ConnectionToggle;

  /// @brief Field RemoteKeyboardToggle, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ___RemoteKeyboardToggle;

  /// @brief Field ShaderButtons, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UI::Button*, ::Array<::UnityEngine::UI::Button*>*> ___ShaderButtons;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTrackedKeyboardSampleControls, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___trackedKeyboard) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___StartingFocusField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___NameValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___ConnectedValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___StateValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___SelectKeyboardValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___TypeValue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___GoodStateColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___BadStateColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___TrackingToggle) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___ConnectionToggle) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___RemoteKeyboardToggle) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardSampleControls, ___ShaderButtons) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRTrackedKeyboardSampleControls);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTrackedKeyboardSampleControls*, "", "OVRTrackedKeyboardSampleControls");
NEED_NO_BOX(::GlobalNamespace::__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19*, "", "OVRTrackedKeyboardSampleControls/<SetShaderCoroutine>d__19");
