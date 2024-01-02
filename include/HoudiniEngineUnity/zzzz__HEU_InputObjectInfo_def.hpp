#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(HEU_InputObjectInfo)
namespace UnityEngine {
class Terrain;
}
namespace GlobalNamespace {
class HEU_BoundingVolume;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Tilemaps {
class Tilemap;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputObjectInfo;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputObjectInfo);
// Type: HoudiniEngineUnity::HEU_InputObjectInfo
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10245)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9646))
// CS Name: ::HoudiniEngineUnity::HEU_InputObjectInfo*
class CORDL_TYPE HEU_InputObjectInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _gameObject, offset 0x10, size 0x8
  __declspec(property(get = __get__gameObject, put = __set__gameObject))::UnityEngine::GameObject* _gameObject;

  /// @brief Field _terrainReference, offset 0x18, size 0x8
  __declspec(property(get = __get__terrainReference, put = __set__terrainReference))::UnityEngine::Terrain* _terrainReference;

  /// @brief Field _boundingVolumeReference, offset 0x20, size 0x8
  __declspec(property(get = __get__boundingVolumeReference, put = __set__boundingVolumeReference))::GlobalNamespace::HEU_BoundingVolume* _boundingVolumeReference;

  /// @brief Field _tilemapReference, offset 0x28, size 0x8
  __declspec(property(get = __get__tilemapReference, put = __set__tilemapReference))::UnityEngine::Tilemaps::Tilemap* _tilemapReference;

  /// @brief Field _syncdTransform, offset 0x30, size 0x40
  __declspec(property(get = __get__syncdTransform, put = __set__syncdTransform))::UnityEngine::Matrix4x4 _syncdTransform;

  /// @brief Field _useTransformOffset, offset 0x70, size 0x1
  __declspec(property(get = __get__useTransformOffset, put = __set__useTransformOffset)) bool _useTransformOffset;

  /// @brief Field _translateOffset, offset 0x74, size 0xc
  __declspec(property(get = __get__translateOffset, put = __set__translateOffset))::UnityEngine::Vector3 _translateOffset;

  /// @brief Field _rotateOffset, offset 0x80, size 0xc
  __declspec(property(get = __get__rotateOffset, put = __set__rotateOffset))::UnityEngine::Vector3 _rotateOffset;

  /// @brief Field _scaleOffset, offset 0x8c, size 0xc
  __declspec(property(get = __get__scaleOffset, put = __set__scaleOffset))::UnityEngine::Vector3 _scaleOffset;

  /// @brief Field _inputInterfaceType, offset 0x98, size 0x8
  __declspec(property(get = __get__inputInterfaceType, put = __set__inputInterfaceType))::System::Type* _inputInterfaceType;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*() noexcept;

  constexpr ::UnityEngine::GameObject*& __get__gameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__gameObject() const;

  constexpr void __set__gameObject(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::Terrain*& __get__terrainReference();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Terrain*> const& __get__terrainReference() const;

  constexpr void __set__terrainReference(::UnityEngine::Terrain* value);

  constexpr ::GlobalNamespace::HEU_BoundingVolume*& __get__boundingVolumeReference();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HEU_BoundingVolume*> const& __get__boundingVolumeReference() const;

  constexpr void __set__boundingVolumeReference(::GlobalNamespace::HEU_BoundingVolume* value);

  constexpr ::UnityEngine::Tilemaps::Tilemap*& __get__tilemapReference();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Tilemaps::Tilemap*> const& __get__tilemapReference() const;

  constexpr void __set__tilemapReference(::UnityEngine::Tilemaps::Tilemap* value);

  constexpr ::UnityEngine::Matrix4x4& __get__syncdTransform();

  constexpr ::UnityEngine::Matrix4x4 const& __get__syncdTransform() const;

  constexpr void __set__syncdTransform(::UnityEngine::Matrix4x4 value);

  constexpr bool& __get__useTransformOffset();

  constexpr bool const& __get__useTransformOffset() const;

  constexpr void __set__useTransformOffset(bool value);

  constexpr ::UnityEngine::Vector3& __get__translateOffset();

  constexpr ::UnityEngine::Vector3 const& __get__translateOffset() const;

  constexpr void __set__translateOffset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__rotateOffset();

  constexpr ::UnityEngine::Vector3 const& __get__rotateOffset() const;

  constexpr void __set__rotateOffset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__scaleOffset();

  constexpr ::UnityEngine::Vector3 const& __get__scaleOffset() const;

  constexpr void __set__scaleOffset(::UnityEngine::Vector3 value);

  constexpr ::System::Type*& __get__inputInterfaceType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__inputInterfaceType() const;

  constexpr void __set__inputInterfaceType(::System::Type* value);

  /// @brief Method CopyTo, addr 0x216fcc0, size 0x74, virtual false, abstract: false, final false
  inline void CopyTo(::HoudiniEngineUnity::HEU_InputObjectInfo* destObject);

  /// @brief Method SetReferencesFromGameObject, addr 0x216ffa8, size 0xec, virtual false, abstract: false, final false
  inline void SetReferencesFromGameObject();

  /// @brief Method IsEquivalentTo, addr 0x2171fe0, size 0x28c, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_InputObjectInfo* other);

  static inline ::HoudiniEngineUnity::HEU_InputObjectInfo* New_ctor();

  /// @brief Method .ctor, addr 0x216fbd8, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputObjectInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputObjectInfo(HEU_InputObjectInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputObjectInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputObjectInfo(HEU_InputObjectInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputObjectInfo();

public:
  /// @brief Field _gameObject, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____gameObject;

  /// @brief Field _terrainReference, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Terrain* ____terrainReference;

  /// @brief Field _boundingVolumeReference, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::HEU_BoundingVolume* ____boundingVolumeReference;

  /// @brief Field _tilemapReference, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Tilemaps::Tilemap* ____tilemapReference;

  /// @brief Field _syncdTransform, offset: 0x30, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ____syncdTransform;

  /// @brief Field _useTransformOffset, offset: 0x70, size: 0x1, def value: None
  bool ____useTransformOffset;

  /// @brief Field _translateOffset, offset: 0x74, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____translateOffset;

  /// @brief Field _rotateOffset, offset: 0x80, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____rotateOffset;

  /// @brief Field _scaleOffset, offset: 0x8c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____scaleOffset;

  /// @brief Field _inputInterfaceType, offset: 0x98, size: 0x8, def value: None
  ::System::Type* ____inputInterfaceType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputObjectInfo, 0xa0>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectInfo, ____gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectInfo, ____terrainReference) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectInfo, ____boundingVolumeReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectInfo, ____tilemapReference) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectInfo, ____syncdTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectInfo, ____useTransformOffset) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectInfo, ____translateOffset) == 0x74, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectInfo, ____rotateOffset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectInfo, ____scaleOffset) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectInfo, ____inputInterfaceType) == 0x98, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputObjectInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputObjectInfo*, "HoudiniEngineUnity", "HEU_InputObjectInfo");
