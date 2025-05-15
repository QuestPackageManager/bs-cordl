#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/SkinColorSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SkinColorSO)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarSDK {
class SkinColorSO;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarSDK::SkinColorSO);
// Dependencies PersistentScriptableObject, UnityEngine.Color
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarSDK.SkinColorSO
class CORDL_TYPE SkinColorSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_Color)) ::UnityEngine::Color Color;

  /// @brief Field _color, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _id, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__id, put = __cordl_internal_set__id)) ::StringW _id;

  __declspec(property(get = get_id)) ::StringW id;

  static inline ::BeatSaber::BeatAvatarSDK::SkinColorSO* New_ctor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr ::StringW const& __cordl_internal_get__id() const;

  constexpr ::StringW& __cordl_internal_get__id();

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__id(::StringW value);

  /// @brief Method .ctor, addr 0x225d894, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Color, addr 0x225d888, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_Color();

  /// @brief Method get_id, addr 0x225d880, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_id();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SkinColorSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SkinColorSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SkinColorSO(SkinColorSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SkinColorSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SkinColorSO(SkinColorSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18176 };

  /// @brief Field _id, offset: 0x18, size: 0x8, def value: None
  ::StringW ____id;

  /// @brief Field _color, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarSDK::SkinColorSO, ____id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::SkinColorSO, ____color) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::SkinColorSO, 0x30>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::SkinColorSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::SkinColorSO*, "BeatSaber.BeatAvatarSDK", "SkinColorSO");
