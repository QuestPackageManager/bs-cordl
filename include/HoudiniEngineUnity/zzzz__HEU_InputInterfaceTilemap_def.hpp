#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_InputData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterface_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_InputInterfaceTilemap)
namespace HoudiniEngineUnity {
class HEU_InputData;
}
namespace HoudiniEngineUnity {
class HEU_InputInterfaceTilemapSettings;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class __HEU_InputInterfaceTilemap__HEU_InputDataTilemap;
}
namespace UnityEngine::Tilemaps {
class Tilemap;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputInterfaceTilemap;
}
namespace HoudiniEngineUnity {
class __HEU_InputInterfaceTilemap__HEU_InputDataTilemap;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputInterfaceTilemap);
MARK_REF_PTR_T(::HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap);
// Type: ::HEU_InputDataTilemap
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9838))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9846))
// CS Name: ::HEU_InputInterfaceTilemap::HEU_InputDataTilemap*
class CORDL_TYPE __HEU_InputInterfaceTilemap__HEU_InputDataTilemap : public ::HoudiniEngineUnity::HEU_InputData {
public:
  // Declarations
  /// @brief Field _tilemap, offset 0x18, size 0x8
  __declspec(property(get = __get__tilemap, put = __set__tilemap))::UnityEngine::Tilemaps::Tilemap* _tilemap;

  /// @brief Field _transform, offset 0x20, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  constexpr ::UnityEngine::Tilemaps::Tilemap*& __get__tilemap();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Tilemaps::Tilemap*> const& __get__tilemap() const;

  constexpr void __set__tilemap(::UnityEngine::Tilemaps::Tilemap* value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  static inline ::HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap* New_ctor();

  /// @brief Method .ctor, addr 0x21cde18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_InputInterfaceTilemap__HEU_InputDataTilemap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HEU_InputInterfaceTilemap__HEU_InputDataTilemap(__HEU_InputInterfaceTilemap__HEU_InputDataTilemap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HEU_InputInterfaceTilemap__HEU_InputDataTilemap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HEU_InputInterfaceTilemap__HEU_InputDataTilemap(__HEU_InputInterfaceTilemap__HEU_InputDataTilemap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_InputInterfaceTilemap__HEU_InputDataTilemap();

public:
  /// @brief Field _tilemap, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Tilemaps::Tilemap* ____tilemap;

  /// @brief Field _transform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap, 0x28>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap, ____tilemap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap, ____transform) == 0x20, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_InputInterfaceTilemap
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9839))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9847))
// CS Name: ::HoudiniEngineUnity::HEU_InputInterfaceTilemap*
class CORDL_TYPE HEU_InputInterfaceTilemap : public ::HoudiniEngineUnity::HEU_InputInterface {
public:
  // Declarations
  using HEU_InputDataTilemap = ::HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap;

  /// @brief Field settings, offset 0x18, size 0x8
  __declspec(property(get = __get_settings, put = __set_settings))::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* settings;

  constexpr ::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*& __get_settings();

  constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings*> const& __get_settings() const;

  constexpr void __set_settings(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* value);

  static inline ::HoudiniEngineUnity::HEU_InputInterfaceTilemap* New_ctor();

  /// @brief Method .ctor, addr 0x21cb584, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Initialize, addr 0x21cb590, size 0x70, virtual false, abstract: false, final false
  inline void Initialize(::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* settings);

  /// @brief Method CreateInputNodeWithDataUpload, addr 0x21cb600, size 0x198, virtual true, abstract: false, final false
  inline bool CreateInputNodeWithDataUpload(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t connectNodeID, ::UnityEngine::GameObject* inputObject, ByRef<int32_t> inputNodeID);

  /// @brief Method IsThisInputObjectSupported, addr 0x21cd26c, size 0xc4, virtual true, abstract: false, final false
  inline bool IsThisInputObjectSupported(::UnityEngine::GameObject* inputObject);

  /// @brief Method UploadData, addr 0x21cb870, size 0x19fc, virtual false, abstract: false, final false
  inline bool UploadData(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t inputNodeID, ::HoudiniEngineUnity::HEU_InputData* inputData);

  /// @brief Method GenerateTilemapDataFromGameObject, addr 0x21cb798, size 0xd8, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap* GenerateTilemapDataFromGameObject(::UnityEngine::GameObject* inputObject);

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceTilemap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputInterfaceTilemap(HEU_InputInterfaceTilemap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceTilemap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputInterfaceTilemap(HEU_InputInterfaceTilemap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputInterfaceTilemap();

public:
  /// @brief Field settings, offset: 0x18, size: 0x8, def value: None
  ::HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings* ___settings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputInterfaceTilemap, 0x20>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputInterfaceTilemap, ___settings) == 0x18, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputInterfaceTilemap);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputInterfaceTilemap*, "HoudiniEngineUnity", "HEU_InputInterfaceTilemap");
NEED_NO_BOX(::HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_InputInterfaceTilemap__HEU_InputDataTilemap*, "HoudiniEngineUnity", "HEU_InputInterfaceTilemap/HEU_InputDataTilemap");
