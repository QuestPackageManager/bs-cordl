#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EnvironmentColorManager)
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class SimpleColorSO;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentColorManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentColorManager);
// Type: ::EnvironmentColorManager
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnvironmentColorManager*
class CORDL_TYPE EnvironmentColorManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _colorScheme, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__colorScheme, put = __cordl_internal_set__colorScheme))::GlobalNamespace::ColorScheme* _colorScheme;

  /// @brief Field _defaultColorScheme, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultColorScheme, put = __cordl_internal_set__defaultColorScheme))::UnityW<::GlobalNamespace::ColorSchemeSO> _defaultColorScheme;

  /// @brief Field _environmentColor0, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentColor0, put = __cordl_internal_set__environmentColor0))::UnityW<::GlobalNamespace::SimpleColorSO> _environmentColor0;

  /// @brief Field _environmentColor0Boost, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentColor0Boost, put = __cordl_internal_set__environmentColor0Boost))::UnityW<::GlobalNamespace::SimpleColorSO> _environmentColor0Boost;

  /// @brief Field _environmentColor1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentColor1, put = __cordl_internal_set__environmentColor1))::UnityW<::GlobalNamespace::SimpleColorSO> _environmentColor1;

  /// @brief Field _environmentColor1Boost, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentColor1Boost, put = __cordl_internal_set__environmentColor1Boost))::UnityW<::GlobalNamespace::SimpleColorSO> _environmentColor1Boost;

  __declspec(property(get = get_environmentColor0))::UnityEngine::Color environmentColor0;

  __declspec(property(get = get_environmentColor0Boost))::UnityEngine::Color environmentColor0Boost;

  __declspec(property(get = get_environmentColor1))::UnityEngine::Color environmentColor1;

  __declspec(property(get = get_environmentColor1Boost))::UnityEngine::Color environmentColor1Boost;

  /// @brief Method Awake, addr 0x25768c8, size 0x28, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method InitColors, addr 0x25768f0, size 0xbc, virtual false, abstract: false, final false
  inline void InitColors();

  static inline ::GlobalNamespace::EnvironmentColorManager* New_ctor();

  /// @brief Method SetColorScheme, addr 0x25769ac, size 0x8, virtual false, abstract: false, final false
  inline void SetColorScheme(::GlobalNamespace::ColorScheme* colorScheme);

  constexpr ::GlobalNamespace::ColorScheme*& __cordl_internal_get__colorScheme();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorScheme*> const& __cordl_internal_get__colorScheme() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO> const& __cordl_internal_get__defaultColorScheme() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO>& __cordl_internal_get__defaultColorScheme();

  constexpr ::UnityW<::GlobalNamespace::SimpleColorSO> const& __cordl_internal_get__environmentColor0() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleColorSO>& __cordl_internal_get__environmentColor0();

  constexpr ::UnityW<::GlobalNamespace::SimpleColorSO> const& __cordl_internal_get__environmentColor0Boost() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleColorSO>& __cordl_internal_get__environmentColor0Boost();

  constexpr ::UnityW<::GlobalNamespace::SimpleColorSO> const& __cordl_internal_get__environmentColor1() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleColorSO>& __cordl_internal_get__environmentColor1();

  constexpr ::UnityW<::GlobalNamespace::SimpleColorSO> const& __cordl_internal_get__environmentColor1Boost() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleColorSO>& __cordl_internal_get__environmentColor1Boost();

  constexpr void __cordl_internal_set__colorScheme(::GlobalNamespace::ColorScheme* value);

  constexpr void __cordl_internal_set__defaultColorScheme(::UnityW<::GlobalNamespace::ColorSchemeSO> value);

  constexpr void __cordl_internal_set__environmentColor0(::UnityW<::GlobalNamespace::SimpleColorSO> value);

  constexpr void __cordl_internal_set__environmentColor0Boost(::UnityW<::GlobalNamespace::SimpleColorSO> value);

  constexpr void __cordl_internal_set__environmentColor1(::UnityW<::GlobalNamespace::SimpleColorSO> value);

  constexpr void __cordl_internal_set__environmentColor1Boost(::UnityW<::GlobalNamespace::SimpleColorSO> value);

  /// @brief Method .ctor, addr 0x25769b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_environmentColor0, addr 0x2570ff4, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_environmentColor0();

  /// @brief Method get_environmentColor0Boost, addr 0x2571034, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_environmentColor0Boost();

  /// @brief Method get_environmentColor1, addr 0x2571014, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_environmentColor1();

  /// @brief Method get_environmentColor1Boost, addr 0x2571088, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_environmentColor1Boost();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentColorManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentColorManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentColorManager(EnvironmentColorManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentColorManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentColorManager(EnvironmentColorManager const&) = delete;

  /// @brief Field _defaultColorScheme, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSchemeSO> ____defaultColorScheme;

  /// @brief Field _environmentColor0, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleColorSO> ____environmentColor0;

  /// @brief Field _environmentColor1, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleColorSO> ____environmentColor1;

  /// @brief Field _environmentColor0Boost, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleColorSO> ____environmentColor0Boost;

  /// @brief Field _environmentColor1Boost, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleColorSO> ____environmentColor1Boost;

  /// @brief Field _colorScheme, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ColorScheme* ____colorScheme;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentColorManager, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentColorManager, ____defaultColorScheme) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentColorManager, ____environmentColor0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentColorManager, ____environmentColor1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentColorManager, ____environmentColor0Boost) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentColorManager, ____environmentColor1Boost) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentColorManager, ____colorScheme) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentColorManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentColorManager*, "", "EnvironmentColorManager");
