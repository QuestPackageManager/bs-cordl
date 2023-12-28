#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EnvironmentColorManager)
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class SimpleColorSO;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class ColorSchemeSO;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5833))
// CS Name: ::EnvironmentColorManager*
class CORDL_TYPE EnvironmentColorManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _defaultColorScheme, offset 0x18, size 0x8
  __declspec(property(get = __get__defaultColorScheme, put = __set__defaultColorScheme))::GlobalNamespace::ColorSchemeSO* _defaultColorScheme;

  /// @brief Field _environmentColor0, offset 0x20, size 0x8
  __declspec(property(get = __get__environmentColor0, put = __set__environmentColor0))::GlobalNamespace::SimpleColorSO* _environmentColor0;

  /// @brief Field _environmentColor1, offset 0x28, size 0x8
  __declspec(property(get = __get__environmentColor1, put = __set__environmentColor1))::GlobalNamespace::SimpleColorSO* _environmentColor1;

  /// @brief Field _environmentColor0Boost, offset 0x30, size 0x8
  __declspec(property(get = __get__environmentColor0Boost, put = __set__environmentColor0Boost))::GlobalNamespace::SimpleColorSO* _environmentColor0Boost;

  /// @brief Field _environmentColor1Boost, offset 0x38, size 0x8
  __declspec(property(get = __get__environmentColor1Boost, put = __set__environmentColor1Boost))::GlobalNamespace::SimpleColorSO* _environmentColor1Boost;

  /// @brief Field _colorScheme, offset 0x40, size 0x8
  __declspec(property(get = __get__colorScheme, put = __set__colorScheme))::GlobalNamespace::ColorScheme* _colorScheme;

  __declspec(property(get = get_environmentColor0))::UnityEngine::Color environmentColor0;

  __declspec(property(get = get_environmentColor1))::UnityEngine::Color environmentColor1;

  __declspec(property(get = get_environmentColor0Boost))::UnityEngine::Color environmentColor0Boost;

  __declspec(property(get = get_environmentColor1Boost))::UnityEngine::Color environmentColor1Boost;

  constexpr ::GlobalNamespace::ColorSchemeSO*& __get__defaultColorScheme();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeSO*> const& __get__defaultColorScheme() const;

  constexpr void __set__defaultColorScheme(::GlobalNamespace::ColorSchemeSO* value);

  constexpr ::GlobalNamespace::SimpleColorSO*& __get__environmentColor0();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleColorSO*> const& __get__environmentColor0() const;

  constexpr void __set__environmentColor0(::GlobalNamespace::SimpleColorSO* value);

  constexpr ::GlobalNamespace::SimpleColorSO*& __get__environmentColor1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleColorSO*> const& __get__environmentColor1() const;

  constexpr void __set__environmentColor1(::GlobalNamespace::SimpleColorSO* value);

  constexpr ::GlobalNamespace::SimpleColorSO*& __get__environmentColor0Boost();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleColorSO*> const& __get__environmentColor0Boost() const;

  constexpr void __set__environmentColor0Boost(::GlobalNamespace::SimpleColorSO* value);

  constexpr ::GlobalNamespace::SimpleColorSO*& __get__environmentColor1Boost();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleColorSO*> const& __get__environmentColor1Boost() const;

  constexpr void __set__environmentColor1Boost(::GlobalNamespace::SimpleColorSO* value);

  constexpr ::GlobalNamespace::ColorScheme*& __get__colorScheme();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorScheme*> const& __get__colorScheme() const;

  constexpr void __set__colorScheme(::GlobalNamespace::ColorScheme* value);

  /// @brief Method get_environmentColor0 addr 0x22ebfe4 size 0x20 virtual false final false
  inline ::UnityEngine::Color get_environmentColor0();

  /// @brief Method get_environmentColor1 addr 0x22ec004 size 0x20 virtual false final false
  inline ::UnityEngine::Color get_environmentColor1();

  /// @brief Method get_environmentColor0Boost addr 0x22ec024 size 0x54 virtual false final false
  inline ::UnityEngine::Color get_environmentColor0Boost();

  /// @brief Method get_environmentColor1Boost addr 0x22ec078 size 0x54 virtual false final false
  inline ::UnityEngine::Color get_environmentColor1Boost();

  /// @brief Method Awake addr 0x22ed828 size 0x28 virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x22ed850 size 0x4 virtual false final false
  inline void Start();

  /// @brief Method SetColorScheme addr 0x22ed910 size 0x8 virtual false final false
  inline void SetColorScheme(::GlobalNamespace::ColorScheme* colorScheme);

  /// @brief Method InitColors addr 0x22ed854 size 0xbc virtual false final false
  inline void InitColors();

  static inline ::GlobalNamespace::EnvironmentColorManager* New_ctor();

  /// @brief Method .ctor addr 0x22ed918 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentColorManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentColorManager(EnvironmentColorManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentColorManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentColorManager(EnvironmentColorManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentColorManager();

public:
  /// @brief Field _defaultColorScheme, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemeSO* ____defaultColorScheme;

  /// @brief Field _environmentColor0, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SimpleColorSO* ____environmentColor0;

  /// @brief Field _environmentColor1, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::SimpleColorSO* ____environmentColor1;

  /// @brief Field _environmentColor0Boost, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SimpleColorSO* ____environmentColor0Boost;

  /// @brief Field _environmentColor1Boost, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SimpleColorSO* ____environmentColor1Boost;

  /// @brief Field _colorScheme, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ColorScheme* ____colorScheme;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentColorManager, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentColorManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentColorManager*, "", "EnvironmentColorManager");
