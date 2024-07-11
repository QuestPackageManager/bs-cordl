#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_InstancedInput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(HEU_InstancedInput)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InstancedInput;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InstancedInput);
// Type: HoudiniEngineUnity::HEU_InstancedInput
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_InstancedInput*
class CORDL_TYPE HEU_InstancedInput : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instancedGameObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__instancedGameObject, put = __cordl_internal_set__instancedGameObject))::UnityW<::UnityEngine::GameObject> _instancedGameObject;

  /// @brief Field _rotationOffset, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get__rotationOffset, put = __cordl_internal_set__rotationOffset))::UnityEngine::Vector3 _rotationOffset;

  /// @brief Field _scaleOffset, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get__scaleOffset, put = __cordl_internal_set__scaleOffset))::UnityEngine::Vector3 _scaleOffset;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstancedInput*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstancedInput*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x258298c, size 0x1a0, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_InstancedInput* other);

  static inline ::HoudiniEngineUnity::HEU_InstancedInput* New_ctor();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__instancedGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__instancedGameObject();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rotationOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__rotationOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__scaleOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__scaleOffset();

  constexpr void __cordl_internal_set__instancedGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__rotationOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__scaleOffset(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x2582b2c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstancedInput*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InstancedInput*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_InstancedInput__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InstancedInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_InstancedInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InstancedInput(HEU_InstancedInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InstancedInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InstancedInput(HEU_InstancedInput const&) = delete;

  /// @brief Field _instancedGameObject, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____instancedGameObject;

  /// @brief Field _rotationOffset, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____rotationOffset;

  /// @brief Field _scaleOffset, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____scaleOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InstancedInput, 0x30>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InstancedInput, ____instancedGameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InstancedInput, ____rotationOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InstancedInput, ____scaleOffset) == 0x24, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InstancedInput);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InstancedInput*, "HoudiniEngineUnity", "HEU_InstancedInput");
