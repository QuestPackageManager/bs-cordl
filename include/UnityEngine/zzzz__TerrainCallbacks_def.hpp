#pragma once
// IWYU pragma private; include "UnityEngine/TerrainCallbacks.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TerrainCallbacks)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
class TerrainCallbacks_HeightmapChangedCallback;
}
namespace UnityEngine {
class TerrainCallbacks_TextureChangedCallback;
}
namespace UnityEngine {
class TerrainData;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace UnityEngine {
class TerrainCallbacks;
}
namespace UnityEngine {
class TerrainCallbacks_HeightmapChangedCallback;
}
namespace UnityEngine {
class TerrainCallbacks_TextureChangedCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TerrainCallbacks);
MARK_REF_PTR_T(::UnityEngine::TerrainCallbacks_HeightmapChangedCallback);
MARK_REF_PTR_T(::UnityEngine::TerrainCallbacks_TextureChangedCallback);
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TerrainCallbacks/HeightmapChangedCallback
class CORDL_TYPE TerrainCallbacks_HeightmapChangedCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x491fcf0, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Terrain* terrain, ::UnityEngine::RectInt heightRegion, bool synched);

  static inline ::UnityEngine::TerrainCallbacks_HeightmapChangedCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x491fc50, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainCallbacks_HeightmapChangedCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TerrainCallbacks_HeightmapChangedCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerrainCallbacks_HeightmapChangedCallback(TerrainCallbacks_HeightmapChangedCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerrainCallbacks_HeightmapChangedCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerrainCallbacks_HeightmapChangedCallback(TerrainCallbacks_HeightmapChangedCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18123 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainCallbacks_HeightmapChangedCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TerrainCallbacks/TextureChangedCallback
class CORDL_TYPE TerrainCallbacks_TextureChangedCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x491fda8, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Terrain* terrain, ::StringW textureName, ::UnityEngine::RectInt texelRegion, bool synched);

  static inline ::UnityEngine::TerrainCallbacks_TextureChangedCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x491fd08, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainCallbacks_TextureChangedCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TerrainCallbacks_TextureChangedCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerrainCallbacks_TextureChangedCallback(TerrainCallbacks_TextureChangedCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerrainCallbacks_TextureChangedCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerrainCallbacks_TextureChangedCallback(TerrainCallbacks_TextureChangedCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18124 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainCallbacks_TextureChangedCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TerrainCallbacks
class CORDL_TYPE TerrainCallbacks : public ::System::Object {
public:
  // Declarations
  using HeightmapChangedCallback = ::UnityEngine::TerrainCallbacks_HeightmapChangedCallback;

  using TextureChangedCallback = ::UnityEngine::TerrainCallbacks_TextureChangedCallback;

  /// @brief Field heightmapChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_heightmapChanged, put = setStaticF_heightmapChanged)) ::UnityEngine::TerrainCallbacks_HeightmapChangedCallback* heightmapChanged;

  /// @brief Field textureChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_textureChanged, put = setStaticF_textureChanged)) ::UnityEngine::TerrainCallbacks_TextureChangedCallback* textureChanged;

  /// @brief Method InvokeHeightmapChangedCallback, addr 0x491f9ec, size 0x10c, virtual false, abstract: false, final false
  static inline void InvokeHeightmapChangedCallback(::UnityEngine::TerrainData* terrainData, ::UnityEngine::RectInt heightRegion, bool synched);

  /// @brief Method InvokeTextureChangedCallback, addr 0x491fb34, size 0x11c, virtual false, abstract: false, final false
  static inline void InvokeTextureChangedCallback(::UnityEngine::TerrainData* terrainData, ::StringW textureName, ::UnityEngine::RectInt texelRegion, bool synched);

  static inline ::UnityEngine::TerrainCallbacks_HeightmapChangedCallback* getStaticF_heightmapChanged();

  static inline ::UnityEngine::TerrainCallbacks_TextureChangedCallback* getStaticF_textureChanged();

  static inline void setStaticF_heightmapChanged(::UnityEngine::TerrainCallbacks_HeightmapChangedCallback* value);

  static inline void setStaticF_textureChanged(::UnityEngine::TerrainCallbacks_TextureChangedCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainCallbacks();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TerrainCallbacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerrainCallbacks(TerrainCallbacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerrainCallbacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerrainCallbacks(TerrainCallbacks const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18125 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainCallbacks, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::TerrainCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainCallbacks*, "UnityEngine", "TerrainCallbacks");
NEED_NO_BOX(::UnityEngine::TerrainCallbacks_HeightmapChangedCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainCallbacks_HeightmapChangedCallback*, "UnityEngine", "TerrainCallbacks/HeightmapChangedCallback");
NEED_NO_BOX(::UnityEngine::TerrainCallbacks_TextureChangedCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainCallbacks_TextureChangedCallback*, "UnityEngine", "TerrainCallbacks/TextureChangedCallback");
