#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_InputObjectPreset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_InputObjectPreset)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputObjectPreset;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputObjectPreset);
// Dependencies System.Object, UnityEngine.Vector3
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_InputObjectPreset
class CORDL_TYPE HEU_InputObjectPreset : public ::System::Object {
public:
  // Declarations
  /// @brief Field _gameObjectName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__gameObjectName, put = __cordl_internal_set__gameObjectName)) ::StringW _gameObjectName;

  /// @brief Field _isSceneObject, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isSceneObject, put = __cordl_internal_set__isSceneObject)) bool _isSceneObject;

  /// @brief Field _rotateOffset, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get__rotateOffset, put = __cordl_internal_set__rotateOffset)) ::UnityEngine::Vector3 _rotateOffset;

  /// @brief Field _scaleOffset, offset 0x34, size 0xc
  __declspec(property(get = __cordl_internal_get__scaleOffset, put = __cordl_internal_set__scaleOffset)) ::UnityEngine::Vector3 _scaleOffset;

  /// @brief Field _translateOffset, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get__translateOffset, put = __cordl_internal_set__translateOffset)) ::UnityEngine::Vector3 _translateOffset;

  /// @brief Field _useTransformOffset, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__useTransformOffset, put = __cordl_internal_set__useTransformOffset)) bool _useTransformOffset;

  static inline ::HoudiniEngineUnity::HEU_InputObjectPreset* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__gameObjectName() const;

  constexpr ::StringW& __cordl_internal_get__gameObjectName();

  constexpr bool const& __cordl_internal_get__isSceneObject() const;

  constexpr bool& __cordl_internal_get__isSceneObject();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rotateOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__rotateOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__scaleOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__scaleOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__translateOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__translateOffset();

  constexpr bool const& __cordl_internal_get__useTransformOffset() const;

  constexpr bool& __cordl_internal_get__useTransformOffset();

  constexpr void __cordl_internal_set__gameObjectName(::StringW value);

  constexpr void __cordl_internal_set__isSceneObject(bool value);

  constexpr void __cordl_internal_set__rotateOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__scaleOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__translateOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__useTransformOffset(bool value);

  /// @brief Method .ctor, addr 0x3a06030, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputObjectPreset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputObjectPreset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputObjectPreset(HEU_InputObjectPreset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputObjectPreset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputObjectPreset(HEU_InputObjectPreset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11596 };

  /// @brief Field _gameObjectName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____gameObjectName;

  /// @brief Field _isSceneObject, offset: 0x18, size: 0x1, def value: None
  bool ____isSceneObject;

  /// @brief Field _useTransformOffset, offset: 0x19, size: 0x1, def value: None
  bool ____useTransformOffset;

  /// @brief Field _translateOffset, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____translateOffset;

  /// @brief Field _rotateOffset, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____rotateOffset;

  /// @brief Field _scaleOffset, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____scaleOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectPreset, ____gameObjectName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectPreset, ____isSceneObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectPreset, ____useTransformOffset) == 0x19, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectPreset, ____translateOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectPreset, ____rotateOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectPreset, ____scaleOffset) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputObjectPreset, 0x40>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputObjectPreset);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputObjectPreset*, "HoudiniEngineUnity", "HEU_InputObjectPreset");
