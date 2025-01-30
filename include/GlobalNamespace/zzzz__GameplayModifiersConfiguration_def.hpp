#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayModifiersConfiguration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GameplayModifiersConfiguration)
namespace GlobalNamespace {
class GameplayModifiersConfiguration_CutAngleTolerance;
}
namespace GlobalNamespace {
class GameplayModifiersConfiguration_NoteUniformScale;
}
namespace GlobalNamespace {
class GameplayModifiersConfiguration_SongSpeed;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifiersConfiguration;
}
namespace GlobalNamespace {
class GameplayModifiersConfiguration_CutAngleTolerance;
}
namespace GlobalNamespace {
class GameplayModifiersConfiguration_NoteUniformScale;
}
namespace GlobalNamespace {
class GameplayModifiersConfiguration_SongSpeed;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifiersConfiguration);
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifiersConfiguration_CutAngleTolerance);
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifiersConfiguration_NoteUniformScale);
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifiersConfiguration_SongSpeed);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayModifiersConfiguration/SongSpeed
class CORDL_TYPE GameplayModifiersConfiguration_SongSpeed : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiersConfiguration_SongSpeed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersConfiguration_SongSpeed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifiersConfiguration_SongSpeed(GameplayModifiersConfiguration_SongSpeed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersConfiguration_SongSpeed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifiersConfiguration_SongSpeed(GameplayModifiersConfiguration_SongSpeed const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16980 };

  /// @brief Field kFaster offset 0xffffffff size 0x4
  static constexpr float_t kFaster{ static_cast<float_t>(1.2f) };

  /// @brief Field kNormal offset 0xffffffff size 0x4
  static constexpr float_t kNormal{ static_cast<float_t>(1.0f) };

  /// @brief Field kSlower offset 0xffffffff size 0x4
  static constexpr float_t kSlower{ static_cast<float_t>(0.85f) };

  /// @brief Field kSuperFast offset 0xffffffff size 0x4
  static constexpr float_t kSuperFast{ static_cast<float_t>(1.5f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiersConfiguration_SongSpeed, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayModifiersConfiguration/CutAngleTolerance
class CORDL_TYPE GameplayModifiersConfiguration_CutAngleTolerance : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiersConfiguration_CutAngleTolerance();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersConfiguration_CutAngleTolerance", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifiersConfiguration_CutAngleTolerance(GameplayModifiersConfiguration_CutAngleTolerance&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersConfiguration_CutAngleTolerance", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifiersConfiguration_CutAngleTolerance(GameplayModifiersConfiguration_CutAngleTolerance const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16981 };

  /// @brief Field kDefault offset 0xffffffff size 0x4
  static constexpr float_t kDefault{ static_cast<float_t>(60.0f) };

  /// @brief Field kStrict offset 0xffffffff size 0x4
  static constexpr float_t kStrict{ static_cast<float_t>(40.0f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiersConfiguration_CutAngleTolerance, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayModifiersConfiguration/NoteUniformScale
class CORDL_TYPE GameplayModifiersConfiguration_NoteUniformScale : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiersConfiguration_NoteUniformScale();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersConfiguration_NoteUniformScale", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifiersConfiguration_NoteUniformScale(GameplayModifiersConfiguration_NoteUniformScale&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersConfiguration_NoteUniformScale", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifiersConfiguration_NoteUniformScale(GameplayModifiersConfiguration_NoteUniformScale const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16982 };

  /// @brief Field kDefault offset 0xffffffff size 0x4
  static constexpr float_t kDefault{ static_cast<float_t>(1.0f) };

  /// @brief Field kSmall offset 0xffffffff size 0x4
  static constexpr float_t kSmall{ static_cast<float_t>(0.5f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiersConfiguration_NoteUniformScale, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayModifiersConfiguration
class CORDL_TYPE GameplayModifiersConfiguration : public ::System::Object {
public:
  // Declarations
  using CutAngleTolerance = ::GlobalNamespace::GameplayModifiersConfiguration_CutAngleTolerance;

  using NoteUniformScale = ::GlobalNamespace::GameplayModifiersConfiguration_NoteUniformScale;

  using SongSpeed = ::GlobalNamespace::GameplayModifiersConfiguration_SongSpeed;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiersConfiguration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersConfiguration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifiersConfiguration(GameplayModifiersConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifiersConfiguration(GameplayModifiersConfiguration const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16983 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiersConfiguration, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifiersConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiersConfiguration*, "", "GameplayModifiersConfiguration");
NEED_NO_BOX(::GlobalNamespace::GameplayModifiersConfiguration_CutAngleTolerance);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiersConfiguration_CutAngleTolerance*, "", "GameplayModifiersConfiguration/CutAngleTolerance");
NEED_NO_BOX(::GlobalNamespace::GameplayModifiersConfiguration_NoteUniformScale);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiersConfiguration_NoteUniformScale*, "", "GameplayModifiersConfiguration/NoteUniformScale");
NEED_NO_BOX(::GlobalNamespace::GameplayModifiersConfiguration_SongSpeed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiersConfiguration_SongSpeed*, "", "GameplayModifiersConfiguration/SongSpeed");
