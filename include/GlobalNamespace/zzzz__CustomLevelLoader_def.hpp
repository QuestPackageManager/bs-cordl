#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CustomLevelLoader)
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class EnvironmentsListSO;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomLevelLoader;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomLevelLoader);
// Type: ::CustomLevelLoader
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4145))
// CS Name: ::CustomLevelLoader*
class CORDL_TYPE CustomLevelLoader : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _defaultEnvironmentInfo, offset 0x18, size 0x8
  __declspec(property(get = __get__defaultEnvironmentInfo, put = __set__defaultEnvironmentInfo))::GlobalNamespace::EnvironmentInfoSO* _defaultEnvironmentInfo;

  /// @brief Field _defaultAllDirectionsEnvironmentInfo, offset 0x20, size 0x8
  __declspec(property(get = __get__defaultAllDirectionsEnvironmentInfo, put = __set__defaultAllDirectionsEnvironmentInfo))::GlobalNamespace::EnvironmentInfoSO* _defaultAllDirectionsEnvironmentInfo;

  /// @brief Field _environmentSceneInfoCollection, offset 0x28, size 0x8
  __declspec(property(get = __get__environmentSceneInfoCollection, put = __set__environmentSceneInfoCollection))::GlobalNamespace::EnvironmentsListSO* _environmentSceneInfoCollection;

  /// @brief Field _defaultPackCover, offset 0x30, size 0x8
  __declspec(property(get = __get__defaultPackCover, put = __set__defaultPackCover))::UnityEngine::Sprite* _defaultPackCover;

  /// @brief Field _smallDefaultPackCover, offset 0x38, size 0x8
  __declspec(property(get = __get__smallDefaultPackCover, put = __set__smallDefaultPackCover))::UnityEngine::Sprite* _smallDefaultPackCover;

  constexpr ::GlobalNamespace::EnvironmentInfoSO*& __get__defaultEnvironmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& __get__defaultEnvironmentInfo() const;

  constexpr void __set__defaultEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO* value);

  constexpr ::GlobalNamespace::EnvironmentInfoSO*& __get__defaultAllDirectionsEnvironmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& __get__defaultAllDirectionsEnvironmentInfo() const;

  constexpr void __set__defaultAllDirectionsEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO* value);

  constexpr ::GlobalNamespace::EnvironmentsListSO*& __get__environmentSceneInfoCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentsListSO*> const& __get__environmentSceneInfoCollection() const;

  constexpr void __set__environmentSceneInfoCollection(::GlobalNamespace::EnvironmentsListSO* value);

  constexpr ::UnityEngine::Sprite*& __get__defaultPackCover();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__defaultPackCover() const;

  constexpr void __set__defaultPackCover(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get__smallDefaultPackCover();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__smallDefaultPackCover() const;

  constexpr void __set__smallDefaultPackCover(::UnityEngine::Sprite* value);

  static inline ::GlobalNamespace::CustomLevelLoader* New_ctor();

  /// @brief Method .ctor, addr 0x223c610, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CustomLevelLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomLevelLoader(CustomLevelLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomLevelLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomLevelLoader(CustomLevelLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomLevelLoader();

public:
  /// @brief Field _defaultEnvironmentInfo, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* ____defaultEnvironmentInfo;

  /// @brief Field _defaultAllDirectionsEnvironmentInfo, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* ____defaultAllDirectionsEnvironmentInfo;

  /// @brief Field _environmentSceneInfoCollection, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentsListSO* ____environmentSceneInfoCollection;

  /// @brief Field _defaultPackCover, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____defaultPackCover;

  /// @brief Field _smallDefaultPackCover, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____smallDefaultPackCover;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomLevelLoader, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomLevelLoader, ____defaultEnvironmentInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomLevelLoader, ____defaultAllDirectionsEnvironmentInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomLevelLoader, ____environmentSceneInfoCollection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomLevelLoader, ____defaultPackCover) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomLevelLoader, ____smallDefaultPackCover) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomLevelLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomLevelLoader*, "", "CustomLevelLoader");
