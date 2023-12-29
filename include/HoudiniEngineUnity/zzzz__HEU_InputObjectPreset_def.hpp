#pragma once
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
// Type: HoudiniEngineUnity::HEU_InputObjectPreset
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(10176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9536))
// CS Name: ::HoudiniEngineUnity::HEU_InputObjectPreset*
class CORDL_TYPE HEU_InputObjectPreset : public ::System::Object {
public:
  // Declarations
  /// @brief Field _gameObjectName, offset 0x10, size 0x8
  __declspec(property(get = __get__gameObjectName, put = __set__gameObjectName))::StringW _gameObjectName;

  /// @brief Field _isSceneObject, offset 0x18, size 0x1
  __declspec(property(get = __get__isSceneObject, put = __set__isSceneObject)) bool _isSceneObject;

  /// @brief Field _useTransformOffset, offset 0x19, size 0x1
  __declspec(property(get = __get__useTransformOffset, put = __set__useTransformOffset)) bool _useTransformOffset;

  /// @brief Field _translateOffset, offset 0x1c, size 0xc
  __declspec(property(get = __get__translateOffset, put = __set__translateOffset))::UnityEngine::Vector3 _translateOffset;

  /// @brief Field _rotateOffset, offset 0x28, size 0xc
  __declspec(property(get = __get__rotateOffset, put = __set__rotateOffset))::UnityEngine::Vector3 _rotateOffset;

  /// @brief Field _scaleOffset, offset 0x34, size 0xc
  __declspec(property(get = __get__scaleOffset, put = __set__scaleOffset))::UnityEngine::Vector3 _scaleOffset;

  constexpr ::StringW& __get__gameObjectName();

  constexpr ::StringW const& __get__gameObjectName() const;

  constexpr void __set__gameObjectName(::StringW value);

  constexpr bool& __get__isSceneObject();

  constexpr bool const& __get__isSceneObject() const;

  constexpr void __set__isSceneObject(bool value);

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

  static inline ::HoudiniEngineUnity::HEU_InputObjectPreset* New_ctor();

  /// @brief Method .ctor addr 0x1ff6e1c size 0xa8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputObjectPreset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputObjectPreset(HEU_InputObjectPreset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputObjectPreset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputObjectPreset(HEU_InputObjectPreset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputObjectPreset();

public:
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
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputObjectPreset, 0x40>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectPreset, ____gameObjectName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectPreset, ____isSceneObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectPreset, ____useTransformOffset) == 0x19, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectPreset, ____translateOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectPreset, ____rotateOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InputObjectPreset, ____scaleOffset) == 0x34, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputObjectPreset);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputObjectPreset*, "HoudiniEngineUnity", "HEU_InputObjectPreset");
