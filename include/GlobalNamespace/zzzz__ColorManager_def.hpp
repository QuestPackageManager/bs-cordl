#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ColorManager)
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorManager);
// Type: ::ColorManager
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5826))
// CS Name: ::ColorManager*
class CORDL_TYPE ColorManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field _colorScheme, offset 0x10, size 0x8
  __declspec(property(get = __get__colorScheme, put = __set__colorScheme))::GlobalNamespace::ColorScheme* _colorScheme;

  __declspec(property(get = get_obstaclesColor))::UnityEngine::Color obstaclesColor;

  constexpr ::GlobalNamespace::ColorScheme*& __get__colorScheme();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorScheme*> const& __get__colorScheme() const;

  constexpr void __set__colorScheme(::GlobalNamespace::ColorScheme* value);

  /// @brief Method get_obstaclesColor addr 0x22ec0cc size 0x20 virtual false final false
  inline ::UnityEngine::Color get_obstaclesColor();

  /// @brief Method SetColorScheme addr 0x22ec0ec size 0x8 virtual false final false
  inline void SetColorScheme(::GlobalNamespace::ColorScheme* colorScheme);

  /// @brief Method ColorForType addr 0x22ec0f4 size 0xe8 virtual false final false
  inline ::UnityEngine::Color ColorForType(::GlobalNamespace::EnvironmentColorType type, bool boost);

  /// @brief Method ColorForType addr 0x22ec1dc size 0x74 virtual false final false
  inline ::UnityEngine::Color ColorForType(::GlobalNamespace::ColorType type);

  /// @brief Method ColorForSaberType addr 0x22ec250 size 0x54 virtual false final false
  inline ::UnityEngine::Color ColorForSaberType(::GlobalNamespace::SaberType type);

  /// @brief Method EffectsColorForSaberType addr 0x22ec2a4 size 0x90 virtual false final false
  inline ::UnityEngine::Color EffectsColorForSaberType(::GlobalNamespace::SaberType type);

  /// @brief Method GetObstacleEffectColor addr 0x22ec334 size 0x5c virtual false final false
  inline ::UnityEngine::Color GetObstacleEffectColor();

  static inline ::GlobalNamespace::ColorManager* New_ctor();

  /// @brief Method .ctor addr 0x22ec390 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ColorManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorManager(ColorManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorManager(ColorManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorManager();

public:
  /// @brief Field _colorScheme, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::ColorScheme* ____colorScheme;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorManager, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorManager*, "", "ColorManager");
