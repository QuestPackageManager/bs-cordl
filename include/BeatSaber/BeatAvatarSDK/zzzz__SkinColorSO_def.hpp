#pragma once
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
// Type: BeatSaber.BeatAvatarSDK::SkinColorSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::BeatAvatarSDK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8995)), TypeDefinitionIndex(TypeDefinitionIndex(15602))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15803))
// CS Name: ::BeatSaber.BeatAvatarSDK::SkinColorSO*
class CORDL_TYPE SkinColorSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _id, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__id, put = __cordl_internal_set__id))::StringW _id;

  /// @brief Field _color, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color))::UnityEngine::Color _color;

  __declspec(property(get = get_id))::StringW id;

  __declspec(property(get = get_Color))::UnityEngine::Color Color;

  constexpr ::StringW& __cordl_internal_get__id();

  constexpr ::StringW const& __cordl_internal_get__id() const;

  constexpr void __cordl_internal_set__id(::StringW value);

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  /// @brief Method get_id, addr 0xe28bac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_id();

  /// @brief Method get_Color, addr 0xe28bb4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_Color();

  static inline ::BeatSaber::BeatAvatarSDK::SkinColorSO* New_ctor();

  /// @brief Method .ctor, addr 0xe28bc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SkinColorSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SkinColorSO(SkinColorSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SkinColorSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SkinColorSO(SkinColorSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SkinColorSO();

public:
  /// @brief Field _id, offset: 0x18, size: 0x8, def value: None
  ::StringW ____id;

  /// @brief Field _color, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarSDK::SkinColorSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::SkinColorSO, ____id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarSDK::SkinColorSO, ____color) == 0x20, "Offset mismatch!");

} // namespace BeatSaber::BeatAvatarSDK
NEED_NO_BOX(::BeatSaber::BeatAvatarSDK::SkinColorSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarSDK::SkinColorSO*, "BeatSaber.BeatAvatarSDK", "SkinColorSO");
