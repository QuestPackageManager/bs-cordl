#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GameServersFilterText)
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace HMUI {
class CurvedTextMeshPro;
}
namespace GlobalNamespace {
class SongPackMasksModel;
}
namespace System::Text {
class StringBuilder;
}
namespace GlobalNamespace {
class GameServersFilter;
}
namespace GlobalNamespace {
struct SongPackMask;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServersFilterText;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServersFilterText);
// Type: ::GameServersFilterText
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5782))
// CS Name: ::GameServersFilterText*
class CORDL_TYPE GameServersFilterText : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _text, offset 0x18, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::HMUI::CurvedTextMeshPro* _text;

  /// @brief Field _songPackMasksModel, offset 0x20, size 0x8
  __declspec(property(get = __get__songPackMasksModel, put = __set__songPackMasksModel))::GlobalNamespace::SongPackMasksModel* _songPackMasksModel;

  /// @brief Field _stringBuilder, offset 0x28, size 0x8
  __declspec(property(get = __get__stringBuilder, put = __set__stringBuilder))::System::Text::StringBuilder* _stringBuilder;

  constexpr ::HMUI::CurvedTextMeshPro*& __get__text();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> const& __get__text() const;

  constexpr void __set__text(::HMUI::CurvedTextMeshPro* value);

  constexpr ::GlobalNamespace::SongPackMasksModel*& __get__songPackMasksModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMasksModel*> const& __get__songPackMasksModel() const;

  constexpr void __set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel* value);

  constexpr ::System::Text::StringBuilder*& __get__stringBuilder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __get__stringBuilder() const;

  constexpr void __set__stringBuilder(::System::Text::StringBuilder* value);

  /// @brief Method Setup addr 0x22e1ef4 size 0x248 virtual false final false
  inline void Setup(::GlobalNamespace::GameServersFilter* filter, bool visible);

  /// @brief Method Setup addr 0x22ce74c size 0x1fc virtual false final false
  inline void Setup(::GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask, ::GlobalNamespace::SongPackMask songPackMask, bool visible);

  static inline ::GlobalNamespace::GameServersFilterText* New_ctor();

  /// @brief Method .ctor addr 0x22e213c size 0x68 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GameServersFilterText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServersFilterText(GameServersFilterText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServersFilterText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServersFilterText(GameServersFilterText const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServersFilterText();

public:
  /// @brief Field _text, offset: 0x18, size: 0x8, def value: None
  ::HMUI::CurvedTextMeshPro* ____text;

  /// @brief Field _songPackMasksModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SongPackMasksModel* ____songPackMasksModel;

  /// @brief Field _stringBuilder, offset: 0x28, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____stringBuilder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServersFilterText, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServersFilterText);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServersFilterText*, "", "GameServersFilterText");
