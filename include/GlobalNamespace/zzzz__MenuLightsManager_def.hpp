#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MenuLightsManager)
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
namespace GlobalNamespace {
class __MenuLightsManager___Start_d__4;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuLightsManager;
}
namespace GlobalNamespace {
class __MenuLightsManager___Start_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MenuLightsManager);
MARK_REF_PTR_T(::GlobalNamespace::__MenuLightsManager___Start_d__4);
// Type: ::<Start>d__4
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MenuLightsManager::<Start>d__4*
class CORDL_TYPE __MenuLightsManager___Start_d__4 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MenuLightsManager> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x24907e4, size 0xcc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MenuLightsManager___Start_d__4* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x24908b0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x24908b8, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x24908f8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x24907e0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsManager>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MenuLightsManager> value);

  /// @brief Method .ctor, addr 0x249035c, size 0x28, virtual false, abstract: false, final false
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
  constexpr __MenuLightsManager___Start_d__4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MenuLightsManager___Start_d__4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuLightsManager___Start_d__4(__MenuLightsManager___Start_d__4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuLightsManager___Start_d__4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuLightsManager___Start_d__4(__MenuLightsManager___Start_d__4 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsManager> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuLightsManager___Start_d__4, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuLightsManager___Start_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuLightsManager___Start_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuLightsManager___Start_d__4, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MenuLightsManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MenuLightsManager*
class CORDL_TYPE MenuLightsManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__4 = ::GlobalNamespace::__MenuLightsManager___Start_d__4;

  /// @brief Field _defaultPreset, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultPreset, put = __cordl_internal_set__defaultPreset))::UnityW<::GlobalNamespace::MenuLightsPresetSO> _defaultPreset;

  /// @brief Field _lightManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lightManager, put = __cordl_internal_set__lightManager))::UnityW<::GlobalNamespace::LightWithIdManager> _lightManager;

  /// @brief Field _preset, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__preset, put = __cordl_internal_set__preset))::UnityW<::GlobalNamespace::MenuLightsPresetSO> _preset;

  /// @brief Field _smooth, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__smooth, put = __cordl_internal_set__smooth)) float_t _smooth;

  /// @brief Method CurrentColorForID, addr 0x2490588, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Color CurrentColorForID(int32_t lightId);

  /// @brief Method IsColorVeryCloseToColor, addr 0x2490528, size 0x44, virtual false, abstract: false, final false
  inline bool IsColorVeryCloseToColor(::UnityEngine::Color color0, ::UnityEngine::Color color1);

  static inline ::GlobalNamespace::MenuLightsManager* New_ctor();

  /// @brief Method RefreshColors, addr 0x2490744, size 0x8c, virtual false, abstract: false, final false
  inline void RefreshColors();

  /// @brief Method RefreshLightsDictForPreset, addr 0x24905a8, size 0xe0, virtual false, abstract: false, final false
  inline void RefreshLightsDictForPreset(::GlobalNamespace::MenuLightsPresetSO* preset);

  /// @brief Method SetColor, addr 0x249056c, size 0x1c, virtual false, abstract: false, final false
  inline void SetColor(int32_t lightId, ::UnityEngine::Color color);

  /// @brief Method SetColorPreset, addr 0x2490688, size 0xbc, virtual false, abstract: false, final false
  inline void SetColorPreset(::GlobalNamespace::MenuLightsPresetSO* preset, bool animated);

  /// @brief Method SetColorsFromPreset, addr 0x24903c4, size 0x164, virtual false, abstract: false, final false
  inline bool SetColorsFromPreset(::GlobalNamespace::MenuLightsPresetSO* preset, float_t interpolationFactor);

  /// @brief Method Start, addr 0x24902f4, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  /// @brief Method Update, addr 0x2490384, size 0x40, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__defaultPreset() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__defaultPreset();

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& __cordl_internal_get__lightManager() const;

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& __cordl_internal_get__lightManager();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__preset() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__preset();

  constexpr float_t const& __cordl_internal_get__smooth() const;

  constexpr float_t& __cordl_internal_get__smooth();

  constexpr void __cordl_internal_set__defaultPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value);

  constexpr void __cordl_internal_set__lightManager(::UnityW<::GlobalNamespace::LightWithIdManager> value);

  constexpr void __cordl_internal_set__preset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value);

  constexpr void __cordl_internal_set__smooth(float_t value);

  /// @brief Method .ctor, addr 0x24907d0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuLightsManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuLightsManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuLightsManager(MenuLightsManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuLightsManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuLightsManager(MenuLightsManager const&) = delete;

  /// @brief Field _defaultPreset, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsPresetSO> ____defaultPreset;

  /// @brief Field _smooth, offset: 0x20, size: 0x4, def value: None
  float_t ____smooth;

  /// @brief Field _lightManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightWithIdManager> ____lightManager;

  /// @brief Field _preset, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsPresetSO> ____preset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuLightsManager, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuLightsManager, ____defaultPreset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuLightsManager, ____smooth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuLightsManager, ____lightManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuLightsManager, ____preset) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuLightsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuLightsManager*, "", "MenuLightsManager");
NEED_NO_BOX(::GlobalNamespace::__MenuLightsManager___Start_d__4);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuLightsManager___Start_d__4*, "", "MenuLightsManager/<Start>d__4");
