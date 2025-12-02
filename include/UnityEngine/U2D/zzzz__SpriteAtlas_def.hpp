#pragma once
// IWYU pragma private; include "UnityEngine/U2D/SpriteAtlas.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteAtlas)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::U2D {
class SpriteAtlas;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::U2D::SpriteAtlas);
// Dependencies UnityEngine.Object
namespace UnityEngine::U2D {
// Is value type: false
// CS Name: UnityEngine.U2D.SpriteAtlas
class CORDL_TYPE SpriteAtlas : public ::UnityEngine::Object {
public:
  // Declarations
  __declspec(property(get = get_isVariant)) bool isVariant;

  __declspec(property(get = get_spriteCount)) int32_t spriteCount;

  __declspec(property(get = get_tag)) ::StringW tag;

  /// @brief Method CanBindTo, addr 0x68fe094, size 0xe4, virtual false, abstract: false, final false
  inline bool CanBindTo(::UnityEngine::Sprite* sprite);

  /// @brief Method CanBindTo_Injected, addr 0x68fe178, size 0x44, virtual false, abstract: false, final false
  static inline bool CanBindTo_Injected(::System::IntPtr _unity_self, ::System::IntPtr sprite);

  /// @brief Method GetSprite, addr 0x68fe1bc, size 0x298, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> GetSprite(::StringW name);

  /// @brief Method GetSprite_Injected, addr 0x68fe454, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetSprite_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method GetSprites, addr 0x68fe498, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetSprites(::ArrayW<::UnityEngine::Sprite*, ::Array<::UnityEngine::Sprite*>*> sprites);

  /// @brief Method GetSprites, addr 0x68fe52c, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetSprites(::ArrayW<::UnityEngine::Sprite*, ::Array<::UnityEngine::Sprite*>*> sprites, ::StringW name);

  /// @brief Method GetSpritesScripting, addr 0x68fe49c, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetSpritesScripting(::ArrayW<::UnityEngine::Sprite*, ::Array<::UnityEngine::Sprite*>*> sprites);

  /// @brief Method GetSpritesScripting_Injected, addr 0x68fe6ac, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetSpritesScripting_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Sprite*, ::Array<::UnityEngine::Sprite*>*> sprites);

  /// @brief Method GetSpritesWithNameScripting, addr 0x68fe530, size 0x17c, virtual false, abstract: false, final false
  inline int32_t GetSpritesWithNameScripting(::ArrayW<::UnityEngine::Sprite*, ::Array<::UnityEngine::Sprite*>*> sprites, ::StringW name);

  /// @brief Method GetSpritesWithNameScripting_Injected, addr 0x68fe6f0, size 0x54, virtual false, abstract: false, final false
  static inline int32_t GetSpritesWithNameScripting_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Sprite*, ::Array<::UnityEngine::Sprite*>*> sprites,
                                                             ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  static inline ::UnityEngine::U2D::SpriteAtlas* New_ctor();

  /// @brief Method .ctor, addr 0x68fe744, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isVariant, addr 0x68fdda4, size 0x80, virtual false, abstract: false, final false
  inline bool get_isVariant();

  /// @brief Method get_isVariant_Injected, addr 0x68fde24, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isVariant_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_spriteCount, addr 0x68fdfd8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_spriteCount();

  /// @brief Method get_spriteCount_Injected, addr 0x68fe058, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_spriteCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_tag, addr 0x68fde60, size 0x134, virtual false, abstract: false, final false
  inline ::StringW get_tag();

  /// @brief Method get_tag_Injected, addr 0x68fdf94, size 0x44, virtual false, abstract: false, final false
  static inline void get_tag_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteAtlas();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpriteAtlas", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpriteAtlas(SpriteAtlas&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpriteAtlas", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpriteAtlas(SpriteAtlas const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10906 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::U2D::SpriteAtlas, 0x18>, "Size mismatch!");

} // namespace UnityEngine::U2D
NEED_NO_BOX(::UnityEngine::U2D::SpriteAtlas);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::U2D::SpriteAtlas*, "UnityEngine.U2D", "SpriteAtlas");
