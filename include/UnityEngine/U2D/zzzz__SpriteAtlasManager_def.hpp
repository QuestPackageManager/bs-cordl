#pragma once
// IWYU pragma private; include "UnityEngine\U2D\SpriteAtlasManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SpriteAtlasManager)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::U2D {
class SpriteAtlas;
}
// Forward declare root types
namespace UnityEngine::U2D {
class SpriteAtlasManager;
}
// Write type traits
MARK_REF_T(::UnityEngine::U2D::SpriteAtlasManager*);
DEFINE_IL2CPP_CLASS(::UnityEngine::U2D::SpriteAtlasManager*, "UnityEngine.U2D", "SpriteAtlasManager");
// Dependencies System.Object
namespace UnityEngine::U2D {
// Is value type: false
// CS Name: UnityEngine.U2D.SpriteAtlasManager
class CORDL_TYPE SpriteAtlasManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field atlasRegistered, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_atlasRegistered, put = setStaticF_atlasRegistered)) ::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>* atlasRegistered;

  /// @brief Field atlasRequested, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_atlasRequested, put = setStaticF_atlasRequested)) ::System::Action_2<::StringW, ::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>* atlasRequested;

  /// @brief Method PostRegisteredAtlas, addr 0x6b31fe0, size 0x70, virtual false, abstract: false, final false
  static inline void PostRegisteredAtlas(::UnityEngine::U2D::SpriteAtlas* spriteAtlas);

  /// @brief Method Register, addr 0x6b32050, size 0x80, virtual false, abstract: false, final false
  static inline void Register(::UnityEngine::U2D::SpriteAtlas* spriteAtlas);

  /// @brief Method Register_Injected, addr 0x6b320d0, size 0x3c, virtual false, abstract: false, final false
  static inline void Register_Injected(::System::IntPtr spriteAtlas);

  /// @brief Method RequestAtlas, addr 0x6b31d58, size 0xc0, virtual false, abstract: false, final false
  static inline bool RequestAtlas(::StringW tag);

  /// @brief Method add_atlasRegistered, addr 0x6b31e18, size 0xe4, virtual false, abstract: false, final false
  static inline void add_atlasRegistered(::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>* value);

  static inline ::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>* getStaticF_atlasRegistered();

  static inline ::System::Action_2<::StringW, ::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>* getStaticF_atlasRequested();

  /// @brief Method remove_atlasRegistered, addr 0x6b31efc, size 0xe4, virtual false, abstract: false, final false
  static inline void remove_atlasRegistered(::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>* value);

  static inline void setStaticF_atlasRegistered(::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>* value);

  static inline void setStaticF_atlasRequested(::System::Action_2<::StringW, ::System::Action_1<::UnityW<::UnityEngine::U2D::SpriteAtlas>>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteAtlasManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpriteAtlasManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpriteAtlasManager(SpriteAtlasManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpriteAtlasManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpriteAtlasManager(SpriteAtlasManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10932 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::U2D::SpriteAtlasManager) == 0x10, "Size mismatch!");

} // namespace UnityEngine::U2D
