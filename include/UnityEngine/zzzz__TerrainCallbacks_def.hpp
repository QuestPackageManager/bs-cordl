#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainCallbacks)
namespace UnityEngine {
class __TerrainCallbacks__HeightmapChangedCallback;
}
namespace UnityEngine {
class __TerrainCallbacks__TextureChangedCallback;
}
namespace UnityEngine {
class TerrainData;
}
namespace UnityEngine {
struct RectInt;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace UnityEngine {
class TerrainCallbacks;
}
namespace UnityEngine {
class __TerrainCallbacks__HeightmapChangedCallback;
}
namespace UnityEngine {
class __TerrainCallbacks__TextureChangedCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TerrainCallbacks);
MARK_REF_PTR_T(::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback);
MARK_REF_PTR_T(::UnityEngine::__TerrainCallbacks__TextureChangedCallback);
// Type: ::HeightmapChangedCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15473))
// CS Name: ::TerrainCallbacks::HeightmapChangedCallback*
class CORDL_TYPE __TerrainCallbacks__HeightmapChangedCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2d1e69c size 0xd8 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2d1e774 size 0x18 virtual true final false
  inline void Invoke(::UnityEngine::Terrain* terrain, ::UnityEngine::RectInt heightRegion, bool synched);

  // Ctor Parameters [CppParam { name: "", ty: "__TerrainCallbacks__HeightmapChangedCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TerrainCallbacks__HeightmapChangedCallback(__TerrainCallbacks__HeightmapChangedCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TerrainCallbacks__HeightmapChangedCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TerrainCallbacks__HeightmapChangedCallback(__TerrainCallbacks__HeightmapChangedCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TerrainCallbacks__HeightmapChangedCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: ::TextureChangedCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15474))
// CS Name: ::TerrainCallbacks::TextureChangedCallback*
class CORDL_TYPE __TerrainCallbacks__TextureChangedCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::__TerrainCallbacks__TextureChangedCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2d1e78c size 0xd8 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x2d1e864 size 0x18 virtual true final false
  inline void Invoke(::UnityEngine::Terrain* terrain, ::StringW textureName, ::UnityEngine::RectInt texelRegion, bool synched);

  // Ctor Parameters [CppParam { name: "", ty: "__TerrainCallbacks__TextureChangedCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TerrainCallbacks__TextureChangedCallback(__TerrainCallbacks__TextureChangedCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TerrainCallbacks__TextureChangedCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TerrainCallbacks__TextureChangedCallback(__TerrainCallbacks__TextureChangedCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TerrainCallbacks__TextureChangedCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__TerrainCallbacks__TextureChangedCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::TerrainCallbacks
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15475))
// CS Name: ::UnityEngine::TerrainCallbacks*
class CORDL_TYPE TerrainCallbacks : public ::System::Object {
public:
  // Declarations
  using TextureChangedCallback = ::UnityEngine::__TerrainCallbacks__TextureChangedCallback;

  using HeightmapChangedCallback = ::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback;

  /// @brief Field heightmapChanged, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_heightmapChanged, put = setStaticF_heightmapChanged))::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback* heightmapChanged;

  /// @brief Field textureChanged, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_textureChanged, put = setStaticF_textureChanged))::UnityEngine::__TerrainCallbacks__TextureChangedCallback* textureChanged;

  static inline void setStaticF_heightmapChanged(::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback* value);

  static inline ::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback* getStaticF_heightmapChanged();

  static inline void setStaticF_textureChanged(::UnityEngine::__TerrainCallbacks__TextureChangedCallback* value);

  static inline ::UnityEngine::__TerrainCallbacks__TextureChangedCallback* getStaticF_textureChanged();

  /// @brief Method InvokeHeightmapChangedCallback addr 0x2d1e474 size 0x10c virtual false final false
  static inline void InvokeHeightmapChangedCallback(::UnityEngine::TerrainData* terrainData, ::UnityEngine::RectInt heightRegion, bool synched);

  /// @brief Method InvokeTextureChangedCallback addr 0x2d1e580 size 0x11c virtual false final false
  static inline void InvokeTextureChangedCallback(::UnityEngine::TerrainData* terrainData, ::StringW textureName, ::UnityEngine::RectInt texelRegion, bool synched);

  // Ctor Parameters [CppParam { name: "", ty: "TerrainCallbacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TerrainCallbacks(TerrainCallbacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TerrainCallbacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TerrainCallbacks(TerrainCallbacks const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TerrainCallbacks();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainCallbacks, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::TerrainCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainCallbacks*, "UnityEngine", "TerrainCallbacks");
NEED_NO_BOX(::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback*, "UnityEngine", "TerrainCallbacks/HeightmapChangedCallback");
NEED_NO_BOX(::UnityEngine::__TerrainCallbacks__TextureChangedCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__TerrainCallbacks__TextureChangedCallback*, "UnityEngine", "TerrainCallbacks/TextureChangedCallback");
